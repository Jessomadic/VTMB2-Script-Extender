#ifndef UE4SS_SDK_WrestlerAbilityTargetingComponent_HPP
#define UE4SS_SDK_WrestlerAbilityTargetingComponent_HPP

class UWrestlerAbilityTargetingComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class UCameraComponent* ParentCamera;                                             // 0x00A8 (size: 0x8)
    class AActor* ActorUnderCrosshair;                                                // 0x00B0 (size: 0x8)
    float CharacterTargetingRange;                                                    // 0x00B8 (size: 0x4)
    double CharacterVisibleAngle;                                                     // 0x00C0 (size: 0x8)
    bool Enable Debug Target;                                                         // 0x00C8 (size: 0x1)
    TArray<class AWrestlerCharacterBase*> AllCharacters;                              // 0x00D0 (size: 0x10)
    TArray<class AActor*> VisibleTargets;                                             // 0x00E0 (size: 0x10)
    bool Enable Debug Traces;                                                         // 0x00F0 (size: 0x1)
    double CharacterTargetingAngle;                                                   // 0x00F8 (size: 0x8)
    class AActor* TargetedActor;                                                      // 0x0100 (size: 0x8)
    TArray<class AActor*> Targetables;                                                // 0x0108 (size: 0x10)
    FWrestlerTimeDilator DilationHandle;                                              // 0x0118 (size: 0x4)
    bool TargetingActive;                                                             // 0x011C (size: 0x1)
    float Dilation;                                                                   // 0x0120 (size: 0x4)
    bool UsesDilation;                                                                // 0x0124 (size: 0x1)
    double TargetingDilation;                                                         // 0x0128 (size: 0x8)
    float TargetingRefreshRate;                                                       // 0x0130 (size: 0x4)
    class UCameraModifier* CamModifier;                                               // 0x0138 (size: 0x8)
    class USpotLightComponent* Headlight;                                             // 0x0140 (size: 0x8)
    float DefaultHeadlightIntensity;                                                  // 0x0148 (size: 0x4)
    double HeadlightBoost;                                                            // 0x0150 (size: 0x8)
    TArray<class AActor*> PendingTargets;                                             // 0x0158 (size: 0x10)
    class UWBP_AbilityTarget_C* TargetWidget;                                         // 0x0168 (size: 0x8)
    bool TargetingHeld;                                                               // 0x0170 (size: 0x1)
    FGameplayTag TargetingBlockTag;                                                   // 0x0174 (size: 0x8)
    double PreSlowBuffer;                                                             // 0x0180 (size: 0x8)
    double Pre Slow Buffer default;                                                   // 0x0188 (size: 0x8)
    FGameplayTagContainer Active Tags;                                                // 0x0190 (size: 0x20)
    double TargetCacheRefreshRate;                                                    // 0x01B0 (size: 0x8)
    bool Target Strikeable;                                                           // 0x01B8 (size: 0x1)
    double Strike Targeting Angle;                                                    // 0x01C0 (size: 0x8)
    double StrikeTargetingRange;                                                      // 0x01C8 (size: 0x8)
    bool MassManipulating;                                                            // 0x01D0 (size: 0x1)
    double VisibleAngleMM;                                                            // 0x01D8 (size: 0x8)
    class UHeraPropertyBool* PB_ABL_Targeting;                                        // 0x01E0 (size: 0x8)
    FGameplayTagContainer Abilities To Cancel;                                        // 0x01E8 (size: 0x20)
    bool UseMalkavianTargets;                                                         // 0x0208 (size: 0x1)
    FGameplayTagContainer Invalid Target Tags;                                        // 0x0210 (size: 0x20)
    TArray<class AActor*> TKTargetables;                                              // 0x0230 (size: 0x10)
    float TKActorRefreshRate;                                                         // 0x0240 (size: 0x4)
    double TKTargetingRange;                                                          // 0x0248 (size: 0x8)
    double TKTargetingAngle;                                                          // 0x0250 (size: 0x8)
    class AActor* TKTargetedActor;                                                    // 0x0258 (size: 0x8)
    double CurrentTkableAngle;                                                        // 0x0260 (size: 0x8)
    class UWBP_TKTarget_C* TKTargetWidget;                                            // 0x0268 (size: 0x8)
    FGameplayTagContainer TKBlockTags;                                                // 0x0270 (size: 0x20)
    float VisibilityDepenetration;                                                    // 0x0290 (size: 0x4)
    double TargetingDilation_Attached;                                                // 0x0298 (size: 0x8)
    bool DoTKTargeting;                                                               // 0x02A0 (size: 0x1)

    void IsTKActorInTargetZone(class AActor* Actor, bool SkipFilters, bool& Visible, double& Angle);
    void ActorTargetPoint(class AActor* Target, FVector& Point);
    void TargetIsStrikable(bool& Strikeable);
    bool TargetingBlocked();
    bool InputtingLook(double DeadZone);
    void MostRelevantActor(TArray<class AActor*>& Actors, class AActor*& BestActor, double& Angle);
    void ActorLOStoCamera(class AActor* Actor, FVector Offset, bool& Visible);
    void IsActorInTargetZone(class AActor* Actor, bool& Visible);
    void EventReceived_C19B0C2E4C82861CA9F3938155495989(FGameplayEventData Payload);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Refresh Actors();
    void Targeting Start();
    void Targeting End();
    void Make Cam Modifier();
    void TryGetHeadlight();
    void ProcessTargets();
    void Spawn UI();
    void Targeting Pressed();
    void Targeting Released();
    void ProcessTKables();
    void RefreshTkables();
    void UpdateActorUnderCrosshair();
    void ExecuteUbergraph_WrestlerAbilityTargetingComponent(int32 EntryPoint);
}; // Size: 0x2A1

#endif
