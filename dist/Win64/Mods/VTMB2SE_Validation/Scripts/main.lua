--[[
    VTMB2SE Header/Class Validation Test
    
    This mod tests all game classes and properties that VTMB2SE relies on.
    Run in-game to see which classes are accessible.
    
    Results are logged to UE4SS console and saved to validation_results.txt
]]--

local ModName = "VTMB2SE_Validation"
local Log = function(msg) print("[" .. ModName .. "] " .. msg .. "\n") end

-- Test results
local Results = {
    passed = 0,
    failed = 0,
    warnings = 0,
    details = {}
}

--[[============================================================================
    Test Framework
============================================================================]]--

local function TestClass(className, description)
    local result = {
        name = className,
        description = description or className,
        found = false,
        instance = nil,
        properties = {},
        methods = {}
    }
    
    local success, obj = pcall(function()
        return FindFirstOf(className)
    end)
    
    if success and obj and obj:IsValid() then
        result.found = true
        result.instance = obj
        Results.passed = Results.passed + 1
        Log("[PASS] Class found: " .. className)
    else
        result.found = false
        Results.failed = Results.failed + 1
        Log("[FAIL] Class NOT found: " .. className)
    end
    
    table.insert(Results.details, result)
    return result
end

local function TestProperty(obj, propertyName, expectedType)
    if not obj or not obj.instance then
        return false
    end
    
    local success, value = pcall(function()
        return obj.instance[propertyName]
    end)
    
    local propResult = {
        name = propertyName,
        found = success and value ~= nil,
        value = success and tostring(value) or "N/A",
        type = success and type(value) or "N/A"
    }
    
    table.insert(obj.properties, propResult)
    
    if propResult.found then
        Log("  [PROP OK] " .. propertyName .. " = " .. propResult.value)
        return true
    else
        Log("  [PROP MISSING] " .. propertyName)
        return false
    end
end

local function TestMethod(obj, methodName)
    if not obj or not obj.instance then
        return false
    end
    
    local success = pcall(function()
        return obj.instance[methodName] ~= nil
    end)
    
    local methodResult = {
        name = methodName,
        found = success
    }
    
    table.insert(obj.methods, methodResult)
    
    if success then
        Log("  [METHOD OK] " .. methodName)
        return true
    else
        Log("  [METHOD MISSING] " .. methodName)
        return false
    end
end

--[[============================================================================
    Class Tests - Player Controllers
============================================================================]]--

local function TestPlayerControllers()
    Log("========================================")
    Log("Testing Player Controllers")
    Log("========================================")
    
    local controllers = {
        {"BP_WrestlerPlayerControllerInGame_C", "VTMB2 Main Player Controller"},
        {"WrestlerPlayerControllerInGame_C", "VTMB2 Player Controller (no BP)"},
        {"WrestlerPlayerController_C", "Base Wrestler Controller"},
        {"PlayerController", "UE Base PlayerController"},
    }
    
    for _, ctrl in ipairs(controllers) do
        local result = TestClass(ctrl[1], ctrl[2])
        if result.found then
            TestProperty(result, "Pawn")
            TestProperty(result, "PlayerState")
            TestProperty(result, "PlayerCameraManager")
            TestMethod(result, "GetPawn")
        end
    end
end

--[[============================================================================
    Class Tests - Player Characters
============================================================================]]--

