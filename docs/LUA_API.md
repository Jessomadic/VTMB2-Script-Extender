# VTMB2SE Lua API Reference

Complete API documentation for the VTMB2 Script Extender.

---

## Quick Start

```lua
local VTMB2 = require("VTMB2.VTMB2")

-- Initialize (called automatically, but can be explicit)
VTMB2.Initialize()

-- Get player and check stats
local player = VTMB2.GetPlayer()
local health = VTMB2.Player.GetHealth()
local blood = VTMB2.Player.GetBlood()

-- Modify stats
VTMB2.Movement.SetWalkSpeed(1000)
VTMB2.Attributes.SetHealth(500)
```

---

## Core Functions

### VTMB2.Initialize()

Initialize the API. Called automatically when the module loads.

```lua
VTMB2.Initialize()
```

**Returns:** `boolean` - Success status

---

### VTMB2.GetPlayer()

Get the player character.

```lua
local player = VTMB2.GetPlayer()
```

**Returns:** `userdata|nil` - Player character object or nil

---

### VTMB2.GetPlayerController()

Get the player controller.

```lua
local controller = VTMB2.GetPlayerController()
```

**Returns:** `userdata|nil` - Player controller object or nil

---

### VTMB2.ClearCache()

Clear cached references. Useful after level transitions.

```lua
VTMB2.ClearCache()
```

---

## Attributes Module

Access to all GAS (Gameplay Ability System) attributes.

### VTMB2.Attributes.GetAttributeSet()

Get the player's attribute set directly.

```lua
local attrSet = VTMB2.Attributes.GetAttributeSet()
```

**Returns:** `userdata|nil` - UWrestlerAttributeSet or nil

---

### VTMB2.Attributes.Get(name)

Get any attribute by name.

```lua
local health = VTMB2.Attributes.Get("Health")
local blood = VTMB2.Attributes.Get("Blood")
```

**Parameters:**
- `name` (string) - Attribute name (e.g., "Health", "Blood", "MaxHealth")

**Returns:** `number|nil` - Attribute value or nil

---

### VTMB2.Attributes.Set(name, value)

Set any attribute by name.

```lua
VTMB2.Attributes.Set("Health", 500)
```

**Parameters:**
- `name` (string) - Attribute name
- `value` (number) - New value

**Returns:** `boolean` - Success

---

### VTMB2.Attributes.GetAll()

Get all attributes as a table.

```lua
local attrs = VTMB2.Attributes.GetAll()
for name, value in pairs(attrs) do
    print(name .. ": " .. value)
end
```

**Returns:** `table` - Map of attribute name to value

---

### Health Attributes

| Function | Description |
|----------|-------------|
| `GetHealth()` / `SetHealth(v)` | Current health |
| `GetMaxHealth()` / `SetMaxHealth(v)` | Maximum health |
| `GetHealthRegenRate()` / `SetHealthRegenRate(v)` | Regeneration rate |

```lua
local hp = VTMB2.Attributes.GetHealth()
VTMB2.Attributes.SetHealth(VTMB2.Attributes.GetMaxHealth())  -- Full heal
```

---

### Blood Attributes

| Function | Description |
|----------|-------------|
| `GetBlood()` / `SetBlood(v)` | Current blood |
| `GetMaxBlood()` / `SetMaxBlood(v)` | Maximum blood |

```lua
local blood = VTMB2.Attributes.GetBlood()
VTMB2.Attributes.SetBlood(1000)  -- Refill blood
```

---

### Shield Attributes

| Function | Description |
|----------|-------------|
| `GetShield()` / `SetShield(v)` | Current shield |
| `GetMaxShield()` / `SetMaxShield(v)` | Maximum shield |

---

### Stun Attributes

| Function | Description |
|----------|-------------|
| `GetStun()` / `SetStun(v)` | Current stun value |
| `GetMaxStun()` | Maximum stun |
| `GetStunResistance()` / `SetStunResistance(v)` | Stun resistance |

