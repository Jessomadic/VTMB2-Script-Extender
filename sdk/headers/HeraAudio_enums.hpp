enum class EHeraAudioChannelConfiguration {
    Default = 0,
    Mono = 1,
    EHeraAudioChannelConfiguration_MAX = 2,
};

enum class EHeraAudioCharacterDebugFlags {
    None = 0,
    ShowActorLabel = 1,
    ShowSocketNames = 2,
    ShowSocketVelocities = 4,
    ShowSocketAcceleration = 8,
    ShowSocketAngularVelocities = 16,
    EHeraAudioCharacterDebugFlags_MAX = 17,
};

enum class EHeraAudioComponentDebugFlags {
    None = 0,
    ShowActorLabel = 1,
    ShowComponentName = 2,
    ShowEventName = 4,
    ShowTransform = 8,
    ShowRTPCs = 16,
    ShowAttenuation = 32,
    ShowOnlyActiveEmitters = 64,
    ShowVolumeEmitters = 128,
    ShowPlayerEmitters = 256,
    EHeraAudioComponentDebugFlags_MAX = 257,
};

enum class EHeraAudioEnvironmentDebugFlags {
    None = 0,
    ShowEnvironmentSensorTraces = 1,
    ShowAudioGeometrySolid = 2,
    ShowAudioGeometryWireframe = 4,
    ShowReverbVolume = 8,
    ShowReverbParameters = 16,
    ShowResonanceOverlap = 32,
    ShowResonancePoints = 64,
    EHeraAudioEnvironmentDebugFlags_MAX = 65,
};

enum class EHeraAudioMotionControllerType {
    NoGamepad = 0,
    GamepadGeneric = 1,
    GamepadSonyDS5 = 2,
    EHeraAudioMotionControllerType_MAX = 3,
};

enum class EHeraAudioPanningRule {
    Speakers = 0,
    Headphones = 1,
    EHeraAudioPanningRule_MAX = 2,
};

enum class EHeraAudioPortalDisplayFlags {
    None = 0,
    ShowPortalBounds = 1,
    ShowPortalOpenAmount = 2,
    EHeraAudioPortalDisplayFlags_MAX = 3,
};

enum class EHeraAudioPropertyFindResult {
    Found = 0,
    NotFound = 1,
    EHeraAudioPropertyFindResult_MAX = 2,
};

enum class EHeraAudioStatsDisplayFlags {
    None = 0,
    ShowCpuTotal = 1,
    ShowCpuPlugin = 2,
    ShowNumActiveEvents = 4,
    ShowNumVoicesTotal = 8,
    ShowNumVoicesVirtual = 16,
    ShowNumVoicesPhysical = 32,
    ShowLoudness = 64,
    ShowNumAudioComponents = 128,
    ShowNumActiveAudioComponents = 256,
    ShowNumGeometryComponents = 512,
    EHeraAudioStatsDisplayFlags_MAX = 513,
};

enum class EHeraEventHeard {
    Yes = 0,
    No = 1,
    EHeraEventHeard_MAX = 2,
};

enum class EHeraValidComponent {
    Valid = 0,
    Invalid = 1,
    EHeraValidComponent_MAX = 2,
};

enum class EHeraValidSwitch {
    Valid = 0,
    Invalid = 1,
    EHeraValidSwitch_MAX = 2,
};

