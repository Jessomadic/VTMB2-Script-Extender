enum class EAbilityMontageOutcome {
    None = 0,
    Completed = 1,
    Cancelled = 2,
    BlendOut = 3,
    Interrupted = 4,
    EventReceived = 5,
    EAbilityMontageOutcome_MAX = 6,
};

enum class EAbilityStatus {
    EAS_Unavailable = 0,
    EAS_Locked = 1,
    EAS_Unlocked = 2,
    EAS_Acquired = 3,
    EAS_MAX = 4,
};

enum EBattleHostilityLevels {
    EBattleHostilityLevels_HeightenedPatrol = 0,
    EBattleHostilityLevels_HeightenedInvestigate = 1,
    EBattleHostilityLevels_Hostile = 2,
    EBattleHostilityLevels_Propagation = 3,
    EBattleHostilityLevels_Battle = 4,
    EBattleHostilityLevels_Max = 5,
};

enum class EBufferName {
    GetSceneColorTexture = 0,
    GetSceneColorTextureUAV = 1,
    GetSceneDepthTexture = 2,
    GetGBufferWorldNormals = 3,
    GetGBufferBTexture = 4,
    GetGBufferSceneColorUnlit = 5,
    GetGBufferDTexture = 6,
    GetGBufferETexture = 7,
    GetGBufferFTexture = 8,
    GetGBufferVelocityTexture = 9,
    GetSceneColorSurface = 10,
    GetSceneDepthSurface = 11,
    GetSmallDepthSurface = 12,
    GetDirectionalOcclusionTexture = 13,
    RequestCustomDepth = 14,
    RequestCustomStencil = 15,
    GetBackBuffer = 16,
    EBufferName_MAX = 17,
};

enum class ECollectableType {
    Codex = 0,
    AmbientInteratable = 1,
    ECollectableType_MAX = 2,
};

enum class ECommonAnalogCursorState {
    AnalogCursorState_Off = 0,
    AnalogCursorState_On = 1,
    AnalogCursorState_Invalid = 2,
    AnalogCursorState_MAX = 3,
};

enum class EConsumableType {
    ECT_BloodElixir = 0,
    ECT_HealthElixir = 1,
    ECT_BrjuahElixir = 2,
    ECT_VentrueElixir = 3,
    ECT_BloodElixirFabien = 4,
    ECT_TelekinesisElixir = 5,
    ECT_MAX = 6,
};

enum class ECouldNotActivateReason {
    UnknownReason = 0,
    OnBlockedByAbility = 1,
    OnMissingTags = 2,
    OnCooldown = 3,
    OnLacksCost = 4,
    ECouldNotActivateReason_MAX = 5,
};

enum class EEffectOperation {
    Add = 0,
    Remove = 1,
    EEffectOperation_MAX = 2,
};

enum class EExecutionPin {
    Update = 0,
    Finishing = 1,
    Finished = 2,
    EExecutionPin_MAX = 3,
};

enum class EHeraSurfaceTypeQueryResult {
    SurfaceFound = 0,
    SurfaceNotFound = 1,
    EHeraSurfaceTypeQueryResult_MAX = 2,
};

enum class EHeraValidHUD {
    Valid = 0,
    Invalid = 1,
    EHeraValidHUD_MAX = 2,
};

enum EHostilityLevels {
    EHostilityLevels_Patrol = 0,
    EHostilityLevels_Investigate = 1,
    EHostilityLevels_Propagation = 2,
    EHostilityLevels_Battle = 3,
    EHostilityLevels_Max = 4,
};

enum class EItemState {
    Active = 0,
    Inactive = 1,
    Used = 2,
    EItemState_MAX = 3,
};

enum class EItemType {
    Interact = 0,
    ItemDestroy = 1,
    Custom = 2,
    EItemType_MAX = 3,
};

enum class ENodeStatus {
    Locked = 0,
    Unlocked = 1,
    Acquired = 2,
    ENodeStatus_MAX = 3,
};

