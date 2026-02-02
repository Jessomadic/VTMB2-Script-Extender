--[[
    VTMB2 API - Main Module
    
    High-level Lua API for Vampire: The Masquerade - Bloodlines 2
    
    Usage:
        local VTMB2 = require("VTMB2.VTMB2")
        local player = VTMB2.GetPlayer()
]]--

local VTMB2 = {}
VTMB2.Version = "0.1.0"
VTMB2.Initialized = false

-- Sub-modules
VTMB2.Player = {}
VTMB2.Abilities = {}
VTMB2.Dialogue = {}
VTMB2.Quest = {}
VTMB2.World = {}
VTMB2.Events = {}

-- Internal state
local _internal = {
    player = nil,
    playerController = nil,
    callbacks = {
        onPlayerSpawn = {},
        onPlayerRestart = {},
        onCombatStart = {},
        onCombatEnd = {},
        onDialogueStart = {},
        onDialogueEnd = {},
        onQuestUpdate = {},
    }
}

-- Utility functions for logging
local function Log(message)
    print("[VTMB2] " .. message .. "\n")
end

local function LogError(message)
    print("[VTMB2][ERROR] " .. message .. "\n")
end

--[[============================================================================
    Core Functions
============================================================================]]--

--- Initialize the VTMB2 API
function VTMB2.Initialize()
    if VTMB2.Initialized then
        return true
    end
    
    Log("Initializing VTMB2 API v" .. VTMB2.Version)
    
    -- Load sub-modules
    local Utils = require("VTMB2.Utils")
    VTMB2.Utils = Utils
    
    local Config = require("VTMB2.Config")
    VTMB2.Config = Config
    
    VTMB2.Initialized = true
    Log("VTMB2 API initialized")
    
    return true
end

--- Get the player character (BP_WrestlerTestPlayerCharacter or similar)
--- @return userdata|nil Player character or nil if not found
function VTMB2.GetPlayer()
    -- Try cached player first
    if _internal.player and _internal.player:IsValid() then
        return _internal.player
    end
    
    -- VTMB2 uses "Wrestler" naming convention for player
    local playerClassNames = {
        "BP_WrestlerTestPlayerCharacter_C",
        "WrestlerPlayerCharacter_C",
        "BP_WrestlerPlayerCharacter_C",
        "Character",  -- Fallback
    }
    
    for _, className in ipairs(playerClassNames) do
        local player = FindFirstOf(className)
        if player and player:IsValid() then
            _internal.player = player
            return player
        end
    end
    
    -- Try via player controller
    local controller = VTMB2.GetPlayerController()
    if controller and controller:IsValid() then
        local pawn = controller.Pawn
        if pawn and pawn:IsValid() then
            _internal.player = pawn
            return pawn
        end
    end
    
    return nil
end

--- Get the player controller
--- @return userdata|nil Player controller or nil if not found
function VTMB2.GetPlayerController()
    -- Try cached controller first
    if _internal.playerController and _internal.playerController:IsValid() then
        return _internal.playerController
    end
    
    -- VTMB2 player controller names
    local controllerClassNames = {
        "BP_WrestlerPlayerControllerInGame_C",
        "WrestlerPlayerControllerInGame_C",
        "WrestlerPlayerController_C",
        "PlayerController",  -- Fallback
    }
    
    for _, className in ipairs(controllerClassNames) do
        local controller = FindFirstOf(className)
        if controller and controller:IsValid() then
            _internal.playerController = controller
            return controller
        end
    end
    
    return nil
end

--- Clear cached references (useful after level transitions)
function VTMB2.ClearCache()
    _internal.player = nil
    _internal.playerController = nil
    Log("Cache cleared")
end

--[[============================================================================
    Player Module
============================================================================]]--

--- Get player's current health
--- @return number|nil Health value or nil if unavailable
function VTMB2.Player.GetHealth()
    local player = VTMB2.GetPlayer()
    if not player then return nil end
    
    -- Try common health property names
    local healthProps = {"Health", "CurrentHealth", "HP"}
    for _, prop in ipairs(healthProps) do
        local value = player[prop]
        if value ~= nil then
            return value
        end
    end
    
    -- Try via attribute set (GAS system)
    local attrSet = VTMB2.Player.GetAttributeSet()
    if attrSet then
        if attrSet.Health then
            return attrSet.Health.CurrentValue or attrSet.Health
        end
    end
    
    return nil
end

--- Set player's health
--- @param value number The health value to set
--- @return boolean Success
function VTMB2.Player.SetHealth(value)
    local player = VTMB2.GetPlayer()
    if not player then return false end
    
    local healthProps = {"Health", "CurrentHealth", "HP"}
    for _, prop in ipairs(healthProps) do
        if player[prop] ~= nil then
            player[prop] = value
            return true
        end
    end
    
    return false
end

--- Get player's current blood (vampire resource)
--- @return number|nil Blood value or nil if unavailable
function VTMB2.Player.GetBlood()
    local player = VTMB2.GetPlayer()
    if not player then return nil end
    
    local bloodProps = {"Blood", "CurrentBlood", "BloodPool", "Vitae"}
    for _, prop in ipairs(bloodProps) do
        local value = player[prop]
        if value ~= nil then
            return value
        end
    end
    
    -- Try via attribute set
    local attrSet = VTMB2.Player.GetAttributeSet()
    if attrSet then
        if attrSet.Blood then
            return attrSet.Blood.CurrentValue or attrSet.Blood
        end
    end
    
    return nil
end

