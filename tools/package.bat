@echo off
REM VTMB2SE Packaging Script
REM Creates a distribution ZIP file

setlocal enabledelayedexpansion

REM Configuration
set VERSION=0.2.0
set OUTPUT_NAME=VTMB2SE-v%VERSION%
set DIST_DIR=dist\Win64
set BUILD_DIR=build
set OUTPUT_DIR=releases

echo ============================================
echo   VTMB2SE Packaging Script v%VERSION%
echo ============================================
echo.

REM Check if dist folder exists
if not exist "%DIST_DIR%" (
    echo ERROR: Distribution folder not found: %DIST_DIR%
    echo Please ensure the project is properly set up.
    exit /b 1
)

REM Create build and output directories
if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"
if not exist "%OUTPUT_DIR%" mkdir "%OUTPUT_DIR%"

REM Clean previous build
echo Cleaning previous build...
if exist "%BUILD_DIR%\%OUTPUT_NAME%" rmdir /s /q "%BUILD_DIR%\%OUTPUT_NAME%"

REM Create package structure
echo Creating package structure...
mkdir "%BUILD_DIR%\%OUTPUT_NAME%"
mkdir "%BUILD_DIR%\%OUTPUT_NAME%\Win64"

REM Copy distribution files
echo Copying distribution files...
xcopy "%DIST_DIR%\*" "%BUILD_DIR%\%OUTPUT_NAME%\Win64\" /E /Y /Q

REM Copy documentation
echo Copying documentation...
copy "README.md" "%BUILD_DIR%\%OUTPUT_NAME%\" >nul
copy "LICENSE" "%BUILD_DIR%\%OUTPUT_NAME%\" >nul
copy "CHANGELOG.md" "%BUILD_DIR%\%OUTPUT_NAME%\" >nul

REM Copy docs folder
if exist "docs" (
    mkdir "%BUILD_DIR%\%OUTPUT_NAME%\docs"
    xcopy "docs\*" "%BUILD_DIR%\%OUTPUT_NAME%\docs\" /E /Y /Q
)

REM Create installation instructions
echo Creating INSTALL.txt...
(
echo VTMB2SE - Vampire: The Masquerade - Bloodlines 2 Script Extender
echo Version %VERSION%
echo.
echo ============================================
echo   QUICK INSTALLATION
echo ============================================
echo.
echo 1. Locate your VTMB2 installation folder:
echo    - Steam: Right-click game ^> Properties ^> Local Files ^> Browse
echo    - Default: C:\Program Files ^(x86^)\Steam\steamapps\common\Bloodlines 2
echo.
echo 2. Navigate to: Bloodlines2\Binaries\Win64\
echo.
echo 3. Copy the CONTENTS of the Win64 folder from this archive
echo    into your game's Win64 folder.
echo.
echo 4. Launch the game. You should see a UE4SS console window.
echo.
echo For detailed instructions, see docs\INSTALL.md
echo.
echo ============================================
echo   KEYBINDS (when VTMB2SE_Examples enabled^)
echo ============================================
echo.
echo F5  - Player Info
echo F6  - Cycle Speed Mode
echo F7  - Show All Attributes  
echo F8  - Movement Info
echo F9  - Heal Player
echo F10 - VTMB2SE Status
echo F11 - Run Validation Tests
echo.
echo Numpad 1 - Toggle God Mode
echo Numpad 2 - Toggle Infinite Blood
echo Numpad 3 - Refill Blood
echo Numpad 4 - World Info
echo Numpad 5 - Combat Stats
echo Numpad 6 - Boost Attack Power
echo.
echo ============================================
echo.
echo For more information: https://github.com/Jessomadic/VTMB2-Script-Extender
) > "%BUILD_DIR%\%OUTPUT_NAME%\INSTALL.txt"

REM Check for 7-Zip or PowerShell Compress-Archive
echo.
echo Creating ZIP archive...

where 7z >nul 2>nul
if %ERRORLEVEL% EQU 0 (
    echo Using 7-Zip...
    7z a -tzip "%OUTPUT_DIR%\%OUTPUT_NAME%.zip" ".\%BUILD_DIR%\%OUTPUT_NAME%\*" -r
) else (
    echo Using PowerShell Compress-Archive...
    powershell -Command "Compress-Archive -Path '%BUILD_DIR%\%OUTPUT_NAME%\*' -DestinationPath '%OUTPUT_DIR%\%OUTPUT_NAME%.zip' -Force"
)

if exist "%OUTPUT_DIR%\%OUTPUT_NAME%.zip" (
    echo.
    echo ============================================
    echo   SUCCESS!
    echo ============================================
    echo.
    echo Package created: %OUTPUT_DIR%\%OUTPUT_NAME%.zip
    echo.
    
    REM Show package contents
    echo Package contents:
    dir /s /b "%BUILD_DIR%\%OUTPUT_NAME%" | find /c /v "" 
    echo files
    echo.
    
    REM Get file size
    for %%A in ("%OUTPUT_DIR%\%OUTPUT_NAME%.zip") do (
        set SIZE=%%~zA
        set /a SIZEMB=!SIZE!/1048576
        echo ZIP size: !SIZEMB! MB ^(!SIZE! bytes^)
    )
) else (
    echo.
    echo ERROR: Failed to create ZIP archive
    exit /b 1
)

echo.
echo Done!
pause