enum class ENotificationType {
    ENT_Central = 0,
    ENT_Side = 1,
    ENT_DialogueReaction = 2,
    ENT_MAX = 3,
};

enum class EPlayerClan {
    EPC_None = 0,
    EPC_Brujah = 1,
    EPC_Tremere = 2,
    EPC_BanuHaqim = 3,
    EPC_Ventrue = 4,
    EPC_Lasombra = 5,
    EPC_Malkavian = 6,
    EPC_Toreador = 7,
    EPC_MAX = 8,
};

enum class EPlayerCustomButtonType {
    Costume = 0,
    Hair = 1,
    MakeUp = 2,
    Piercing = 3,
    Eyes = 4,
    EPlayerCustomButtonType_MAX = 5,
};

enum class EPlayerCustomisationDLC {
    None = 0,
    HalloweenDLC = 1,
    BennyDLC = 2,
    EPlayerCustomisationDLC_MAX = 3,
};

enum class EPlayerHairAnimType {
    Short = 0,
    MidLong = 1,
    Long = 2,
    Bun = 3,
    EPlayerHairAnimType_MAX = 4,
};

enum class ETelekinesisTargetType {
    Throwable = 0,
    Interactable = 1,
    Enemy = 2,
    Body = 3,
    Disabled = 4,
    ETelekinesisTargetType_MAX = 5,
};

enum class ETimeScale {
    WorldTime = 0,
    RealTime = 1,
    ActorTime = 2,
    ETimeScale_MAX = 3,
};

enum class ETraversalDebugRenderMethod {
    Vault = 0,
    Mantle = 1,
    WallClimb = 2,
    NearbyObjects = 3,
    Count = 4,
    ETraversalDebugRenderMethod_MAX = 5,
};

enum class EWeaponInaccuracyConfigType {
    InaccuracyAngle = 0,
    InaccuracyAnglePerDistance = 1,
    EWeaponInaccuracyConfigType_MAX = 2,
};

enum class EWrestlerAbilitySlot {
    None = 0,
    Top = 1,
    Bottom = 2,
    Right = 3,
    Left = 4,
    LB = 5,
    RB = 6,
    RT = 7,
    MAX = 8,
};

enum class EWrestlerAllowBackgroundAudioSetting {
    Off = 0,
    AllSounds = 1,
    Num = 2,
    EWrestlerAllowBackgroundAudioSetting_MAX = 3,
};

enum class EWrestlerAudioEnemyState {
    Unaware = 0,
    Investigating = 1,
    Combat = 2,
    CombatWithNPC = 3,
    EWrestlerAudioEnemyState_MAX = 4,
};

enum class EWrestlerAudioSurfaceQueryDebugFlags {
    None = 0,
    ShowLineTrace = 1,
    ShowBaseSurfaceLocation = 2,
    ShowBaseSurfacePhysicalMaterial = 4,
    ShowBaseSurfaceAudioSwitch = 8,
    ShowBaseSurfaceType = 16,
    ShowBaseActorName = 32,
    ShowCoverSurfaceLocation = 64,
    ShowCoverSurfacePhysicalMaterial = 128,
    ShowCoverSurfaceAudioSwitch = 256,
    ShowCoverSurfaceType = 512,
    ShowCoverActorName = 1024,
    ShowCoverAmount = 2048,
    ShowCoverWetness = 4096,
    EWrestlerAudioSurfaceQueryDebugFlags_MAX = 4097,
};

enum class EWrestlerBloodResonanceEventParticipants {
    Solo = 0,
    Pair = 1,
    EWrestlerBloodResonanceEventParticipants_MAX = 2,
};

enum class EWrestlerBloodResonanceType {
    Sanguine = 0,
    Choleric = 1,
    Melancholic = 2,
    None = 3,
    EWrestlerBloodResonanceType_MAX = 4,
};