---

### Armor Attributes

| Function | Description |
|----------|-------------|
| `GetArmor()` / `SetArmor(v)` | Current armor |
| `GetMaxArmor()` / `SetMaxArmor(v)` | Maximum armor |

---

### Combat Attributes

| Function | Description |
|----------|-------------|
| `GetAttackPower()` / `SetAttackPower(v)` | Attack power |
| `GetDamage()` / `SetDamage(v)` | Damage output |
| `GetDamageCap()` | Maximum damage |

---

### Ammo Attributes

| Function | Description |
|----------|-------------|
| `GetAmmo()` / `SetAmmo(v)` | Current ammo |
| `GetMaxAmmo()` | Maximum ammo |

---

### Stealth Attributes

| Function | Description |
|----------|-------------|
| `GetNoticeability()` / `SetNoticeability(v)` | Detection level |

---

### Ability Blood Pools

```lua
VTMB2.Attributes.GetStrikeAbilityBlood()
VTMB2.Attributes.GetRelocateAbilityBlood()
VTMB2.Attributes.GetMasteryAbilityBlood()
VTMB2.Attributes.GetAffectAbilityBlood()
```

---

## Player Module

Convenience wrappers for common player operations.

### VTMB2.Player.GetHealth() / SetHealth(v)

```lua
local health = VTMB2.Player.GetHealth()
VTMB2.Player.SetHealth(500)
```

---

### VTMB2.Player.GetBlood() / SetBlood(v)

```lua
local blood = VTMB2.Player.GetBlood()
VTMB2.Player.SetBlood(1000)
```

---

### VTMB2.Player.IsDead()

Check if the player is dead.

```lua
if VTMB2.Player.IsDead() then
    print("Player is dead!")
end
```

**Returns:** `boolean`

---

### VTMB2.Player.IsInCombat()

Check if the player is in combat.

```lua
if VTMB2.Player.IsInCombat() then
    print("Combat active!")
end
```

**Returns:** `boolean`

---

### VTMB2.Player.GetMovementComponent()

Get the player's movement component.

```lua
local movement = VTMB2.Player.GetMovementComponent()
movement.MaxWalkSpeed = 1000
```

**Returns:** `userdata|nil` - Movement component

---

### VTMB2.Player.GetAttributeSet()

Get the player's attribute set.

```lua
local attrs = VTMB2.Player.GetAttributeSet()
```

**Returns:** `userdata|nil` - Attribute set

---

## Movement Module

Control player movement properties.

### Speed Functions

| Function | Description |
|----------|-------------|
| `GetWalkSpeed()` / `SetWalkSpeed(v)` | Walk speed |
| `GetSprintSpeed()` / `SetSprintSpeed(v)` | Sprint speed |
| `GetCrouchSpeed()` / `SetCrouchSpeed(v)` | Crouch speed |

```lua
-- Double walk speed
local current = VTMB2.Movement.GetWalkSpeed()
VTMB2.Movement.SetWalkSpeed(current * 2)
```

---

### Jump and Gravity

| Function | Description |
|----------|-------------|
| `GetJumpZVelocity()` / `SetJumpZVelocity(v)` | Jump height |
| `GetGravityScale()` / `SetGravityScale(v)` | Gravity multiplier |

```lua
-- Super jump
VTMB2.Movement.SetJumpZVelocity(1500)

-- Low gravity
VTMB2.Movement.SetGravityScale(0.5)
```

---

### Acceleration and Friction

| Function | Description |
|----------|-------------|
| `GetAcceleration()` / `SetAcceleration(v)` | Movement acceleration |
| `GetGroundFriction()` / `SetGroundFriction(v)` | Ground friction |

---

### Movement State

| Function | Returns | Description |
|----------|---------|-------------|
| `IsGliding()` | boolean | Check if gliding |
| `IsSprinting()` | boolean | Check if sprinting |
| `IsCrouching()` | boolean | Check if crouching |

