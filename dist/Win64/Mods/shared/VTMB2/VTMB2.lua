--[[
    VTMB2 API - Main Module (Extended)
    
    High-level Lua API for Vampire: The Masquerade - Bloodlines 2
    
    Usage:
        local VTMB2 = require("VTMB2.VTMB2")
        local player = VTMB2.GetPlayer()
]]--

local VTMB2 = {}
VTMB2.Version = "0.2.0"
VTMB2.Initialized = false

-- Sub-modules
VTMB2.Player = {}
VTMB2.Attributes = {}
VTMB2.Movement = {}
VTMB2.Abilities = {}
VTMB2.Combat = {}
VTMB2.Dialogue = {}
VTMB2.Quest = {}
VTMB2.World = {}
VTMB2.Events = {}

-- Internal state
local _internal = {
    player = nil,
    playerController = nil,
    attributeSet = nil,
    movementComponent = nil,
    callbacks = {
        onPlayerSpawn = {},
        onPlayerRestart = {},
        onHealthChanged = {},
        onBloodChanged = {},
        onCombatStart = {},
        onCombatEnd = {},
        onDialogueStart = {},
        onDialogueEnd = {},
        onQuestUpdate = {},
        onDeath = {},
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
    local success, Utils = pcall(function() return require("VTMB2.Utils") end)
    if success then VTMB2.Utils = Utils end
    
    success, Config = pcall(function() return require("VTMB2.Config") end)
    if success then VTMB2.Config = Config end
    
    VTMB2.Initialized = true
    Log("VTMB2 API initialized")
    
    return true
end

--- Get the player character
--- @return userdata|nil Player character or nil if not found
function VTMB2.GetPlayer()
    if _internal.player and _internal.player:IsValid() then
        return _internal.player
    end
    
    -- VTMB2 player class names (in order of specificity)
    local playerClassNames = {
        "BP_WrestlerTestPlayerCharacter_C",
        "BP_WrestlerPlayerCharacter_C",
        "WrestlerPlayerCharacter_C",
        "WrestlerCharacter_C",
        "Character",
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
    if _internal.playerController and _internal.playerController:IsValid() then
        return _internal.playerController
    end
    
    local controllerClassNames = {
        "BP_WrestlerPlayerControllerInGame_C",
        "WrestlerControllerInGame_C",
        "AWrestlerControllerInGame",
        "WrestlerPlayerController_C",
        "PlayerController",
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
    _internal.attributeSet = nil
    _internal.movementComponent = nil
    Log("Cache cleared")
end

--[[============================================================================
    Attributes Module - Player Stats (GAS AttributeSet)
    
    Based on UWrestlerAttributeSet from headers:
    - Health, MaxHealth
    - Blood, MaxBlood  
    - Shield, MaxShield
    - Stun, MaxStun
    - Armor, MaxArmor
    - WalkSpeed, SprintSpeed, CrouchSpeed
    - AttackPower, Damage
    - And more...
============================================================================]]--

--- Get the player's attribute set
--- @return userdata|nil WrestlerAttributeSet or nil
function VTMB2.Attributes.GetAttributeSet()
    if _internal.attributeSet and _internal.attributeSet:IsValid() then
        return _internal.attributeSet
    end
    
    local player = VTMB2.GetPlayer()
    if not player then return nil end
    
    -- Try different ways to access the attribute set
    local attrSetNames = {
        "WrestlerAttributeSet",
        "AttributeSet",
    }
    
    for _, name in ipairs(attrSetNames) do
        local attrSet = player[name]
        if attrSet and attrSet:IsValid() then
            _internal.attributeSet = attrSet
            return attrSet
        end
    end
    
    -- Try via AbilitySystemComponent
    local asc = player.AbilitySystemComponent
    if asc and asc:IsValid() then
        -- ASC holds reference to attribute sets
        local attrSet = asc.WrestlerAttributeSet
        if attrSet and attrSet:IsValid() then
            _internal.attributeSet = attrSet
            return attrSet
        end
    end
    
    return nil
end

--- Get an attribute value by name
--- @param attrName string Attribute name (e.g., "Health", "Blood")
--- @return number|nil Value or nil
function VTMB2.Attributes.Get(attrName)
    local attrSet = VTMB2.Attributes.GetAttributeSet()
    if not attrSet then return nil end
    
    local attr = attrSet[attrName]
    if attr then
        -- GAS attributes use FGameplayAttributeData with CurrentValue
        if type(attr) == "table" or type(attr) == "userdata" then
            if attr.CurrentValue then
                return attr.CurrentValue
            elseif attr.BaseValue then
                return attr.BaseValue
            end
        end
        return attr
    end
    return nil
end

--- Set an attribute value by name
--- @param attrName string Attribute name
--- @param value number Value to set
--- @return boolean Success
function VTMB2.Attributes.Set(attrName, value)
    local attrSet = VTMB2.Attributes.GetAttributeSet()
    if not attrSet then return false end
    
    local attr = attrSet[attrName]
    if attr then
        if type(attr) == "table" or type(attr) == "userdata" then
            if attr.CurrentValue ~= nil then
                attr.CurrentValue = value
                return true
            elseif attr.BaseValue ~= nil then
                attr.BaseValue = value
                return true
            end
        end
        attrSet[attrName] = value
        return true
    end
    return false
end

-- Health
function VTMB2.Attributes.GetHealth() return VTMB2.Attributes.Get("Health") end
function VTMB2.Attributes.SetHealth(v) return VTMB2.Attributes.Set("Health", v) end
function VTMB2.Attributes.GetMaxHealth() return VTMB2.Attributes.Get("MaxHealth") end
function VTMB2.Attributes.SetMaxHealth(v) return VTMB2.Attributes.Set("MaxHealth", v) end
function VTMB2.Attributes.GetHealthRegenRate() return VTMB2.Attributes.Get("HealthRegenRate") end
function VTMB2.Attributes.SetHealthRegenRate(v) return VTMB2.Attributes.Set("HealthRegenRate", v) end

-- Blood (vampire resource)
function VTMB2.Attributes.GetBlood() return VTMB2.Attributes.Get("Blood") end
function VTMB2.Attributes.SetBlood(v) return VTMB2.Attributes.Set("Blood", v) end
function VTMB2.Attributes.GetMaxBlood() return VTMB2.Attributes.Get("MaxBlood") end
function VTMB2.Attributes.SetMaxBlood(v) return VTMB2.Attributes.Set("MaxBlood", v) end

-- Shield
function VTMB2.Attributes.GetShield() return VTMB2.Attributes.Get("Shield") end
function VTMB2.Attributes.SetShield(v) return VTMB2.Attributes.Set("Shield", v) end
function VTMB2.Attributes.GetMaxShield() return VTMB2.Attributes.Get("MaxShield") end
function VTMB2.Attributes.SetMaxShield(v) return VTMB2.Attributes.Set("MaxShield", v) end

-- Stun
function VTMB2.Attributes.GetStun() return VTMB2.Attributes.Get("stun") end  -- lowercase in header
function VTMB2.Attributes.SetStun(v) return VTMB2.Attributes.Set("stun", v) end
function VTMB2.Attributes.GetMaxStun() return VTMB2.Attributes.Get("MaxStun") end
function VTMB2.Attributes.GetStunResistance() return VTMB2.Attributes.Get("StunResistance") end
function VTMB2.Attributes.SetStunResistance(v) return VTMB2.Attributes.Set("StunResistance", v) end

-- Armor
function VTMB2.Attributes.GetArmor() return VTMB2.Attributes.Get("Armor") end
function VTMB2.Attributes.SetArmor(v) return VTMB2.Attributes.Set("Armor", v) end
function VTMB2.Attributes.GetMaxArmor() return VTMB2.Attributes.Get("MaxArmor") end
function VTMB2.Attributes.SetMaxArmor(v) return VTMB2.Attributes.Set("MaxArmor", v) end

-- Combat stats
function VTMB2.Attributes.GetAttackPower() return VTMB2.Attributes.Get("AttackPower") end
function VTMB2.Attributes.SetAttackPower(v) return VTMB2.Attributes.Set("AttackPower", v) end
function VTMB2.Attributes.GetDamage() return VTMB2.Attributes.Get("Damage") end
function VTMB2.Attributes.SetDamage(v) return VTMB2.Attributes.Set("Damage", v) end
function VTMB2.Attributes.GetDamageCap() return VTMB2.Attributes.Get("DamageCap") end

-- Ability-specific blood pools
function VTMB2.Attributes.GetStrikeAbilityBlood() return VTMB2.Attributes.Get("StrikeAbilityBlood") end
function VTMB2.Attributes.GetRelocateAbilityBlood() return VTMB2.Attributes.Get("RelocateAbilityBlood") end
function VTMB2.Attributes.GetMasteryAbilityBlood() return VTMB2.Attributes.Get("MasteryAbilityBlood") end
function VTMB2.Attributes.GetAffectAbilityBlood() return VTMB2.Attributes.Get("AffectAbilityBlood") end

-- Ammo
function VTMB2.Attributes.GetAmmo() return VTMB2.Attributes.Get("Ammo") end
function VTMB2.Attributes.SetAmmo(v) return VTMB2.Attributes.Set("Ammo", v) end
function VTMB2.Attributes.GetMaxAmmo() return VTMB2.Attributes.Get("MaxAmmo") end

-- Stealth
function VTMB2.Attributes.GetNoticeability() return VTMB2.Attributes.Get("Noticeability") end
function VTMB2.Attributes.SetNoticeability(v) return VTMB2.Attributes.Set("Noticeability", v) end

--- Get all attributes as a table
--- @return table Table of attribute name -> value
function VTMB2.Attributes.GetAll()
    local attrs = {}
    local attrNames = {
        "Health", "MaxHealth", "HealthRegenRate", "HealthRegenValue", "HealthFragility",
        "Blood", "MaxBlood",
        "Shield", "MaxShield",
        "stun", "MaxStun", "StunDamage", "StunResistance", "MaxStunResistance", "StunFragility",
        "Armor", "MaxArmor", "ArmorDamage",
        "AttackPower", "Damage", "DamageCap",
        "Ammo", "MaxAmmo",
        "WalkSpeed", "SprintSpeed", "CrouchSpeed", "SlideMinSpeed",
        "AccelerationRate", "TurnRate",
        "StrikeAbilityBlood", "MaxStrikeAbilityBlood",
        "RelocateAbilityBlood", "MaxRelocateAbilityBlood",
        "MasteryAbilityBlood", "MaxMasteryAbilityBlood",
        "AffectAbilityBlood", "MaxAffectAbilityBlood",
        "Noticeability",
    }
    
    for _, name in ipairs(attrNames) do
        local value = VTMB2.Attributes.Get(name)
        if value ~= nil then
            attrs[name] = value
        end
    end
    
    return attrs
end

--[[============================================================================
    Player Module - Convenience wrappers for common operations
============================================================================]]--

-- Health (convenience - wraps Attributes)
function VTMB2.Player.GetHealth() return VTMB2.Attributes.GetHealth() end
function VTMB2.Player.SetHealth(v) return VTMB2.Attributes.SetHealth(v) end
function VTMB2.Player.GetMaxHealth() return VTMB2.Attributes.GetMaxHealth() end
function VTMB2.Player.SetMaxHealth(v) return VTMB2.Attributes.SetMaxHealth(v) end

-- Blood (convenience - wraps Attributes)
function VTMB2.Player.GetBlood() return VTMB2.Attributes.GetBlood() end
function VTMB2.Player.SetBlood(v) return VTMB2.Attributes.SetBlood(v) end
function VTMB2.Player.GetMaxBlood() return VTMB2.Attributes.GetMaxBlood() end
function VTMB2.Player.SetMaxBlood(v) return VTMB2.Attributes.SetMaxBlood(v) end

--- Check if player is dead
--- @return boolean True if dead
function VTMB2.Player.IsDead()
    local player = VTMB2.GetPlayer()
    if not player then return true end
    
    -- Try IsDead method
    if player.IsDead then
        local success, result = pcall(function() return player:IsDead() end)
        if success then return result end
    end
    
    -- Fallback to health check
    local health = VTMB2.Player.GetHealth()
    return health ~= nil and health <= 0
end

--- Check if player is in combat
--- @return boolean True if in combat
function VTMB2.Player.IsInCombat()
    local player = VTMB2.GetPlayer()
    if not player then return false end
    
    -- Check for OutOfCombat state (inverse)
    if player.CheckForCombat ~= nil then
        return player.CheckForCombat
    end
    
    -- Try tags
    if player.OutOfCombatTag then
        -- If has out of combat tag, not in combat
        return false
    end
    
    return false  -- Default
end

--- Get player's movement component
--- @return userdata|nil Movement component or nil
function VTMB2.Player.GetMovementComponent()
    if _internal.movementComponent and _internal.movementComponent:IsValid() then
        return _internal.movementComponent
    end
    
    local player = VTMB2.GetPlayer()
    if not player then return nil end
    
    local movementNames = {
        "CharacterMovement",
        "WrestlerMovementComponent", 
        "MovementComponent"
    }
    
    for _, name in ipairs(movementNames) do
        local movement = player[name]
        if movement and movement:IsValid() then
            _internal.movementComponent = movement
            return movement
        end
    end
    
    return nil
end

--- Get player's attribute set (direct access)
function VTMB2.Player.GetAttributeSet()
    return VTMB2.Attributes.GetAttributeSet()
end

--[[============================================================================
    Movement Module - WrestlerMovementComponent
============================================================================]]--

--- Get walk speed
function VTMB2.Movement.GetWalkSpeed()
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        return movement.MaxWalkSpeed
    end
    return VTMB2.Attributes.Get("WalkSpeed")
end

--- Set walk speed
function VTMB2.Movement.SetWalkSpeed(speed)
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        movement.MaxWalkSpeed = speed
        return true
    end
    return false
end

--- Get sprint speed
function VTMB2.Movement.GetSprintSpeed()
    local movement = VTMB2.Player.GetMovementComponent()
    if movement and movement.GetMaxSprintSpeed then
        local success, result = pcall(function() return movement:GetMaxSprintSpeed() end)
        if success then return result end
    end
    return VTMB2.Attributes.Get("SprintSpeed")
end

--- Set sprint speed (via attributes)
function VTMB2.Movement.SetSprintSpeed(speed)
    return VTMB2.Attributes.Set("SprintSpeed", speed)
end

--- Get crouch speed
function VTMB2.Movement.GetCrouchSpeed()
    return VTMB2.Attributes.Get("CrouchSpeed")
end

--- Set crouch speed
function VTMB2.Movement.SetCrouchSpeed(speed)
    return VTMB2.Attributes.Set("CrouchSpeed", speed)
end

--- Get jump Z velocity
function VTMB2.Movement.GetJumpZVelocity()
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        return movement.JumpZVelocity
    end
    return nil
end

--- Set jump Z velocity
function VTMB2.Movement.SetJumpZVelocity(velocity)
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        movement.JumpZVelocity = velocity
        return true
    end
    return false
end

--- Get gravity scale
function VTMB2.Movement.GetGravityScale()
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        return movement.GravityScale
    end
    return nil
end

--- Set gravity scale
function VTMB2.Movement.SetGravityScale(scale)
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        movement.GravityScale = scale
        return true
    end
    return false
end

--- Get acceleration rate
function VTMB2.Movement.GetAcceleration()
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        return movement.MaxAcceleration
    end
    return VTMB2.Attributes.Get("AccelerationRate")
end

--- Set acceleration rate
function VTMB2.Movement.SetAcceleration(accel)
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        movement.MaxAcceleration = accel
        return true
    end
    return false
end

--- Get ground friction
function VTMB2.Movement.GetGroundFriction()
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        return movement.GroundFriction
    end
    return nil
end

--- Set ground friction
function VTMB2.Movement.SetGroundFriction(friction)
    local movement = VTMB2.Player.GetMovementComponent()
    if movement then
        movement.GroundFriction = friction
        return true
    end
    return false
end

--- Check if gliding
function VTMB2.Movement.IsGliding()
    local player = VTMB2.GetPlayer()
    if player and player.GlideTag then
        return true  -- Has glide tag
    end
    return false
end

--- Check if sprinting
function VTMB2.Movement.IsSprinting()
    local player = VTMB2.GetPlayer()
    if player and player.SprintTag then
        return true
    end
    return false
end

--- Check if crouching
function VTMB2.Movement.IsCrouching()
    local player = VTMB2.GetPlayer()
    if player and player.CrouchTag then
        return true
    end
    local movement = VTMB2.Player.GetMovementComponent()
    if movement and movement.IsCrouching then
        local success, result = pcall(function() return movement:IsCrouching() end)
        if success then return result end
    end
    return false
end

-- Convenience - wrap in Player module too
function VTMB2.Player.GetWalkSpeed() return VTMB2.Movement.GetWalkSpeed() end
function VTMB2.Player.SetWalkSpeed(v) return VTMB2.Movement.SetWalkSpeed(v) end

--[[============================================================================
    Combat Module
============================================================================]]--

--- Get attack power
function VTMB2.Combat.GetAttackPower()
    return VTMB2.Attributes.GetAttackPower()
end

--- Set attack power
function VTMB2.Combat.SetAttackPower(power)
    return VTMB2.Attributes.SetAttackPower(power)
end

--- Get damage value
function VTMB2.Combat.GetDamage()
    return VTMB2.Attributes.GetDamage()
end

--- Set damage value
function VTMB2.Combat.SetDamage(damage)
    return VTMB2.Attributes.SetDamage(damage)
end

--- Get stun resistance
function VTMB2.Combat.GetStunResistance()
    return VTMB2.Attributes.GetStunResistance()
end

--- Set stun resistance
function VTMB2.Combat.SetStunResistance(resistance)
    return VTMB2.Attributes.SetStunResistance(resistance)
end

--[[============================================================================
    Abilities Module - Gameplay Ability System
============================================================================]]--

--- Get Ability System Component
--- @return userdata|nil ASC or nil
function VTMB2.Abilities.GetASC()
    local player = VTMB2.GetPlayer()
    if not player then return nil end
    
    local asc = player.AbilitySystemComponent
    if asc and asc:IsValid() then
        return asc
    end
    
    return nil
end

--- Get all active abilities (placeholder - needs GAS integration)
--- @return table Array of ability info
function VTMB2.Abilities.GetAll()
    local abilities = {}
    local asc = VTMB2.Abilities.GetASC()
    if asc then
        -- TODO: Iterate abilities from ASC
        Log("Found AbilitySystemComponent - ability enumeration pending")
    end
    return abilities
end

--[[============================================================================
    Dialogue Module - Hera Dialogue System
============================================================================]]--

--- Get dialogue subsystem/manager
--- @return userdata|nil Dialogue manager or nil
function VTMB2.Dialogue.GetManager()
    local managers = {
        "HeraDialogueManager",
        "HeraDialogueSubsystem",
    }
    
    for _, name in ipairs(managers) do
        local manager = FindFirstOf(name)
        if manager and manager:IsValid() then
            return manager
        end
    end
    
    return nil
end

--- Check if dialogue is active
--- @return boolean True if in dialogue
function VTMB2.Dialogue.IsActive()
    local manager = VTMB2.Dialogue.GetManager()
    if manager then
        -- Check for active dialogue state
        if manager.IsDialogueActive then
            local success, result = pcall(function() return manager:IsDialogueActive() end)
            if success then return result end
        end
    end
    return false
end

--[[============================================================================
    Events Module
============================================================================]]--

function VTMB2.Events.OnPlayerSpawn(callback)
    table.insert(_internal.callbacks.onPlayerSpawn, callback)
end

function VTMB2.Events.OnHealthChanged(callback)
    table.insert(_internal.callbacks.onHealthChanged, callback)
end

function VTMB2.Events.OnBloodChanged(callback)
    table.insert(_internal.callbacks.onBloodChanged, callback)
end

function VTMB2.Events.OnCombatStart(callback)
    table.insert(_internal.callbacks.onCombatStart, callback)
end

function VTMB2.Events.OnCombatEnd(callback)
    table.insert(_internal.callbacks.onCombatEnd, callback)
end

function VTMB2.Events.OnDialogueStart(callback)
    table.insert(_internal.callbacks.onDialogueStart, callback)
end

function VTMB2.Events.OnDialogueEnd(callback)
    table.insert(_internal.callbacks.onDialogueEnd, callback)
end

function VTMB2.Events.OnQuestUpdate(callback)
    table.insert(_internal.callbacks.onQuestUpdate, callback)
end

function VTMB2.Events.OnDeath(callback)
    table.insert(_internal.callbacks.onDeath, callback)
end

-- Internal event triggers
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

function VTMB2.Events._OnHealthChanged(current, max)
    for _, callback in ipairs(_internal.callbacks.onHealthChanged) do
        pcall(callback, current, max)
    end
end

function VTMB2.Events._OnBloodChanged(current, max)
    for _, callback in ipairs(_internal.callbacks.onBloodChanged) do
        pcall(callback, current, max)
    end
end

--[[============================================================================
    World Module
============================================================================]]--

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
    local enemyClasses = {
        "WrestlerEnemyCharacter",
        "AWrestlerEnemyCharacter",
        "BP_EnemyCharacterBase_C",
    }
    
    for _, className in ipairs(enemyClasses) do
        local found = VTMB2.World.FindAllOfClass(className)
        for _, enemy in ipairs(found) do
            table.insert(enemies, enemy)
        end
    end
    
    return enemies
end

--- Get all NPCs
--- @return table Array of NPC actors
function VTMB2.World.GetAllNPCs()
    local npcs = {}
    local npcClasses = {
        "WrestlerAICharacter",
        "AWrestlerAICharacter",
        "WrestlerCrowdCharacter",
    }
    
    for _, className in ipairs(npcClasses) do
        local found = VTMB2.World.FindAllOfClass(className)
        for _, npc in ipairs(found) do
            table.insert(npcs, npc)
        end
    end
    
    return npcs
end

--- Get game mode
--- @return userdata|nil Game mode or nil
function VTMB2.World.GetGameMode()
    local gameModes = {
        "WrestlerGameMode",
        "AWrestlerGameMode",
        "GameModeBase",
    }
    
    for _, name in ipairs(gameModes) do
        local gm = FindFirstOf(name)
        if gm and gm:IsValid() then
            return gm
        end
    end
    
    return nil
end

--- Get game state
--- @return userdata|nil Game state or nil
function VTMB2.World.GetGameState()
    local gameStates = {
        "WrestlerGameState",
        "AWrestlerGameState",
        "GameStateBase",
    }
    
    for _, name in ipairs(gameStates) do
        local gs = FindFirstOf(name)
        if gs and gs:IsValid() then
            return gs
        end
    end
    
    return nil
end

--- Get cheat manager
--- @return userdata|nil Cheat manager or nil
function VTMB2.World.GetCheatManager()
    local controller = VTMB2.GetPlayerController()
    if controller then
        local cm = controller.CheatManager
        if cm and cm:IsValid() then
            return cm
        end
    end
    
    -- Try direct find
    local cms = {
        "WrestlerCheatManager",
        "CheatManager",
    }
    
    for _, name in ipairs(cms) do
        local cm = FindFirstOf(name)
        if cm and cm:IsValid() then
            return cm
        end
    end
    
    return nil
end

return VTMB2
