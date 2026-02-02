#ifndef UE4SS_SDK_BP_WrestlerTestPlayerCharacter_HPP
#define UE4SS_SDK_BP_WrestlerTestPlayerCharacter_HPP

class ABP_WrestlerTestPlayerCharacter_C : public AWrestlerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0CA0 (size: 0x8)
    class UDecalComponent* BlobShadowR;                                               // 0x0CA8 (size: 0x8)
    class UDecalComponent* BlobShadowL;                                               // 0x0CB0 (size: 0x8)
    class USphereComponent* HeadCollider;                                             // 0x0CB8 (size: 0x8)
    class UBP_StuckActorComponent_C* StuckActorComponent;                             // 0x0CC0 (size: 0x8)
    class UFootstepNoiseComponent_C* FootstepNoiseComponent;                          // 0x0CC8 (size: 0x8)
    class UWrestlerAbilityTargetingComponent_C* WrestlerAbilityTargetingComponent;    // 0x0CD0 (size: 0x8)
    class USpotLightComponent* Headlight;                                             // 0x0CD8 (size: 0x8)
    class UNoticeableProximityComponent_C* NoticeableProximityComponent;              // 0x0CE0 (size: 0x8)
    class UWrestlerCharacterSnowComponent_C* WrestlerCharacterSnowComponent;          // 0x0CE8 (size: 0x8)
    class UCapsuleComponent* PhysCollider;                                            // 0x0CF0 (size: 0x8)
    class UChildActorComponent* OverheadDebugCamera;                                  // 0x0CF8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0D00 (size: 0x8)
    class UMotionWarpingComponent* MotionWarping;                                     // 0x0D08 (size: 0x8)
    class UPlayerHeraPropertiesComponent_C* PlayerHeraPropertiesComponent;            // 0x0D10 (size: 0x8)
    class UBP_CharacterAudioFunctions_Player_C* BP_CharacterAudioFunctions_Player;    // 0x0D18 (size: 0x8)
    class UHeraReactionComponent* HeraReaction;                                       // 0x0D20 (size: 0x8)
    class UWrestlerPassiveTargetingComponent* Passive Targeting Component;            // 0x0D28 (size: 0x8)
    class UWrestlerCameraComponent* Camera;                                           // 0x0D30 (size: 0x8)
    class UWrestlerFearEmitterComponent* WrestlerFearEmitter;                         // 0x0D38 (size: 0x8)
    class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;             // 0x0D40 (size: 0x8)
    float CamBlend_ResetStrength_E7A9CCF04B2E1C5B581F5C82EA04AA76;                    // 0x0D48 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CamBlend__Direction_E7A9CCF04B2E1C5B581F5C82EA04AA76; // 0x0D4C (size: 0x1)
    class UTimelineComponent* CamBlend;                                               // 0x0D50 (size: 0x8)
    float Camreset_ResetStrength_CF864212427E2BEF78B6E0A08AD7A275;                    // 0x0D58 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Camreset__Direction_CF864212427E2BEF78B6E0A08AD7A275; // 0x0D5C (size: 0x1)
    class UTimelineComponent* Camreset;                                               // 0x0D60 (size: 0x8)
    TSoftClassPtr<AActor> DebugCameraClass;                                           // 0x0D68 (size: 0x28)
    class AActor* DebugCamera;                                                        // 0x0D90 (size: 0x8)
    TArray<class TSubclassOf<UCameraModifier>> CameraModifierClasses;                 // 0x0D98 (size: 0x10)
    TArray<class UObject*> Footsteps;                                                 // 0x0DA8 (size: 0x10)
    FPoseSnapshot FeedPoseSnapshot;                                                   // 0x0DB8 (size: 0x38)
    FVector Stable Ground;                                                            // 0x0DF0 (size: 0x18)
    bool AbiltyFreezeHeld;                                                            // 0x0E08 (size: 0x1)
    FWrestlerTimeDilator AbilityFreezeHandle;                                         // 0x0E0C (size: 0x4)
    class UHeraPropertyBool* PB_Combat_Player_Dead;                                   // 0x0E10 (size: 0x8)
    bool XTapHeld;                                                                    // 0x0E18 (size: 0x1)
    double XHoldTime;                                                                 // 0x0E20 (size: 0x8)
    double XGaptime;                                                                  // 0x0E28 (size: 0x8)
    bool YTapHeld;                                                                    // 0x0E30 (size: 0x1)
    double YHoldTime;                                                                 // 0x0E38 (size: 0x8)
    double YGaptime;                                                                  // 0x0E40 (size: 0x8)
    double Refill_Mastery;                                                            // 0x0E48 (size: 0x8)
    double Refill_Affect;                                                             // 0x0E50 (size: 0x8)
    double Refill_Strike;                                                             // 0x0E58 (size: 0x8)
    double Refill_Relocate;                                                           // 0x0E60 (size: 0x8)
    double RefillRate_Bloodbath;                                                      // 0x0E68 (size: 0x8)
    double RefillRate_Perk;                                                           // 0x0E70 (size: 0x8)
    bool UseCostumes;                                                                 // 0x0E78 (size: 0x1)
    FRotator BlendoutRot;                                                             // 0x0E80 (size: 0x18)
    float CamClip;                                                                    // 0x0E98 (size: 0x4)
    bool InStealth;                                                                   // 0x0E9C (size: 0x1)
    int32 StealthKillStreak;                                                          // 0x0EA0 (size: 0x4)
    class UHeraPropertyStateTrackingList* WornCostumes;                               // 0x0EA8 (size: 0x8)
    class UHeraPropertyInt* UniqueCostumeCounters;                                    // 0x0EB0 (size: 0x8)
    class UHeraPropertyInt* HealthCollectables;                                       // 0x0EB8 (size: 0x8)
    class UHeraPropertyBool* UseHealthCollectables;                                   // 0x0EC0 (size: 0x8)
    FActiveGameplayEffectHandle EngagedEffect;                                        // 0x0EC8 (size: 0x8)
    float EngagedVisBonus;                                                            // 0x0ED0 (size: 0x4)
    int32 KillStreak;                                                                 // 0x0ED4 (size: 0x4)
    class UHeraPropertyInt* Totalkillstreaks;                                         // 0x0ED8 (size: 0x8)
    double PendingMaxAwareness;                                                       // 0x0EE0 (size: 0x8)
    double CurrentMaxAwareness;                                                       // 0x0EE8 (size: 0x8)
    FBP_WrestlerTestPlayerCharacter_CCueProcessed CueProcessed;                       // 0x0EF0 (size: 0x10)
    void CueProcessed(class UWrestlerControlCue* Cue);
    FBP_WrestlerTestPlayerCharacter_CInteractEvent InteractEvent;                     // 0x0F00 (size: 0x10)
    void InteractEvent(class ABP_WrestlerTestPlayerCharacter_C* Player);
    bool Crouchheld;                                                                  // 0x0F10 (size: 0x1)
    int32 RTPC_Interpolation_Time;                                                    // 0x0F14 (size: 0x4)

    void GetPiercingSkeletalMesh(class USkeletalMeshComponent*& PeircingSM);
    void GetGlassesSkeletalMesh(class USkeletalMeshComponent*& GlassesSM);
    void GetHeadSkeletalMesh(class USkeletalMeshComponent*& Head);
    void GetHairMesh(class USkeletalMeshComponent*& HairMesh);
    void GetAudioCharacterComp(class UHeraAudioCharacterComponent*& AudioCharacterComponent);
    void SelectMesh(FWrestlerOutfitData CostumeDef, class USkeletalMesh*& Mesh);
    void GetMesh(class USkeletalMeshComponent*& Mesh);
    bool FabienAlive();
    int32 KillstreakThreshold();
    double Calculate Max Health(bool& Maxed out);
    void SetUpCostume();
    bool IsGroundStable?();
    void GetHeraAudioCharacterComponent(class UHeraAudioCharacterComponent*& HeraAudioCharacterComponent);
    class UWrestlerFearEmitterComponent* GetFearEmitter();
    void ToggleHandCollision(TEnumAsByte<ECollisionEnabled::Type> NewCollisionMode, bool RightHand);
    bool ToggleFootCollision(TEnumAsByte<ECollisionEnabled::Type> NewCollisionMode, bool RightFoot);
    void InitialiseHealthRegeneration();
    void SetupCameraModifiers(class APlayerController* PlayerController);
    bool ToggleThirdPersonCamera();
    bool ToggleSecondaryViewpoint();
    void ReportMeleeHitGameplayEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, const FHitResult& SweepResult);
    void UserConstructionScript();
    void Camreset__FinishedFunc();
    void Camreset__UpdateFunc();
    void CamBlend__FinishedFunc();
    void CamBlend__UpdateFunc();
    void EventReceived_D26D42D1494AF520842B24BB0972C2DA(FGameplayEventData Payload);
    void EventReceived_BB915F0943B69AEBB6F4AD9D013547CE(FGameplayEventData Payload);
    void EventReceived_490B5328463A20260FFD12B501581A27(FGameplayEventData Payload);
    void EventReceived_CE197A8340D1A0526C34C493EAC8F0AD(FGameplayEventData Payload);
    void EventReceived_08E3F5324AA744E1602900BAF51934FC(FGameplayEventData Payload);
    void EventReceived_CBD22F8C4AE826498AA5CF84B26D466D(FGameplayEventData Payload);
    void Added_561C211B45BB3EA1F42DA9BFA7A67BA3();
    void Added_624E97DE4595B0950DE3078B6798699E();
    void Added_09D8B78044B10CACF6D37C929439B48B();
    void Removed_451E94C74CC4DED6B88532B02A58D281();
    void EventReceived_2104A32A4B3BB2A58A0D38A330606C20(FGameplayEventData Payload);
    void InpActEvt_IA_Interact_K2Node_EnhancedInputActionEvent_3(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void EventReceived_3516D19141BD014BB065B199925903E4(FGameplayEventData Payload);
    void OnLoaded_113BDC1144C48F2D16FD6A87A0B1DBF8(UClass* Loaded);
    void InpActEvt_IA_Crouch_K2Node_EnhancedInputActionEvent_2(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Crouch_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Crouch_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void SwitchPlayerHair(class UWrestlerCharacterHairDataAsset* InHair);
    void RefreshHair(FGameplayTag CostumeTage);
    void SwitchPlayerMakeUp(class UWrestlerCharacterMakeUpDataAsset* InMakeUp);
    void SwitchPlayerPiercing(class UWrestlerCharacterPiercingDataAsset* PiercingAsset);
    void SwitchPlayerEyes(class UWrestlerCharacterEyesDataAsset* EyesAsset);
    void SetMeleeCollision(TEnumAsByte<ECollisionEnabled::Type> NewCollisionMode, bool bRightSide);
    void SetSecondaryMeleeCollision(TEnumAsByte<ECollisionEnabled::Type> NewCollisionMode, bool bRightSide);
    void ReceivePossessed(class AController* NewController);
    void SpawnDebugCamera();
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void OnHealthChanged(float CurrentHealth, float MaxHealth);
    void OnLanded(const FHitResult& Hit);
    void OnBloodChanged(float CurrentBlood, float MaxBlood);
    void OnAbilityFailed(const ECouldNotActivateReason& OutFailureReason, const FGameplayTagContainer& TagFailure, class UGameplayAbility* AbilityFailure);
    void ReceiveBeginPlay();
    void SwitchPlayerCostume(class UWrestlerCharacterCostumeDataAsset* InCostume);
    void StableGroundCheck();
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void OnPlayerClanChanged(class UWrestlerPlayerClan* InNewClan);
    void ProcessControlCue(class UWrestlerControlCue* InCue);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_WrestlerTestPlayerCharacter_SequenceBlendComponent_K2Node_ComponentBoundEvent_0_WrestlerSequenceBlendEvent__DelegateSignature();
    void AwarenessCheck();
    void PerkAchieveCheck();
    void OnPlayerAbilityEarned();
    void UpdateHealth(bool Increase);
    void EngagedCheck();
    void CrouchBugCheck();
    void BndEvt__BP_WrestlerTestPlayerCharacter_SequenceBlendComponent_K2Node_ComponentBoundEvent_1_WrestlerSequenceBlendEvent__DelegateSignature();
    void FeedEvent_disarm();
    void FeedEvent_Behead();
    void FeedEvent_end(double BlendOut);
    void FeedEvent_Drink();
    void FeedEvent_Damage();
    void FeedEvent_Kill();
    void ExecuteUbergraph_BP_WrestlerTestPlayerCharacter(int32 EntryPoint);
    void InteractEvent__DelegateSignature(class ABP_WrestlerTestPlayerCharacter_C* Player);
    void CueProcessed__DelegateSignature(class UWrestlerControlCue* Cue);
}; // Size: 0xF18

#endif