enum class EWrestlerChangeVisibilityCollisionState {
    None = 0,
    On = 1,
    Off = 2,
    Toggle = 3,
    EWrestlerChangeVisibilityCollisionState_MAX = 4,
};

enum class EWrestlerCharacterSnowState {
    Active = 0,
    Disabled = 1,
    EWrestlerCharacterSnowState_MAX = 2,
};

enum class EWrestlerClanAbilityType {
    Strike = 0,
    Relocate = 1,
    Mastery = 2,
    Affect = 3,
    Telekinesis = 4,
    Passive = 5,
    Perk = 6,
    NotSelected = 7,
    EWrestlerClanAbilityType_MAX = 8,
};

enum class EWrestlerClanDiscipline {
    EWCD_Celerity = 0,
    EWCD_Presence = 1,
    EWCD_Potence = 2,
    EWCD_Dominate = 3,
    EWCD_BlSorcery = 4,
    EWCD_Obfuscate = 5,
    EWCD_Oblivion = 6,
    EWCD_MAX = 7,
};

enum class EWrestlerClanTrainerConversationOutcomes {
    BranchToTrainingMenu = 0,
    EWrestlerClanTrainerConversationOutcomes_MAX = 1,
};

enum EWrestlerClothingMaterialType {
    ClothingMaterialType_Default = 0,
    ClothingMaterialType1 = 1,
    ClothingMaterialType2 = 2,
    ClothingMaterialType_Max = 3,
    EWrestlerClothingMaterialType_MAX = 4,
};

enum class EWrestlerCombatMusicState {
    Exploration = 0,
    Stealth = 1,
    StealthInvestigate = 2,
    Combat = 3,
    CombatEnding = 4,
    EWrestlerCombatMusicState_MAX = 5,
};

enum class EWrestlerComparisonMethod {
    Equal_To = 0,
    Not_Equal_To = 1,
    Greater_Than_Or_Equal_To = 2,
    Less_Than_Or_Equal_To = 3,
    Greater_Than = 4,
    Less_Than = 5,
    EWrestlerComparisonMethod_MAX = 6,
};

enum class EWrestlerConfirmationType {
    Save = 0,
    Load = 1,
    LoadCheckpoint = 2,
    MainMenu = 3,
    Desktop = 4,
    DeleteSaveFile = 5,
    Clan = 6,
    SkipCutScene = 7,
    DLC = 8,
    DLCLoad = 9,
    EWrestlerConfirmationType_MAX = 10,
};

enum class EWrestlerControlBaseInput {
    Punch = 0,
    Heavy = 1,
    Dash = 2,
    Feed = 3,
    Heal = 4,
    Crouch = 5,
    Sprint = 6,
    Jump = 7,
    DisciplineAbility = 8,
    Interaction = 9,
    VampiricVision = 10,
    LeftPunch = 11,
    Counter = 12,
    Target = 13,
    AbilityFaceTop = 14,
    AbilityRelocate = 15,
    AbilityAffect = 16,
    AbilityMastery = 17,
    AbilityStrike = 18,
    AbilityTelekinesis = 19,
    Max = 20,
};

enum class EWrestlerControlDirection {
    DontCare = 0,
    Fore = 1,
    Back = 2,
    Left = 3,
    Right = 4,
    Max = 5,
};

enum class EWrestlerControlInputType {
    Pressed = 0,
    Released = 1,
    DoubleTap = 2,
    Held = 3,
    Max = 4,
};

enum class EWrestlerControlMovementMode {
    None = 0,
    Walking = 1,
    Swimming = 2,
    Flying = 3,
    Crouching = 4,
    Sliding = 5,
    Max = 6,
};

enum class EWrestlerCreditType {
    Logo = 0,
    H1 = 1,
    H2 = 2,
    H3 = 3,
    H4 = 4,
    LB = 5,
    EWrestlerCreditType_MAX = 6,
};

enum class EWrestlerCustomDepthUser {
    MassAI = 0,
    HeightenedSenses = 1,
    EnterOblivion = 2,
    EWrestlerCustomDepthUser_MAX = 3,
};

