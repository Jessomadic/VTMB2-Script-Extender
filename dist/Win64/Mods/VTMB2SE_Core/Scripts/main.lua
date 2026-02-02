--[[
    VTMB2SE Core Module
    Version: 0.1.0
    
    This is the core script extender entry point.
    It initializes the VTMB2 Lua API and provides essential functionality.
]]--

local ModName = "VTMB2SE_Core"
local Version = "0.1.0"

-- Logging utilities
local function Log(message)
    print("[" .. ModName .. "] " .. message .. "\n")
end

local function LogError(message)
    print("[" .. ModName .. "][ERROR] " .. message .. "\n")
end

local function LogWarning(message)
    print("[" .. ModName .. "][WARN] " .. message .. "\n")
end

-- Initialize VTMB2SE
local function Initialize()
    Log("==============================================")
    Log("  VTMB2SE - Script Extender v" .. Version)
    Log("  Vampire: The Masquerade - Bloodlines 2")
    Log("==============================================")
    
    -- Load the VTMB2 shared library
    local success, VTMB2 = pcall(function()
        return require("VTMB2.VTMB2")
    end)
    
    if success and VTMB2 then
        Log("VTMB2 API loaded successfully")
        
        -- Make it globally accessible
        _G.VTMB2 = VTMB2
        
        -- Initialize the API
        if VTMB2.Initialize then
            VTMB2.Initialize()
        end
    else
        LogWarning("VTMB2 API not found in shared folder - running in basic mode")
        LogWarning("Error: " .. tostring(VTMB2))
    end
    
    -- Register core hooks
    RegisterCoreHooks()
    
    Log("Core initialization complete")
    Log("Press ~ or ` to open the console")
    Log("==============================================")
end

-- Core game hooks
function RegisterCoreHooks()
    -- Hook player spawn
    local hookSuccess = pcall(function()
        RegisterHook("/Script/Engine.PlayerController:ClientRestart", function(Context)
            Log("Player controller restarted - game session active")
            
            -- Notify VTMB2 API if loaded
            if _G.VTMB2 and _G.VTMB2.Events and _G.VTMB2.Events._OnPlayerRestart then
                _G.VTMB2.Events._OnPlayerRestart(Context:get())
            end
        end)
    end)
    
    if hookSuccess then
        Log("Core hooks registered")
    else
        LogWarning("Some core hooks failed to register")
    end
    
    -- Hook BeginPlay for initial game state
    pcall(function()
        RegisterHook("/Script/Engine.Actor:ReceiveBeginPlay", function(Context)
            local actor = Context:get()
            if actor and actor:IsValid() then
                local className = actor:GetClass():GetFName():ToString()
                
                -- Detect player character spawn
                if string.find(className, "Wrestler") and string.find(className, "Player") then
                    Log("Player character detected: " .. className)
                    
                    if _G.VTMB2 and _G.VTMB2.Events and _G.VTMB2.Events._OnPlayerSpawn then
                        _G.VTMB2.Events._OnPlayerSpawn(actor)
                    end
                end
            end
        end)
    end)
end

-- Console commands
local function RegisterConsoleCommands()
    -- Register custom console commands if console is available
    pcall(function()
        RegisterConsoleCommandHandler("vtmb2se", function(FullCommand, Parameters)
            if #Parameters == 0 then
                Log("VTMB2SE Commands:")
                Log("  vtmb2se version - Show version info")
                Log("  vtmb2se player  - Show player info")
                Log("  vtmb2se reload  - Reload Lua mods")
                return true
            end
            
            local cmd = Parameters[1]:lower()
            
            if cmd == "version" then
                Log("VTMB2SE Version: " .. Version)
                return true
            elseif cmd == "player" then
                if _G.VTMB2 then
                    local player = _G.VTMB2.GetPlayer()
                    if player then
                        Log("Player: " .. player:GetFullName())
                    else
                        Log("Player not found")
                    end
                else
                    Log("VTMB2 API not loaded")
                end
                return true
            elseif cmd == "reload" then
                Log("Use Ctrl+R to hot-reload Lua mods")
                return true
            end
            
            return false
        end)
        
        Log("Console commands registered (type 'vtmb2se' for help)")
    end)
end

-- Keybind for quick info
local function RegisterKeybinds()
    -- F10 = Show VTMB2SE status
    RegisterKeyBind(Key.F10, function()
        Log("=== VTMB2SE Status ===")
        Log("Version: " .. Version)
        
        if _G.VTMB2 then
            Log("VTMB2 API: Loaded")
            local player = _G.VTMB2.GetPlayer()
            if player then
                Log("Player: Found")
            else
                Log("Player: Not found (in menu?)")
            end
        else
            Log("VTMB2 API: Not loaded")
        end
        
        Log("======================")
    end)
    
    Log("Press F10 for VTMB2SE status")
end

-- Run initialization
Initialize()
RegisterConsoleCommands()
RegisterKeybinds()
