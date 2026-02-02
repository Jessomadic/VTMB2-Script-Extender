# VTMB2SE - Vampire: The Masquerade - Bloodlines 2 Script Extender

<p align="center">
  <img src="https://img.shields.io/badge/Game-VTMB2-red?style=for-the-badge" alt="Game">
  <img src="https://img.shields.io/badge/Engine-Unreal%20Engine%205-blue?style=for-the-badge" alt="Engine">
  <img src="https://img.shields.io/badge/Framework-UE4SS-purple?style=for-the-badge" alt="Framework">
  <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="License">
</p>

A comprehensive script extender for **Vampire: The Masquerade - Bloodlines 2**, enabling Lua scripting, C++ modding, and Blueprint mod loading.

## ✨ Features

- **🐍 Lua Scripting** - Write mods in Lua with full access to game systems
- **⚙️ VTMB2 API** - High-level API for player, abilities, dialogue, and quests
- **🔄 Hot Reload** - Reload scripts without restarting the game
- **📦 Blueprint Mods** - Load .pak mods without file replacement
- **🖥️ Developer Console** - In-game console for debugging
- **👁️ Live Viewer** - Inspect and edit game objects in real-time

## 🚀 Quick Start

### Installation

1. **Download** the latest release from [Releases](https://github.com/Jessomadic/VTMB2-Script-Extender/releases)
2. **Extract** the ZIP file
3. **Copy** contents of `dist/Win64/` to your game's `Bloodlines2/Binaries/Win64/` folder
4. **Launch** the game - you should see the UE4SS console

### Your First Mod

1. Create a folder: `Win64/Mods/MyFirstMod/`
2. Create `Scripts/main.lua`:

```lua
local VTMB2 = require("VTMB2.VTMB2")

-- Called when mod loads
print("[MyFirstMod] Hello from VTMB2SE!\n")

-- Get player when game starts
RegisterHook("/Script/Engine.PlayerController:ClientRestart", function()
    local player = VTMB2.GetPlayer()
    if player then
        print("[MyFirstMod] Player found: " .. player:GetFullName() .. "\n")
    end
end)

-- Keybind example
RegisterKeyBind(Key.F9, function()
    print("[MyFirstMod] F9 pressed!\n")
end)
```

3. Create empty `enabled.txt` file
4. Launch the game!

## 📚 Documentation

| Document | Description |
|----------|-------------|
| [Installation Guide](docs/INSTALL.md) | Detailed installation instructions |
| [Lua API Reference](docs/LUA_API.md) | Complete VTMB2 Lua API documentation |
| [Game Classes](docs/GAME_CLASSES.md) | Discovered game class documentation |
| [Examples](docs/EXAMPLES.md) | Example mods and code snippets |

## 🎮 VTMB2 Lua API

```lua
local VTMB2 = require("VTMB2.VTMB2")

-- Player Access
local player = VTMB2.GetPlayer()
local controller = VTMB2.GetPlayerController()

-- Player Stats
local health = VTMB2.Player.GetHealth()
local blood = VTMB2.Player.GetBlood()

-- Abilities
local abilities = VTMB2.Abilities.GetAll()

-- Events
VTMB2.Events.OnPlayerSpawn(function(player)
    print("Player spawned!\n")
end)
```

## 🛠️ For Mod Developers

### SDK Contents

The `sdk/` folder contains:
- **headers/** - Game class headers (1,137 files)
- **lua_types/** - Lua type definitions for IDE support
- **templates/** - Mod templates to get started quickly

### Mod Structure

```
Mods/YourMod/
├── Scripts/
│   └── main.lua      # Entry point (required)
├── enabled.txt       # Enable marker (required)
└── config.json       # Optional configuration
```

## 🔧 Building from Source

For C++ mod development or contributing to VTMB2SE:

1. Install [Visual Studio 2022](https://visualstudio.microsoft.com/) with C++ workload
2. Install [CMake](https://cmake.org/) 3.22+
3. Link GitHub to [Epic Games](https://www.epicgames.com/account/connections) (for UEPseudo)
4. Clone with submodules: `git clone --recursive https://github.com/Jessomadic/VTMB2-Script-Extender.git`

## 🤝 Contributing

Contributions are welcome! Please see [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

## 📜 License

This project is licensed under the MIT License - see [LICENSE](LICENSE) for details.

### Credits

- **[UE4SS](https://github.com/UE4SS-RE/RE-UE4SS)** - The amazing UE4/UE5 Scripting System
- **[VTMB2 Modding Community](https://discord.gg/vtmb)** - For research and support
- **Paradox Interactive / The Chinese Room** - For creating VTMB2

---

<p align="center">
  <i>May your nights be eternal and your code compile without errors. 🧛</i>
</p>