```lua
if VTMB2.Movement.IsSprinting() then
    print("Player is sprinting!")
end
```

---

## Combat Module

Combat-related functions.

### VTMB2.Combat.GetAttackPower() / SetAttackPower(v)

```lua
local power = VTMB2.Combat.GetAttackPower()
VTMB2.Combat.SetAttackPower(power * 2)  -- Double damage
```

---

### VTMB2.Combat.GetDamage() / SetDamage(v)

```lua
VTMB2.Combat.SetDamage(9999)  -- One-hit kills
```

---

### VTMB2.Combat.GetStunResistance() / SetStunResistance(v)

```lua
VTMB2.Combat.SetStunResistance(1000)  -- Immune to stun
```

---

## Abilities Module

Gameplay Ability System access.

### VTMB2.Abilities.GetASC()

Get the Ability System Component.

```lua
local asc = VTMB2.Abilities.GetASC()
```

**Returns:** `userdata|nil` - AbilitySystemComponent

---

### VTMB2.Abilities.GetAll()

Get all active abilities (placeholder - requires GAS integration).

```lua
local abilities = VTMB2.Abilities.GetAll()
```

**Returns:** `table` - Array of ability info

---

## Dialogue Module

Hera Dialogue System access.

### VTMB2.Dialogue.GetManager()

Get the dialogue manager.

```lua
local manager = VTMB2.Dialogue.GetManager()
```

**Returns:** `userdata|nil` - Dialogue manager

---

### VTMB2.Dialogue.IsActive()

Check if dialogue is currently active.

```lua
if VTMB2.Dialogue.IsActive() then
    print("In dialogue!")
end
```

**Returns:** `boolean`

---

## World Module

World queries and game state access.

### VTMB2.World.FindAllOfClass(className)

Find all actors of a class.

```lua
local enemies = VTMB2.World.FindAllOfClass("WrestlerEnemyCharacter")
```

**Parameters:**
- `className` (string) - Class name to search for

**Returns:** `table` - Array of actors

---

### VTMB2.World.FindFirstOfClass(className)

Find the first actor of a class.

```lua
local enemy = VTMB2.World.FindFirstOfClass("WrestlerEnemyCharacter")
```

**Returns:** `userdata|nil` - Actor or nil

---

### VTMB2.World.GetAllEnemies()

Get all enemy characters.

```lua
local enemies = VTMB2.World.GetAllEnemies()
print("Enemy count: " .. #enemies)
```

**Returns:** `table` - Array of enemy actors

---

### VTMB2.World.GetAllNPCs()

Get all NPC characters.

```lua
local npcs = VTMB2.World.GetAllNPCs()
```

**Returns:** `table` - Array of NPC actors

---

### VTMB2.World.GetGameMode()

Get the current game mode.

```lua
local gm = VTMB2.World.GetGameMode()
```

**Returns:** `userdata|nil` - Game mode

---

### VTMB2.World.GetGameState()

Get the current game state.

```lua
local gs = VTMB2.World.GetGameState()
```

**Returns:** `userdata|nil` - Game state

---

### VTMB2.World.GetCheatManager()

Get the cheat manager.

```lua
local cm = VTMB2.World.GetCheatManager()
```

**Returns:** `userdata|nil` - Cheat manager

---

## Events Module

Register callbacks for game events.

### VTMB2.Events.OnPlayerSpawn(callback)

Called when the player spawns.

```lua
VTMB2.Events.OnPlayerSpawn(function(player)
    print("Player spawned: " .. player:GetFullName())
end)
```

---

### VTMB2.Events.OnHealthChanged(callback)

Called when health changes.

```lua
VTMB2.Events.OnHealthChanged(function(current, max)
    print("Health: " .. current .. "/" .. max)
end)
```

---

### VTMB2.Events.OnBloodChanged(callback)

Called when blood changes.

```lua
VTMB2.Events.OnBloodChanged(function(current, max)
    print("Blood: " .. current .. "/" .. max)
end)
```

---

