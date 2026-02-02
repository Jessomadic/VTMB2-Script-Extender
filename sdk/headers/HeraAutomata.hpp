#ifndef UE4SS_SDK_HeraAutomata_HPP
#define UE4SS_SDK_HeraAutomata_HPP

#include "HeraAutomata_enums.hpp"

struct FAutomataRunningTask
{
    bool IsBlockingTask;                                                              // 0x0000 (size: 0x1)
    class UHeraAutomataTask* Task;                                                    // 0x0008 (size: 0x8)
    int32 InstanceUID;                                                                // 0x0010 (size: 0x4)
    class UHeraAutomataObjective* BlockingTaskFinishedObjective;                      // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FHeraAutomataBackReference
{
    TSoftObjectPtr<UHeraAutomataStateBase> PreviousState;                             // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FHeraAutomataInProgress
{
    class UHeraAutomata* Automata;                                                    // 0x0000 (size: 0x8)
    bool bIsSubAutomata;                                                              // 0x0008 (size: 0x1)
    EHeraAutomataCompletion Progress;                                                 // 0x0009 (size: 0x1)
    FHeraAutomataStatus AutomataStatus;                                               // 0x0010 (size: 0x20)
    bool bChanged;                                                                    // 0x0030 (size: 0x1)
    int32 uid;                                                                        // 0x0034 (size: 0x4)
    int32 LastStateExecutionCounter;                                                  // 0x0038 (size: 0x4)
    TMap<UHeraAutomataSubAutomataState*, int32> SubAutomataList;                      // 0x0040 (size: 0x50)
    int32 ownerInstanceUID;                                                           // 0x0090 (size: 0x4)
    class UHeraAutomataSubAutomataState* ownerSubAutomataState;                       // 0x0098 (size: 0x8)
    TArray<int32> ChildMissionInstanceUIDs;                                           // 0x00A0 (size: 0x10)
    FGameplayTag Tag;                                                                 // 0x00B0 (size: 0x8)
    int32 LastDataIndex;                                                              // 0x00B8 (size: 0x4)
    int32 StartDataIndex;                                                             // 0x00BC (size: 0x4)
    class UHeraAutomataStateBase* lastCheckPointHit;                                  // 0x00C0 (size: 0x8)
    class UHeraAutomataStateBase* LastActiveState;                                    // 0x00C8 (size: 0x8)
    class UHeraAutomataStateBase* LastSavedState;                                     // 0x00D0 (size: 0x8)
    TArray<class UHeraAutomataObjective*> Objectives;                                 // 0x00D8 (size: 0x10)
    class UHeraAutomataStateBase* LoadFromState;                                      // 0x00E8 (size: 0x8)

}; // Size: 0xF0

struct FHeraAutomataPath
{
}; // Size: 0x20

struct FHeraAutomataSave
{
    TArray<FHeraAutomataInProgress> AutomataList;                                     // 0x0000 (size: 0x10)
    TArray<class UHeraAutomataObjective*> Objectives;                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FHeraAutomataStatus
{
    EHeraAutomataResult Result;                                                       // 0x0000 (size: 0x1)
    class UHeraAutomataStateBase* ActiveState;                                        // 0x0008 (size: 0x8)
    int32 DataIndex;                                                                  // 0x0010 (size: 0x4)
    uint32 BranchHash;                                                                // 0x0014 (size: 0x4)
    bool HasLooped;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FHeraCheckpointFindMissionProperty
{
}; // Size: 0x1

struct FHeraCheckpointNameListAttribute
{
    FName CheckpointName;                                                             // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FHeraCheckpointStartEntry
{
    FName CheckpointName;                                                             // 0x0000 (size: 0x8)
    FName ActorName;                                                                  // 0x0008 (size: 0x8)
    FName MissionName;                                                                // 0x0010 (size: 0x8)
    FName NextCheckpoint;                                                             // 0x0018 (size: 0x8)
    FName PreviousCheckpoint;                                                         // 0x0020 (size: 0x8)
    FGameplayTag WorldTag;                                                            // 0x0028 (size: 0x8)
    FGameplayTag LocationTag;                                                         // 0x0030 (size: 0x8)
    bool bIsInWorldPartitionedWorld;                                                  // 0x0038 (size: 0x1)
    FVector Position;                                                                 // 0x0040 (size: 0x18)
    FRotator Rotation;                                                                // 0x0058 (size: 0x18)
    bool bRecursiveDataLayerActivation;                                               // 0x0070 (size: 0x1)
    TSoftObjectPtr<AHeraCheckpointStartActor> Actor;                                  // 0x0078 (size: 0x28)
    TSoftObjectPtr<UHeraMissionCheckpoint> MissionCheckpointState;                    // 0x00A0 (size: 0x28)
    TArray<TSoftObjectPtr<UDataLayerAsset>> DataLayers;                               // 0x00C8 (size: 0x10)

}; // Size: 0xD8

struct FHeraCheckpointStartReplayInfo
{
    EHeraCheckpointStartReplayPolicy ReplayPolicy;                                    // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FHeraPendingAutomata
{
    class UHeraAutomata* Automata;                                                    // 0x0000 (size: 0x8)
    bool IsSubAutomata;                                                               // 0x0008 (size: 0x1)
    FGameplayTag Tag;                                                                 // 0x000C (size: 0x8)

}; // Size: 0x28

struct FHeraSequenceBinding
{
    FName BindingTag;                                                                 // 0x0000 (size: 0x8)
    TArray<FSoftObjectPath> ActorPaths;                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FHeraSequenceSettings
{
    int32 LoopCount;                                                                  // 0x0000 (size: 0x4)
    float PlayRate;                                                                   // 0x0004 (size: 0x4)
    float StartTime;                                                                  // 0x0008 (size: 0x4)
    uint8 bRandomStartTime;                                                           // 0x000C (size: 0x1)
    uint8 bRestoreState;                                                              // 0x000C (size: 0x1)
    uint8 bDisableMovementInput;                                                      // 0x000C (size: 0x1)
    uint8 bDisableLookAtInput;                                                        // 0x000C (size: 0x1)
    uint8 bHidePlayer;                                                                // 0x000C (size: 0x1)
    uint8 bHideHud;                                                                   // 0x000C (size: 0x1)
    uint8 bDisableCameraCuts;                                                         // 0x000C (size: 0x1)
    FGameplayTag PauseCutsceneMenuTag;                                                // 0x0010 (size: 0x8)
    uint8 bPauseAtEnd;                                                                // 0x0018 (size: 0x1)
    uint8 bBindPlayer;                                                                // 0x0018 (size: 0x1)
    uint8 bLockPlayerLookInput;                                                       // 0x0018 (size: 0x1)
    uint8 bCanSkip;                                                                   // 0x0018 (size: 0x1)
    float DelayTimeInSeconds;                                                         // 0x001C (size: 0x4)
    FName PlayerTag;                                                                  // 0x0020 (size: 0x8)
    TSoftObjectPtr<AActor> TransformOriginActor;                                      // 0x0028 (size: 0x28)

}; // Size: 0x50

struct FRuleMappingInfo
{
    TArray<class UHeraMissionObjective*> mappedObjectives;                            // 0x0000 (size: 0x10)

}; // Size: 0x10

class AHeraCheckpointStartActor : public APlayerStart
{
    bool bRecursiveDataLayerActivation;                                               // 0x02D0 (size: 0x1)
    FGameplayTag LocationGameplayTag;                                                 // 0x02D4 (size: 0x8)
    class UHeraMissionActorComponent* MissionActorComponent;                          // 0x02E0 (size: 0x8)
    TArray<TSoftObjectPtr<UDataLayerAsset>> DataLayersToActivate;                     // 0x02E8 (size: 0x10)

    FGameplayTag GetLocationGameplayTag();
    TArray<TSoftObjectPtr<UDataLayerAsset>> GetDataLayersToActivate();
}; // Size: 0x2F8

class AHeraMissionControlActor : public AActor
{
    TArray<TSoftObjectPtr<UHeraMission>> StartupMissionsOverride;                     // 0x0298 (size: 0x10)

}; // Size: 0x2A8

class AHeraMissionSubSystemProxy : public AActor
{
    class UHeraMissionControlComponent* MissionControl;                               // 0x0298 (size: 0x8)
    TArray<class AHeraMissionControlActor*> MissionControlActors;                     // 0x02A0 (size: 0x10)

}; // Size: 0x2B8

class IHeraAutomataEvent : public IInterface
{

    void RaiseAutomataEvent(FName InEventName);
}; // Size: 0x28

class IHeraMissionSaveInterface : public IInterface
{
}; // Size: 0x28

class UHeraAutomata : public UDataAsset
{
    class UHeraPropertyRule* AutomataEnableRule;                                      // 0x0030 (size: 0x8)
    bool bShowAdvancedDebug;                                                          // 0x0038 (size: 0x1)
    bool bIsBlackList;                                                                // 0x0039 (size: 0x1)
    TArray<class UHeraAutomataObjective*> ObjectivesToFilter;                         // 0x0040 (size: 0x10)
    class UHeraAutomataStateBase* InitialState;                                       // 0x0050 (size: 0x8)
    TArray<class UHeraAutomataStateBase*> States;                                     // 0x0058 (size: 0x10)
    class UHeraAutomataTerminalState* TerminalStateSucceeded;                         // 0x0068 (size: 0x8)
    class UHeraAutomataTerminalState* TerminalStateFailed;                            // 0x0070 (size: 0x8)
    FHeraAutomataBackReference OuterSubAutomataState;                                 // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UHeraAutomataAnchor : public UHeraAutomataAutocompleteState
{
    FGameplayTag GameplayTag;                                                         // 0x0078 (size: 0x8)

}; // Size: 0x80

class UHeraAutomataAutocompleteState : public UHeraAutomataStateBase
{
}; // Size: 0x78

class UHeraAutomataBranch : public UDataAsset
{
    class UHeraAutomataStateBase* DestinationState;                                   // 0x0030 (size: 0x8)
    uint8 bTestAllObjectives;                                                         // 0x0038 (size: 0x1)
    uint8 bIsLooping;                                                                 // 0x0038 (size: 0x1)
    int32 ObjectiveCount;                                                             // 0x003C (size: 0x4)
    uint32 ObjectiveMask;                                                             // 0x0040 (size: 0x4)
    int32 timesObjectiveHasBeenHit;                                                   // 0x0044 (size: 0x4)
    TArray<class UHeraAutomataObjective*> Objectives;                                 // 0x0048 (size: 0x10)
    int32 ObjectiveHitRequiredCount;                                                  // 0x0058 (size: 0x4)
    bool bIsEditable;                                                                 // 0x005C (size: 0x1)

}; // Size: 0x60

class UHeraAutomataControlComponent : public UActorComponent
{
    bool bShowAdvancedDebug;                                                          // 0x00A1 (size: 0x1)
    int32 DebugObjectiveIndex;                                                        // 0x00A4 (size: 0x4)
    class UHeraAutomataObjectiveList* DebugObjectiveList;                             // 0x00A8 (size: 0x8)
    class UGameplayTasksComponent* Tasklist;                                          // 0x00B0 (size: 0x8)
    TArray<FHeraAutomataInProgress> AutomataInProgressList;                           // 0x00B8 (size: 0x10)
    TArray<class UHeraAutomataObjective*> AutomataObjectives;                         // 0x00C8 (size: 0x10)
    TArray<FHeraPendingAutomata> PendingNewAutomatas;                                 // 0x00D8 (size: 0x10)
    TArray<int32> PendingRemoveAutomatas;                                             // 0x00E8 (size: 0x10)
    TArray<FAutomataRunningTask> CurrentTaskList;                                     // 0x00F8 (size: 0x10)
    TArray<FAutomataRunningTask> PendingRemoveTasks;                                  // 0x0108 (size: 0x10)
    TArray<class UHeraAutomataObjective*> PendingAutomataObjectives;                  // 0x0118 (size: 0x10)
    int32 AutomataUID;                                                                // 0x0128 (size: 0x4)
    TArray<class UHeraAutomataObjective*> OnSaveObjectives;                           // 0x0130 (size: 0x10)
    TArray<class UHeraAutomataObjective*> OnManualSaveObjectives;                     // 0x0140 (size: 0x10)

    void UpdateAutomatas(class UHeraAutomataObjective* InAutomataObjective);
    void StopAutomataWithoutTag(FGameplayTag InTag, bool InRemoveEmptyTag);
    void StopAutomataByUID(int32 InAutomataUID);
    void StartAutomataWithTag(class UHeraAutomata* InAutomata, FGameplayTag InTag);
    void StartAutomata(class UHeraAutomata* InAutomata);
    bool IsLoading();
    TArray<class UHeraAutomataObjective*> GetAutomataObjectives();
    TArray<FHeraAutomataInProgress> GetAutomataList();
}; // Size: 0x1E8

class UHeraAutomataLink : public UHeraAutomataAutocompleteState
{
    FGameplayTag GameplayTag;                                                         // 0x0078 (size: 0x8)

}; // Size: 0x80

class UHeraAutomataObjective : public UDataAsset
{
    FName Description;                                                                // 0x0030 (size: 0x8)
    bool bIsPermanent;                                                                // 0x0038 (size: 0x1)
    bool bIsStateInternal;                                                            // 0x0039 (size: 0x1)

}; // Size: 0x40

class UHeraAutomataObjectiveList : public UHeraConfigurationAsset
{
    TArray<class UHeraAutomataObjective*> Objectives;                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

class UHeraAutomataReroute : public UHeraAutomataAutocompleteState
{
}; // Size: 0x78

class UHeraAutomataSettings : public UHeraSettings
{
    TArray<TSoftObjectPtr<UHeraMission>> GlobalMissions;                              // 0x0038 (size: 0x10)
    EHeraAutomataLoadType AutomataLoadType;                                           // 0x0048 (size: 0x1)
    bool SupportSaveOnSubautomatas;                                                   // 0x0049 (size: 0x1)

}; // Size: 0x50

class UHeraAutomataSettingsPerUser : public UHeraSettings
{
    bool bDisableMissionScripting;                                                    // 0x0038 (size: 0x1)

}; // Size: 0x40

class UHeraAutomataState : public UHeraAutomataStateBase
{
    uint8 bIsAutocomplete;                                                            // 0x0078 (size: 0x1)
    class UHeraAutomataTaskChain* ChainOnStateEnter;                                  // 0x0080 (size: 0x8)
    class UHeraAutomataTaskChain* ChainOnStateExit;                                   // 0x0088 (size: 0x8)
    class UHeraAutomataObjective* BlockingTasksFinishedObjective;                     // 0x0090 (size: 0x8)
    class UHeraAutomataObjective* AutocompleteObjective;                              // 0x0098 (size: 0x8)
    class UHeraAutomataBranch* BlockingTasksFinishedObjectiveBranch;                  // 0x00A0 (size: 0x8)
    class UHeraAutomataBranch* AutocompleteObjectiveBranch;                           // 0x00A8 (size: 0x8)

}; // Size: 0xB8

class UHeraAutomataStateBase : public UDataAsset
{
    bool bShowAdvancedDebug;                                                          // 0x0030 (size: 0x1)
    FString StateName;                                                                // 0x0038 (size: 0x10)
    uint8 bLoopByDefault;                                                             // 0x0048 (size: 0x1)
    bool bShouldExecuteOnEnterOnLoad;                                                 // 0x004C (size: 0x1)
    bool bShouldExecuteOnExitOnLoad;                                                  // 0x004D (size: 0x1)
    TArray<class UHeraAutomataBranch*> Branches;                                      // 0x0050 (size: 0x10)
    int32 ActiveMissionCount;                                                         // 0x0060 (size: 0x4)
    TArray<FHeraAutomataBackReference> PreviousStates;                                // 0x0068 (size: 0x10)

}; // Size: 0x78

class UHeraAutomataStateExpiring : public UHeraAutomataStateBase
{
    float Time;                                                                       // 0x0078 (size: 0x4)
    bool IgnoreTimeDilation;                                                          // 0x007C (size: 0x1)
    FGameplayTag OverrideTimeTag;                                                     // 0x0080 (size: 0x8)
    float RandomDeviation;                                                            // 0x0088 (size: 0x4)
    class UHeraPropertyFloat* TimeRemainingProperty;                                  // 0x0090 (size: 0x8)
    class UHeraAutomataObjective* ExpiryObjective;                                    // 0x00A0 (size: 0x8)
    class UHeraAutomataBranch* ExpiryObjectiveBranch;                                 // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UHeraAutomataStateReset : public UHeraAutomataStateBase
{
}; // Size: 0x78

class UHeraAutomataStopState : public UHeraAutomataStateBase
{
}; // Size: 0x78

class UHeraAutomataSubAutomataState : public UHeraAutomataStateBase
{
    bool bWantResults;                                                                // 0x0078 (size: 0x1)
    class UHeraAutomata* SubAutomata;                                                 // 0x0080 (size: 0x8)
    TMap<FGameplayTag, float> FloatParameters;                                        // 0x0088 (size: 0x50)

}; // Size: 0xD8

class UHeraAutomataTask : public UGameplayTask
{
    class UHeraAutomata* Automata;                                                    // 0x0068 (size: 0x8)
    class UHeraAutomataState* State;                                                  // 0x0070 (size: 0x8)
    class UHeraAutomataControlComponent* AutomataControlComponent;                    // 0x0078 (size: 0x8)
    int32 InstanceUID;                                                                // 0x0080 (size: 0x4)
    FHeraCheckpointStartReplayInfo CheckpointStartReplay;                             // 0x0084 (size: 0x1)

    TArray<FString> VerifyNodeState();
    void UpdateAutomatas(class UHeraAutomataObjective* InObjective);
    void Terminate();
    void StartAutomataWithTag(class UHeraAutomata* InAutomata, FGameplayTag InTag);
    void StartAutomata(class UHeraAutomata* InAutomata);
    class AActor* ResolveToLevelActor(FSoftObjectPath InSoftObjectPath);
    class AActor* ResolveSoftActorPointer(const class UObject* InWorldContextObject, const TSoftObjectPtr<AActor>& InSoftPtr);
    void ReceiveExecute(const class UHeraAutomata* InAutomata, const class UHeraAutomataState* InState);
    void RaiseEvent(FGameplayTag InEvent);
    void OnTaskSkipped_Internal();
    void OnTaskSkipped();
    void OnCheckpointStartReplay();
    class AActor* LoadSynchronousSoftActorPointer(const class UObject* InWorldContextObject, const TSoftObjectPtr<AActor>& InSoftPtr);
    bool IsTaskValidAndRunning();
    bool IsLoadingAndShouldSkip();
    bool IsLoading();
    bool IsBlockingExecution();
    class APlayerState* GetPlayerState();
    class APlayerController* GetPlayerController();
    class ACharacter* GetPlayerCharacter();
    class UPlayer* GetPlayer();
    class AHUD* GetHUD();
    class UHeraAutomataControlComponent* GetAutomataControlComponent();
    bool CanBlockExecution();
}; // Size: 0x88

class UHeraAutomataTaskBlueprint : public UBlueprint
{
}; // Size: 0xA8

class UHeraAutomataTaskChain : public UObject
{
    TArray<class UHeraAutomataTaskInfo*> Tasks;                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class UHeraAutomataTaskInfo : public UObject
{
    TSubclassOf<class UHeraAutomataTask> Class;                                       // 0x0028 (size: 0x8)
    class UHeraAutomataTask* Defaults;                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

class UHeraAutomataTerminalState : public UHeraAutomataStateBase
{
    EHeraAutomataResult AutomataResult;                                               // 0x0078 (size: 0x1)
    class UHeraAutomataObjective* ObjectiveResult;                                    // 0x0080 (size: 0x8)

}; // Size: 0x88

class UHeraCheckpointStartFunctionLibrary : public UBlueprintFunctionLibrary
{

    void LoadCheckpointStart(const class UObject* InWorldContext, FHeraCheckpointNameListAttribute InCheckpointName);
    TArray<FName> GetCheckpointEntryActorNames();
    TArray<FHeraCheckpointStartEntry> GetCheckpointEntriesSorted();
    TArray<FHeraCheckpointStartEntry> GetCheckpointEntries();
}; // Size: 0x28

class UHeraCheckpointStartSettings : public UHeraSettings
{
    TSoftObjectPtr<UDataLayerAsset> DefaultDataLayerAsset;                            // 0x0038 (size: 0x28)
    TArray<FHeraCheckpointStartEntry> CheckpointEntries;                              // 0x0060 (size: 0x10)

    bool HasDefaultDataLayerAsset();
    TSoftObjectPtr<UDataLayerAsset> GetDefaultDataLayerAsset();
    TArray<FHeraCheckpointStartEntry> GetCheckpointEntries();
}; // Size: 0x70

class UHeraCheckpointStartSettingsPerUser : public UHeraSettings
{
}; // Size: 0x38

class UHeraFadeOverlayTask : public UHeraAutomataTask
{
    bool bShouldLoadLevel;                                                            // 0x0088 (size: 0x1)
    float Duration;                                                                   // 0x008C (size: 0x4)
    FLinearColor Colour;                                                              // 0x0090 (size: 0x10)
    EHeraFadeDirection FadeDirection;                                                 // 0x00A0 (size: 0x1)
    class UHeraAutomataObjective* FadeFinishedObjective;                              // 0x00A8 (size: 0x8)

    void OnFadeFinished(class UHeraFadeWidget* InWidget, EHeraFadeDirection InDirection);
}; // Size: 0xB0

class UHeraMission : public UHeraAutomata
{
    TMap<class UHeraPropertyRule*, class TWeakObjectPtr<UHeraMissionObjective>> RuleMappings; // 0x00A0 (size: 0x50)
    TArray<class UHeraPropertyRule*> InternalRules;                                   // 0x00F0 (size: 0x10)
    TArray<class UHeraMission*> ParrallelMissions;                                    // 0x0100 (size: 0x10)
    TArray<class UHeraMission*> JunctionMissions;                                     // 0x0110 (size: 0x10)
    FSoftObjectPath DefaultPlayerStart;                                               // 0x0120 (size: 0x20)

    void DumpCheckpointList();
}; // Size: 0x140

class UHeraMissionActorComponent : public UActorComponent
{
    FHeraMissionActorComponentOnMissionComplete OnMissionComplete;                    // 0x00A0 (size: 0x10)
    void HeraOnMissionComplete(const class UHeraMission* InMission, bool bInSuccess);
    FHeraMissionActorComponentOnMissionEvent OnMissionEvent;                          // 0x00B0 (size: 0x10)
    void HeraOnMissionEvent(FGameplayTag InEvent);
    TArray<class UHeraMissionObjective*> TempObjectiveList;                           // 0x00C8 (size: 0x10)

    void UpdateMissions(class UHeraMissionObjective* InObjective);
    void StartMission(class UHeraMission* InMission);
    void OnMissionEventInternal(FGameplayTag InEvent);
    void OnMissionCompleteInternal(const class UHeraMission* InMission, bool bInSuccess);
}; // Size: 0xD8

class UHeraMissionCheckpoint : public UHeraAutomataState
{
    FSoftObjectPath PlayerStart;                                                      // 0x00C0 (size: 0x20)
    class UCommonLoadingScreenPreset* LoadingPreset;                                  // 0x00E0 (size: 0x8)
    bool bOverrideLoadingPresetFades;                                                 // 0x00E8 (size: 0x1)
    bool bPostLoadFadeEnabled;                                                        // 0x00E9 (size: 0x1)
    FCommonLoadingScreenFadeSettings PostLoadFadeOverrides;                           // 0x00EC (size: 0x8)
    class UHeraAutomataObjective* OnSaveObjective;                                    // 0x00F8 (size: 0x8)
    class UHeraAutomataObjective* OnLoadFinishedObjective;                            // 0x0100 (size: 0x8)
    class UHeraFadeOverlayTask* PostLoadFadeTask;                                     // 0x0108 (size: 0x8)

}; // Size: 0x118

class UHeraMissionControlComponent : public UHeraAutomataControlComponent
{
    FHeraMissionControlComponentOnMissionComplete OnMissionComplete;                  // 0x01E8 (size: 0x10)
    void HeraOnMissionComplete(const class UHeraMission* InMission, bool bInSuccess);
    TMap<class FName, class FRuleMappingInfo> RuntimeRuleMappings;                    // 0x0208 (size: 0x50)

    void OnHeraPropertyStoreBoolChanged(FName InPropertyName, bool OutNewValue);
}; // Size: 0x258

class UHeraMissionLevelLoadPoint : public UHeraMissionCheckpoint
{
    FGameplayTag LevelToLoad;                                                         // 0x0118 (size: 0x8)
    FGameplayTag PlayerStartTag;                                                      // 0x0120 (size: 0x8)
    FCommonLoadingScreenFadeSettings PreLoadFadeOverrides;                            // 0x0128 (size: 0x8)
    class UHeraFadeOverlayTask* PreLoadFadeTask;                                      // 0x0130 (size: 0x8)

}; // Size: 0x138

class UHeraMissionObjective : public UHeraAutomataObjective
{
}; // Size: 0x40

class UHeraMissionSettings : public UHeraSettings
{
}; // Size: 0x38

class UHeraMissionStateDebugStart : public UHeraAutomataAutocompleteState
{
    FGameplayTag StartID;                                                             // 0x0078 (size: 0x8)
    class UHeraAutomataObjective* DebugStartObjective;                                // 0x0080 (size: 0x8)
    class UHeraAutomataBranch* DebugStartObjectiveBranch;                             // 0x0088 (size: 0x8)

}; // Size: 0x90

class UHeraMissionStateDialog : public UHeraAutomataStateBase
{
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0078 (size: 0x8)
    bool bShouldTearDownStoryImmediatelyOnFinished;                                   // 0x0080 (size: 0x1)
    TMap<class FGameplayTag, class TSoftObjectPtr<AActor>> DialogueParticipants;      // 0x0088 (size: 0x50)
    FString JumpToKnot;                                                               // 0x00E0 (size: 0x10)
    TMap<class FString, class FName> OutcomeMappings;                                 // 0x00F8 (size: 0x50)
    class UHeraAutomataObjective* StoryExitObjective;                                 // 0x0148 (size: 0x8)
    class UHeraAutomataBranch* StoryExitObjectiveBranch;                              // 0x0150 (size: 0x8)
    FName StoryContinueBranch;                                                        // 0x0158 (size: 0x8)

}; // Size: 0x178

class UHeraMissionStateJunction : public UHeraAutomataStateBase
{
    int32 InputStatesHit;                                                             // 0x0078 (size: 0x4)
    int32 TotalInputStates;                                                           // 0x007C (size: 0x4)
    TMap<class UHeraAutomataBranch*, class UHeraAutomata*> OutputMissions;            // 0x0080 (size: 0x50)
    TArray<class UHeraAutomata*> PotentialMissions;                                   // 0x00D0 (size: 0x10)
    FJunctionInputRequirement JunctionInputRequirement;                               // 0x00E0 (size: 0x1)

}; // Size: 0xE8

class UHeraMissionSubSystem : public UWorldSubsystem
{
    class AHeraMissionSubSystemProxy* ControlProxy;                                   // 0x0030 (size: 0x8)
    TMap<class FString, class AActor*> TrackedActorMapping;                           // 0x0038 (size: 0x50)

    void UpdateMissions(class UHeraMissionObjective* InObjective);
    void StartMissionWithTag(class UHeraMission* InMission, FGameplayTag InTag);
    void StartMission(class UHeraMission* InMission);
    class AActor* ResolveTrackedActor(const TSoftObjectPtr<AActor>& InActor);
    class AActor* K2_ResolveTrackedActor(const class UObject* InWorldContextObject, const TSoftObjectPtr<AActor>& InActor);
}; // Size: 0x88

class UHeraModifyDataLayerTask : public UHeraAutomataTask
{
    TArray<class UDataLayerAsset*> DataLayerAssets;                                   // 0x0088 (size: 0x10)
    EDataLayerRuntimeState TargetState;                                               // 0x0098 (size: 0x1)
    bool bRecursive;                                                                  // 0x0099 (size: 0x1)
    bool bBlocking;                                                                   // 0x009A (size: 0x1)
    class UHeraMissionObjective* TaskCompleteObjective;                               // 0x00A0 (size: 0x8)

}; // Size: 0xA8

class UHeraPlaySequenceAutomataTask : public UHeraAutomataTask
{
    TSoftObjectPtr<ULevelSequence> CutsceneSequence;                                  // 0x0088 (size: 0x28)
    class ULevelSequence* CutsceneSequenceRef;                                        // 0x00B0 (size: 0x8)
    TArray<FHeraSequenceBinding> Bindings;                                            // 0x00B8 (size: 0x10)
    FHeraSequenceSettings SequenceSettings;                                           // 0x00C8 (size: 0x50)
    class UHeraMissionObjective* SequenceFinishedObjective;                           // 0x0118 (size: 0x8)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x0120 (size: 0x8)
    class ULevelSequencePlayer* LevelSequencePlayer;                                  // 0x0128 (size: 0x8)

    void SkipSequence();
    void SetHUDVisibility(bool bVisible);
    void PreSequence();
    void PostSequence();
    void OnSequenceStop_Internal();
    void OnSequenceStop();
    void OnSequenceSkipped();
    void OnSequenceReady();
    void OnSequencePlay_Internal();
    void OnSequencePlay();
    void OnSequencePause_Internal();
    void OnSequencePause();
    class ULevelSequencePlayer* GetLevelSequencePlayer();
    class ALevelSequenceActor* GetLevelSequenceActor();
    void FinishTask();
}; // Size: 0x130

class UHeraStreamLevelTask : public UHeraAutomataTask
{
    TSoftObjectPtr<UWorld> Level;                                                     // 0x0088 (size: 0x28)
    EHeraStreamTaskType Type;                                                         // 0x00B0 (size: 0x4)
    bool bVisibleOnLoad;                                                              // 0x00B4 (size: 0x1)
    class UHeraMissionObjective* TaskCompleteObjective;                               // 0x00B8 (size: 0x8)

    void OnStreamingCompleted();
}; // Size: 0xC8

class UHeraStreamMultiLevelTask : public UHeraAutomataTask
{
    TArray<TSoftObjectPtr<UWorld>> Levels;                                            // 0x0088 (size: 0x10)
    EHeraLevelState TargetState;                                                      // 0x0098 (size: 0x4)
    class UHeraMissionObjective* TaskCompleteObjective;                               // 0x00A0 (size: 0x8)

}; // Size: 0xC0

#endif
