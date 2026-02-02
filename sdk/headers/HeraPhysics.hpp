#ifndef UE4SS_SDK_HeraPhysics_HPP
#define UE4SS_SDK_HeraPhysics_HPP

#include "HeraPhysics_enums.hpp"

struct FHeraPhysicsActorContactPair
{
    TWeakObjectPtr<class AActor> ActorA;                                              // 0x0000 (size: 0x8)
    TWeakObjectPtr<class AActor> ActorB;                                              // 0x0008 (size: 0x8)
    float LastEnterCollisionTimeSeconds;                                              // 0x0010 (size: 0x4)
    float LastEnterCollisionImpulseMagnitude;                                         // 0x0014 (size: 0x4)
    class UHeraPhysicalMaterial* LastSlidingPhysicsMaterialActorA;                    // 0x0018 (size: 0x8)
    class UHeraPhysicalMaterial* LastSlidingPhysicsMaterialActorB;                    // 0x0020 (size: 0x8)

}; // Size: 0x40

struct FHeraPhysicsBodyContactPair
{
    FHeraPhysicsBodyInfo BodyInfoA;                                                   // 0x0000 (size: 0x50)
    FHeraPhysicsBodyInfo BodyInfoB;                                                   // 0x0050 (size: 0x50)
    FVector ImpulseNormal;                                                            // 0x00A0 (size: 0x18)
    FVector WorldLocation;                                                            // 0x00B8 (size: 0x18)
    EHeraPhysicsCollisionState CollisionState;                                        // 0x00D0 (size: 0x1)
    EHeraPhysicsCollisionState PreviousCollisionState;                                // 0x00D1 (size: 0x1)
    int32 Priority;                                                                   // 0x00D4 (size: 0x4)

}; // Size: 0xE0

struct FHeraPhysicsBodyInfo
{
    TWeakObjectPtr<class UPrimitiveComponent> Component;                              // 0x0008 (size: 0x8)
    class UHeraPhysicalMaterial* Material;                                            // 0x0010 (size: 0x8)
    FVector LinearVelocityCmPerSec;                                                   // 0x0018 (size: 0x18)
    FVector AngularVelocityDegrees;                                                   // 0x0030 (size: 0x18)
    float MASS;                                                                       // 0x0048 (size: 0x4)
    bool bStatic;                                                                     // 0x004C (size: 0x1)

}; // Size: 0x50

struct FHeraPhysicsDebugTickFunction : public FTickFunction
{
}; // Size: 0x30

class UHeraPhysicalMaterial : public UPhysicalMaterial
{
    class UAkAudioEvent* ImpactAudioEvent;                                            // 0x0088 (size: 0x8)
    class UAkAudioEvent* ResonanceEvent;                                              // 0x0090 (size: 0x8)
    class UAkAudioEvent* RollSlideEventStart;                                         // 0x0098 (size: 0x8)
    class UAkAudioEvent* RollSlideEventStop;                                          // 0x00A0 (size: 0x8)
    float AudioDampeningAmount;                                                       // 0x00A8 (size: 0x4)
    bool bDisableAudioObstruction;                                                    // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UHeraPhysicsCollisionHandler : public UPhysicsCollisionHandler
{

    void SetupCollisionHandler();
    void OnRollSlideUpdate(const class AActor* SlidingActor, const class AActor* OtherActor, const FHeraPhysicsBodyInfo& SlidingInfo, const FHeraPhysicsBodyInfo& OtherInfo, const FVector WorldLocation, const FVector Impulse);
    void OnRollSlideStart(const class AActor* SlidingActor, const class AActor* OtherActor, const FHeraPhysicsBodyInfo& SlidingInfo, const FHeraPhysicsBodyInfo& OtherInfo, const FVector WorldLocation, const FVector Impulse);
    void OnRollSlideEnd(const class AActor* SlidingActor, const class AActor* OtherActor, const class UHeraPhysicalMaterial* SlidingMaterial, const class UHeraPhysicalMaterial* OtherMaterial);
    void OnImpact(const FHeraPhysicsBodyContactPair& ContactPair);
    void OnCollisionStay(const FHeraPhysicsBodyContactPair& ContactPair);
    void OnCollisionExit(const FHeraPhysicsBodyContactPair& ContactPair);
    void OnCollisionEnter(const FHeraPhysicsBodyContactPair& ContactPair);
    void HandleCollisionDebug(class AActor* ActorA, class AActor* ActorB, class UHeraPhysicalMaterial* MaterialA, class UHeraPhysicalMaterial* MaterialB, float MassA, float MassB, float DeltaVelocityA, float DeltaVelocityB, FVector WorldPosition, FVector Impulse);
    void HandleCollision(class AActor* ActorA, class AActor* ActorB, class UHeraPhysicalMaterial* MaterialA, class UHeraPhysicalMaterial* MaterialB, float MassA, float MassB, float DeltaVelocityA, float DeltaVelocityB, FVector WorldPosition, FVector Impulse);
    double GetMinVelocityThreshold();
    double GetMinImpulseMagnitudeThreshold();
    double GetMaxDistanceToCameraThreshold();
    uint8 GetMaxCollisionEnterEventsPerFrame();
}; // Size: 0x90

class UHeraPhysicsDebugSettings : public UHeraSettings
{
    uint32 DebugDrawFlags;                                                            // 0x0038 (size: 0x4)

}; // Size: 0x40

class UHeraPhysicsSettings : public UHeraSettings
{
    uint8 MaxCollisionEnterEventsPerFrame;                                            // 0x0038 (size: 0x1)
    double MaxDistanceToCameraThreshold;                                              // 0x0040 (size: 0x8)
    double MinImpulseMagnitudeThreshold;                                              // 0x0048 (size: 0x8)
    double MinVelocityThreshold;                                                      // 0x0050 (size: 0x8)
    float ImpactDebounceSeconds;                                                      // 0x0058 (size: 0x4)
    float ImpactDebounceCancelThreshold;                                              // 0x005C (size: 0x4)
    float SlidingMinThresholdCmPerSec;                                                // 0x0060 (size: 0x4)
    float RollingMinThresholdDegreesPerSec;                                           // 0x0064 (size: 0x4)
    float ExitDebounceSeconds;                                                        // 0x0068 (size: 0x4)

}; // Size: 0x70

#endif