enum EWrestlerCustomMovementMode {
    MOVE_CUSTOM_WallClimb = 0,
    MOVE_CUSTOM_Vault = 1,
    MOVE_CUSTOM_Mantle = 2,
    MOVE_CUSTOM_LedgeVault = 3,
    MOVE_CUSTOM_MAX = 4,
};

enum class EWrestlerCutsceneType {
    None = 0,
    FirstPerson = 1,
    ThirdPerson = 2,
    Interaction = 3,
    FullScreenVideo = 4,
    ScriptedEvent = 5,
    EWrestlerCutsceneType_MAX = 6,
};

enum class EWrestlerEnemyAnimState {
    Patrol = 0,
    Investigate = 1,
    MeleeCombat = 2,
    MeleeRanged = 3,
    Max = 4,
};

enum class EWrestlerEnemyIndicatorMode {
    StateMode = 0,
    AttackMode = 1,
    EWrestlerEnemyIndicatorMode_MAX = 2,
};

enum EWrestlerEnemyState {
    EWrestlerEnemyState_Hostile = 0,
    EWrestlerEnemyState_Battle = 1,
    EWrestlerEnemyState_Propagation = 2,
    EWrestlerEnemyState_HeightenedInvestigate = 3,
    EWrestlerEnemyState_Investigate = 4,
    EWrestlerEnemyState_HeightenedPatrol = 5,
    EWrestlerEnemyState_Patrol = 6,
    EWrestlerEnemyState_Max = 7,
};

enum EWrestlerEnemySubTeam {
    Attacking = 0,
    Waiting = 1,
    Flanking = 2,
    Ranged = 3,
    Chasing = 4,
    Max = 5,
};

enum class EWrestlerEnemyType {
    EWrestlerEnemyType_Melee = 0,
    EWrestlerEnemyType_Ranged = 1,
    EWrestlerEnemyType_Support = 2,
    EWrestlerEnemyType_Max = 3,
};

enum EWrestlerFootwearType {
    FootwearType_Default = 0,
    FootwearType1 = 1,
    FootwearType2 = 2,
    FootwearType3 = 3,
    FootwearType4 = 4,
    FootwearType_Max = 5,
    EWrestlerFootwearType_MAX = 6,
};

enum class EWrestlerFramePacingMode {
    Desktop = 0,
    Console = 1,
    EWrestlerFramePacingMode_MAX = 2,
};

enum class EWrestlerGameTeam {
    Neutral = 0,
    Player = 1,
    Pedestrians = 2,
    Cops = 3,
    Anarch = 4,
    Sabbat = 5,
    IAO = 6,
    Berserk = 7,
    EWrestlerGameTeam_MAX = 8,
};

enum class EWrestlerGameplayTokenType {
    Melee = 0,
    Ranged = 1,
    Special = 2,
    EWrestlerGameplayTokenType_MAX = 3,
};

enum class EWrestlerGenderType {
    Inconsequential = 0,
    Female = 1,
    Male = 2,
    NonBinary = 3,
    EWrestlerGenderType_MAX = 4,
};

enum class EWrestlerGetIntoPositionAnimationState {
    Idle = 0,
    Turning = 1,
    EWrestlerGetIntoPositionAnimationState_MAX = 2,
};

enum class EWrestlerGrantedPointsType {
    XP = 0,
    AP = 1,
    Sanguine = 2,
    Choleric = 3,
    Melancholic = 4,
    Malkavian = 5,
    Quest = 6,
    None = 7,
    EWrestlerGrantedPointsType_MAX = 8,
};

enum class EWrestlerHighlightType {
    HeightenedSenses = 0,
    PoliceTargets = 1,
    EWrestlerHighlightType_MAX = 2,
};

enum class EWrestlerHoudiniContainerMode {
    Baked = 0,
    Edit = 1,
    EWrestlerHoudiniContainerMode_MAX = 2,
};