local function TestPlayerCharacters()
    Log("========================================")
    Log("Testing Player Characters")
    Log("========================================")
    
    local characters = {
        {"BP_WrestlerTestPlayerCharacter_C", "VTMB2 Test Player Character"},
        {"BP_WrestlerPlayerCharacter_C", "VTMB2 Player Character"},
        {"WrestlerPlayerCharacter_C", "Base Wrestler Character"},
        {"WrestlerCharacter_C", "Wrestler Character"},
        {"Character", "UE Base Character"},
    }
    
    for _, char in ipairs(characters) do
        local result = TestClass(char[1], char[2])
        if result.found then
            -- Movement
            TestProperty(result, "CharacterMovement")
            TestProperty(result, "MovementComponent")
            
            -- Stats (if exposed)
            TestProperty(result, "Health")
            TestProperty(result, "MaxHealth")
            TestProperty(result, "Blood")
            TestProperty(result, "MaxBlood")
            
            -- Components
            TestProperty(result, "AbilitySystemComponent")
            TestProperty(result, "WrestlerAttributeSet")
            TestProperty(result, "AttributeSet")
            
            -- Methods
            TestMethod(result, "GetCharacterMovement")
            TestMethod(result, "GetController")
        end
    end
end

--[[============================================================================
    Class Tests - Movement Components
============================================================================]]--

local function TestMovementComponents()
    Log("========================================")
    Log("Testing Movement Components")
    Log("========================================")
    
    local components = {
        {"WrestlerCharacterMovementComponent", "VTMB2 Movement Component"},
        {"CharacterMovementComponent", "UE Character Movement"},
    }
    
    for _, comp in ipairs(components) do
        local result = TestClass(comp[1], comp[2])
        if result.found then
            TestProperty(result, "MaxWalkSpeed")
            TestProperty(result, "MaxSprintSpeed")
            TestProperty(result, "JumpZVelocity")
            TestProperty(result, "GravityScale")
            TestProperty(result, "MaxAcceleration")
            TestProperty(result, "GroundFriction")
        end
    end
end

--[[============================================================================
    Class Tests - Ability System
============================================================================]]--

local function TestAbilitySystem()
    Log("========================================")
    Log("Testing Ability System")
    Log("========================================")
    
    local classes = {
        {"WrestlerAttributeSet", "VTMB2 Attribute Set"},
        {"AbilitySystemComponent", "GAS Component"},
        {"GameplayAbility", "Base Gameplay Ability"},
    }
    
    for _, cls in ipairs(classes) do
        local result = TestClass(cls[1], cls[2])
        if result.found then
            if string.find(cls[1], "AttributeSet") then
                TestProperty(result, "Health")
                TestProperty(result, "MaxHealth")
                TestProperty(result, "Blood")
                TestProperty(result, "MaxBlood")
                TestProperty(result, "Hunger")
                TestProperty(result, "Stamina")
            end
        end
    end
end

--[[============================================================================
    Class Tests - Dialogue System (Hera)
============================================================================]]--

local function TestDialogueSystem()
    Log("========================================")
    Log("Testing Dialogue System (Hera)")
    Log("========================================")
    
    local classes = {
        {"HeraDialogueComponent", "Hera Dialogue Component"},
        {"HeraDialogueManager", "Hera Dialogue Manager"},
        {"HeraConversation", "Hera Conversation"},
        {"HeraDialogueNode", "Hera Dialogue Node"},
    }
    
    for _, cls in ipairs(classes) do
        TestClass(cls[1], cls[2])
    end
end

--[[============================================================================
    Class Tests - UI System
============================================================================]]--

local function TestUISystem()
    Log("========================================")
    Log("Testing UI System")
    Log("========================================")
    
    local classes = {
        {"HeraHUD", "Hera HUD"},
        {"WrestlerHUD", "Wrestler HUD"},
        {"HUD", "UE Base HUD"},
    }
    
    for _, cls in ipairs(classes) do
        TestClass(cls[1], cls[2])
    end
end

--[[============================================================================
    Class Tests - Game Systems
============================================================================]]--

local function TestGameSystems()
    Log("========================================")
    Log("Testing Game Systems")
    Log("========================================")
    
    local classes = {
        {"WrestlerGameMode", "VTMB2 Game Mode"},
        {"WrestlerGameState", "VTMB2 Game State"},
        {"WrestlerPlayerState", "VTMB2 Player State"},
        {"WrestlerCheatManager", "VTMB2 Cheat Manager"},
        {"GameModeBase", "UE Game Mode"},
        {"GameStateBase", "UE Game State"},
    }
    
    for _, cls in ipairs(classes) do
        TestClass(cls[1], cls[2])
    end
