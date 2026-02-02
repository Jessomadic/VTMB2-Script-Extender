<#
.SYNOPSIS
    VTMB2SE Header Analysis Tool
    
.DESCRIPTION
    Parses the exported UE4SS headers to catalog all game classes,
    their properties, and methods. Useful for validating API assumptions.
    
.PARAMETER HeaderPath
    Path to the headers folder (default: sdk/headers or existing VTMB2-headers)
    
.PARAMETER OutputPath
    Path for output report (default: sdk/HEADER_ANALYSIS.md)
#>

param(
    [string]$HeaderPath = "",
    [string]$OutputPath = "sdk\HEADER_ANALYSIS.md"
)

# Find headers
$possiblePaths = @(
    "sdk\headers",
    "F:\Mod Tools\VTM2 Mod\VTMB2 Mod Tools\UE4SS_CPP\VTMB2-headers"
)

if (-not $HeaderPath) {
    foreach ($path in $possiblePaths) {
        if (Test-Path $path) {
            $HeaderPath = $path
            break
        }
    }
}

if (-not (Test-Path $HeaderPath)) {
    Write-Error "Headers not found at: $HeaderPath"
    Write-Host "Please specify -HeaderPath or copy headers to sdk\headers\"
    exit 1
}

Write-Host "========================================" -ForegroundColor Cyan
Write-Host "  VTMB2SE Header Analysis Tool" -ForegroundColor Cyan
Write-Host "========================================" -ForegroundColor Cyan
Write-Host "Header Path: $HeaderPath"
Write-Host ""

# Get all header files
$headers = Get-ChildItem -Path $HeaderPath -Filter "*.hpp" -Recurse
Write-Host "Found $($headers.Count) header files"

# Categories for organization
$categories = @{
    "Player" = @()
    "Character" = @()
    "Movement" = @()
    "Ability" = @()
    "Dialogue" = @()
    "Quest" = @()
    "Combat" = @()
    "UI" = @()
    "Game" = @()
    "AI" = @()
    "Other" = @()
}

# Key class patterns to look for
$keyPatterns = @{
    "Player" = @("Player", "Wrestler.*Player")
    "Character" = @("Character", "Wrestler.*Character", "Vampire")
    "Movement" = @("Movement", "CharacterMovement")
    "Ability" = @("Ability", "GA_", "AttributeSet", "GameplayEffect")
    "Dialogue" = @("Dialogue", "Hera.*Dialogue", "Conversation")
    "Quest" = @("Quest", "Objective", "Mission")
    "Combat" = @("Combat", "Damage", "Attack", "Weapon")
    "UI" = @("HUD", "Widget", "WBP_", "UI_")
    "Game" = @("GameMode", "GameState", "CheatManager")
    "AI" = @("AI", "Enemy", "NPC", "Behavior")
}

# Parse each header
$allClasses = @{}
$importantClasses = @()

foreach ($header in $headers) {
    $content = Get-Content $header.FullName -Raw -ErrorAction SilentlyContinue
    if (-not $content) { continue }
    
    # Extract class name from file
    $className = $header.BaseName
    
    # Skip engine classes we don't care about
    if ($className -match "^(F|U|A|E|S|T)[A-Z]" -and $className -notmatch "Wrestler|Hera|Vampire") {
        # Likely engine class, categorize as Other if it matches patterns
    }
    
    # Categorize
    $category = "Other"
    foreach ($cat in $keyPatterns.Keys) {
        foreach ($pattern in $keyPatterns[$cat]) {
            if ($className -match $pattern) {
                $category = $cat
                break
            }
        }
        if ($category -ne "Other") { break }
    }
    
    # Extract properties (simplified - looks for UPROPERTY patterns)
    $properties = @()
    $propMatches = [regex]::Matches($content, '(?:UPROPERTY.*?\))\s*\n\s*(\w+)\s+(\w+)')
    foreach ($match in $propMatches) {
        $properties += @{
            Type = $match.Groups[1].Value
            Name = $match.Groups[2].Value
        }
    }
    
    # Extract methods (simplified - looks for UFUNCTION patterns)
    $methods = @()
    $methodMatches = [regex]::Matches($content, '(?:UFUNCTION.*?\))\s*\n\s*(?:virtual\s+)?(\w+)\s+(\w+)\s*\(')
    foreach ($match in $methodMatches) {
        $methods += @{
            ReturnType = $match.Groups[1].Value
            Name = $match.Groups[2].Value
        }
    }
    
    $classInfo = @{
        Name = $className
        Category = $category
        Path = $header.FullName
        Size = $header.Length
        PropertyCount = $properties.Count
        MethodCount = $methods.Count
        Properties = $properties | Select-Object -First 20  # Limit for report
        Methods = $methods | Select-Object -First 20
    }
    
    $allClasses[$className] = $classInfo
    $categories[$category] += $classInfo
    
    # Mark important game-specific classes
    if ($className -match "Wrestler|Hera|Vampire|Blood") {
        $importantClasses += $classInfo
    }
}

