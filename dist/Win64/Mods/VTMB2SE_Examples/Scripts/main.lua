--[[
    VTMB2SE Example Mod (Extended)
    
    Demonstrates the full VTMB2 API including:
    - Player attributes (Health, Blood, Shield, etc.)
    - Movement system (Walk/Sprint/Crouch speeds)
    - Combat stats (Attack Power, Damage)
    - World queries
]]--

local ModName = "VTMB2SE_Examples"
local ModVersion = "0.2.0"

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
    
    -- God mode settings
    GodModeHealth = 99999,
    GodModeBlood = 99999,
}

-- State
local State = {
    godMode = false,
    infiniteBlood = false,
    originalSpeed = nil,
    speedMode = "normal",
}

--[[============================================================================
    Attribute Display
============================================================================]]--

local function ShowAllAttributes()
    Log.Log("========== PLAYER ATTRIBUTES ==========")
    
    local attrs = VTMB2.Attributes.GetAll()
    if not attrs or next(attrs) == nil then
        Log.Warn("Could not retrieve attributes - player may not be loaded")
        return
    end
    
    -- Group by category
    local categories = {
        Health = {"Health", "MaxHealth", "HealthRegenRate", "HealthRegenValue", "HealthFragility"},
        Blood = {"Blood", "MaxBlood"},
        Shield = {"Shield", "MaxShield"},
        Stun = {"stun", "MaxStun", "StunDamage", "StunResistance", "MaxStunResistance"},
        Armor = {"Armor", "MaxArmor", "ArmorDamage"},
        Combat = {"AttackPower", "Damage", "DamageCap"},
        Movement = {"WalkSpeed", "SprintSpeed", "CrouchSpeed", "AccelerationRate"},
        Ammo = {"Ammo", "MaxAmmo"},
        Abilities = {"StrikeAbilityBlood", "RelocateAbilityBlood", "MasteryAbilityBlood", "AffectAbilityBlood"},
        Stealth = {"Noticeability"},
    }
    
    for catName, attrNames in pairs(categories) do
        local hasAny = false
        for _, attrName in ipairs(attrNames) do
            if attrs[attrName] then
                hasAny = true
                break
            end
        end
        
        if hasAny then
            Log.Log("--- " .. catName .. " ---")
            for _, attrName in ipairs(attrNames) do
                local value = attrs[attrName]
                if value ~= nil then
                    Log.Log("  " .. attrName .. ": " .. tostring(value))
                end
            end
        end
    end
    
    Log.Log("========================================")
end

local function ShowPlayerInfo()
    Log.Log("========== PLAYER INFO ==========")
    
    local player = VTMB2.GetPlayer()
    if not player then
        Log.Warn("Player not found")
        return
    end
    
    Log.Log("Player: " .. Utils.GetFullName(player))
    Log.Log("Class: " .. Utils.GetClassName(player))
    Log.Log("Dead: " .. tostring(VTMB2.Player.IsDead()))
    Log.Log("In Combat: " .. tostring(VTMB2.Player.IsInCombat()))
    
    -- Quick stats
    Log.Log("--- Quick Stats ---")
    local health = VTMB2.Player.GetHealth()
    local maxHealth = VTMB2.Player.GetMaxHealth()
    if health and maxHealth then
        Log.Log("Health: " .. health .. " / " .. maxHealth)
    end
    
    local blood = VTMB2.Player.GetBlood()
    local maxBlood = VTMB2.Player.GetMaxBlood()
    if blood and maxBlood then
        Log.Log("Blood: " .. blood .. " / " .. maxBlood)
    end
    
    local walkSpeed = VTMB2.Movement.GetWalkSpeed()
    if walkSpeed then
        Log.Log("Walk Speed: " .. walkSpeed)
    end
    
    Log.Log("=================================")
end

--[[============================================================================
    Movement Functions
============================================================================]]--