end

--[[============================================================================
    Class Tests - Enemies/NPCs
============================================================================]]--

local function TestEnemiesAndNPCs()
    Log("========================================")
    Log("Testing Enemies and NPCs")
    Log("========================================")
    
    local classes = {
        {"BP_EnemyCharacterBase_C", "Enemy Base Character"},
        {"WrestlerAIController", "AI Controller"},
        {"AIController", "UE AI Controller"},
    }
    
    for _, cls in ipairs(classes) do
        TestClass(cls[1], cls[2])
    end
end

--[[============================================================================
    Summary Report
============================================================================]]--

local function GenerateSummary()
    Log("")
    Log("========================================")
    Log("VALIDATION SUMMARY")
    Log("========================================")
    Log("Passed: " .. Results.passed)
    Log("Failed: " .. Results.failed)
    Log("Total:  " .. (Results.passed + Results.failed))
    Log("")
    
    -- List found classes
    Log("Classes Found:")
    for _, detail in ipairs(Results.details) do
        if detail.found then
            Log("  + " .. detail.name)
        end
    end
    
    Log("")
    Log("Classes NOT Found:")
    for _, detail in ipairs(Results.details) do
        if not detail.found then
            Log("  - " .. detail.name)
        end
    end
    
    Log("========================================")
    
    -- Save to file
    local report = "VTMB2SE Validation Report\n"
    report = report .. "Generated: " .. os.date() .. "\n"
    report = report .. "========================\n\n"
    report = report .. "Passed: " .. Results.passed .. "\n"
    report = report .. "Failed: " .. Results.failed .. "\n\n"
    
    report = report .. "FOUND CLASSES:\n"
    for _, detail in ipairs(Results.details) do
        if detail.found then
            report = report .. "+ " .. detail.name .. " (" .. detail.description .. ")\n"
            for _, prop in ipairs(detail.properties) do
                if prop.found then
                    report = report .. "    - " .. prop.name .. " = " .. prop.value .. "\n"
                end
            end
        end
    end
    
    report = report .. "\nMISSING CLASSES:\n"
    for _, detail in ipairs(Results.details) do
        if not detail.found then
            report = report .. "- " .. detail.name .. " (" .. detail.description .. ")\n"
        end
    end
    
    -- Try to save
    local file = io.open("Mods/VTMB2SE_Validation/validation_results.txt", "w")
    if file then
        file:write(report)
        file:close()
        Log("Results saved to: Mods/VTMB2SE_Validation/validation_results.txt")
    end
    
    return Results
end

--[[============================================================================
    Main Test Runner
============================================================================]]--

local function RunAllTests()
    Log("========================================")
    Log("VTMB2SE HEADER VALIDATION TEST")
    Log("Starting comprehensive class tests...")
    Log("========================================")
    
    -- Reset results
    Results = { passed = 0, failed = 0, warnings = 0, details = {} }
    
    -- Run all test groups
    TestPlayerControllers()
    TestPlayerCharacters()
    TestMovementComponents()
    TestAbilitySystem()
    TestDialogueSystem()
    TestUISystem()
    TestGameSystems()
    TestEnemiesAndNPCs()
    
    -- Generate summary
    GenerateSummary()
end

-- Keybind to run tests - Using INS instead of F11 (F11 toggles UE4SS window)
RegisterKeyBind(Key.INS, function()
    RunAllTests()
end)

-- Delayed auto-run after game loads
RegisterHook("/Script/Engine.PlayerController:ClientRestart", function()
    ExecuteWithDelay(3000, function()
        Log("Player loaded - Press INSERT to run validation tests")
    end)
end)

Log("VTMB2SE Validation Test loaded")
Log("Press INSERT to run class validation tests")
Log("(F11 is reserved for UE4SS window toggle)")