Write-Host ""
Write-Host "Class Distribution:" -ForegroundColor Yellow
foreach ($cat in $categories.Keys | Sort-Object) {
    Write-Host "  $cat`: $($categories[$cat].Count)"
}

# Generate report
$report = @"
# VTMB2 Header Analysis Report

Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")
Total Headers: $($headers.Count)
Total Classes Analyzed: $($allClasses.Count)

---

## Key VTMB2 Classes

These are the game-specific classes most relevant for modding:

| Class | Category | Properties | Methods | Size |
|-------|----------|------------|---------|------|
"@

foreach ($class in ($importantClasses | Sort-Object Name)) {
    $report += "`n| $($class.Name) | $($class.Category) | $($class.PropertyCount) | $($class.MethodCount) | $([math]::Round($class.Size/1024, 1))KB |"
}

$report += @"


---

## Classes by Category

"@

foreach ($cat in $categories.Keys | Sort-Object) {
    if ($categories[$cat].Count -eq 0) { continue }
    
    $report += "`n### $cat ($($categories[$cat].Count) classes)`n`n"
    
    # Show top classes by size (likely more important)
    $topClasses = $categories[$cat] | Sort-Object Size -Descending | Select-Object -First 15
    
    foreach ($class in $topClasses) {
        $report += "- **$($class.Name)** - $($class.PropertyCount) props, $($class.MethodCount) methods`n"
    }
}

$report += @"

---

## Recommended Classes for VTMB2SE API

Based on analysis, these classes should be prioritized:

### Player System
- `WrestlerPlayerController` - Main player controller
- `WrestlerPlayerCharacter` - Player character class
- `WrestlerCharacterMovementComponent` - Movement handling

### Abilities (GAS)
- `WrestlerAttributeSet` - Player stats (Health, Blood, etc.)
- `WrestlerAbilitySystemComponent` - Ability management
- `GA_*` classes - Individual abilities

### Dialogue (Hera)
- `HeraDialogueComponent` - Dialogue handling
- `HeraConversation` - Conversation data

### Game State
- `WrestlerGameMode` - Game rules
- `WrestlerGameState` - Shared game state
- `WrestlerPlayerState` - Per-player state

---

## Class Name Patterns for FindFirstOf()

Use these patterns in Lua:

```lua
-- Player (try in order)
"BP_WrestlerTestPlayerCharacter_C"
"BP_WrestlerPlayerCharacter_C" 
"WrestlerPlayerCharacter"

-- Controller
"BP_WrestlerPlayerControllerInGame_C"
"WrestlerPlayerController"

-- Movement
"WrestlerCharacterMovementComponent"
"CharacterMovementComponent"

-- Attributes
"WrestlerAttributeSet"
```

---

*This report was auto-generated by analyze_headers.ps1*
"@

# Save report
$outputDir = Split-Path $OutputPath -Parent
if ($outputDir -and -not (Test-Path $outputDir)) {
    New-Item -ItemType Directory -Path $outputDir -Force | Out-Null
}

$report | Out-File -FilePath $OutputPath -Encoding UTF8
Write-Host ""
Write-Host "Report saved to: $OutputPath" -ForegroundColor Green

# Also output a simple list of all VTMB2-specific classes
$vtmb2Classes = $allClasses.Keys | Where-Object { $_ -match "Wrestler|Hera|Vampire|Blood" } | Sort-Object
Write-Host ""
Write-Host "VTMB2-Specific Classes Found: $($vtmb2Classes.Count)" -ForegroundColor Yellow
$vtmb2Classes | ForEach-Object { Write-Host "  $_" }