--- Set player's blood
--- @param value number The blood value to set
--- @return boolean Success
function VTMB2.Player.SetBlood(value)
    local player = VTMB2.GetPlayer()
    if not player then return false end
    
    local bloodProps = {"Blood", "CurrentBlood", "BloodPool", "Vitae"}
    for _, prop in ipairs(bloodProps) do
        if player[prop] ~= nil then
            player[prop] = value
            return true
        end
    end
    
    return false
end

--- Get player's Gameplay Ability System attribute set
--- @return userdata|nil Attribute set or nil
function VTMB2.Player.GetAttributeSet()
    local player = VTMB2.GetPlayer()
    if not player then return nil end
    
    -- VTMB2 uses WrestlerAttributeSet
    local attrSetNames = {
        "WrestlerAttributeSet",
        "AttributeSet",
        "AbilitySystemComponent"
    }
    
    for _, name in ipairs(attrSetNames) do
        local attrSet = player[name]
        if attrSet and attrSet:IsValid() then
            return attrSet
        end
    end
    
    return nil
end

--- Get player's movement component
--- @return userdata|nil Movement component or nil
function VTMB2.Player.GetMovementComponent()
    local player = VTMB2.GetPlayer()
    if not player then return nil end
    
    -- VTMB2 uses WrestlerCharacterMovementComponent
    local movementNames = {
        "CharacterMovement",
        "WrestlerCharacterMovementComponent",
        "MovementComponent"
    }
    
    for _, name in ipairs(movementNames) do
        local movement = player[name]
        if movement and movement:IsValid() then
            return movement
        end
    end
    
    -- Try GetComponentByClass
    if player.GetComponentByClass then
        local compNames = {
            "WrestlerCharacterMovementComponent",
            "CharacterMovementComponent"
        }
        for _, compName in ipairs(compNames) do
            local comp = player:GetComponentByClass(compName)
            if comp and comp:IsValid() then
                return comp
            end
        end
    end
    
    return nil
end

--- Get player's current walk speed
--- @return number|nil Walk speed or nil
function VTMB2.Player.GetWalkSpeed()
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        return movement.MaxWalkSpeed
    end
    return nil
end

--- Set player's walk speed
--- @param speed number The walk speed to set
--- @return boolean Success
function VTMB2.Player.SetWalkSpeed(speed)
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        movement.MaxWalkSpeed = speed
        return true
    end
    return false
end

--[[============================================================================
    Abilities Module
============================================================================]]--

--- Get all abilities on the player
--- @return table Array of ability info tables
function VTMB2.Abilities.GetAll()
    local player = VTMB2.GetPlayer()
    if not player then return {} end
    
    local abilities = {}
    
    -- Try to find Ability System Component
    local asc = player.AbilitySystemComponent
    if asc and asc:IsValid() then
        -- TODO: Iterate abilities from ASC
        Log("Found AbilitySystemComponent")
    end
    
    return abilities
end

--[[============================================================================
    Events Module
============================================================================]]--

--- Register callback for player spawn
--- @param callback function Callback function(player)
function VTMB2.Events.OnPlayerSpawn(callback)
    table.insert(_internal.callbacks.onPlayerSpawn, callback)
end

--- Register callback for combat start
--- @param callback function Callback function()
function VTMB2.Events.OnCombatStart(callback)
    table.insert(_internal.callbacks.onCombatStart, callback)
end

--- Register callback for dialogue start
--- @param callback function Callback function(dialogueData)
function VTMB2.Events.OnDialogueStart(callback)
    table.insert(_internal.callbacks.onDialogueStart, callback)
end

--- Register callback for quest updates
--- @param callback function Callback function(questData)
function VTMB2.Events.OnQuestUpdate(callback)
    table.insert(_internal.callbacks.onQuestUpdate, callback)
end

-- Internal event triggers (called by VTMB2SE_Core)
function VTMB2.Events._OnPlayerSpawn(player)
    _internal.player = player
    for _, callback in ipairs(_internal.callbacks.onPlayerSpawn) do
        pcall(callback, player)
    end
end

function VTMB2.Events._OnPlayerRestart(controller)
    _internal.playerController = controller
    for _, callback in ipairs(_internal.callbacks.onPlayerRestart) do
        pcall(callback, controller)
    end
end

--[[============================================================================
    World Module
============================================================================]]--

--- Find all actors of a given class
--- @param className string The class name to search for
--- @return table Array of actors
function VTMB2.World.FindAllOfClass(className)
    local actors = {}
    local found = FindAllOf(className)
    if found then
        for _, actor in ipairs(found) do
            if actor:IsValid() then
                table.insert(actors, actor)
            end
        end
    end
    return actors
end

--- Find first actor of a given class
--- @param className string The class name to search for
--- @return userdata|nil Actor or nil
function VTMB2.World.FindFirstOfClass(className)
    local actor = FindFirstOf(className)
    if actor and actor:IsValid() then
        return actor
    end
    return nil
end

--- Get all enemy characters
--- @return table Array of enemy actors
function VTMB2.World.GetAllEnemies()
    local enemies = {}
    
    -- VTMB2 enemy class names
    local enemyClasses = {
        "BP_EnemyCharacterBase_C",
        "BP_EnemyBoss_C",
        "AIController"
    }
    
    for _, className in ipairs(enemyClasses) do
        local found = VTMB2.World.FindAllOfClass(className)
        for _, enemy in ipairs(found) do
            table.insert(enemies, enemy)
        end
    end
    
    return enemies
end

--- Get all NPCs (non-enemy characters)
--- @return table Array of NPC actors
function VTMB2.World.GetAllNPCs()
    -- TODO: Implement based on VTMB2 NPC classes
    return {}
end

return VTMB2
