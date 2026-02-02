# VTMB2 Game Classes Reference

This document catalogs the key game classes discovered in VTMB2, based on UE4SS header exports.

> [!NOTE]
> Class names in Lua use the `_C` suffix for Blueprint classes (e.g., `BP_WrestlerTestPlayerCharacter_C`).

---

## Player Classes

### Character Classes

| Class | Parent | Description |
|-------|--------|-------------|
| `BP_WrestlerTestPlayerCharacter_C` | WrestlerPlayerCharacter | Main player character (current build) |
| `BP_WrestlerPlayerCharacter_C` | WrestlerPlayerCharacter | Standard player character |
| `WrestlerPlayerCharacter` | WrestlerCharacterBase | C++ player character base |
| `WrestlerCharacter` | WrestlerCharacterBase | Generic Wrestler character |
| `WrestlerCharacterBase` | ACharacter | Base for all Wrestler characters |

### Controller Classes

| Class | Parent | Description |
|-------|--------|-------------|
| `BP_WrestlerPlayerControllerInGame_C` | WrestlerControllerInGame | Main in-game controller |
| `WrestlerControllerInGame` | WrestlerPlayerController | In-game controller C++ |
| `WrestlerControllerFrontEnd` | WrestlerPlayerController | Menu controller |
| `WrestlerPlayerController` | APlayerController | Base player controller |

---

## Attribute System (GAS)

### UWrestlerAttributeSet

The primary attribute set for player stats. All values are `FGameplayAttributeData`.

#### Health & Survival

| Attribute | Type | Description |
|-----------|------|-------------|
| `Health` | float | Current health |
| `MaxHealth` | float | Maximum health |
| `HealthRegenRate` | float | Health regeneration rate |
| `HealthRegenValue` | float | Health regeneration amount |
| `HealthFragility` | float | Damage vulnerability modifier |

#### Blood (Vampire Resource)

| Attribute | Type | Description |
|-----------|------|-------------|
| `Blood` | float | Current blood pool |
| `MaxBlood` | float | Maximum blood |

#### Shield

| Attribute | Type | Description |
|-----------|------|-------------|
| `Shield` | float | Current shield value |
| `MaxShield` | float | Maximum shield |

#### Stun

| Attribute | Type | Description |
|-----------|------|-------------|
| `stun` | float | Current stun value (lowercase!) |
| `MaxStun` | float | Maximum stun threshold |
| `StunDamage` | float | Stun damage dealt |
| `StunResistance` | float | Current stun resistance |
| `MaxStunResistance` | float | Maximum stun resistance |
| `StunFragility` | float | Stun vulnerability |
| `StunRegenRate` | float | Stun recovery rate |
| `StunRegenValue` | float | Stun recovery amount |
| `StunThreshold` | float | Threshold for stun state |

#### Armor

| Attribute | Type | Description |
|-----------|------|-------------|
| `Armor` | float | Current armor |
| `MaxArmor` | float | Maximum armor |
| `ArmorDamage` | float | Damage to armor |

#### Combat

| Attribute | Type | Description |
|-----------|------|-------------|
| `AttackPower` | float | Base attack power |
| `Damage` | float | Current damage output |
| `DamageCap` | float | Maximum damage limit |

#### Movement

| Attribute | Type | Description |
|-----------|------|-------------|
| `WalkSpeed` | float | Base walk speed |
| `SprintSpeed` | float | Sprint speed |
| `CrouchSpeed` | float | Crouch speed |
| `SlideMinSpeed` | float | Minimum slide speed |
| `AccelerationRate` | float | Movement acceleration |
| `TurnRate` | float | Turn rate |

#### Ammo

| Attribute | Type | Description |
|-----------|------|-------------|
| `Ammo` | float | Current ammo |
| `MaxAmmo` | float | Maximum ammo |

#### Ability Blood Pools

Each ability type has its own blood cost pool:

| Attribute | Description |
|-----------|-------------|
| `StrikeAbilityBlood` / `MaxStrikeAbilityBlood` | Strike abilities |
| `RelocateAbilityBlood` / `MaxRelocateAbilityBlood` | Movement abilities |
| `MasteryAbilityBlood` / `MaxMasteryAbilityBlood` | Mastery abilities |
| `AffectAbilityBlood` / `MaxAffectAbilityBlood` | Mind-affecting abilities |

#### Stealth

| Attribute | Type | Description |
|-----------|------|-------------|
| `Noticeability` | float | How easily the player is detected |

---

## Movement Component

### UWrestlerMovementComponent

Extends `UCharacterMovementComponent` with vampire-specific features.

| Property | Type | Description |
|----------|------|-------------|
| `MaxWalkSpeed` | float | Maximum walk speed |
| `JumpZVelocity` | float | Jump height velocity |
| `GravityScale` | float | Gravity multiplier |
| `MaxAcceleration` | float | Movement acceleration |
| `GroundFriction` | float | Ground friction |
| `CoyoteTime` | float | Jump grace period |
| `MinSprintInput` | float | Minimum input for sprint |

#### Events

- `OnGlideBegin` - Fired when gliding starts
- `OnGlideEnd` - Fired when gliding ends
- `OnGliding` - Fired each frame while gliding

#### Methods

| Method | Returns | Description |
|--------|---------|-------------|
| `GetMaxSprintSpeed()` | float | Get current sprint speed |
| `GetMoveIncline()` | float | Get movement incline |
| `GetIsClockwiseRotation()` | bool | Check rotation direction |
| `TestUnCrouch()` | bool | Test if can uncrouch |

---

## Ability System

### UWrestlerGameplayAbility

