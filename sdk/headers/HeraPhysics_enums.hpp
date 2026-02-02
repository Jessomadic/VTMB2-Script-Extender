enum class EHeraPhysicsCollisionState {
    ECollisionUnknown = 0,
    ECollisionEnter = 1,
    ECollisionStay = 2,
    ECollisionRollingOrSliding = 3,
    ECollisionPendingExit = 4,
    ECollisionExit = 5,
    EHeraPhysicsCollisionState_MAX = 6,
};

enum class EHeraPhysicsDebugFlags {
    None = 0,
    ShowCollisionEnterImpulseNormals = 1,
    ShowCollisionEnterVelocities = 2,
    ShowCollisionEnterText_ActorName = 4,
    ShowCollisionEnterText_MaterialName = 8,
    ShowCollisionEnterText_Velocity = 16,
    ShowCollisionEnterText_Impulse = 32,
    ShowCollisionEnterText_Mass = 64,
    ShowSlidingRollingActorStates = 128,
    ShowSlidingRollingActorInfoText = 256,
    EHeraPhysicsDebugFlags_MAX = 257,
};

enum class EHeraPhysicsRollSlideFlags {
    None = 0,
    IsRollOrSlide = 1,
    StateChanged = 2,
    EHeraPhysicsRollSlideFlags_MAX = 3,
};

