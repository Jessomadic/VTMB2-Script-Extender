--[[
    VTMB2 Utils - Utility Functions
    
    Common utility functions for VTMB2 mods
]]--

local Utils = {}

--[[============================================================================
    Logging
============================================================================]]--

--- Create a logger with a specific prefix
--- @param prefix string The log prefix
--- @return table Logger object with Log, Error, Warn methods
function Utils.CreateLogger(prefix)
    local logger = {}
    
    function logger.Log(message)
        print("[" .. prefix .. "] " .. tostring(message) .. "\n")
    end
    
    function logger.Error(message)
        print("[" .. prefix .. "][ERROR] " .. tostring(message) .. "\n")
    end
    
    function logger.Warn(message)
        print("[" .. prefix .. "][WARN] " .. tostring(message) .. "\n")
    end
    
    function logger.Debug(message)
        print("[" .. prefix .. "][DEBUG] " .. tostring(message) .. "\n")
    end
    
    return logger
end

--[[============================================================================
    Safe Access
============================================================================]]--

--- Safely get a property, returning nil if it doesn't exist
--- @param obj userdata The object to access
--- @param propertyName string The property name
--- @return any|nil The property value or nil
function Utils.SafeGet(obj, propertyName)
    if not obj then return nil end
    
    local success, value = pcall(function()
        return obj[propertyName]
    end)
    
    if success then
        return value
    end
    return nil
end

--- Safely set a property
--- @param obj userdata The object to modify
--- @param propertyName string The property name
--- @param value any The value to set
--- @return boolean Success
function Utils.SafeSet(obj, propertyName, value)
    if not obj then return false end
    
    local success = pcall(function()
        obj[propertyName] = value
    end)
    
    return success
end

--- Safely call a method
--- @param obj userdata The object
--- @param methodName string The method name
--- @param ... any Arguments to pass
--- @return any|nil Return value or nil on failure
function Utils.SafeCall(obj, methodName, ...)
    if not obj then return nil end
    
    local method = obj[methodName]
    if not method then return nil end
    
    local success, result = pcall(method, obj, ...)
    if success then
        return result
    end
    return nil
end

--[[============================================================================
    Object Validation
============================================================================]]--

--- Check if an object is valid
--- @param obj userdata The object to check
--- @return boolean True if valid
function Utils.IsValid(obj)
    if not obj then return false end
    
    local success, valid = pcall(function()
        return obj:IsValid()
    end)
    
    return success and valid
end

--- Get object's full name safely
--- @param obj userdata The object
--- @return string The full name or "Invalid"
function Utils.GetFullName(obj)
    if not Utils.IsValid(obj) then
        return "Invalid"
    end
    
    local success, name = pcall(function()
        return obj:GetFullName()
    end)
    
    return success and name or "Unknown"
end

--- Get object's class name safely
--- @param obj userdata The object
--- @return string The class name or "Unknown"
function Utils.GetClassName(obj)
    if not Utils.IsValid(obj) then
        return "Unknown"
    end
    
    local success, name = pcall(function()
        return obj:GetClass():GetFName():ToString()
    end)
    
    return success and name or "Unknown"
end

--[[============================================================================
    Delayed Execution
============================================================================]]--

--- Execute a function after a delay (uses UE4SS ExecuteWithDelay)
--- @param delayMs number Delay in milliseconds
--- @param callback function The function to call
function Utils.Delay(delayMs, callback)
    if ExecuteWithDelay then
        ExecuteWithDelay(delayMs, callback)
    else
        -- Fallback: just call immediately
        callback()
    end
end

--- Execute a function every interval until cancelled
--- @param intervalMs number Interval in milliseconds
--- @param callback function The function to call (return false to stop)
--- @return table Timer handle with Stop() method
function Utils.SetInterval(intervalMs, callback)
    local timer = {
        running = true,
        Stop = function(self)
            self.running = false
        end
    }
    
    local function tick()
        if timer.running then
            local continue = callback()
            if continue ~= false and timer.running then
                Utils.Delay(intervalMs, tick)
            end
        end
    end
    
    Utils.Delay(intervalMs, tick)
    return timer
end

--[[============================================================================
    Table Utilities
============================================================================]]--

--- Deep copy a table
--- @param orig table The table to copy
--- @return table A new table with copied values
function Utils.DeepCopy(orig)
    local copy
    if type(orig) == 'table' then
        copy = {}
        for k, v in pairs(orig) do
            copy[Utils.DeepCopy(k)] = Utils.DeepCopy(v)
        end
        setmetatable(copy, Utils.DeepCopy(getmetatable(orig)))
    else
        copy = orig
    end
    return copy
end

--- Merge two tables (second overwrites first)
--- @param t1 table First table
--- @param t2 table Second table
--- @return table Merged table
function Utils.Merge(t1, t2)
    local result = Utils.DeepCopy(t1)
    for k, v in pairs(t2) do
        if type(v) == 'table' and type(result[k]) == 'table' then
            result[k] = Utils.Merge(result[k], v)
        else
            result[k] = v
        end
    end
    return result
end

--- Check if a value exists in an array
--- @param array table The array to search
--- @param value any The value to find
--- @return boolean True if found
function Utils.Contains(array, value)
    for _, v in ipairs(array) do
        if v == value then
            return true
        end
    end
    return false
end

--[[============================================================================
    String Utilities
============================================================================]]--

--- Check if a string starts with a prefix
--- @param str string The string to check
--- @param prefix string The prefix
--- @return boolean True if starts with prefix
function Utils.StartsWith(str, prefix)
    return str:sub(1, #prefix) == prefix
end

--- Check if a string ends with a suffix
--- @param str string The string to check
--- @param suffix string The suffix
--- @return boolean True if ends with suffix
function Utils.EndsWith(str, suffix)
    return str:sub(-#suffix) == suffix
end

--- Split a string by delimiter
--- @param str string The string to split
--- @param delimiter string The delimiter
--- @return table Array of parts
function Utils.Split(str, delimiter)
    local result = {}
    for match in (str .. delimiter):gmatch("(.-)" .. delimiter) do
        table.insert(result, match)
    end
    return result
end

--- Trim whitespace from both ends
--- @param str string The string to trim
--- @return string Trimmed string
function Utils.Trim(str)
    return str:match("^%s*(.-)%s*$")
end

return Utils