local function SetSpeedMode(mode)
    local speed
    if mode == "fast" then
        speed = Config.FastSpeed
    elseif mode == "super" then
        speed = Config.SuperSpeed
    else
        speed = Config.NormalSpeed
        mode = "normal"
    end
    
    local success = VTMB2.Movement.SetWalkSpeed(speed)
    if success then
        State.speedMode = mode
        Log.Log("Speed set to: " .. mode .. " (" .. speed .. ")")
    else
        Log.Warn("Failed to set speed")
    end
end

local function CycleSpeed()
    if State.speedMode == "normal" then
        SetSpeedMode("fast")
    elseif State.speedMode == "fast" then
        SetSpeedMode("super")
    else
        SetSpeedMode("normal")
    end
end

local function ShowMovementInfo()
    Log.Log("========== MOVEMENT INFO ==========")
    
    Log.Log("Walk Speed: " .. tostring(VTMB2.Movement.GetWalkSpeed()))
    Log.Log("Sprint Speed: " .. tostring(VTMB2.Movement.GetSprintSpeed()))
    Log.Log("Crouch Speed: " .. tostring(VTMB2.Movement.GetCrouchSpeed()))
    Log.Log("Jump Z Velocity: " .. tostring(VTMB2.Movement.GetJumpZVelocity()))
    Log.Log("Gravity Scale: " .. tostring(VTMB2.Movement.GetGravityScale()))
    Log.Log("Acceleration: " .. tostring(VTMB2.Movement.GetAcceleration()))
    Log.Log("Ground Friction: " .. tostring(VTMB2.Movement.GetGroundFriction()))
    
    Log.Log("--- State ---")
    Log.Log("Sprinting: " .. tostring(VTMB2.Movement.IsSprinting()))
    Log.Log("Crouching: " .. tostring(VTMB2.Movement.IsCrouching()))
    Log.Log("Gliding: " .. tostring(VTMB2.Movement.IsGliding()))
    
    Log.Log("===================================")
end

--[[============================================================================
    God Mode / Cheats
============================================================================]]--

local function ToggleGodMode()
    State.godMode = not State.godMode
    
    if State.godMode then
        Log.Log("GOD MODE: ENABLED")
        VTMB2.Attributes.SetMaxHealth(Config.GodModeHealth)
        VTMB2.Attributes.SetHealth(Config.GodModeHealth)
    else
        Log.Log("GOD MODE: DISABLED")
        -- Note: doesn't restore original values
    end
end

local function ToggleInfiniteBlood()
    State.infiniteBlood = not State.infiniteBlood
    
    if State.infiniteBlood then
        Log.Log("INFINITE BLOOD: ENABLED")
        VTMB2.Attributes.SetMaxBlood(Config.GodModeBlood)
        VTMB2.Attributes.SetBlood(Config.GodModeBlood)
    else
        Log.Log("INFINITE BLOOD: DISABLED")
    end
end

local function HealPlayer()
    local maxHealth = VTMB2.Player.GetMaxHealth()
    if maxHealth then
        VTMB2.Player.SetHealth(maxHealth)
        Log.Log("Healed to full: " .. maxHealth)
    else
        Log.Warn("Could not heal - max health unknown")
    end
end

local function RefillBlood()
    local maxBlood = VTMB2.Player.GetMaxBlood()
    if maxBlood then
        VTMB2.Player.SetBlood(maxBlood)
        Log.Log("Blood refilled to: " .. maxBlood)
    else
        Log.Warn("Could not refill blood - max blood unknown")
    end
end

--[[============================================================================
    World Queries
============================================================================]]--

