# Contributing to VTMB2SE

Thank you for your interest in contributing to VTMB2SE! This document provides guidelines for contributing.

## Ways to Contribute

### 🐛 Bug Reports

1. Check [existing issues](https://github.com/Jessomadic/VTMB2-Script-Extender/issues) first
2. Include:
   - VTMB2SE version
   - Game version
   - Steps to reproduce
   - Expected vs actual behavior
   - `UE4SS.log` contents

### 💡 Feature Requests

1. Open an issue with `[Feature]` prefix
2. Describe the use case
3. Provide examples if possible

### 📝 Documentation

- Fix typos
- Improve explanations
- Add examples
- Translate documentation

### 🔧 Code Contributions

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/my-feature`
3. Make your changes
4. Test thoroughly
5. Submit a Pull Request

## Code Guidelines

### Lua Style

```lua
-- Use descriptive names
local PlayerCharacter = VTMB2.GetPlayer()

-- Document public functions
--- Gets the player's current health
--- @return number The current health value
function VTMB2.Player.GetHealth()
    -- ...
end

-- Use local variables whenever possible
local function HelperFunction()
    -- ...
end

-- Log with module prefix
print("[ModName] Message\n")
```

### Commit Messages

Use conventional commits:
- `feat:` New features
- `fix:` Bug fixes
- `docs:` Documentation changes
- `refactor:` Code refactoring
- `test:` Test additions

Example: `feat: add VTMB2.Abilities.GetCooldown() function`

## Testing

Before submitting:
1. Launch the game with your changes
2. Check `UE4SS.log` for errors
3. Test on a clean game install if possible

## Questions?

- Open a Discussion on GitHub
- Join the VTMB2 modding community

Thank you for helping make VTMB2SE better! 🧛
