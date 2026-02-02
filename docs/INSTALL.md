# VTMB2SE Installation Guide

## Quick Install

1. **Download** the latest release from [GitHub Releases](https://github.com/Jessomadic/VTMB2-Script-Extender/releases)

2. **Locate** your game installation:
   - **Steam**: `C:\Program Files (x86)\Steam\steamapps\common\Vampire The Masquerade - Bloodlines 2\`
   - **Epic**: `C:\Program Files\Epic Games\Vampire The Masquerade - Bloodlines 2\`
   - **GOG**: `C:\GOG Games\Vampire The Masquerade - Bloodlines 2\`

3. **Copy** the contents of `dist\Win64\` to:
   ```
   <Game Folder>\Bloodlines2\Binaries\Win64\
   ```

4. **Launch** the game - you should see the UE4SS console window

## Detailed Installation

### Step 1: Extract the ZIP

Extract the downloaded ZIP file to a temporary location.

You should see this structure:
```
VTMB2-Script-Extender/
├── dist/
│   └── Win64/          ← This folder contains the mod files
├── sdk/
├── docs/
└── README.md
```

### Step 2: Copy Files

Copy **all contents** of `dist\Win64\` to your game's `Win64` folder:

```
dist\Win64\*  →  <Game>\Bloodlines2\Binaries\Win64\
```

After copying, your game folder should look like:
```
Bloodlines2\Binaries\Win64\
├── Bloodlines2-Win64-Shipping.exe   (original game)
├── dwmapi.dll                        (UE4SS injector)
├── UE4SS.dll                         (UE4SS core)
├── UE4SS-settings.ini                (configuration)
└── Mods\                             (mod folder)
    ├── mods.txt
    ├── VTMB2SE_Core\
    ├── VTMB2SE_Examples\
    └── shared\
```

### Step 3: Verify Installation

1. Launch the game
2. You should see a **console window** appear (black window with text)
3. The console should show:
   ```
   [VTMB2SE_Core] ==============================================
   [VTMB2SE_Core]   VTMB2SE - Script Extender v0.1.0
   [VTMB2SE_Core]   Vampire: The Masquerade - Bloodlines 2
   [VTMB2SE_Core] ==============================================
   ```
4. Press **F10** in-game to verify VTMB2SE is running

## Troubleshooting

### Console doesn't appear

1. **Check antivirus**: Add the game folder to your antivirus exclusions
2. **Verify files**: Ensure `dwmapi.dll` and `UE4SS.dll` are in the `Win64` folder
3. **Check settings**: Open `UE4SS-settings.ini` and verify:
   ```ini
   [Debug]
   ConsoleEnabled = 1
   GuiConsoleEnabled = 1
   ```

### Game crashes on startup

1. **Remove mods temporarily**: Rename `Mods` folder to `Mods.bak`
2. **Check log**: Look at `UE4SS.log` in the `Win64` folder for errors
3. **Try opengl**: In `UE4SS-settings.ini`, change:
   ```ini
   GraphicsAPI = opengl
   ```

### Mods not loading

1. **Check mods.txt**: Ensure mods are enabled (`: 1` not `: 0`)
2. **Check enabled.txt**: Each mod folder needs an `enabled.txt` file
3. **Check console**: Look for Lua errors in the console output

### Game runs but no VTMB2SE messages

1. **Press F10**: This should show VTMB2SE status
2. **Check mod order**: `VTMB2SE_Core : 1` should be in `mods.txt`
3. **Hot reload**: Press Ctrl+R to reload Lua mods

## Uninstalling

To completely remove VTMB2SE:

1. Delete these files from `Bloodlines2\Binaries\Win64\`:
   - `dwmapi.dll`
   - `UE4SS.dll`
   - `UE4SS.pdb` (if present)
   - `UE4SS-settings.ini`
   - `UE4SS.log`
   - `Mods\` folder

2. The game should now launch normally without the mod

## Installing Additional Mods

1. Download the mod (usually a folder with `Scripts\main.lua`)
2. Place the mod folder in `Win64\Mods\`
3. Add the mod to `Win64\Mods\mods.txt`:
   ```
   MyNewMod : 1
   ```
4. Ensure the mod has an `enabled.txt` file
5. Launch the game or hot-reload (Ctrl+R)

## Updating VTMB2SE

1. Download the new version
2. **Backup** your custom mods (copy `Mods\` folder somewhere safe)
3. Delete the old VTMB2SE files
4. Install the new version
5. Restore your custom mods

---

Need help? Open an issue on [GitHub](https://github.com/Jessomadic/VTMB2-Script-Extender/issues)