Base class for all VTMB2 gameplay abilities.

#### Known Ability Classes

| Class | Description |
|-------|-------------|
| `UWrestlerGameplayAbility_Feed` | Feeding on NPCs |
| `UWrestlerGameplayAbility_SoaringLeap` | Vampire jump ability |
| `UWrestlerGameplayAbility_Mesmerize` | Mind control ability |
| `UWrestlerGameplayAbility_Telekinesis` | Telekinesis power |
| `UWrestlerGameplayAbility_FistOfCaine` | Melee attack ability |
| `UWrestlerGameplayAbility_LightningStrike` | Lightning strike |
| `UWrestlerGameplayAbility_EarthShock` | Ground slam |
| `UWrestlerGameplayAbility_ArachnesKiss` | Spider-themed ability |
| `UWrestlerGameplayAbility_CauldronOfBlood` | Blood ability |
| `UWrestlerGameplayAbility_FireInTheBlood` | Fire blood ability |
| `UWrestlerGameplayAbility_PsychicProjection` | Astral projection |
| `UWrestlerGameplayAbility_RapidReflexes` | Time dilation |
| `UWrestlerGameplayAbility_RangedWeapon` | Ranged weapon use |
| `UWrestlerGameplayAbility_PlayerPunch` | Basic melee |

---

## Dialogue System (Hera)

### Core Classes

| Class | Description |
|-------|-------------|
| `UHeraDialogue` | Main dialogue object |
| `UHeraDialogueManager` | Manages active dialogues |
| `AHeraDialogueRig` | Dialogue scene setup |
| `UHeraDialogueAnimationController` | Animation during dialogue |
| `UHeraDialogueCameraController` | Camera control in dialogue |

### Components

| Class | Description |
|-------|-------------|
| `UHeraDialogueComponent` | Dialogue capability for actors |
| `UPlayerHeraPropertiesComponent` | Player dialogue properties |

### UI

| Class | Description |
|-------|-------------|
| `UHeraDialogueDisplayWidget` | Dialogue UI widget |
| `UHeraDialogueButton` | Dialogue choice button |

---

## Enemy System

### Character Classes

| Class | Parent | Description |
|-------|--------|-------------|
| `AWrestlerEnemyCharacter` | WrestlerAICharacter | Enemy character |
| `AWrestlerAICharacter` | WrestlerCharacterBase | AI-controlled character |
| `AWrestlerCrowdCharacter` | ACharacter | Crowd/civilian NPC |

### AI Controllers

| Class | Description |
|-------|-------------|
| `AWrestlerEnemyController` | Enemy AI controller |
| `AWrestlerAIController` | Base AI controller |

---

## Game Framework

### Game Mode & State

| Class | Description |
|-------|-------------|
| `AWrestlerGameMode` | Main game mode |
| `AWrestlerGameState` | Shared game state |
| `AWrestlerPlayerState` | Per-player state |

### Managers

| Class | Description |
|-------|-------------|
| `UWrestlerCheatManager` | Debug/cheat commands |
| `AWrestlerCameraManager` | Player camera management |

---

## UI Widgets

### Player HUD

| Class | Description |
|-------|-------------|
| `UWrestlerAttributeWidget` | Base attribute display |
| `UWBP_WrestlerAttributeWidget_Health` | Health bar |
| `UWBP_WrestlerAttributeWidget_Blood` | Blood bar |
| `UWBP_WrestlerAttributeWidget_Shield` | Shield bar |

### Ability UI

| Class | Description |
|-------|-------------|
| `UWrestlerAbilityTreeMenu` | Ability selection menu |
| `UWrestlerEquippedAbilityWidget` | Equipped ability display |
| `UWrestlerPassiveAbilitySlotWidget` | Passive ability slot |

---

## Gameplay Tags

VTMB2 uses Gameplay Tags extensively. Key tags on characters:

| Tag Property | Purpose |
|--------------|---------|
| `CharacterTag` | Character type identifier |
| `SprintTag` | Applied while sprinting |
| `CrouchTag` | Applied while crouching |
| `SlideTag` | Applied while sliding |
| `JumpTag` | Applied while jumping |
| `GlideTag` | Applied while gliding |
| `OutOfCombatTag` | Applied when not in combat |
| `RegenTag` | Applied during regeneration |
| `StunnedTag` | Applied when stunned |

---

## Lua Access Examples

```lua
local VTMB2 = require("VTMB2.VTMB2")

-- Get player character
local player = VTMB2.GetPlayer()  -- Returns BP_WrestlerTestPlayerCharacter_C

-- Access attribute set
local attrSet = VTMB2.Attributes.GetAttributeSet()
local health = attrSet.Health.CurrentValue

-- Or use convenience functions
local health = VTMB2.Attributes.GetHealth()
local blood = VTMB2.Attributes.GetBlood()

-- Movement component
local movement = VTMB2.Player.GetMovementComponent()
movement.MaxWalkSpeed = 1000

-- Find enemies
local enemies = VTMB2.World.GetAllEnemies()
for _, enemy in ipairs(enemies) do
    print(enemy:GetFullName())
end

-- Cheat manager
local cm = VTMB2.World.GetCheatManager()
```

---

## Notes

> [!IMPORTANT]
> - The `stun` attribute is lowercase in the headers
> - Blueprint classes require the `_C` suffix in Lua
> - GAS attributes use `FGameplayAttributeData` with `CurrentValue` and `BaseValue`
> - Some properties may not be directly accessible via reflection

> [!TIP]
> Use the `VTMB2SE_Validation` mod (F11) to test which classes are accessible at runtime.
