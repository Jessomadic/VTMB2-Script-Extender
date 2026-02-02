--[[
    VTMB2SE Example Mod
    
    Demonstrates how to use the VTMB2 API for modding.
    
    Features demonstrated:
    - Loading VTMB2 API
    - Player access
    - Keybind registration
    - Event callbacks
    - Configuration
]]--

local ModName = "VTMB2SE_Examples"
local ModVersion = "0.1.0"

-- Load VTMB2 API
local VTMB2 = require("VTMB2.VTMB2")
local Utils = require("VTMB2.Utils")

-- Create a logger for this mod
local Log = Utils.CreateLogger(ModName)

--[[============================================================================
    Configuration
============================================================================]]--

local Config = {
    -- Speed multipliers
    NormalSpeed = 600,
    FastSpeed = 1200,
    SuperSpeed = 2000,
    
    -- Feature toggles
    EnableSpeedMod = true,
    EnableHealthDisplay = true,
}

--[[============================================================================
    Speed Modification Example
============================================================================]]--

local currentSpeedMode = "normal"

local function SetSpeedMode(mode)
    local player = VTMB2.GetPlayer()
    if not player then
        Log.Warn("Player not found - are you in game?")
        return
    end
    
    local speed
    if mode == "fast" then
        speed = Config.FastSpeed
    elseif mode == "super" then
        speed = Config.SuperSpeed
    else
        speed = Config.NormalSpeed
        mode = "normal"
    end
    
    local success = VTMB2.Player.SetWalkSpeed(speed)
    if success then
        currentSpeedMode = mode
        Log.Log("Speed set to: " .. mode .. " (" .. speed .. ")")
    else
        Log.Warn("Failed to set speed - movement component not found")
    end
end

local function CycleSpeed()
    if currentSpeedMode == "normal" then
        SetSpeedMode("fast")
    elseif currentSpeedMode == "fast" then
        SetSpeedMode("super")
    else
        SetSpeedMode("normal")
    end
end

--[[============================================================================
    Player Info Display Example
============================================================================]]--

local function ShowPlayerInfo()
    Log.Log("===== Player Info =====")
    
    local player = VTMB2.GetPlayer()
    if not player then
        Log.Log("Player: Not found")
        Log.Log("=======================")
        return
    end
    
    Log.Log("Player: " .. Utils.GetFullName(player))
    Log.Log("Class: " .. Utils.GetClassName(player))
    
    -- Health
    local health = VTMB2.Player.GetHealth()
    if health then
        Log.Log("Health: " .. tostring(health))
    else
        Log.Log("Health: Unknown")
    end
    
    -- Blood
    local blood = VTMB2.Player.GetBlood()
    if blood then
        Log.Log("Blood: " .. tostring(blood))
    else
        Log.Log("Blood: Unknown")
    end
    
    -- Speed
    local speed = VTMB2.Player.GetWalkSpeed()
    if speed then
        Log.Log("Walk Speed: " .. tostring(speed))
    else
        Log.Log("Walk Speed: Unknown")
    end
    
    Log.Log("=======================")
end

--[[============================================================================
    Event Callback Examples
============================================================================]]--

-- Called when player spawns
VTMB2.Events.OnPlayerSpawn(function(player)
    Log.Log("Player spawned!")
    Log.Log("Character: " .. Utils.GetFullName(player))
    
    -- Example: Print initial stats
    Utils.Delay(1000, function()
        ShowPlayerInfo()
    end)
end)

--[[============================================================================
    Keybind Setup
============================================================================]]--

local function RegisterKeybinds()
    -- F5: Show player info
    RegisterKeyBind(Key.F5, function()
        ShowPlayerInfo()
    end)
    
    -- F6: Cycle speed modes
    RegisterKeyBind(Key.F6, function()
        CycleSpeed()
    end)
    
    -- F7: Set normal speed
    RegisterKeyBind(Key.F7, function()
        SetSpeedMode("normal")
    end)
    
    -- F8: Set fast speed
    RegisterKeyBind(Key.F8, function()
        SetSpeedMode("fast")
    end)
    
    Log.Log("Keybinds registered:")
    Log.Log("  F5  - Show player info")
    Log.Log("  F6  - Cycle speed modes")
    Log.Log("  F7  - Normal speed")
    Log.Log("  F8  - Fast speed")
end

--[[============================================================================
    Initialization
============================================================================]]--

local function Initialize()
    Log.Log("==============================")
    Log.Log("  " .. ModName .. " v" .. ModVersion)
    Log.Log("  VTMB2SE Example Mod")
    Log.Log("==============================")
    
    RegisterKeybinds()
    
    Log.Log("Example mod loaded successfully!")
    Log.Log("Press F5-F8 to test features")
    Log.Log("==============================")
end

-- Run initialization
Initialize()
