#ifndef UE4SS_SDK_HeraAudio_HPP
#define UE4SS_SDK_HeraAudio_HPP

#include "HeraAudio_enums.hpp"

struct FHeraAudioAnimLoopInfo
{
    class UAkAudioEvent* PlayEvent;                                                   // 0x0000 (size: 0x8)
    class UAkAudioEvent* StopEvent;                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHeraAudioAutoFoleyParameters
{
    class UAkAudioEvent* StartEvent;                                                  // 0x0000 (size: 0x8)
    class UAkAudioEvent* StopEvent;                                                   // 0x0008 (size: 0x8)
    FName ReferenceBoneName;                                                          // 0x0010 (size: 0x8)
    class UAkRtpc* SpeedRtpc;                                                         // 0x0018 (size: 0x8)
    class UAkRtpc* AccelerationRtpc;                                                  // 0x0020 (size: 0x8)
    class UAkRtpc* AngularSpeedRtpc;                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FHeraAudioAutoFoleyRuntimeInfo
{
}; // Size: 0x38

struct FHeraAudioBox
{
    FVector Center;                                                                   // 0x0000 (size: 0x18)
    FVector Extent;                                                                   // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FHeraAudioCharacterEventSectionTemplate : public FMovieSceneEvalTemplate
{
    class UHeraAudioCharacterMovieSceneSection* Section;                              // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FHeraAudioCharacterMovieSceneTrackImplementation : public FMovieSceneTrackImplementation
{
}; // Size: 0x10

struct FHeraAudioCharacterSocketDefaults
{
    FHeraAudioSocketName SocketName;                                                  // 0x0000 (size: 0x8)
    bool bStopWhenOwnerDestroyed;                                                     // 0x0008 (size: 0x1)
    bool bEnableAutoFoley;                                                            // 0x0009 (size: 0x1)
    FHeraAudioAutoFoleyParameters AutoFoleyParameters;                                // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FHeraAudioComponentPool
{
    TArray<class UHeraAudioComponent*> FreeComponents;                                // 0x0000 (size: 0x10)
    TArray<class UHeraAudioComponent*> UsedComponents;                                // 0x0010 (size: 0x10)

}; // Size: 0x30

struct FHeraAudioComponentPoolDefaults
{
    uint32 MaxNumComponents;                                                          // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FHeraAudioEventSectionTemplate : public FMovieSceneEvalTemplate
{
    class UHeraAudioMovieSceneSection* Section;                                       // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FHeraAudioInfiniteEvent
{
    class UAkAudioEvent* Event;                                                       // 0x0000 (size: 0x8)
    class UAkAudioEvent* EventStop;                                                   // 0x0008 (size: 0x8)
    int32 CallbackMask;                                                               // 0x0010 (size: 0x4)
    float SeekPercentage;                                                             // 0x0014 (size: 0x4)
    FHeraAudioInfiniteEventPostEventCallback PostEventCallback;                       // 0x0018 (size: 0x10)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    bool bIsActive;                                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FHeraAudioMassActiveEventTag : public FMassTag
{
}; // Size: 0x1

struct FHeraAudioMassAmbientGroupFragment : public FMassFragment
{
}; // Size: 0x8

struct FHeraAudioMassAmbientGroupSharedFragment : public FMassSharedFragment
{
    TMap<uint64, FHeraAudioMassGroupData> GroupData;                                  // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FHeraAudioMassAmbientRTPCSharedFragment : public FMassSharedFragment
{
    class UAkRtpc* GroupIdRtpc;                                                       // 0x0000 (size: 0x8)
    class UAkRtpc* NumEmittersRtpc;                                                   // 0x0008 (size: 0x8)
    class UAkRtpc* BoundsVolumeRtpc;                                                  // 0x0010 (size: 0x8)
    class UAkRtpc* DensityRtpc;                                                       // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FHeraAudioMassAmbientSharedFragment : public FMassSharedFragment
{
    class UAkAudioEvent* AudioEvent;                                                  // 0x0000 (size: 0x8)

}; // Size: 0x38

struct FHeraAudioMassComponentEnabledFragment : public FMassFragment
{
}; // Size: 0x1

struct FHeraAudioMassComponentFragment : public FMassFragment
{
}; // Size: 0x8

struct FHeraAudioMassComponentInitialisationQueue
{
    TArray<class UHeraAudioMassComponent*> AudioComponents;                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FHeraAudioMassDisabledTag : public FMassTag
{
}; // Size: 0x1

struct FHeraAudioMassGroupData
{
}; // Size: 0x4

struct FHeraAudioMassMultiPositionTag : public FMassTag
{
}; // Size: 0x1

struct FHeraAudioMassNoAssignedEventTag : public FMassTag
{
}; // Size: 0x1

struct FHeraAudioMovieSceneTrackImplementation : public FMovieSceneTrackImplementation
{
}; // Size: 0x10

struct FHeraAudioPoolName
{
    FName Value;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FHeraAudioProfilingData
{
}; // Size: 0x28

struct FHeraAudioResonanceObject
{
    TWeakObjectPtr<class AActor> OwnerActor;                                          // 0x0000 (size: 0x8)
    TWeakObjectPtr<class UPrimitiveComponent> PrimitiveComponent;                     // 0x0008 (size: 0x8)
    TWeakObjectPtr<class UHeraAudioComponent> AudioComponent;                         // 0x0010 (size: 0x8)
    class UAkAudioEvent* AudioEvent;                                                  // 0x0018 (size: 0x8)

}; // Size: 0x40

struct FHeraAudioRtpcQueryData
{
    TSoftObjectPtr<UHeraPropertyFloat> Property;                                      // 0x0000 (size: 0x28)
    FVector2f InputRange;                                                             // 0x0028 (size: 0x8)
    FVector2f OutputRange;                                                            // 0x0030 (size: 0x8)
    bool bDecibelInput;                                                               // 0x0038 (size: 0x1)

}; // Size: 0x58

struct FHeraAudioSocketName
{
    FName Value;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FHeraAudioTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FHeraAudioWwiseProfilingData
{
}; // Size: 0x18

struct FHeraPropertyBlueprintDelegateBinding
{
    class UHeraPropertyBase* Property;                                                // 0x0000 (size: 0x8)
    FName FunctionNameToBind;                                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHeraPropertyChangeDelegate
{
    class UHeraPropertyBase* Property;                                                // 0x0000 (size: 0x8)
    FHeraPropertyChangeDelegateOnPropertyChangedBool OnPropertyChangedBool;           // 0x0008 (size: 0x10)
    void HeraPropertyChanged_Bool(class UHeraPropertyBool* Property, bool NewValue);
    FHeraPropertyChangeDelegateOnPropertyChangedInt OnPropertyChangedInt;             // 0x0018 (size: 0x10)
    void HeraPropertyChanged_Int(class UHeraPropertyInt* Property, int32 NewValue);
    FHeraPropertyChangeDelegateOnPropertyChangedFloat OnPropertyChangedFloat;         // 0x0028 (size: 0x10)
    void HeraPropertyChanged_Float(class UHeraPropertyFloat* Property, float NewValue);
    FHeraPropertyChangeDelegateOnPropertyChangedString OnPropertyChangedString;       // 0x0038 (size: 0x10)
    void HeraPropertyChanged_String(class UHeraPropertyString* Property, FString NewValue);
    FHeraPropertyChangeDelegateOnPropertyChangedGameplayTag OnPropertyChangedGameplayTag; // 0x0048 (size: 0x10)
    void HeraPropertyChanged_GameplayTag(class UHeraPropertyGameplayTag* Property, const FGameplayTag& NewValue);
    FHeraPropertyChangeDelegateOnPropertyChangedList OnPropertyChangedList;           // 0x0058 (size: 0x10)
    void HeraPropertyChanged_List(class UHeraPropertyStateTrackingList* Property, FHeraStateTrackingList NewValue);

}; // Size: 0x68

class AHeraAudioAmbient : public AActor
{
    class UAkAudioEvent* AudioEvent;                                                  // 0x0298 (size: 0x8)
    bool bAutoPost;                                                                   // 0x02A0 (size: 0x1)
    class UHeraAudioComponent* AudioComponent;                                        // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class AHeraAudioAmbientSpline : public AActor
{
    class UAkAudioEvent* AudioEvent;                                                  // 0x0298 (size: 0x8)
    class USplineComponent* SplineComponent;                                          // 0x02A0 (size: 0x8)
    class UHeraAudioComponent* AudioComponent;                                        // 0x02A8 (size: 0x8)
    bool bAutoPost;                                                                   // 0x02B0 (size: 0x1)

    void TickDebugDraw_DevelopmentOnly(float InDeltaSeconds);
    FVector OnTickGetLocation(float InDeltaSeconds, const FTransform& InListenerTransform);
    void OnAudioComponentTickUpdate(float InDeltaTime);
    void OnAudioComponentTickDebugDraw(float InDeltaTime, const class UHeraAudioDebugSettings* InDebugSettings);
    FVector GetDefaultLocation();
}; // Size: 0x2E8

class AHeraAudioAmbientVolume : public AActor
{
    class UHeraAudioVolumeComponent_Deprecated* VolumeComponent;                      // 0x0298 (size: 0x8)
    class UAkAudioEvent* AudioEvent;                                                  // 0x02A0 (size: 0x8)
    bool bAutoPost;                                                                   // 0x02A8 (size: 0x1)

}; // Size: 0x2B0

class AHeraAudioGeometry : public AActor
{
    class UHeraAudioGeometryComponent* GeometryComponent;                             // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AHeraAudioMassAmbient : public AActor
{
    class UHeraAudioMassComponent* AudioComponent;                                    // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AHeraAudioRTPCSpline : public AActor
{
    class UAkRtpc* ProgressRtpc;                                                      // 0x0298 (size: 0x8)
    class USplineComponent* SplineComponent;                                          // 0x02A0 (size: 0x8)

    void TickDebugDraw_DevelopmentOnly(float InDeltaSeconds);
    float OnTickGetProgressValue(float InDeltaSeconds, const FTransform& InListenerTransform);
}; // Size: 0x2B0

class IHeraAudioCharacterInterface : public IInterface
{

    class UHeraAudioCharacterComponent* GetAudioCharacterComponent();
}; // Size: 0x28

class UDEPRECATED_HeraAudioManagedComponent : public USceneComponent
{
    bool bAutoPost;                                                                   // 0x02A0 (size: 0x1)
    class UAkComponent* AkComponent;                                                  // 0x02A8 (size: 0x8)
    FHeraAudioManagedComponentOnPlaybackStateChanged OnPlaybackStateChanged;          // 0x02B0 (size: 0x1)
    void OnPlaybackStateChanged(bool bIsPlaying);
    bool bManuallyStarted;                                                            // 0x02B1 (size: 0x1)
    bool bIsPlaying;                                                                  // 0x02B2 (size: 0x1)

    void StopPlaying();
    void StartPlaying();
}; // Size: 0x2C0

class UHeraAudioAnimNotifyBase : public UAnimNotify
{
}; // Size: 0x38

class UHeraAudioAnimNotifyLoopBase : public UAnimNotifyState
{
}; // Size: 0x30

class UHeraAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetSwitchOnAllComponentsWithTag(FGameplayTag InTag, class UAkSwitchValue* InSwitchValue, const class UObject* InWorldContextObject);
    void SetState(class UAkStateValue* InStateValue);
    void SetRTPCOnAllComponentsWithTag(FGameplayTag InTag, class UAkRtpc* InRtpc, float InValue, int32 InInterpolationTimeMs, const class UObject* InWorldContextObject);
    void SetRTPCGlobal(class UAkRtpc* InRtpc, float InValue, int32 InInterpolationTimeMs, const class UObject* InWorldContextObject);
    void SetAudioMainOutputPreset(int32 InEffectSlotIndex, FString InSharesetName);
    void SetAudioMainOutputPanningRule(EHeraAudioPanningRule InPanningRule);
    void SetAudioBusChannelConfig(FString InBusName, EHeraAudioChannelConfiguration InChannelConfig);
    void PostEventOnAllComponentsWithTag(FGameplayTag InTag, class UAkAudioEvent* InAudioEvent, const class UObject* InWorldContextObject, class UAkAudioEvent* InStopEvent);
    void PostEventGlobal(class UAkAudioEvent* InAkEvent, const class UObject* InWorldContextObject, int32 InCallbackMask, const FPostEventGlobalInPostEventCallback& InPostEventCallback);
    float IsEventHeard(const class UAkAudioEvent* InAkEvent, const FVector InWorldPosition, EHeraEventHeard& OutExecBranches, const class UAkComponent* InAkComponent);
    void IsAkComponentsEventHeard(const class UAkComponent* InAkComponent, const FVector InWorldPosition, EHeraEventHeard& OutExecBranches);
    class UAkSwitchValue* GetSwitchForSurfaceType(TEnumAsByte<EPhysicalSurface> InSurface, EHeraValidSwitch& OutExecBranches, const class UObject* InWorldContextObject, bool bUseSecondarySwitches);
    class UAkRoomComponent* GetRoomContainingAudioComponent(class UHeraAudioComponent* InAudioComponent, EHeraValidComponent& OutExecBranches, const class UObject* InWorldContextObject);
    class UAkRoomComponent* GetRoomContainingAkComponent(class UAkComponent* InAkComponent, EHeraValidComponent& OutExecBranches, const class UObject* InWorldContextObject);
    FTransform GetMainListenerTransform(const class UObject* InWorldContextObject);
    class UAkComponent* GetMainListener();
    class UAkLateReverbComponent* GetLateReverbForRoom(class UAkRoomComponent* InRoomComponent, EHeraValidComponent& OutExecBranches, const class UObject* InWorldContextObject);
    class UHeraAudioDebugSettings* GetAudioDebugSettings();
}; // Size: 0x28

class UHeraAudioCharacterAnimNotify : public UHeraAudioAnimNotifyBase
{
    class UAkAudioEvent* AudioEvent;                                                  // 0x0038 (size: 0x8)
    FHeraAudioSocketName SocketName;                                                  // 0x0040 (size: 0x8)
    class UHeraAudioCharacterComponent* AudioContext;                                 // 0x0048 (size: 0x8)

    void OnCharacterAudioNotify(class UHeraAudioCharacterComponent* CharacterAudioComponent, class USkeletalMeshComponent* MeshComponent, class UAnimSequenceBase* Animation);
}; // Size: 0x50

class UHeraAudioCharacterAnimNotifyLoop : public UHeraAudioAnimNotifyLoopBase
{
    TMap<class FHeraAudioSocketName, class FHeraAudioAnimLoopInfo> SocketLoopEvents;  // 0x0030 (size: 0x50)

    void OnCharacterAudioLoopTick(class UHeraAudioCharacterComponent* CharacterAudioComponent, class USkeletalMeshComponent* MeshComponent, class UAnimSequenceBase* Animation, float FrameDeltaTime);
    void OnCharacterAudioLoopEnd(class UHeraAudioCharacterComponent* CharacterAudioComponent, class USkeletalMeshComponent* MeshComponent, class UAnimSequenceBase* Animation);
    void OnCharacterAudioLoopBegin(class UHeraAudioCharacterComponent* CharacterAudioComponent, class USkeletalMeshComponent* MeshComponent, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x80

class UHeraAudioCharacterComponent : public USceneComponent
{
    FHeraAudioSocketName DefaultSocket;                                               // 0x02A0 (size: 0x8)
    TArray<FHeraAudioCharacterSocketDefaults> AttachmentSocketDefaults;               // 0x02A8 (size: 0x10)
    class UAkRtpc* CharacterSpeedRtpc;                                                // 0x02B8 (size: 0x8)
    class UAkRtpc* CharacterLocomotionDirectionRtpc;                                  // 0x02C0 (size: 0x8)
    TMap<class FName, class UHeraAudioComponent*> AudioComponents;                    // 0x02C8 (size: 0x50)
    TMap<class FName, class FHeraAudioAutoFoleyRuntimeInfo> AutoFoleyInfo;            // 0x0318 (size: 0x50)
    class USkeletalMeshComponent* MeshComponent;                                      // 0x0368 (size: 0x8)
    TArray<FHeraAudioSocketName> AttachmentSockets;                                   // 0x0370 (size: 0x10)

    void SetSwitchOnAllComponents(class UAkSwitchValue* InSwitchValue);
    void SetSwitch(class UAkSwitchValue* InSwitchValue, FName InSocketName);
    void SetRTPCOnAllComponents(class UAkRtpc* InRtpcValue, float InValue, int32 InInterpolationTimeMs);
    void SetRTPC(class UAkRtpc* InRtpcValue, float InValue, int32 InInterpolationTimeMs, FName InSocketName);
    void PostEventOnAllComponents(class UAkAudioEvent* InEvent);
    void PostEvent(class UAkAudioEvent* InEvent, FName InSocketName, const FPostEventInPostEventCallback& InPostEventCallback, int32 InCallbackMask, class UAkAudioEvent* InEventStop, bool bInForce);
    void PostAkEventOnAllComponents(class UAkAudioEvent* InEvent);
    int32 PostAkEvent(class UAkAudioEvent* InEvent, FName InSocketName);
    class UHeraAudioComponent* GetAudioComponentDefault(EHeraValidComponent& OutExecBranches);
    class UHeraAudioComponent* GetAudioComponent(FName InSocketName, EHeraValidComponent& OutExecBranches);
    class UAkComponent* GetAkComponentDefault(EHeraValidComponent& OutExecBranches);
    class UAkComponent* GetAkComponent(FName InSocketName, EHeraValidComponent& OutExecBranches);
}; // Size: 0x3A0

class UHeraAudioCharacterMovieSceneSection : public UHeraAudioMovieSceneSection
{
    FHeraAudioSocketName SocketName;                                                  // 0x0108 (size: 0x8)

}; // Size: 0x110

class UHeraAudioCharacterMovieSceneTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UHeraAudioComponent : public USceneComponent
{
    FHeraAudioComponentOnAudioActiveChanged OnAudioActiveChanged;                     // 0x02A0 (size: 0x10)
    void HeraAudioComponentOnActiveChanged(bool bIsActive);
    bool bStopWhenOwnerDestroyed;                                                     // 0x02C0 (size: 0x1)
    float AttenuationScalingFactor;                                                   // 0x02C4 (size: 0x4)
    float OuterRadius;                                                                // 0x02C8 (size: 0x4)
    float InnerRadius;                                                                // 0x02CC (size: 0x4)
    FGameplayTag CategoryTag;                                                         // 0x02D0 (size: 0x8)
    class UAkComponent* AkComponent;                                                  // 0x02D8 (size: 0x8)
    class UAkAudioEvent* LoudestInfiniteEvent;                                        // 0x02E0 (size: 0x8)
    TSet<FHeraAudioInfiniteEvent> InfiniteEvents;                                     // 0x02E8 (size: 0x50)
    bool bInfiniteEventsDirty;                                                        // 0x0338 (size: 0x1)
    bool bInfiniteEventsActive;                                                       // 0x0339 (size: 0x1)
    bool bAudioActive;                                                                // 0x033A (size: 0x1)

    void StopAll();
    void SetSwitch(class UAkSwitchValue* InSwitchValue);
    void SetStopWhenOwnerDestroyed(bool bInStopWhenOwnerDestroyed);
    void SetRTPC(class UAkRtpc* InRtpcValue, float InValue, int32 InInterpolationTimeMs);
    void PostEvent(class UAkAudioEvent* InEvent, const FPostEventInPostEventCallback& InPostEventCallback, int32 InCallbackMask, class UAkAudioEvent* InEventStop, bool bInForce, float InSeekPercentage);
    void PostAkEvent(class UAkAudioEvent* InEvent, bool bInForce);
    bool IsAudioActive();
    float GetAttenuationRadius();
}; // Size: 0x340

class UHeraAudioComponentManager : public UObject
{
    TArray<class UHeraAudioComponent*> AudioComponents;                               // 0x0030 (size: 0x10)
    TArray<class UHeraAudioCharacterComponent*> CharacterAudioComponents;             // 0x0040 (size: 0x10)
    TArray<class UHeraAudioGeometryComponent*> GeometryComponents;                    // 0x0050 (size: 0x10)
    class UHeraAudioEnvironmentSensor* EnvironmentSensor;                             // 0x0060 (size: 0x8)
    class UHeraAudioResonanceSystem* ResonanceSystem;                                 // 0x0068 (size: 0x8)

}; // Size: 0x140

class UHeraAudioDebugSettings : public UHeraSettings
{
    bool bUseDebugSurfaceSwitch;                                                      // 0x0058 (size: 0x1)
    TSoftObjectPtr<UAkSwitchValue> DebugSurfaceSwitch;                                // 0x0060 (size: 0x28)
    uint32 AmbientDebugDrawFlags;                                                     // 0x0088 (size: 0x4)
    float AmbientTransformScale;                                                      // 0x008C (size: 0x4)
    float AmbientTextScale;                                                           // 0x0090 (size: 0x4)
    float AmbientDistanceFilter;                                                      // 0x0094 (size: 0x4)
    FString AmbientActorFilter;                                                       // 0x0098 (size: 0x10)
    FLinearColor AmbientActiveColour;                                                 // 0x00A8 (size: 0x10)
    FLinearColor AmbientInactiveColour;                                               // 0x00B8 (size: 0x10)
    FLinearColor AmbientVolumeColour;                                                 // 0x00C8 (size: 0x10)
    uint32 CharacterDebugDrawFlags;                                                   // 0x00D8 (size: 0x4)
    float CharacterSphereRadiusScale;                                                 // 0x00DC (size: 0x4)
    float CharacterDistanceFilter;                                                    // 0x00E0 (size: 0x4)
    FString CharacterActorFilter;                                                     // 0x00E8 (size: 0x10)
    FLinearColor CharacterSocketVelocityColour;                                       // 0x00F8 (size: 0x10)
    FLinearColor CharacterSocketAccelerationColour;                                   // 0x0108 (size: 0x10)
    FLinearColor CharacterSocketAngularVelocityColour;                                // 0x0118 (size: 0x10)
    bool bRtpcDebugDrawScreenSpace;                                                   // 0x0128 (size: 0x1)
    bool bOutputRtpcDebugDrawScreenSpace;                                             // 0x0129 (size: 0x1)
    FString RtpcFilter;                                                               // 0x0130 (size: 0x10)
    uint32 EnvironmentDebugDrawFlags;                                                 // 0x0140 (size: 0x4)
    float EnvironmentSamplingLineTraceThickness;                                      // 0x0144 (size: 0x4)
    float EnvironmentSamplingLineTraceEndSize;                                        // 0x0148 (size: 0x4)
    float EnvironmentGeometryWireframeThickness;                                      // 0x014C (size: 0x4)
    FLinearColor EnvironmentLineTraceHitColour;                                       // 0x0150 (size: 0x10)
    FLinearColor EnvironmentLineTraceMissColour;                                      // 0x0160 (size: 0x10)
    FLinearColor EnvironmentLineTraceEndColour;                                       // 0x0170 (size: 0x10)
    FLinearColor EnvironmentReverbVolumeColour;                                       // 0x0180 (size: 0x10)
    FLinearColor EnvironmentGeometryColour;                                           // 0x0190 (size: 0x10)
    uint32 PortalDebugDrawFlags;                                                      // 0x01A0 (size: 0x4)
    bool bPropertyHandlerEnableDebug;                                                 // 0x01A4 (size: 0x1)
    FString PropertyHandlerFilter;                                                    // 0x01A8 (size: 0x10)
    float VolumeWireframeThickness;                                                   // 0x01B8 (size: 0x4)
    bool bMotionEnabled;                                                              // 0x01BC (size: 0x1)
    uint32 StatsDisplayFlags;                                                         // 0x01C0 (size: 0x4)
    bool bStatsDisplayMaxValue;                                                       // 0x01C4 (size: 0x1)
    bool bStatsDisplayBudgetValue;                                                    // 0x01C5 (size: 0x1)

    void DebugAudioComponentFlagToggle_ShowVolumeEmitters();
    void DebugAudioComponentFlagToggle_ShowTransform();
    void DebugAudioComponentFlagToggle_ShowRTPCs();
    void DebugAudioComponentFlagToggle_ShowPlayerEmitters();
    void DebugAudioComponentFlagToggle_ShowOnlyActive();
    void DebugAudioComponentFlagToggle_ShowEventName();
    void DebugAudioComponentFlagToggle_ShowComponentName();
    void DebugAudioComponentFlagToggle_ShowAttenuation();
    void DebugAudioComponentFlagToggle_ShowActorLabel();
    bool DebugAudioComponentFlagIsSet_ShowVolumeEmitters();
    bool DebugAudioComponentFlagIsSet_ShowTransform();
    bool DebugAudioComponentFlagIsSet_ShowRTPCs();
    bool DebugAudioComponentFlagIsSet_ShowPlayerEmitters();
    bool DebugAudioComponentFlagIsSet_ShowOnlyActive();
    bool DebugAudioComponentFlagIsSet_ShowEventName();
    bool DebugAudioComponentFlagIsSet_ShowComponentName();
    bool DebugAudioComponentFlagIsSet_ShowAttenuation();
    bool DebugAudioComponentFlagIsSet_ShowActorLabel();
}; // Size: 0x1C8

class UHeraAudioEnvironmentSensor : public UObject
{
    class UAkRtpc* ReverbSizeRTPC;                                                    // 0x0028 (size: 0x8)
    class UAkRtpc* ReverbOpennessRTPC;                                                // 0x0030 (size: 0x8)

}; // Size: 0xE8

class UHeraAudioGeometryComponent : public UPrimitiveComponent
{
    TArray<FHeraAudioBox> BoxPrimitives;                                              // 0x0578 (size: 0x10)
    class UBodySetup* BodySetup;                                                      // 0x0588 (size: 0x8)

    TArray<FHeraAudioBox> GetBoxPrimitives();
}; // Size: 0x590

class UHeraAudioGlobalGameObject : public UAkGameObject
{
}; // Size: 0x2C0

class UHeraAudioMassAmbientActiveProcessor : public UMassProcessor
{
}; // Size: 0x360

class UHeraAudioMassAmbientInactiveProcessor : public UMassProcessor
{
}; // Size: 0x360

class UHeraAudioMassAmbientMultiPositionActiveProcessor : public UMassProcessor
{
}; // Size: 0x360

class UHeraAudioMassAmbientMultiPositionInactiveProcessor : public UMassProcessor
{
}; // Size: 0x360

class UHeraAudioMassAmbientRTPCTrait : public UMassEntityTraitBase
{
    class UAkRtpc* GroupIdRtpc;                                                       // 0x0028 (size: 0x8)
    class UAkRtpc* NumEmittersRtpc;                                                   // 0x0030 (size: 0x8)
    class UAkRtpc* BoundsVolumeRtpc;                                                  // 0x0038 (size: 0x8)
    class UAkRtpc* DensityRtpc;                                                       // 0x0040 (size: 0x8)

}; // Size: 0x48

class UHeraAudioMassAmbientTrait : public UMassEntityTraitBase
{
    class UAkAudioEvent* AudioEvent;                                                  // 0x0028 (size: 0x8)
    bool bUseMultiPosition;                                                           // 0x0030 (size: 0x1)
    float MultiPositionGroupingDistance;                                              // 0x0034 (size: 0x4)

}; // Size: 0x38

class UHeraAudioMassAudioActiveAddedObserver : public UMassObserverProcessor
{
}; // Size: 0x370

class UHeraAudioMassAudioActiveRemovedObserver : public UMassObserverProcessor
{
}; // Size: 0x370

class UHeraAudioMassAudioMultiPositionAddedObserver : public UMassObserverProcessor
{
}; // Size: 0x370

class UHeraAudioMassAudioMultiPositionRemovedObserver : public UMassObserverProcessor
{
}; // Size: 0x370

class UHeraAudioMassComponent : public USceneComponent
{
    FMassEntityConfig EntityConfig;                                                   // 0x02A0 (size: 0x30)
    bool bEnabled;                                                                    // 0x02D0 (size: 0x1)

    void SetRTPC(class UAkRtpc* InRtpcValue, float InValue, int32 InInterpolationTimeMs);
    void SetEnabled(bool bInEnabled);
    bool IsMultiPosition();
    bool IsEnabled();
    bool IsAudioActive();
}; // Size: 0x300

class UHeraAudioMassComponentSyncTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UHeraAudioMassComponentTranslatorToMass : public UMassTranslator
{
}; // Size: 0x380

class UHeraAudioMassSubsystem : public UWorldSubsystem
{
    class UMassSpawnerSubsystem* SpawnerSystem;                                       // 0x0030 (size: 0x8)
    class UMassSimulationSubsystem* SimulationSystem;                                 // 0x0038 (size: 0x8)
    class UHeraAudioSubsystem* AudioSubsystem;                                        // 0x0040 (size: 0x8)

}; // Size: 0x1A0

class UHeraAudioMovieSceneSection : public UMovieSceneSection
{
    class UAkAudioEvent* StartEvent;                                                  // 0x00F0 (size: 0x8)
    class UAkAudioEvent* StopEvent;                                                   // 0x00F8 (size: 0x8)
    bool bForcePost;                                                                  // 0x0100 (size: 0x1)

}; // Size: 0x108

class UHeraAudioMovieSceneTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UHeraAudioNiagaraDataInterface : public UNiagaraDataInterface
{
    class UAkAudioEvent* AudioEvent;                                                  // 0x0038 (size: 0x8)

}; // Size: 0x40

class UHeraAudioPooledComponent : public USceneComponent
{
    FHeraAudioPoolName PoolName;                                                      // 0x02B0 (size: 0x8)

    void StopAll();
    void SetSwitch(class UAkSwitchValue* InSwitchValue);
    void SetRTPC(class UAkRtpc* InRtpcValue, float InValue, int32 InInterpolationTimeMs);
    void PostEvent(class UAkAudioEvent* InEvent, const FPostEventInPostEventCallback& InPostEventCallback, int32 InCallbackMask, class UAkAudioEvent* InEventStop, bool bInForce, float InSeekPercentage);
    void OnAudioActiveChanged(bool bIsPlaying);
}; // Size: 0x2C0

class UHeraAudioPortalComponent : public UBoxComponent
{
    class UAkPortalComponent* PortalComponent;                                        // 0x05B0 (size: 0x8)
    float OpenAmount;                                                                 // 0x05B8 (size: 0x4)
    bool bUpdatePortalOnMove;                                                         // 0x05BC (size: 0x1)

    void SetOpenAmount(float InAmount);
    void SetIsDynamic(bool bInDynamic);
    bool IsPortalOpen();
    float GetOpenAmount();
}; // Size: 0x5C0

class UHeraAudioPositionalRtpcComponent : public USceneComponent
{
    class UAkRtpc* DistanceRTPC;                                                      // 0x02A0 (size: 0x8)
    class UAkRtpc* PanLeftRightRTPC;                                                  // 0x02A8 (size: 0x8)
    class UAkRtpc* PanUpDownRTPC;                                                     // 0x02B0 (size: 0x8)
    class UAkRtpc* PanFrontRearRTPC;                                                  // 0x02B8 (size: 0x8)
    class UAkRtpc* EmitterToListenerDeviationRTPC;                                    // 0x02C0 (size: 0x8)
    float SpreadMinRadius;                                                            // 0x02C8 (size: 0x4)
    float SpreadMaxRadius;                                                            // 0x02CC (size: 0x4)
    bool bEnable;                                                                     // 0x02D0 (size: 0x1)
    bool bEnableSpread;                                                               // 0x02D1 (size: 0x1)
    bool bDebug;                                                                      // 0x02D2 (size: 0x1)
    float DistanceToListener;                                                         // 0x02D4 (size: 0x4)
    float PanLeftRight;                                                               // 0x02D8 (size: 0x4)
    float PanUpDown;                                                                  // 0x02DC (size: 0x4)
    float PanFrontRear;                                                               // 0x02E0 (size: 0x4)
    float EmitterListenerDeviation;                                                   // 0x02E4 (size: 0x4)
    float InverseSpread;                                                              // 0x02E8 (size: 0x4)
    bool bOverridePanning;                                                            // 0x02EC (size: 0x1)
    bool bOverrideSpread;                                                             // 0x02ED (size: 0x1)
    bool bOverrideDistance;                                                           // 0x02EE (size: 0x1)
    FVector LocationOverride;                                                         // 0x02F0 (size: 0x18)
    float SpreadOverride;                                                             // 0x0308 (size: 0x4)
    FVector DistanceLocationOverride;                                                 // 0x0310 (size: 0x18)
    float DistanceOverrideModifier;                                                   // 0x0328 (size: 0x4)

}; // Size: 0x330

class UHeraAudioPropertyHandlerBase : public UObject
{
    TArray<FHeraPropertyChangeDelegate> PropertyChangeDelegates;                      // 0x0028 (size: 0x10)

    void OnInitialise(class UHeraPropertyStorage* PropertyStorage);
    void OnDeinitialise();
}; // Size: 0x38

class UHeraAudioResonanceSystem : public UObject
{
}; // Size: 0x48

class UHeraAudioSettings : public UHeraSettings
{
    float AttenuationExtension;                                                       // 0x0038 (size: 0x4)
    TArray<TSoftClassPtr<UHeraAudioPropertyHandlerBase>> DefaultPropertyHandlers;     // 0x0040 (size: 0x10)
    TMap<class TSoftObjectPtr<UAkRtpc>, class FHeraAudioRtpcQueryData> RtpcQueryData; // 0x0050 (size: 0x50)
    TSoftObjectPtr<UAkRtpc> OutputDeviceConfigRtpc;                                   // 0x00A0 (size: 0x28)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UAkSwitchValue>> SurfaceSwitches; // 0x00C8 (size: 0x50)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UAkSwitchValue>> SecondarySurfaceSwitches; // 0x0118 (size: 0x50)
    TMap<class FName, class FHeraAudioComponentPoolDefaults> ComponentPoolDefaults;   // 0x0168 (size: 0x50)
    FName VolumeCollisionProfileName;                                                 // 0x01B8 (size: 0x8)
    FName GeometryCollisionProfileName;                                               // 0x01C0 (size: 0x8)
    float CharacterMaxSpeed;                                                          // 0x01C8 (size: 0x4)
    float CharacterVelocityInterpolationHz;                                           // 0x01CC (size: 0x4)
    bool bEnvironmentEnable;                                                          // 0x01D0 (size: 0x1)
    float EnvironmentMaxTraceDistance;                                                // 0x01D4 (size: 0x4)
    float EnvironmentReverbBoxInterpolationSecs;                                      // 0x01D8 (size: 0x4)
    TSoftObjectPtr<UAkAcousticTexture> DefaultSurfaceTexture;                         // 0x01E0 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> ReverbOpennessRTPC;                                       // 0x0208 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> ReverbSizeRTPC;                                           // 0x0230 (size: 0x28)
    FHeraScaledCurve ReverbSizeCurve;                                                 // 0x0258 (size: 0xA0)
    bool bResonanceEnable;                                                            // 0x02F8 (size: 0x1)
    float ResonanceQueryIntervalSecs;                                                 // 0x02FC (size: 0x4)
    float ResonanceQueryRadius;                                                       // 0x0300 (size: 0x4)
    FHeraAudioPoolName ResonancePoolName;                                             // 0x0304 (size: 0x8)
    FString MotionSharesetName;                                                       // 0x0310 (size: 0x10)
    float CpuUsageBudget;                                                             // 0x0320 (size: 0x4)
    int32 NumVoicesBudget;                                                            // 0x0324 (size: 0x4)
    int32 NumActiveEventsBudget;                                                      // 0x0328 (size: 0x4)
    float MaxLoudnessBudget;                                                          // 0x032C (size: 0x4)

}; // Size: 0x330

class UHeraAudioSubsystem : public UGameInstanceSubsystem
{
    class UAkAcousticTexture* DefaultSurfaceTexture;                                  // 0x0030 (size: 0x8)
    class UHeraAudioGlobalGameObject* GlobalGameObject;                               // 0x0038 (size: 0x8)
    class UHeraAudioComponentManager* ComponentManager;                               // 0x0040 (size: 0x8)
    TArray<class UHeraAudioPropertyHandlerBase*> PropertyHandlers;                    // 0x0048 (size: 0x10)
    TWeakObjectPtr<class UAkComponent> MainListener;                                  // 0x0058 (size: 0x8)
    TMap<class UAkRtpc*, class FHeraAudioRtpcQueryData> LoadedRtpcQueryData;          // 0x0060 (size: 0x50)
    class UAkRtpc* LoadedOutputDeviceConfigRtpc;                                      // 0x00B0 (size: 0x8)
    TMap<TEnumAsByte<EPhysicalSurface>, UAkSwitchValue*> LoadedSurfaceSwitches;       // 0x00B8 (size: 0x50)
    TMap<TEnumAsByte<EPhysicalSurface>, UAkSwitchValue*> LoadedSecondarySurfaceSwitches; // 0x0108 (size: 0x50)
    TMap<class FHeraAudioPoolName, class FHeraAudioComponentPool> ComponentPools;     // 0x0158 (size: 0x50)

    class UAkComponent* GetMainListener();
    class UHeraAudioGlobalGameObject* GetGlobalGameObject();
    class UAkAcousticTexture* GetDefaultSurfaceTexture();
}; // Size: 0x220

class UHeraAudioVolumeComponent : public USceneComponent
{
    class UHeraAudioComponent* AudioComp;                                             // 0x02A0 (size: 0x8)
    FHeraAudioVolumeComponentOnPlayerInsideChanged OnPlayerInsideChanged;             // 0x02A8 (size: 0x10)
    void HeraAudioVolumeComponentOnPlayerInsideChanged(bool bPlayerInsideVolume);
    float InactiveTickInterval;                                                       // 0x02B8 (size: 0x4)
    FVector EmitterPreviousLocation;                                                  // 0x02D0 (size: 0x18)
    TArray<class UBoxComponent*> Volumes;                                             // 0x02E8 (size: 0x10)
    bool bPlayerInsideVolume;                                                         // 0x02F8 (size: 0x1)

    void OnAudioActiveChanged(bool bIsPlaying);
}; // Size: 0x300

class UHeraAudioVolumeComponent_Deprecated : public UHeraAudioVolumeComponent
{
    class UBoxComponent* DefaultVolume;                                               // 0x0300 (size: 0x8)

}; // Size: 0x310

class UHeraPropertyChangeDelegateBinding : public UDynamicBlueprintBinding
{
}; // Size: 0x28

#endif