enum class EWrestlerIndicatorType {
    Attack = 0,
    State = 1,
    EWrestlerIndicatorType_MAX = 2,
};

enum class EWrestlerInteractionInputType {
    InputPressed = 0,
    InputReleased = 1,
    InputHeld = 2,
    EWrestlerInteractionInputType_MAX = 3,
};

enum class EWrestlerLightActorFixedTickRate {
    Off = 0,
    Thirty = 1,
    Sixty = 2,
    EWrestlerLightActorFixedTickRate_MAX = 3,
};

enum class EWrestlerLightVisibilityVolumeToggleMode {
    AlwaysVisible = 0,
    AlwaysHidden = 1,
    VisibleWhenPlayerWithin = 2,
    HiddenWhenPlayerWithin = 3,
    EWrestlerLightVisibilityVolumeToggleMode_MAX = 4,
};

enum class EWrestlerLoadSaveMode {
    Load = 0,
    Save = 1,
    EWrestlerLoadSaveMode_MAX = 2,
};

enum class EWrestlerMasqueradeElement {
    EWMEEye = 0,
    EWMEMask = 1,
    EWMEBar = 2,
    EWrestlerMasqueradeElement_MAX = 3,
};

enum class EWrestlerMasqueradeState {
    Upheld = 0,
    Caution = 1,
    Engaged = 2,
    Forfeit = 3,
    EWrestlerMasqueradeState_MAX = 4,
};

enum class EWrestlerMassBloodResonanceState {
    Idle = 0,
    Dormant = 1,
    Activated = 2,
    EWrestlerMassBloodResonanceState_MAX = 3,
};

enum class EWrestlerMassContextualAnimType {
    Masquerade = 0,
    SmartObject = 1,
    EWrestlerMassContextualAnimType_MAX = 2,
};

enum class EWrestlerMassDistanceFromPlayerType {
    Undetermined = 0,
    Close = 1,
    Medium = 2,
    BeyondMax = 3,
    EWrestlerMassDistanceFromPlayerType_MAX = 4,
};

enum class EWrestlerMassGASRequestType {
    Name = 0,
    Event = 1,
    EWrestlerMassGASRequestType_MAX = 2,
};

enum class EWrestlerMassGameplayTags {
    Ability_Muted = 0,
    ActiveBloodResonance = 1,
    ActorTransformToMass = 2,
    BloodResonanceEvent = 3,
    CommitingCrime = 4,
    Conversable = 5,
    DisableMovementComponent = 6,
    DisablePoliceHarassment = 7,
    FeedOn = 8,
    ForceHighLOD = 9,
    HeightenedSensesTarget = 10,
    HighlightTarget = 11,
    IgnoreScaredEntities = 12,
    InCombat = 13,
    InConversation = 14,
    InConversationArea = 15,
    InIdle = 16,
    LockSwapAI = 17,
    MassLocationToActor = 18,
    MoveOutLeft = 19,
    MoveOutRight = 20,
    Mugger = 21,
    NoAwareness = 22,
    PlayerInFront = 23,
    PoliceAlerted = 24,
    PoliceDisturbedByWitness = 25,
    PoliceHarassment = 26,
    PoliceHighlight = 27,
    ReactingToScaredEntity = 28,
    RemovingEnemyAI = 29,
    SeeScaredEntity = 30,
    Unconscious = 31,
    UpdatePathHeight = 32,
    UsingGameplayAbility = 33,
    UsingNavMesh = 34,
    ViolentActionWitness = 35,
    HasViolentActionData = 36,
    WhereIsWallyPedestrian = 37,
    NeedToBecomeVisible = 38,
    EWrestlerMassGameplayTags_MAX = 39,
};

enum class EWrestlerMassHearInvestigationType {
    NoInvestigation = 0,
    ClosestPedestrian = 1,
    ClosestPolice = 2,
    ClosestEntity = 3,
    ClosestEntityPrioritizedPedestrian = 4,
    ClosestEntityPrioritizedPolice = 5,
    All = 6,
    EWrestlerMassHearInvestigationType_MAX = 7,
};

