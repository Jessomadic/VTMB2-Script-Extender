# VTMB2SE Lua API Reference

This document describes the VTMB2SE Lua API for modding Vampire: The Masquerade - Bloodlines 2.

## Table of Contents

- [Getting Started](#getting-started)
- [VTMB2 Module](#vtmb2-module)
  - [Core Functions](#core-functions)
  - [Player Module](#player-module)
  - [Abilities Module](#abilities-module)
  - [Events Module](#events-module)
  - [World Module](#world-module)
- [Utils Module](#utils-module)
- [Config Module](#config-module)
- [UE4SS Base Functions](#ue4ss-base-functions)

---

## Getting Started

### Loading the API

```lua
-- Load the main VTMB2 module
local VTMB2 = require("VTMB2.VTMB2")

-- Load utility module
local Utils = require("VTMB2.Utils")

-- Load config module
local Config = require("VTMB2.Config")
```

### Basic Mod Structure

```lua
-- my_mod/Scripts/main.lua

local VTMB2 = require("VTMB2.VTMB2")
local Utils = require("VTMB2.Utils")

-- Create a logger
local Log = Utils.CreateLogger("MyMod")

-- Initialize
Log.Log("My mod loaded!")

-- Register a keybind
RegisterKeyBind(Key.F9, function()
    local player = VTMB2.GetPlayer()
    if player then
        Log.Log("Player found: " .. Utils.GetFullName(player))
    end
end)
```

---

## VTMB2 Module

### Core Functions

#### `VTMB2.GetPlayer()`
Returns the player character.

```lua
local player = VTMB2.GetPlayer()
if player then
    print("Player: " .. player:GetFullName() .. "\n")
end
```

**Returns:** `userdata|nil` - Player character or nil if not found

---

#### `VTMB2.GetPlayerController()`
Returns the player controller.

```lua
local controller = VTMB2.GetPlayerController()
```

**Returns:** `userdata|nil` - Player controller or nil if not found

---

#### `VTMB2.ClearCache()`
Clears cached player references. Useful after level transitions.

```lua
VTMB2.ClearCache()
```

---

### Player Module

#### `VTMB2.Player.GetHealth()`
Gets the player's current health.

```lua
local health = VTMB2.Player.GetHealth()
if health then
    print("Health: " .. health .. "\n")
end
```

**Returns:** `number|nil` - Health value or nil

---

#### `VTMB2.Player.SetHealth(value)`
Sets the player's health.

```lua
VTMB2.Player.SetHealth(100)
```

**Parameters:**
- `value` (number) - The health value to set

**Returns:** `boolean` - Success

---

#### `VTMB2.Player.GetBlood()`
Gets the player's current blood (vampire resource).

```lua
local blood = VTMB2.Player.GetBlood()
```

**Returns:** `number|nil` - Blood value or nil

---

#### `VTMB2.Player.SetBlood(value)`
Sets the player's blood.

```lua
VTMB2.Player.SetBlood(50)
```

**Parameters:**
- `value` (number) - The blood value to set

**Returns:** `boolean` - Success

---

#### `VTMB2.Player.GetMovementComponent()`
Gets the player's movement component.

```lua
local movement = VTMB2.Player.GetMovementComponent()
if movement then
    print("Max Speed: " .. movement.MaxWalkSpeed .. "\n")
end
```

**Returns:** `userdata|nil` - Movement component or nil

---

#### `VTMB2.Player.GetWalkSpeed()`
Gets the player's current walk speed.

```lua
local speed = VTMB2.Player.GetWalkSpeed()
```

**Returns:** `number|nil` - Walk speed or nil

---

#### `VTMB2.Player.SetWalkSpeed(speed)`
Sets the player's walk speed.

```lua
VTMB2.Player.SetWalkSpeed(1000)  -- Faster movement
```

**Parameters:**
- `speed` (number) - The walk speed to set

**Returns:** `boolean` - Success

---

#### `VTMB2.Player.GetAttributeSet()`
Gets the player's Gameplay Ability System attribute set.

```lua
local attrs = VTMB2.Player.GetAttributeSet()
```

**Returns:** `userdata|nil` - Attribute set or nil

---

### Events Module

#### `VTMB2.Events.OnPlayerSpawn(callback)`
Register a callback for when the player spawns.

```lua
VTMB2.Events.OnPlayerSpawn(function(player)
    print("Player spawned: " .. player:GetFullName() .. "\n")
end)
```

**Parameters:**
- `callback` (function) - Function to call with player as argument

---

#### `VTMB2.Events.OnCombatStart(callback)`
Register a callback for when combat starts.

```lua
VTMB2.Events.OnCombatStart(function()
    print("Combat started!\n")
end)
```

---

#### `VTMB2.Events.OnDialogueStart(callback)`
Register a callback for when dialogue starts.

```lua
VTMB2.Events.OnDialogueStart(function(dialogueData)
    print("Dialogue started\n")
end)
```

---

#### `VTMB2.Events.OnQuestUpdate(callback)`
Register a callback for quest updates.

```lua
VTMB2.Events.OnQuestUpdate(function(questData)
    print("Quest updated\n")
end)
```

---

### World Module

#### `VTMB2.World.FindAllOfClass(className)`
Find all actors of a given class.

```lua
local enemies = VTMB2.World.FindAllOfClass("BP_EnemyCharacterBase_C")
for _, enemy in ipairs(enemies) do
    print("Enemy: " .. enemy:GetFullName() .. "\n")
end
```

**Parameters:**
- `className` (string) - The class name to search for

**Returns:** `table` - Array of actors

---

#### `VTMB2.World.FindFirstOfClass(className)`
Find first actor of a given class.

```lua
local boss = VTMB2.World.FindFirstOfClass("BP_EnemyBoss_C")
```

**Returns:** `userdata|nil` - Actor or nil

---

#### `VTMB2.World.GetAllEnemies()`
Get all enemy characters in the world.

```lua
local enemies = VTMB2.World.GetAllEnemies()
print("Enemy count: " .. #enemies .. "\n")
```

**Returns:** `table` - Array of enemy actors

---

## Utils Module

### Logging

#### `Utils.CreateLogger(prefix)`
Create a logger with a specific prefix.

```lua
local Log = Utils.CreateLogger("MyMod")
Log.Log("Normal message")
Log.Error("Error message")
Log.Warn("Warning message")
Log.Debug("Debug message")
```

### Safe Access

#### `Utils.SafeGet(obj, propertyName)`
Safely get a property without errors.

```lua
local health = Utils.SafeGet(player, "Health")
```

#### `Utils.SafeSet(obj, propertyName, value)`
Safely set a property.

```lua
Utils.SafeSet(player, "Health", 100)
```

#### `Utils.SafeCall(obj, methodName, ...)`
Safely call a method.

```lua
local result = Utils.SafeCall(actor, "GetFullName")
```

### Validation

#### `Utils.IsValid(obj)`
Check if an object is valid.

```lua
if Utils.IsValid(player) then
    -- Safe to use player
end
```

#### `Utils.GetFullName(obj)`
Get object's full name safely.

```lua
local name = Utils.GetFullName(player)
```

#### `Utils.GetClassName(obj)`
Get object's class name safely.

```lua
local className = Utils.GetClassName(player)
```

### Delayed Execution

#### `Utils.Delay(delayMs, callback)`
Execute a function after a delay.

```lua
Utils.Delay(1000, function()
    print("1 second later!\n")
end)
```

#### `Utils.SetInterval(intervalMs, callback)`
Execute a function repeatedly.

```lua
local timer = Utils.SetInterval(5000, function()
    print("Every 5 seconds\n")
    return true  -- Return false to stop
end)

-- To stop:
timer:Stop()
```

---

## Config Module

### Configuration Manager

```lua
local Config = require("VTMB2.Config")

-- Create a config manager for your mod
local config = Config.CreateManager("Mods/MyMod", {
    -- Default values
    speed = 600,
    enabled = true,
    name = "Player"
})

-- Load config (auto-merges with defaults)
config:Load()

-- Get a value
local speed = config:Get("speed", 600)

-- Set a value
config:Set("speed", 1000)

-- Save to file
config:Save()
```

---

## UE4SS Base Functions

These are provided by UE4SS and available in all mods.

### Object Finding

```lua
-- Find first object of class
local obj = FindFirstOf("ClassName")

-- Find all objects of class
local objects = FindAllOf("ClassName")
```

### Hooks

```lua
-- Register a hook on a function
RegisterHook("/Script/Engine.PlayerController:ClientRestart", function(Context)
    local controller = Context:get()
    print("Player restarted\n")
end)

-- Pre-hook (before function executes)
RegisterHook("/Script/Game.Class:Function", { PreHook = true }, function(Context)
    -- Runs before the function
end)
```

### Keybinds

```lua
-- Register a keybind
RegisterKeyBind(Key.F5, function()
    print("F5 pressed!\n")
end)

-- With modifiers
RegisterKeyBind(Key.F5, { ModifierKeys.CONTROL }, function()
    print("Ctrl+F5 pressed!\n")
end)
```

### Console Commands

```lua
-- Register a console command
RegisterConsoleCommandHandler("mycommand", function(FullCommand, Parameters)
    print("Command: " .. FullCommand .. "\n")
    for i, param in ipairs(Parameters) do
        print("Param " .. i .. ": " .. param .. "\n")
    end
    return true  -- Command handled
end)
```

### Execution

```lua
-- Execute a console command
ExecuteInGameThread(function()
    -- Code that must run in game thread
end)

-- Delayed execution
ExecuteWithDelay(1000, function()
    print("1 second later\n")
end)
```

---

## Key Codes

Common key codes for `RegisterKeyBind`:

| Key | Code |
|-----|------|
| F1-F12 | `Key.F1` - `Key.F12` |
| 0-9 | `Key.ZERO` - `Key.NINE` or `Key.NUM_ZERO` - `Key.NUM_NINE` |
| A-Z | `Key.A` - `Key.Z` |
| Arrow Keys | `Key.UP`, `Key.DOWN`, `Key.LEFT`, `Key.RIGHT` |
| Modifiers | `ModifierKeys.CONTROL`, `ModifierKeys.SHIFT`, `ModifierKeys.ALT` |

---

## Example: Complete Mod

```lua
--[[
    My VTMB2 Mod
    Demonstrates full API usage
]]--

local VTMB2 = require("VTMB2.VTMB2")
local Utils = require("VTMB2.Utils")
local Config = require("VTMB2.Config")

local Log = Utils.CreateLogger("MyMod")

-- Configuration
local config = Config.CreateManager("Mods/MyMod", {
    speedMultiplier = 1.5,
    showNotifications = true
})
config:Load()

-- State
local originalSpeed = nil

-- Functions
local function ToggleSpeedBoost()
    local current = VTMB2.Player.GetWalkSpeed()
    if not current then
        Log.Warn("Could not get player speed")
        return
    end
    
    if originalSpeed then
        -- Restore original
        VTMB2.Player.SetWalkSpeed(originalSpeed)
        Log.Log("Speed restored to " .. originalSpeed)
        originalSpeed = nil
    else
        -- Apply boost
        originalSpeed = current
        local newSpeed = current * config:Get("speedMultiplier")
        VTMB2.Player.SetWalkSpeed(newSpeed)
        Log.Log("Speed boosted to " .. newSpeed)
    end
end

-- Events
VTMB2.Events.OnPlayerSpawn(function(player)
    Log.Log("Welcome back, Kindred!")
    originalSpeed = nil  -- Reset on respawn
end)

-- Keybinds
RegisterKeyBind(Key.F9, function()
    ToggleSpeedBoost()
end)

-- Console command
RegisterConsoleCommandHandler("mymod", function(_, params)
    if #params == 0 then
        Log.Log("Commands: speed <multiplier>, reset")
        return true
    end
    
    if params[1] == "speed" and params[2] then
        config:Set("speedMultiplier", tonumber(params[2]) or 1.5)
        config:Save()
        Log.Log("Speed multiplier set to " .. params[2])
        return true
    elseif params[1] == "reset" then
        if originalSpeed then
            VTMB2.Player.SetWalkSpeed(originalSpeed)
            originalSpeed = nil
            Log.Log("Speed reset")
        end
        return true
    end
    
    return false
end)

-- Init
Log.Log("Mod loaded! Press F9 to toggle speed boost")
```

---

For more examples, see the `VTMB2SE_Examples` mod in the distribution.
