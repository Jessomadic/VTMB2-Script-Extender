enum class EHeraAutomataCompletion {
    EMC_NotStarted = 0,
    EMC_Started = 1,
    EMC_Suceeded = 2,
    EMC_Failed = 3,
    EMC_Paused = 4,
    EMC_MAX = 5,
};

enum class EHeraAutomataLoadType {
    LastCheckpointOnly = 0,
    ReplayFromInitialState = 1,
    EHeraAutomataLoadType_MAX = 2,
};

enum class EHeraAutomataResult {
    DontCare = 0,
    Accepted = 1,
    Rejected = 2,
    Deferred = 3,
    OutOfSteps = 4,
    Reset = 5,
    EHeraAutomataResult_MAX = 6,
};

enum class EHeraCheckpointStartReplayPolicy {
    None = 0,
    Last = 1,
    All = 2,
    EHeraCheckpointStartReplayPolicy_MAX = 3,
};

enum class EHeraLevelState {
    Unloaded = 0,
    LoadedInvisible = 1,
    LoadedVisible = 2,
    InTransition = 3,
    EHeraLevelState_MAX = 4,
};

enum class EHeraStreamTaskType {
    Load = 0,
    Unload = 1,
    EHeraStreamTaskType_MAX = 2,
};

enum class FJunctionInputRequirement {
    Any = 0,
    All = 1,
    FJunctionInputRequirement_MAX = 2,
};