enum class EWrestlerMassModCharProfileState {
    Unset = 0,
    Good = 1,
    Bad = 2,
    EWrestlerMassModCharProfileState_MAX = 3,
};

enum class EWrestlerMassMoveUpdateType {
    None = 0,
    OnLaneChanged = 1,
    UpdateRate = 2,
    DistanceMoved = 3,
    EWrestlerMassMoveUpdateType_MAX = 4,
};

enum class EWrestlerMassPairedEntityType {
    Approaching = 0,
    SideBySide = 1,
    None = 2,
    EWrestlerMassPairedEntityType_MAX = 3,
};

enum class EWrestlerMassPropRemoveType {
    None = 0,
    Destroy = 1,
    Drop = 2,
    EWrestlerMassPropRemoveType_MAX = 3,
};

enum class EWrestlerMassSwapBackBahaviour {
    None = 0,
    Idle = 1,
    Scared = 2,
    Witness = 3,
    EWrestlerMassSwapBackBahaviour_MAX = 4,
};

enum class EWrestlerMassUseGameplayAbilityState {
    Idle = 0,
    Requested = 1,
    AwaitingActor = 2,
    AwaitingActivate = 3,
    Running = 4,
    CancelRequested = 5,
    AwaitingDeactivate = 6,
    Cooldown = 7,
    EWrestlerMassUseGameplayAbilityState_MAX = 8,
};

enum class EWrestlerMassVisibilityToPlayerType {
    Undetermined = 0,
    FrustumCulled = 1,
    NotVisible = 2,
    Visible = 3,
    EWrestlerMassVisibilityToPlayerType_MAX = 4,
};

enum class EWrestlerMenu {
    MenuUnknown = 0,
    MenuStart = 1,
    MenuMain = 2,
    MenuOptions = 3,
    MenuBrightness = 4,
    MenuClanChoice = 5,
    MenuClanChoiceTest = 6,
    MenuClanTrainer = 7,
    MenuLevelSelect = 8,
    MenuTestSelect = 9,
    MenuLoadingSavedGame = 10,
    MenuPDXLogin = 11,
    MenuLoadingScreen = 12,
    MenuGameOver = 13,
    MenuMasqueradeBroken = 14,
    MenuCutscenePause = 15,
    MenuRPG = 16,
    MenuRPGDisplayOptions = 17,
    MenuRPGAudioOptions = 18,
    MenuRPGGameplayOptions = 19,
    MenuCharacterSelection = 20,
    MenuCodex = 21,
    MenuCredits = 22,
    EWrestlerMenu_MAX = 23,
};

enum class EWrestlerMeshSlot {
    Chest = 0,
    Legs = 1,
    FullbodyOutfit = 2,
    Head = 3,
    Hair = 4,
    Hat = 5,
    Scarf = 6,
    Gloves = 7,
    Hands = 8,
    Accessory = 9,
    Shoes = 10,
    Count = 11,
    EWrestlerMeshSlot_MAX = 12,
};

enum class EWrestlerMoveSuccessCondition {
    PathFinished = 0,
    AcceptableDistanceReached = 1,
    PathFinishedOrAcceptableDistanceReached = 2,
    EWrestlerMoveSuccessCondition_MAX = 3,
};

enum class EWrestlerNavigableWidgetMode {
    StaticCursor = 0,
    FloatingCursor = 1,
    EWrestlerNavigableWidgetMode_MAX = 2,
};

enum class EWrestlerNavigationType {
    ZoneGraphs = 0,
    NavMesh = 1,
    PrioritizeZoneGraphsThenNavMesh = 2,
    PrioritizeNavMeshThenZoneGraphs = 3,
    EWrestlerNavigationType_MAX = 4,
};

enum class EWrestlerOutputPins {
    Success = 0,
    Failure = 1,
    EWrestlerOutputPins_MAX = 2,
};

