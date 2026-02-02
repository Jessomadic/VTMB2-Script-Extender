#ifndef UE4SS_SDK_WrestlerReactionMemoryComponent_HPP
#define UE4SS_SDK_WrestlerReactionMemoryComponent_HPP

class UWrestlerReactionMemoryComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    int32 MemoryLength;                                                               // 0x00A8 (size: 0x4)
    float ForgetRate;                                                                 // 0x00AC (size: 0x4)
    FTimerHandle ForgetfulnessTimer;                                                  // 0x00B0 (size: 0x8)
    bool PrintDebugStrings;                                                           // 0x00B8 (size: 0x1)
    FGameplayTagContainer LightAttackActionTags;                                      // 0x00C0 (size: 0x20)
    FGameplayTagContainer MediumAttackActionTags;                                     // 0x00E0 (size: 0x20)
    FGameplayTagContainer HeavyAttackActionTags;                                      // 0x0100 (size: 0x20)
    FGameplayTagContainer CounterActionTags;                                          // 0x0120 (size: 0x20)
    int32 LightAttackThreshold;                                                       // 0x0140 (size: 0x4)
    int32 HeavyAttackThreshold;                                                       // 0x0144 (size: 0x4)
    FTimerHandle ActionRecordingTimer;                                                // 0x0148 (size: 0x8)
    TArray<TEnumAsByte<eReactionMemoryComponent_Actions::Type>> ActionMemory;         // 0x0150 (size: 0x10)
    double TargetStateRecordInterval;                                                 // 0x0160 (size: 0x8)
    TArray<TEnumAsByte<eReactionMemoryComponent_Actions::Type>> ActionsToTestForSuggestion; // 0x0168 (size: 0x10)
    FWrestlerReactionMemoryComponent_COnActionAddedToMemory OnActionAddedToMemory;    // 0x0178 (size: 0x10)
    void OnActionAddedToMemory(TEnumAsByte<eReactionMemoryComponent_Actions::Type> Action);
    class AWrestlerEnemyCharacter* OwningAI;                                          // 0x0188 (size: 0x8)
    class AActor* PriorityActor;                                                      // 0x0190 (size: 0x8)
    bool HasBeenInCombat;                                                             // 0x0198 (size: 0x1)
    double CombatDelta;                                                               // 0x01A0 (size: 0x8)

    void CheckCombatState(bool& Return);
    void GetPriorityActor(bool& Return);
    void SuggestTargetProfile(TEnumAsByte<eReactionMemoryComponent_PlayerStyle::Type>& PlayerProfile);
    void SuggestEnemyAction(TArray<TEnumAsByte<eReactionMemoryComponent_Actions::Type>>& SuggestedActions);
    void GetHPAsPercentage(double& HealthPercentage);
    void GetLastXActions(int32 Count, TArray<TEnumAsByte<eReactionMemoryComponent_Actions::Type>>& Reactions);
    void GetActionCountFromTag(FGameplayTag Tag, int32& Count);
    void GetSpecificActionCount(TEnumAsByte<eReactionMemoryComponent_Actions::Type> Action, int32& Count);
    void GetMostCommon3Actions(TArray<TEnumAsByte<eReactionMemoryComponent_Actions::Type>>& Return, int32& MostCommonAction, int32& SecondAction, int32& ThirdAction);
    void GetReactionMemory(TArray<TEnumAsByte<eReactionMemoryComponent_Actions::Type>>& Memory);
    void ClearMemory();
    void ForgetOldestAction();
    void AddActionToMemory(TEnumAsByte<eReactionMemoryComponent_Actions::Type> Action);
    void ConvertReactionTagToAction(FGameplayTag Tag, TEnumAsByte<eReactionMemoryComponent_Actions::Type>& Action);
    void RecordTargetCurrentAction();
    void RecordIncomingAction(FGameplayTag EventTag);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ShowActionListDebug();
    void ExecuteUbergraph_WrestlerReactionMemoryComponent(int32 EntryPoint);
    void OnActionAddedToMemory__DelegateSignature(TEnumAsByte<eReactionMemoryComponent_Actions::Type> Action);
}; // Size: 0x1A8

#endif