local function ShowWorldInfo()
    Log.Log("========== WORLD INFO ==========")
    
    local enemies = VTMB2.World.GetAllEnemies()
    Log.Log("Enemy Count: " .. #enemies)
    
    local npcs = VTMB2.World.GetAllNPCs()
    Log.Log("NPC Count: " .. #npcs)
    
    local gameMode = VTMB2.World.GetGameMode()
    if gameMode then
        Log.Log("Game Mode: " .. Utils.GetClassName(gameMode))
    end
    
    local gameState = VTMB2.World.GetGameState()
    if gameState then
        Log.Log("Game State: " .. Utils.GetClassName(gameState))
    end
    
    local cheatManager = VTMB2.World.GetCheatManager()
    if cheatManager then
        Log.Log("Cheat Manager: " .. Utils.GetClassName(cheatManager))
    else
        Log.Log("Cheat Manager: Not found")
    end
    
    Log.Log("================================")
end

--[[============================================================================
    Combat Functions
============================================================================]]--

local function ShowCombatStats()
    Log.Log("========== COMBAT STATS ==========")
    
    Log.Log("Attack Power: " .. tostring(VTMB2.Combat.GetAttackPower()))
    Log.Log("Damage: " .. tostring(VTMB2.Combat.GetDamage()))
    Log.Log("Stun Resistance: " .. tostring(VTMB2.Combat.GetStunResistance()))
    Log.Log("Armor: " .. tostring(VTMB2.Attributes.GetArmor()))
    Log.Log("Shield: " .. tostring(VTMB2.Attributes.GetShield()))
    
    Log.Log("==================================")
end

local function BoostAttackPower()
    local current = VTMB2.Combat.GetAttackPower() or 100
    local newPower = current * 2
    VTMB2.Combat.SetAttackPower(newPower)
    Log.Log("Attack Power boosted: " .. current .. " -> " .. newPower)
end

--[[============================================================================
    Event Callbacks
============================================================================]]--

VTMB2.Events.OnPlayerSpawn(function(player)
    Log.Log("Player spawned!")
    Log.Log("Character: " .. Utils.GetFullName(player))
    
    -- Show stats after short delay
    Utils.Delay(1000, function()
        ShowPlayerInfo()
    end)
end)

--[[============================================================================
    Debug Functions (must be defined before keybinds)
============================================================================]]--

-- Debug function to check what jump properties exist
local function DebugJump()
    Log.Log("========== DEBUG: JUMP PROPERTIES ==========")
    
    local player = VTMB2.GetPlayer()
    if player then
        Log.Log("Player class: " .. Utils.GetClassName(player))
        
        -- Check player properties
        local jumpProps = {"JumpHeight", "bCanJump", "bCanJumpFromCrouch", "MinJumpHeightThreshold"}
        for _, prop in ipairs(jumpProps) do
            local val = player[prop]
            Log.Log("  Player." .. prop .. " = " .. tostring(val) .. " (" .. type(val) .. ")")
        end
        
        -- Try to set jump height
        if player.JumpHeight ~= nil then
            local oldVal = player.JumpHeight
            player.JumpHeight = 1000
            Log.Log("  Set JumpHeight 1000 (was " .. tostring(oldVal) .. ")")
        end
    end
    
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        Log.Log("Movement class: " .. Utils.GetClassName(movement))
        
        -- Check movement properties
        local moveProps = {"JumpZVelocity", "JumpHeight", "MaxWalkSpeed", "GravityScale"}
        for _, prop in ipairs(moveProps) do
            local val = movement[prop]
            Log.Log("  Movement." .. prop .. " = " .. tostring(val) .. " (" .. type(val) .. ")")
        end
        
        -- Try to set both
        if movement.JumpZVelocity ~= nil then
            local oldVal = movement.JumpZVelocity
            movement.JumpZVelocity = 1500
            Log.Log("  Set JumpZVelocity 1500 (was " .. tostring(oldVal) .. ")")
        end
    end
    
    -- Try via API
    local height = VTMB2.Movement.GetJumpHeight()
    Log.Log("API GetJumpHeight: " .. tostring(height))
    
    local success = VTMB2.Movement.SetJumpHeight(1500)
    Log.Log("API SetJumpHeight(1500): " .. tostring(success))
    
    Log.Log("============================================")
end

-- Debug function to list all accessible player properties
local function DebugPlayerProperties()
    Log.Log("========== DEBUG: PLAYER PROPERTIES ==========")
    
    local player = VTMB2.GetPlayer()
    if not player then
        Log.Warn("No player found")
        return
    end
    
    Log.Log("Player: " .. Utils.GetFullName(player))
    
    -- Check if attribute set is accessible
    local attrSet = nil
    local attrSetNames = {"WrestlerAttributeSet", "AttributeSet", "AbilitySystemComponent"}
    for _, name in ipairs(attrSetNames) do
        if player[name] ~= nil then
            attrSet = player[name]
            Log.Log("Found: " .. name .. " = " .. type(attrSet))
        end
    end
    
    -- Check movement
    local movement = player.CharacterMovement
    if movement then
        Log.Log("CharacterMovement found")
        Log.Log("  MaxWalkSpeed: " .. tostring(movement.MaxWalkSpeed))
        Log.Log("  JumpZVelocity: " .. tostring(movement.JumpZVelocity))
    else
        Log.Log("CharacterMovement: nil")
    end
    
    -- Try direct properties on player that might affect damage
    local combatProps = {
        "AttackPower", "Damage", "BaseDamage", "DamageMultiplier",
        "MeleeDamage", "RangeDamage", "AbilityDamage"
    }
    Log.Log("--- Combat Properties ---")
    for _, prop in ipairs(combatProps) do
        if player[prop] ~= nil then
            Log.Log("  " .. prop .. " = " .. tostring(player[prop]))
        end
    end
    
    Log.Log("==============================================")
end

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
    
    -- F7: Show all attributes
    RegisterKeyBind(Key.F7, function()
        ShowAllAttributes()
    end)
    
    -- F8: Show movement info
    RegisterKeyBind(Key.F8, function()
        ShowMovementInfo()
    end)
    
    -- F9: Heal player
    RegisterKeyBind(Key.F9, function()
        HealPlayer()
    end)
    
    -- Numpad keys for advanced features
    RegisterKeyBind(Key.NUM_ONE, function()
        ToggleGodMode()
    end)
    
    RegisterKeyBind(Key.NUM_TWO, function()
        ToggleInfiniteBlood()
    end)
    
    RegisterKeyBind(Key.NUM_THREE, function()
        RefillBlood()
    end)
    
    RegisterKeyBind(Key.NUM_FOUR, function()
        ShowWorldInfo()
    end)
    
    RegisterKeyBind(Key.NUM_FIVE, function()
        ShowCombatStats()
    end)
    
    RegisterKeyBind(Key.NUM_SIX, function()
        BoostAttackPower()
    end)
    
    -- Numpad 7: Super Jump test
    RegisterKeyBind(Key.NUM_SEVEN, function()
        DebugJump()
    end)
    
    -- Numpad 8: Debug properties
    RegisterKeyBind(Key.NUM_EIGHT, function()
        DebugPlayerProperties()
    end)
    
    Log.Log("Keybinds registered:")
    Log.Log("  F5     - Player Info")
    Log.Log("  F6     - Cycle Speed")
    Log.Log("  F7     - All Attributes")
    Log.Log("  F8     - Movement Info")
    Log.Log("  F9     - Heal Player")
    Log.Log("  Num1   - Toggle God Mode")
    Log.Log("  Num2   - Toggle Infinite Blood")
    Log.Log("  Num3   - Refill Blood")
    Log.Log("  Num4   - World Info")
    Log.Log("  Num5   - Combat Stats")
    Log.Log("  Num6   - Boost Attack Power")
    Log.Log("  Num7   - Super Jump Test")
    Log.Log("  Num8   - Debug Properties")
end

--[[============================================================================
    Initialization
============================================================================]]--

local function Initialize()
    Log.Log("======================================")
    Log.Log("  " .. ModName .. " v" .. ModVersion)
    Log.Log("  VTMB2SE Extended Example Mod")
    Log.Log("======================================")
    
    RegisterKeybinds()
    
    Log.Log("Example mod loaded!")
    Log.Log("Use F5-F9 and Numpad 1-6 for features")
    Log.Log("======================================")
end

Initialize()