enum class EWrestlerPedestrianEmotionState {
    Relaxed = 0,
    Cold = 1,
    Nervous = 2,
    Panicked = 3,
    Tranced = 4,
    EWrestlerPedestrianEmotionState_MAX = 5,
};

enum class EWrestlerPedestrianType {
    Unset = 0,
    Pedestrian = 1,
    Business = 2,
    Clubber = 3,
    Homeless = 4,
    SexWorker = 5,
    Police = 6,
    FireFighter = 7,
    EMT = 8,
    Security = 9,
    CivilWorker = 10,
    Biker = 11,
    Player = 12,
    Count = 13,
    EWrestlerPedestrianType_MAX = 14,
};

enum class EWrestlerPerformanceCameraType {
    Static = 0,
    Spline = 1,
    EWrestlerPerformanceCameraType_MAX = 2,
};

enum class EWrestlerPlayerDifficulty {
    None = 0,
    EPD_Casual = 1,
    EPD_Narrative = 2,
    EPD_Normal = 3,
    EPD_Hard = 4,
    EPD_Custom = 5,
    Count = 6,
    EWrestlerPlayerDifficulty_MAX = 7,
};

enum class EWrestlerPlayerMissionType {
    Any = 0,
    Standard = 1,
    Malkavian = 2,
    Max = 3,
};

enum class EWrestlerPoliceFearReaction {
    None = 0,
    Scare = 1,
    Engage = 2,
    EWrestlerPoliceFearReaction_MAX = 3,
};

enum class EWrestlerRPGMenuTabID {
    Map = 0,
    Quests = 1,
    Character = 2,
    Codex = 3,
    Malkavian = 4,
    AbilityTree = 5,
    Options = 6,
    NoTab = 7,
    VideoSettings = 8,
    AudioSettings = 9,
    GameSettings = 10,
    ControlsSettings = 11,
    AccessibilitySettings = 12,
    Settings = 13,
    EWrestlerRPGMenuTabID_MAX = 14,
};

enum EWrestlerRangedAttackMissingDirection {
    EWrestlerRangedAttackMissingDirection_Up = 0,
    EWrestlerRangedAttackMissingDirection_Right = 1,
    EWrestlerRangedAttackMissingDirection_Left = 2,
    EWrestlerRangedAttackMissingDirection_Max = 3,
};

enum class EWrestlerReservedSOState {
    Idle = 0,
    Reserved = 1,
    Found = 2,
    Claimed = 3,
    ReadyToUse = 4,
    Using = 5,
    Interrupted = 6,
    Complete = 7,
    Aborted = 8,
    EWrestlerReservedSOState_MAX = 9,
};

enum class EWrestlerSaveGameVersion {
    None = 0,
    Metadata = 1,
    TestDummy = 2,
    TestDummyToo = 3,
    V1 = 4,
    V2 = 5,
    Count = 6,
    EWrestlerSaveGameVersion_MAX = 7,
};

enum class EWrestlerSaveScope {
    Full = 0,
    GameProgression = 1,
    EWrestlerSaveScope_MAX = 2,
};

enum class EWrestlerSavedDataPromptMode {
    None = 0,
    Save = 1,
    Load = 2,
    EWrestlerSavedDataPromptMode_MAX = 3,
};

enum class EWrestlerSeamlessTravelStatus {
    Idle = 0,
    UnloadCurrentWorld = 1,
    UnloadCurrentWorld_WorldPartition = 2,
    LoadingDestinationWorldPersistentLevel = 3,
    LoadingDestinationWorldAlwaysLoadedLevels = 4,
    LoadingLandingArea_NonWorldPartition = 5,
    LoadingLandingArea_WorldPartition0 = 6,
    LoadingLandingArea_WorldPartition1 = 7,
    WaitForTravel = 8,
    TravelToDestination = 9,
    OriginWorldCollectGarbage = 10,
    BootUpWorldPartitionWorld0 = 11,
    BootUpWorldPartitionWorld1 = 12,
    BootNonWorldPartitionWorld = 13,
    Done = 14,
    Abort = 15,
    EWrestlerSeamlessTravelStatus_MAX = 16,
};