### VTMB2.Events.OnCombatStart(callback) / OnCombatEnd(callback)

Called when entering/leaving combat.

```lua
VTMB2.Events.OnCombatStart(function()
    print("Combat started!")
end)
```

---

### VTMB2.Events.OnDialogueStart(callback) / OnDialogueEnd(callback)

Called when dialogue starts/ends.

```lua
VTMB2.Events.OnDialogueStart(function()
    print("Dialogue started!")
end)
```

---

### VTMB2.Events.OnDeath(callback)

Called when the player dies.

```lua
VTMB2.Events.OnDeath(function()
    print("Player died!")
end)
```

---

## Utility Module

Helper functions for common operations.

### Utils.CreateLogger(prefix)

Create a logger with a prefix.

```lua
local Utils = require("VTMB2.Utils")
local Log = Utils.CreateLogger("MyMod")

Log.Log("Hello!")     -- [MyMod] Hello!
Log.Warn("Warning!")  -- [MyMod][WARN] Warning!
Log.Error("Error!")   -- [MyMod][ERROR] Error!
```

---

### Utils.IsValid(object)

Check if an object is valid.

```lua
if Utils.IsValid(player) then
    -- Safe to use player
end
```

---

### Utils.SafeGet(object, property, default)

Safely get a property with default.

```lua
local speed = Utils.SafeGet(movement, "MaxWalkSpeed", 600)
```

---

### Utils.Delay(ms, callback)

Execute a function after a delay.

```lua
Utils.Delay(1000, function()
    print("1 second later!")
end)
```

---

### Utils.SetInterval(ms, callback)

Execute a function repeatedly.

```lua
local id = Utils.SetInterval(1000, function()
    print("Every second!")
    return true  -- Return false to stop
end)
```

---

## Config Module

JSON-based configuration system.

### Config.CreateManager(modPath, defaults)

Create a config manager for your mod.

```lua
local Config = require("VTMB2.Config")
local config = Config.CreateManager("Mods/MyMod", {
    speed = 600,
    godMode = false
})

config:Load()
local speed = config:Get("speed")
config:Set("speed", 1200)
config:Save()
```

---

## Complete Example

```lua
local VTMB2 = require("VTMB2.VTMB2")
local Utils = require("VTMB2.Utils")

local Log = Utils.CreateLogger("MyMod")

-- Configuration
local Config = {
    speedMultiplier = 1.5,
    godMode = false
}

-- On player spawn
VTMB2.Events.OnPlayerSpawn(function(player)
    Log.Log("Player loaded!")
    
    -- Apply speed boost
    local speed = VTMB2.Movement.GetWalkSpeed() or 600
    VTMB2.Movement.SetWalkSpeed(speed * Config.speedMultiplier)
end)

-- Toggle god mode
RegisterKeyBind(Key.F9, function()
    Config.godMode = not Config.godMode
    
    if Config.godMode then
        VTMB2.Attributes.SetMaxHealth(99999)
        VTMB2.Attributes.SetHealth(99999)
        Log.Log("God mode ENABLED")
    else
        Log.Log("God mode DISABLED")
    end
end)

-- Show stats
RegisterKeyBind(Key.F10, function()
    Log.Log("=== Player Stats ===")
    Log.Log("Health: " .. (VTMB2.Player.GetHealth() or "N/A"))
    Log.Log("Blood: " .. (VTMB2.Player.GetBlood() or "N/A"))
    Log.Log("Speed: " .. (VTMB2.Movement.GetWalkSpeed() or "N/A"))
    Log.Log("Enemies: " .. #VTMB2.World.GetAllEnemies())
end)

Log.Log("MyMod loaded! Press F9 for god mode, F10 for stats")
```

---

## See Also

- [Game Classes Reference](GAME_CLASSES.md) - Detailed class documentation
- [Installation Guide](INSTALL.md) - How to install VTMB2SE
- [UE4SS Documentation](https://docs.ue4ss.com/) - Base framework docs
