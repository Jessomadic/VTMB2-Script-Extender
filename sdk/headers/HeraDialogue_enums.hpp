enum class EFinalAudioStatus {
    NotRequired = 0,
    Absent = 1,
    Stale = 2,
    Valid = 3,
    EFinalAudioStatus_MAX = 4,
};

enum EHeraBantsParticipantsCheckResult {
    AlreadyInHigherPriorityBants = 0,
    AlreadyInSamePriorityBants = 1,
    AlreadyInLowerPriorityBants = 2,
    Available = 3,
    EHeraBantsParticipantsCheckResult_MAX = 4,
};

enum EHeraBantsPromptLimitExceededBehaviour {
    NewRequestInterrupts = 0,
    NewRequestIsIgnored = 1,
    EHeraBantsPromptLimitExceededBehaviour_MAX = 2,
};

enum class EHeraDialogueAnimNotifyType {
    Start = 0,
    End = 1,
    None = 2,
    EHeraDialogueAnimNotifyType_MAX = 3,
};

enum class EHeraDialogueAudioCodecPlatforms {
    Windows = 0,
    XSX = 1,
    PS5 = 2,
    EHeraDialogueAudioCodecPlatforms_MAX = 3,
};

enum class EHeraDialogueAudioPriority {
    Highest = 0,
    High = 1,
    Medium = 2,
    Low = 3,
    None = 4,
    EHeraDialogueAudioPriority_MAX = 5,
};

enum class EHeraDialogueAudioState {
    None = 0,
    CritAmbient = 1,
    Conversation = 2,
    ConversationChoice = 3,
    Cutscene = 4,
    EHeraDialogueAudioState_MAX = 5,
};

enum class EHeraDialogueCameraCutType {
    Fade = 0,
    Blend = 1,
    HardCut = 2,
    EHeraDialogueCameraCutType_MAX = 3,
};

enum class EHeraDialogueInputType {
    Dialogue = 0,
    Game = 1,
    EHeraDialogueInputType_MAX = 2,
};

enum class EHeraDialogueReactionClass {
    RC_Unknown = 0,
    RC_Positive = 1,
    RC_Negative = 2,
    RC_MAX = 3,
};

enum class EHeraDialogueType {
    UNKNOWN = 0,
    Logic = 1,
    Barks = 2,
    Quest = 3,
    Codex = 4,
    Ambient = 5,
    CritAmbient = 6,
    Conversation = 7,
    Cutscene = 8,
    EHeraDialogueType_MAX = 9,
};

enum class EHeraStoryProgress {
    StoryLineFinished = 0,
    StoryContentFinished = 1,
    EHeraStoryProgress_MAX = 2,
};

