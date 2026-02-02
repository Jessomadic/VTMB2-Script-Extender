@echo off
setlocal enabledelayedexpansion

echo ============================================
echo   VTMB2SE Packaging Script
echo ============================================
echo.

:: Configuration
set "PROJECT_DIR=%~dp0"
set "DIST_DIR=%PROJECT_DIR%dist"
set "OUTPUT_DIR=%PROJECT_DIR%releases"
set "VERSION=0.1.0"
set "ZIP_NAME=VTMB2SE-v%VERSION%.zip"

:: Check for 7-Zip
where 7z >nul 2>&1
if %ERRORLEVEL% EQU 0 (
    set "ZIP_CMD=7z"
) else (
    :: Try PowerShell Compress-Archive as fallback
    set "ZIP_CMD=powershell"
)

echo Project Dir: %PROJECT_DIR%
echo Output: %OUTPUT_DIR%\%ZIP_NAME%
echo.

:: Create output directory
if not exist "%OUTPUT_DIR%" mkdir "%OUTPUT_DIR%"

:: Check if dist folder exists
if not exist "%DIST_DIR%" (
    echo ERROR: dist folder not found!
    echo Run this script from the project root.
    pause
    exit /b 1
)

:: Package with 7-Zip or PowerShell
echo Creating package...

if "%ZIP_CMD%"=="7z" (
    cd "%PROJECT_DIR%"
    7z a -tzip "%OUTPUT_DIR%\%ZIP_NAME%" ^
        "dist\*" ^
        "docs\*" ^
        "README.md" ^
        "LICENSE" ^
        "CHANGELOG.md" ^
        -xr!*.log ^
        -xr!*.pdb ^
        -xr!__pycache__ ^
        -xr!.git
) else (
    echo Using PowerShell for compression...
    powershell -Command "& { $files = @('dist', 'docs', 'README.md', 'LICENSE', 'CHANGELOG.md'); Compress-Archive -Path $files -DestinationPath '%OUTPUT_DIR%\%ZIP_NAME%' -Force }"
)

if %ERRORLEVEL% EQU 0 (
    echo.
    echo ============================================
    echo   Package created successfully!
    echo   Output: %OUTPUT_DIR%\%ZIP_NAME%
    echo ============================================
) else (
    echo.
    echo ERROR: Package creation failed!
)

echo.
pause
