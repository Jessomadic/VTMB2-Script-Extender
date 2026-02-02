--[[
    VTMB2 Config - Configuration System
    
    Simple JSON-based configuration for mods
]]--

local Config = {}

-- Default config path (relative to mod folder)
local DEFAULT_CONFIG_FILE = "config.json"

--[[============================================================================
    JSON Handling (Basic Implementation)
============================================================================]]--

-- Simple JSON encoder/decoder for basic types
local JSON = {}

function JSON.encode(value)
    local t = type(value)
    
    if t == "nil" then
        return "null"
    elseif t == "boolean" then
        return value and "true" or "false"
    elseif t == "number" then
        return tostring(value)
    elseif t == "string" then
        return '"' .. value:gsub('"', '\\"'):gsub('\n', '\\n') .. '"'
    elseif t == "table" then
        -- Check if array or object
        local isArray = true
        local maxIndex = 0
        for k, v in pairs(value) do
            if type(k) ~= "number" or k <= 0 or k ~= math.floor(k) then
                isArray = false
                break
            end
            maxIndex = math.max(maxIndex, k)
        end
        
        if isArray and maxIndex == #value then
            -- Array
            local parts = {}
            for i, v in ipairs(value) do
                table.insert(parts, JSON.encode(v))
            end
            return "[" .. table.concat(parts, ",") .. "]"
        else
            -- Object
            local parts = {}
            for k, v in pairs(value) do
                table.insert(parts, '"' .. tostring(k) .. '":' .. JSON.encode(v))
            end
            return "{" .. table.concat(parts, ",") .. "}"
        end
    end
    
    return "null"
end

function JSON.decode(str)
    -- Very basic JSON decoder - handles simple cases
    if not str or str == "" then return nil end
    
    str = str:match("^%s*(.-)%s*$")  -- Trim
    
    if str == "null" then
        return nil
    elseif str == "true" then
        return true
    elseif str == "false" then
        return false
    elseif str:match("^%-?%d+%.?%d*$") then
        return tonumber(str)
    elseif str:match('^".*"$') then
        return str:sub(2, -2):gsub('\\"', '"'):gsub('\\n', '\n')
    elseif str:match("^%[.*%]$") or str:match("^{.*}$") then
        -- For complex JSON, use loadstring trick
        local func, err = load("return " .. str:gsub('null', 'nil'):gsub('true', 'true'):gsub('false', 'false'))
        if func then
            local success, result = pcall(func)
            if success then return result end
        end
    end
    
    return nil
end

--[[============================================================================
    File Operations
============================================================================]]--

--- Read a file's contents
--- @param path string File path
--- @return string|nil Contents or nil on error
function Config.ReadFile(path)
    local file = io.open(path, "r")
    if not file then return nil end
    
    local content = file:read("*all")
    file:close()
    return content
end

--- Write contents to a file
--- @param path string File path
--- @param content string Content to write
--- @return boolean Success
function Config.WriteFile(path, content)
    local file = io.open(path, "w")
    if not file then return false end
    
    file:write(content)
    file:close()
    return true
end

--[[============================================================================
    Config Operations
============================================================================]]--

--- Load a configuration file
--- @param path string Path to config file
--- @param defaults table Default values
--- @return table Configuration table
function Config.Load(path, defaults)
    defaults = defaults or {}
    
    local content = Config.ReadFile(path)
    if not content then
        -- No config file, return defaults
        return Config.DeepCopy(defaults)
    end
    
    local config = JSON.decode(content)
    if not config then
        -- Invalid JSON, return defaults
        return Config.DeepCopy(defaults)
    end
    
    -- Merge with defaults (config overwrites defaults)
    return Config.Merge(defaults, config)
end

--- Save a configuration table to file
--- @param path string Path to config file
--- @param config table Configuration table
--- @return boolean Success
function Config.Save(path, config)
    local content = JSON.encode(config)
    return Config.WriteFile(path, content)
end

--- Create a config manager for a mod
--- @param modPath string Path to the mod folder
--- @param defaults table Default configuration values
--- @return table Config manager with Load, Save, Get, Set methods
function Config.CreateManager(modPath, defaults)
    local manager = {
        path = modPath .. "/" .. DEFAULT_CONFIG_FILE,
        defaults = defaults or {},
        config = nil
    }
    
    --- Load configuration
    function manager:Load()
        self.config = Config.Load(self.path, self.defaults)
        return self.config
    end
    
    --- Save configuration
    function manager:Save()
        if self.config then
            return Config.Save(self.path, self.config)
        end
        return false
    end
    
    --- Get a config value
    function manager:Get(key, default)
        if not self.config then
            self:Load()
        end
        
        local value = self.config[key]
        if value == nil then
            return default
        end
        return value
    end
    
    --- Set a config value
    function manager:Set(key, value)
        if not self.config then
            self:Load()
        end
        
        self.config[key] = value
    end
    
    return manager
end

--[[============================================================================
    Utility Functions
============================================================================]]--

--- Deep copy a table
function Config.DeepCopy(orig)
    if type(orig) ~= 'table' then return orig end
    
    local copy = {}
    for k, v in pairs(orig) do
        copy[Config.DeepCopy(k)] = Config.DeepCopy(v)
    end
    return copy
end

--- Merge tables (second overwrites first)
function Config.Merge(t1, t2)
    local result = Config.DeepCopy(t1)
    for k, v in pairs(t2) do
        if type(v) == 'table' and type(result[k]) == 'table' then
            result[k] = Config.Merge(result[k], v)
        else
            result[k] = v
        end
    end
    return result
end

return Config