enum class EWrestlerSearchTeamStatus {
    Waiting = 0,
    Searching = 1,
    EWrestlerSearchTeamStatus_MAX = 2,
};

enum class EWrestlerSearchTeamType {
    ChasingPlayer = 0,
    Regular = 1,
    EWrestlerSearchTeamType_MAX = 2,
};

enum class EWrestlerSignificanceOptimizationLevel {
    None = 0,
    Minimal = 1,
    Medium = 2,
    High = 3,
    Extreme = 4,
    EWrestlerSignificanceOptimizationLevel_MAX = 5,
};

enum class EWrestlerStateTreeToken {
    Ignore = 0,
    Request = 1,
    Return = 2,
    EWrestlerStateTreeToken_MAX = 3,
};

enum class EWrestlerTaskRequestResult {
    AgentBusy = 0,
    ScoreFail = 1,
    Success = 2,
    Failed = 3,
    InvalidState = 4,
    TaskNotRefByAgent = 5,
    EWrestlerTaskRequestResult_MAX = 6,
};

enum class EWrestlerTaskStatus {
    Uninitialised = 0,
    AwaitingExecution = 1,
    Executing = 2,
    Success = 3,
    Failed = 4,
    EWrestlerTaskStatus_MAX = 5,
};

enum class EWrestlerTeleportTaskMode {
    Player = 0,
    Custom_Actor = 1,
    EWrestlerTeleportTaskMode_MAX = 2,
};

enum class EWrestlerTokenResult {
    Success = 0,
    Queued = 1,
    Failed = 2,
    EWrestlerTokenResult_MAX = 3,
};

enum class EWrestlerTokenState {
    Free = 0,
    Active = 1,
    Queued = 2,
    Cooldown = 3,
    EWrestlerTokenState_MAX = 4,
};

enum class EWrestlerTransitionRequestResult {
    Success = 0,
    Failure = 1,
    EWrestlerTransitionRequestResult_MAX = 2,
};

enum class EWrestlerTurnOffVolumeMode {
    None = 0,
    PreventSpawn = 1,
    RemoveInside = 2,
    Both = 3,
    EWrestlerTurnOffVolumeMode_MAX = 4,
};

enum class EWrestlerUIMapMode {
    MapScreen = 0,
    Minimap = 1,
    EWrestlerUIMapMode_MAX = 2,
};

enum class EWrestlerUIMarkerInfoType {
    Quest = 0,
    PointOfInterest = 1,
    EWrestlerUIMarkerInfoType_MAX = 2,
};

enum class EWrestlerUltraVolumetricsCollisionPick {
    Box = 0,
    Sphere = 1,
    EWrestlerUltraVolumetricsCollisionPick_MAX = 2,
};

enum class EWrestlerUltraVolumetricsFogLayer2 {
    Disabled = 0,
    Variation1 = 1,
    Variation2 = 2,
    EWrestlerUltraVolumetricsFogLayer2_MAX = 3,
};

enum class EWrestlerWaypointMode {
    Discrete = 0,
    Continuous = 1,
    EWrestlerWaypointMode_MAX = 2,
};

enum class EWrestlerWeatherSetupScope {
    Global = 0,
    Local = 1,
    EWrestlerWeatherSetupScope_MAX = 2,
};

enum class EWrestlerWeatherSetupType {
    Override = 0,
    Subtract = 1,
    Add = 2,
    EWrestlerWeatherSetupType_MAX = 3,
};

enum class EnemyStartState {
    Default = 0,
    Heightened = 1,
    Search = 2,
    Combat = 3,
    EnemyStartState_MAX = 4,
};

enum class WrestlerWaypointPassCondition {
    Enter = 0,
    Leave = 1,
    WrestlerWaypointPassCondition_MAX = 2,
};

