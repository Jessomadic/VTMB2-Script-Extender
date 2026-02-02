#ifndef UE4SS_SDK_Wrestler_HPP
#define UE4SS_SDK_Wrestler_HPP

#include "Wrestler_enums.hpp"

struct FAbilityDataStruct
{
    EWrestlerAbilitySlot AbilitySlot;                                                 // 0x0000 (size: 0x1)
    class UWrestlerAbilityDefinition* AbilityDefinition;                              // 0x0008 (size: 0x8)
    FRowIDAbilityProperty abilityPropertyRowID;                                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAimAssistTargetSettingsStruct
{
    float TargetDistance;                                                             // 0x0000 (size: 0x4)
    float MinDegreeAngle;                                                             // 0x0004 (size: 0x4)
    float MaxDegreeAngle;                                                             // 0x0008 (size: 0x4)
    float MaxPitchDegreeAngle;                                                        // 0x000C (size: 0x4)
    float DistanceWeightMultiplier;                                                   // 0x0010 (size: 0x4)
    float AngleWeightMultiplier;                                                      // 0x0014 (size: 0x4)
    float MaxAnglePotentialTarget_ReticleOnly;                                        // 0x0018 (size: 0x4)
    bool bShouldBeReachable;                                                          // 0x001C (size: 0x1)
    TEnumAsByte<ECollisionChannel> SphereOverlapQueryChannel;                         // 0x001D (size: 0x1)
    TEnumAsByte<ECollisionChannel> ReachableLineTraceQueryChannel;                    // 0x001E (size: 0x1)
    bool bShouldUseSocket;                                                            // 0x001F (size: 0x1)
    FName SocketName;                                                                 // 0x0020 (size: 0x8)
    FGameplayTag PauseAimAssistTag;                                                   // 0x0028 (size: 0x8)
    FGameplayTag AimAssistActiveStateTag;                                             // 0x0030 (size: 0x8)
    FGameplayTagContainer AimAssistBlockedTags;                                       // 0x0038 (size: 0x20)
    FVector TargetLocationOffset;                                                     // 0x0058 (size: 0x18)
    float MaxYawDegreeAngleForLockOn;                                                 // 0x0070 (size: 0x4)
    float StrengthAlphaFadeTime;                                                      // 0x0074 (size: 0x4)
    float PreLockOnYawStrength;                                                       // 0x0078 (size: 0x4)
    float LockedOnYawStrength;                                                        // 0x007C (size: 0x4)
    class UCurveFloat* YawStrengthCurve;                                              // 0x0080 (size: 0x8)
    bool bUsePitchLockedOn;                                                           // 0x0088 (size: 0x1)
    float PreLockOnPitchStrength;                                                     // 0x008C (size: 0x4)
    float LockedOnPitchStrength;                                                      // 0x0090 (size: 0x4)
    class UCurveFloat* PitchStrengthCurve;                                            // 0x0098 (size: 0x8)
    float UnlockLookInputThreshold;                                                   // 0x00A0 (size: 0x4)
    float UnlockPercentageOfTargetDistance;                                           // 0x00A4 (size: 0x4)
    TSubclassOf<class AGameplayAbilityWorldReticle> LockedOnReticleType;              // 0x00A8 (size: 0x8)
    TSubclassOf<class AGameplayAbilityWorldReticle> ChosenTargetReticleType;          // 0x00B0 (size: 0x8)
    TSubclassOf<class AGameplayAbilityWorldReticle> PotentialTargetReticleType;       // 0x00B8 (size: 0x8)

}; // Size: 0xC0

struct FApplyDamageParams
{
    FGameplayTag DamageTag;                                                           // 0x0000 (size: 0x8)
    class AActor* Instigator;                                                         // 0x0008 (size: 0x8)
    FGameplayTag DamageTypeTag;                                                       // 0x0010 (size: 0x8)
    FGameplayTag DeathBehaviourTag;                                                   // 0x0018 (size: 0x8)
    bool bNoDeath;                                                                    // 0x0020 (size: 0x1)
    bool bShouldExecute;                                                              // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FAudioImpact
{
    TEnumAsByte<EPhysicalSurface> SurfaceType;                                        // 0x0000 (size: 0x1)
    FHitResult Hit;                                                                   // 0x0008 (size: 0xE8)
    FVector ImpactLocation;                                                           // 0x00F0 (size: 0x18)
    FVector ImpactNormal;                                                             // 0x0108 (size: 0x18)
    float ImpactMagnitude;                                                            // 0x0120 (size: 0x4)
    FGameplayTag ImpactTag;                                                           // 0x0124 (size: 0x8)

}; // Size: 0x130

struct FBufferToCapture
{
    EBufferName Buffer;                                                               // 0x0000 (size: 0x4)
    class UTextureRenderTarget2D* TextureTarget;                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FCharacterSequenceData
{
    class AActor* TransformOriginActor;                                               // 0x0000 (size: 0x8)
    FTransform TransformOrigin;                                                       // 0x0010 (size: 0x60)
    float BlendInTime;                                                                // 0x0070 (size: 0x4)
    float BlendOutTime;                                                               // 0x0074 (size: 0x4)
    bool bDisableCollisions;                                                          // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FCodexItemDetail
{
}; // Size: 0x78

struct FCoreData
{
    class UInputMappingContext* PrimaryMappingContext;                                // 0x0000 (size: 0x8)
    class UControlsDisplayData* DisplayData;                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDebugEnemyTaskScores
{
    TMap<class FName, class FDebugTaskScores> EnemyTaskScores;                        // 0x0000 (size: 0x50)
    TMap<class FName, class FDebugTaskScores> ChosenTaskScore;                        // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FDebugTaskScoreData
{
}; // Size: 0x30

struct FDebugTaskScoreItem
{
    FString Item;                                                                     // 0x0000 (size: 0x10)
    float Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FDebugTaskScoreItems
{
    TArray<FDebugTaskScoreItem> TaskScoreItems;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDebugTaskScores
{
    TMap<class FGameplayTag, class FDebugTaskScoreItems> TaskScores;                  // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FDebugTaskTypeEnemyTaskScores
{
    TMap<class FGameplayTag, class FDebugEnemyTaskScores> TaskTypeEnemyTaskScores;    // 0x0000 (size: 0x50)
    FGameplayTagContainer TaskTypeTagsToRemove;                                       // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FDifficulty
{
    TSoftClassPtr<UGameplayEffect> DifficultyAttributeEffect;                         // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FDigestedAttractionProperties
{
}; // Size: 0x1

struct FDigestedFearProperties
{
}; // Size: 0x4

struct FDigestedRepulsionProperties
{
}; // Size: 0x1

struct FEffectMagnitudes
{
    TMap<int32, float> Magnitudes;                                                    // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FEffectMagnitudesContainer
{
    TMap<class FGameplayTag, class FEffectMagnitudes> Container;                      // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FEffectMagnitudesTag
{
    FGameplayTag MagnitudeTagSetByCaller;                                             // 0x0000 (size: 0x8)
    FGameplayTag MagnitudeTagOnTheMagnitudesContainer;                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FEffectModifier
{
    TArray<FEffectMagnitudesTag> MagnitudesTag;                                       // 0x0000 (size: 0x10)
    EEffectOperation Operation;                                                       // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FEffectsMap
{
    TMap<class TSubclassOf<UGameplayEffect>, class FEffectModifier> Container;        // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FEnemySequenceData
{
    TSoftObjectPtr<ULevelSequence> Sequence;                                          // 0x0000 (size: 0x28)
    bool bSpawnSequence;                                                              // 0x0028 (size: 0x1)
    float SequenceBlendInTime;                                                        // 0x002C (size: 0x4)
    float SequenceBlendOutTime;                                                       // 0x0030 (size: 0x4)
    bool bInterruptable;                                                              // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FEnemySquad
{
    class AWrestlerEnemyCharacter* Leader;                                            // 0x0000 (size: 0x8)
    TArray<class AWrestlerEnemyCharacter*> Followers;                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FEnemyToSpawn
{
    TSoftClassPtr<UWrestlerEnemyTypeDefinition> EnemyType;                            // 0x0000 (size: 0x28)
    TSoftClassPtr<UWrestlerEquipmentDefinition> WeaponDefinition;                     // 0x0028 (size: 0x28)
    TSoftObjectPtr<UAnimDataAsset> AnimationSet;                                      // 0x0050 (size: 0x28)
    TSoftObjectPtr<UWrestlerMovementSetData> MovementSet;                             // 0x0078 (size: 0x28)
    TSoftObjectPtr<UWrestlerConfigDataAsset_EnemyStats> EnemyStats;                   // 0x00A0 (size: 0x28)
    TArray<TSoftClassPtr<UGameplayEffect>> AdditionalDefaultEffects;                  // 0x00C8 (size: 0x10)

}; // Size: 0xD8

struct FEvaluatorDefaultBehaviorStruct
{
    TSoftObjectPtr<UBehaviorTree> DefaultBehaviour;                                   // 0x0000 (size: 0x28)
    TMap<class FName, class TSoftObjectPtr<UBehaviorTree>> EnemyTypeDefaultBehaviourOverride; // 0x0028 (size: 0x50)
    TMap<class FGameplayTag, class TSoftObjectPtr<UBehaviorTree>> HasTagDefaultBehaviourTagOverride; // 0x0078 (size: 0x50)

}; // Size: 0xC8

struct FGameplayAbilityTargetData_Interaction : public FGameplayAbilityTargetData_ActorArray
{
    FWrestlerInteractionTarget InteractionTarget;                                     // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FGroupedPatrolPoints
{
    TArray<class AWrestlerEnemyPatrolPoint*> GroupedPatrolPoints;                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FHeraAutomataTestBackreferenceBootChainData
{
    TMap<class FString, class FHeraAutomataTestData_PerStep> Mapping;                 // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FHeraAutomataTestBackreferenceStateChainData
{
    TArray<FHeraAutomataTestData_PerStep> Steps;                                      // 0x0000 (size: 0x10)
    TArray<FSoftClassPath> FilterTasks;                                               // 0x0010 (size: 0x10)
    TArray<FSoftClassPath> FilterStates;                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FHeraAutomataTestData
{
    TSoftObjectPtr<UWorld> Map;                                                       // 0x0000 (size: 0x28)
    int32 StartingStep;                                                               // 0x0028 (size: 0x4)
    int32 LastStep;                                                                   // 0x002C (size: 0x4)
    TArray<FHeraAutomataTestData_PerStep> Steps;                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FHeraAutomataTestData_PerStep
{
    FString TestLabel;                                                                // 0x0000 (size: 0x10)
    TArray<FString> Nodes;                                                            // 0x0010 (size: 0x10)
    TArray<TSoftObjectPtr<UHeraAutomataObjective>> ObjectivesToTriggerPostCheck;      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FHeraAutomataTestFlowData
{
    TSoftObjectPtr<UWorld> Map;                                                       // 0x0000 (size: 0x28)
    TArray<FString> ExpectedStates;                                                   // 0x0028 (size: 0x10)
    bool bDumpStateHistory;                                                           // 0x0038 (size: 0x1)
    int32 TimeLimitInSeconds;                                                         // 0x003C (size: 0x4)
    int32 StartingStep;                                                               // 0x0040 (size: 0x4)
    int32 LastStep;                                                                   // 0x0044 (size: 0x4)
    bool bSkipStepsCheck;                                                             // 0x0048 (size: 0x1)
    TArray<FHeraAutomataTestData_PerStep> Steps;                                      // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FInputMappingData
{
    class UInputAction* DependentPlayerAction;                                        // 0x0000 (size: 0x8)
    class UInputAction* PlayerAction;                                                 // 0x0008 (size: 0x8)
    FWrestlerInputMappingPair DefaultKey_MK;                                          // 0x0010 (size: 0x30)
    FName ID;                                                                         // 0x0040 (size: 0x8)
    FKey DefaultKey_C_Primary;                                                        // 0x0048 (size: 0x18)
    FKey DefaultKey_C_Secondary;                                                      // 0x0060 (size: 0x18)
    bool bRemappableMouseKeyboard;                                                    // 0x0078 (size: 0x1)
    bool bRemappableGamepad;                                                          // 0x0079 (size: 0x1)
    bool bShowOnMouseKeyboard;                                                        // 0x007A (size: 0x1)
    bool bShowOnGamepad;                                                              // 0x007B (size: 0x1)
    bool bShowOnMouseKeyboardSpecial;                                                 // 0x007C (size: 0x1)
    bool bShowOnGamepadSpecial;                                                       // 0x007D (size: 0x1)

}; // Size: 0x90

struct FInteractionAnimData
{
    TSoftObjectPtr<ULevelSequence> Sequence;                                          // 0x0000 (size: 0x28)
    float SequenceBlendInTime;                                                        // 0x0028 (size: 0x4)
    float SequenceBlendOutTime;                                                       // 0x002C (size: 0x4)
    TSoftObjectPtr<UAnimMontage> Montage;                                             // 0x0030 (size: 0x28)
    bool bStartCrouched;                                                              // 0x0058 (size: 0x1)
    bool bUseLoadingTimes;                                                            // 0x0059 (size: 0x1)
    FInteractionAnimLoadingTimes LoadingTimes;                                        // 0x005C (size: 0x8)

}; // Size: 0x68

struct FInteractionAnimLoadingTimes
{
    float LoadStartTime;                                                              // 0x0000 (size: 0x4)
    float LoadTime;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLightningStrikeTierConfig
{
    float TargetRange;                                                                // 0x0000 (size: 0x4)
    int32 MaxPunchCount;                                                              // 0x0004 (size: 0x4)
    float TimeDilation;                                                               // 0x0008 (size: 0x4)
    float TargetTimeoutSeconds;                                                       // 0x000C (size: 0x4)
    float LockOnTime;                                                                 // 0x0010 (size: 0x4)
    float SwitchTargetSearchAngle;                                                    // 0x0014 (size: 0x4)
    float MinAngle;                                                                   // 0x0018 (size: 0x4)
    int32 MaxChainCount;                                                              // 0x001C (size: 0x4)
    float CriticalHitDamageAmount;                                                    // 0x0020 (size: 0x4)
    float CriticalHitChancePercentage;                                                // 0x0024 (size: 0x4)
    TMap<int32, float> HitDamageAmount;                                               // 0x0028 (size: 0x50)
    TMap<int32, float> StunDamageAmount;                                              // 0x0078 (size: 0x50)
    float FearDuration;                                                               // 0x00C8 (size: 0x4)
    float FearStrength;                                                               // 0x00CC (size: 0x4)

}; // Size: 0xD0

struct FLoadingTipData
{
    TArray<FText> TipTitle;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLocalizationKey
{
    FName RowID;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FPrevAssignedSearchRoutes
{
}; // Size: 0x10

struct FRadialMenuMeterialParamData
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    float ParameterValue;                                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRangedProjectileParams
{
    TSubclassOf<class AWrestlerRangedProjectile> ProjectileClass;                     // 0x0000 (size: 0x8)
    FVector StartLocation;                                                            // 0x0008 (size: 0x18)
    FRotator StartRotation;                                                           // 0x0020 (size: 0x18)
    class APawn* Instigator;                                                          // 0x0038 (size: 0x8)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0040 (size: 0x10)
    float ProjectileDamage;                                                           // 0x0050 (size: 0x4)
    float Speed;                                                                      // 0x0054 (size: 0x4)
    float MaxDistance;                                                                // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FRangedProjectilePool
{
    TArray<class AWrestlerRangedProjectile*> Projectiles;                             // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FRowIDAbilityProperty
{
    FName RowID;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FRowIconID
{
    FName RowID;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSequenceContainer
{
    TArray<TSoftObjectPtr<ULevelSequence>> Sequences;                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSkelMeshMergeSectionMapping_BP
{
    TArray<int32> SectionIDs;                                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSkeletalMeshMergeParams
{
    TArray<FSkelMeshMergeSectionMapping_BP> MeshSectionMappings;                      // 0x0000 (size: 0x10)
    TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;                     // 0x0010 (size: 0x10)
    TArray<class USkeletalMesh*> MeshesToMerge;                                       // 0x0020 (size: 0x10)
    int32 StripTopLODS;                                                               // 0x0030 (size: 0x4)
    uint8 bNeedsCpuAccess;                                                            // 0x0034 (size: 0x1)
    uint8 bSkeletonBefore;                                                            // 0x0034 (size: 0x1)
    class USkeleton* Skeleton;                                                        // 0x0038 (size: 0x8)
    FName MeshName;                                                                   // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FSkillNode
{
    FName NodeName;                                                                   // 0x0000 (size: 0x8)
    FName NodeDescription;                                                            // 0x0008 (size: 0x8)
    class UTexture2D* NodeImg;                                                        // 0x0010 (size: 0x8)
    int32 bloodPoints;                                                                // 0x0018 (size: 0x4)
    ENodeStatus NodeStatus;                                                           // 0x001C (size: 0x1)
    FVector2D NodePos;                                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FSkinTone
{
    class UMaterialInterface* HeadSkintoneMaterial;                                   // 0x0000 (size: 0x8)
    class UMaterialInterface* ArmsSkintoneMaterial;                                   // 0x0008 (size: 0x8)
    class UMaterialInterface* BodySkintoneMaterial;                                   // 0x0010 (size: 0x8)
    class UMaterialInterface* LegsSkintoneMaterial;                                   // 0x0018 (size: 0x8)
    FVector ToneValue;                                                                // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FSystemNotificationStruct
{
    FText Title;                                                                      // 0x0000 (size: 0x18)
    FText Message;                                                                    // 0x0018 (size: 0x18)
    class UObject* ObjectToBind;                                                      // 0x0030 (size: 0x8)
    FName OnConfirmFunctionName;                                                      // 0x0038 (size: 0x8)
    FName OnCancelFunctionName;                                                       // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FTrainingCost
{
    EWrestlerGrantedPointsType CostType;                                              // 0x0000 (size: 0x1)
    int32 CostAmount;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVariationMontages
{
    TArray<class UAnimMontage*> Montages;                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestleAnimationsContainer
{
    TArray<FWrestlerGenderAnimationData> AnimationChances;                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerAIAttractionEvent
{
    FWrestlerAIStimulusEvent BaseEvent;                                               // 0x0000 (size: 0x30)

}; // Size: 0x38

struct FWrestlerAIFearActor
{
    class UWrestlerFearEmitterComponent* FearEmitter;                                 // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FWrestlerAIFearEvent
{
    FWrestlerAIStimulusEvent BaseEvent;                                               // 0x0000 (size: 0x30)
    float FearStrength;                                                               // 0x0030 (size: 0x4)
    float MaxRange;                                                                   // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FWrestlerAINoiseEvent
{
    FVector NoiseLocation;                                                            // 0x0008 (size: 0x18)
    float Loudness;                                                                   // 0x0020 (size: 0x4)
    float MaxRange;                                                                   // 0x0024 (size: 0x4)
    class AActor* Instigator;                                                         // 0x0028 (size: 0x8)
    FGameplayTag Tag;                                                                 // 0x0030 (size: 0x8)

}; // Size: 0x40

struct FWrestlerAIRepulsionEvent
{
    FWrestlerAIStimulusEvent BaseEvent;                                               // 0x0000 (size: 0x30)

}; // Size: 0x38

struct FWrestlerAISightEvent
{
    FVector EventLocation;                                                            // 0x0008 (size: 0x18)
    FVector PredictedLocation;                                                        // 0x0020 (size: 0x18)
    float MaxRange;                                                                   // 0x0038 (size: 0x4)
    class AActor* Instigator;                                                         // 0x0040 (size: 0x8)
    FGameplayTag Tag;                                                                 // 0x0048 (size: 0x8)

}; // Size: 0x58

struct FWrestlerAISpawnerData
{
    class AWrestlerEnemyPatrolRoute* PatrolRoute_OLD;                                 // 0x0000 (size: 0x8)
    TSoftObjectPtr<AWrestlerPatrolRoute> Route;                                       // 0x0008 (size: 0x28)
    class UHeraMissionObjective* DeathObjective;                                      // 0x0030 (size: 0x8)
    class UHeraMissionObjective* StunObjective;                                       // 0x0038 (size: 0x8)
    class UHeraMissionObjective* AwareOfPlayerObjective;                              // 0x0040 (size: 0x8)
    class UHeraMissionObjective* DetectedPlayerObjective;                             // 0x0048 (size: 0x8)
    class UHeraMissionObjective* TKedObjective;                                       // 0x0050 (size: 0x8)
    FName DespawnTag;                                                                 // 0x0058 (size: 0x8)
    FGameplayTag DialogueCharacterTag;                                                // 0x0060 (size: 0x8)
    bool bForceEnemyState;                                                            // 0x0068 (size: 0x1)
    bool bEnabledUVGlow;                                                              // 0x0069 (size: 0x1)
    TSoftObjectPtr<UWrestlerModularCharacterProfile> ModularCharacterProfileOverride; // 0x0070 (size: 0x28)
    EnemyStartState EnemyStartState;                                                  // 0x0098 (size: 0x1)
    FGameplayTagContainer TagsToApply;                                                // 0x00A0 (size: 0x20)
    bool bPreventDeadEnemyRespawn;                                                    // 0x00C0 (size: 0x1)

}; // Size: 0xC8

struct FWrestlerAIStimulusEvent
{
    float Age;                                                                        // 0x0000 (size: 0x4)
    FVector SenseLocation;                                                            // 0x0008 (size: 0x18)
    class AActor* Instigator;                                                         // 0x0020 (size: 0x8)
    FName Tag;                                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWrestlerAbilityDataStruct : public FTableRowBase
{
    FText AbilityName;                                                                // 0x0008 (size: 0x18)
    TSoftObjectPtr<UTexture2D> AbilityIcon;                                           // 0x0020 (size: 0x28)
    FText Description;                                                                // 0x0048 (size: 0x18)
    int32 BaseCost;                                                                   // 0x0060 (size: 0x4)
    int32 DecreasedCost;                                                              // 0x0064 (size: 0x4)
    int32 IncreasedCost;                                                              // 0x0068 (size: 0x4)
    TArray<EPlayerClan> ClanModifiers;                                                // 0x0070 (size: 0x10)
    TArray<FTrainingCost> AbilityTrainingCost;                                        // 0x0080 (size: 0x10)
    FProgressBarStyle AbilityFillingStyle;                                            // 0x0090 (size: 0x290)
    TSubclassOf<class UCommonButtonStyle> LockedButtonStyle;                          // 0x0320 (size: 0x8)
    TSubclassOf<class UCommonButtonStyle> UnlockedButtonStyle;                        // 0x0328 (size: 0x8)
    TSubclassOf<class UCommonButtonStyle> AcquiredButtonStyle;                        // 0x0330 (size: 0x8)
    TSubclassOf<class UCommonButtonStyle> AcquiredButtonStyle_Small;                  // 0x0338 (size: 0x8)
    TSubclassOf<class UCommonButtonStyle> LockedButtonStyle_Small;                    // 0x0340 (size: 0x8)
    TSubclassOf<class UCommonButtonStyle> UnlockedButtonStyle_Small;                  // 0x0348 (size: 0x8)
    TSubclassOf<class UCommonButtonStyle> UnaivalableButtonStyle_Small;               // 0x0350 (size: 0x8)
    class UWrestlerAbilityDefinition* AbilityDefinition;                              // 0x0358 (size: 0x8)
    TSoftObjectPtr<UMediaSource> AbilityVideoclip;                                    // 0x0360 (size: 0x28)
    int32 ClanValue;                                                                  // 0x0388 (size: 0x4)
    FGameplayTag AbilityTier;                                                         // 0x038C (size: 0x8)
    FGameplayTag CostumeTag;                                                          // 0x0394 (size: 0x8)
    class UHeraPropertyBool* EnabledProperty;                                         // 0x03A0 (size: 0x8)
    TArray<EWrestlerClanDiscipline> AbilityDisciplines;                               // 0x03A8 (size: 0x10)
    FString RowFileName;                                                              // 0x03B8 (size: 0x10)
    TArray<FString> UnlockDependenciesAbilityRows;                                    // 0x03C8 (size: 0x10)

}; // Size: 0x3E0

struct FWrestlerAbilityInput
{
    uint8 bAbilityWheel;                                                              // 0x0000 (size: 0x1)
    int32 AbilitySlot;                                                                // 0x0004 (size: 0x4)
    EWrestlerAbilitySlot NewControlsAbilitySlot;                                      // 0x0008 (size: 0x1)
    FVector2D AbilitySelectDirection;                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerAbilityMoveTo
{
    FVector TargetLocationOffset;                                                     // 0x0000 (size: 0x18)
    float MaximumHeightOffset;                                                        // 0x0018 (size: 0x4)
    bool bMoveToFallingTarget;                                                        // 0x001C (size: 0x1)
    ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                           // 0x001D (size: 0x1)
    float Delay;                                                                      // 0x0020 (size: 0x4)
    float Duration;                                                                   // 0x0024 (size: 0x4)
    float MaxRange;                                                                   // 0x0028 (size: 0x4)
    float MinRange;                                                                   // 0x002C (size: 0x4)
    class UCurveFloat* TargetLerpSpeedHorizontal;                                     // 0x0030 (size: 0x8)
    class UCurveFloat* TargetLerpSpeedVertical;                                       // 0x0038 (size: 0x8)
    bool bSetNewMovementMode;                                                         // 0x0040 (size: 0x1)
    TEnumAsByte<EMovementMode> MovementMode;                                          // 0x0041 (size: 0x1)
    bool bRestrictSpeedToExpected;                                                    // 0x0042 (size: 0x1)
    class UCurveVector* PathOffsetCurve;                                              // 0x0048 (size: 0x8)
    class UCurveFloat* TimeMappingCurve;                                              // 0x0050 (size: 0x8)
    ERootMotionFinishVelocityMode VelocityOnFinishMode;                               // 0x0058 (size: 0x1)
    FVector SetVelocityOnFinish;                                                      // 0x0060 (size: 0x18)
    float ClampVelocityOnFinish;                                                      // 0x0078 (size: 0x4)
    bool bDisableDestinationReachedInterrupt;                                         // 0x007C (size: 0x1)
    bool bCanTimeOut;                                                                 // 0x007D (size: 0x1)
    bool bInterruptBeforeDestinationReached;                                          // 0x007E (size: 0x1)
    bool bMoveToWhenNotInRange;                                                       // 0x007F (size: 0x1)
    float VelocityWhenNotInRange;                                                     // 0x0080 (size: 0x4)
    bool bIgnoreDodge;                                                                // 0x0084 (size: 0x1)
    bool bIgnoreHeightFromDistanceCheck;                                              // 0x0085 (size: 0x1)
    bool bEnableGravity;                                                              // 0x0086 (size: 0x1)
    bool bUseAIMoveTo;                                                                // 0x0087 (size: 0x1)

}; // Size: 0x88

struct FWrestlerAbilityRotate
{
    FVector LocationToFace;                                                           // 0x0000 (size: 0x18)
    FRotator RotatorOverride;                                                         // 0x0018 (size: 0x18)
    float Duration;                                                                   // 0x0030 (size: 0x4)
    float Precision;                                                                  // 0x0034 (size: 0x4)
    bool bUsePrecision;                                                               // 0x0038 (size: 0x1)
    float Delay;                                                                      // 0x003C (size: 0x4)
    bool bIgnoreDodge;                                                                // 0x0040 (size: 0x1)
    bool bUseAISetFocus;                                                              // 0x0041 (size: 0x1)

}; // Size: 0x48

struct FWrestlerAbilitySequenceTaskData
{
    FName SequenceName;                                                               // 0x0000 (size: 0x8)
    float Weighting;                                                                  // 0x0008 (size: 0x4)
    TArray<TSoftClassPtr<UWrestlerGameplayAbility>> TaskSequence;                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerAbilitySet_GameplayAbility
{
    TSoftClassPtr<UWrestlerGameplayAbility> Ability;                                  // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FWrestlerAbilitySet_GameplayEffect
{
    TSubclassOf<class UGameplayEffect> GameplayEffect;                                // 0x0000 (size: 0x8)
    float EffectLevel;                                                                // 0x0008 (size: 0x4)
    bool bSetByCaller;                                                                // 0x000C (size: 0x1)
    FGameplayTag DataTag;                                                             // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWrestlerAbilitySet_GrantedHandles
{
    TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;                            // 0x0000 (size: 0x10)
    TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerAbilityTargetData : public FGameplayAbilityTargetData
{
}; // Size: 0x8

struct FWrestlerAchievementCollectableCounter
{
    int32 NumberToFind;                                                               // 0x0000 (size: 0x4)
    class UHeraPropertyInt* CounterProperty;                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerActorOcclusionData
{
}; // Size: 0x40

struct FWrestlerActorVisibilities
{
    TMap<class TSoftObjectPtr<AActor>, class FWrestlerActorVisibilitySaveData> Actors; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerActorVisibilitySaveData
{
    EWrestlerChangeVisibilityCollisionState Visibility;                               // 0x0000 (size: 0x1)
    EWrestlerChangeVisibilityCollisionState Collision;                                // 0x0001 (size: 0x1)
    bool bPropagateToAttachedActors;                                                  // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FWrestlerActorsGameplayTargetDataFilter : public FGameplayTargetDataFilter
{
    TArray<class TSubclassOf<AActor>> FilteredActors;                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWrestlerAgentTask
{
    class AWrestlerEnemyCharacter* Agent;                                             // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FWrestlerAnimationFragment : public FMassFragment
{
}; // Size: 0x18

struct FWrestlerAppliedEquipmentEntry
{
    TSubclassOf<class UWrestlerEquipmentDefinition> EquipmentDefinition;              // 0x0000 (size: 0x8)
    class UWrestlerEquipmentInstance* Instance;                                       // 0x0008 (size: 0x8)
    FWrestlerAbilitySet_GrantedHandles GrantedHandles;                                // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FWrestlerAudioSplineRtpcModifier
{
    class UHeraPropertyBool* ModifierProperty;                                        // 0x0000 (size: 0x8)
    int32 StartIndex;                                                                 // 0x0008 (size: 0x4)
    TArray<float> ModifierValues;                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerAudioSurfaceParameters
{
    class UAkSwitchValue* BaseSurfaceSwitch;                                          // 0x0000 (size: 0x8)
    class UAkSwitchValue* CoverSurfaceSwitch;                                         // 0x0008 (size: 0x8)
    float CoverSurfaceAmount;                                                         // 0x0010 (size: 0x4)
    float RvtOnlyWetnessAmount;                                                       // 0x0014 (size: 0x4)
    TEnumAsByte<EPhysicalSurface> BaseSurfaceType;                                    // 0x0018 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> CoverSurfaceType;                                   // 0x0019 (size: 0x1)
    FVector CoverLocation;                                                            // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FWrestlerAvoidanceFragment : public FMassFragment
{
    float MoveTargetOffsetSize;                                                       // 0x0000 (size: 0x4)
    FVector MoveTargetOffset;                                                         // 0x0008 (size: 0x18)

}; // Size: 0x40

struct FWrestlerAwarenessFragment : public FMassFragment
{
}; // Size: 0xD0

struct FWrestlerAwarenessTagTrackingData
{
    class AActor* Actor;                                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWrestlerAwarenessTrackingData
{
    FAIStimulus LastStimulus;                                                         // 0x0020 (size: 0x58)

}; // Size: 0x78

struct FWrestlerBipedFragment : public FMassFragment
{
}; // Size: 0x1

struct FWrestlerBloodResonanceAssignment
{
    FGameplayTag Tag;                                                                 // 0x0000 (size: 0x8)
    float Weighting;                                                                  // 0x0008 (size: 0x4)
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0010 (size: 0x8)
    class UHeraDialogueInfo* AmbientInfo;                                             // 0x0018 (size: 0x8)
    bool bAllowConversations;                                                         // 0x0020 (size: 0x1)
    bool bAllowActivatedConversations;                                                // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FWrestlerBloodResonanceEventActivatedInstanceData
{
    FSmartObjectClaimHandle ClaimedSlot;                                              // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FWrestlerBloodResonanceEventActivatedTask : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerBloodResonanceEventData
{
    EWrestlerBloodResonanceEventParticipants ParticipantType;                         // 0x0000 (size: 0x4)
    TSoftClassPtr<AActor> SmartObjectBlueprintToSpawn;                                // 0x0008 (size: 0x28)
    FName EventName;                                                                  // 0x0030 (size: 0x8)
    FGameplayTag BloodResSmartObjectTag;                                              // 0x0038 (size: 0x8)
    uint8 MaxNumSpawnedAtOneTime;                                                     // 0x0040 (size: 0x1)
    float PercentChance;                                                              // 0x0044 (size: 0x4)
    uint16 MinTimeBetweenSpawns;                                                      // 0x0048 (size: 0x2)
    EWrestlerGrantedPointsType BloodResType;                                          // 0x004A (size: 0x1)
    FGameplayTag BloodResonanceTag;                                                   // 0x004C (size: 0x8)

}; // Size: 0x58

struct FWrestlerBloodResonanceEventParameters
{
    float CancellationDistance;                                                       // 0x0000 (size: 0x4)
    float IconDisplayMinDistance;                                                     // 0x0004 (size: 0x4)
    float IconRemoveMinDistance;                                                      // 0x0008 (size: 0x4)
    float IconClipMinDistance;                                                        // 0x000C (size: 0x4)
    bool bIconDisplayWhenLOS;                                                         // 0x0010 (size: 0x1)
    float IconDisplayLOSDistance;                                                     // 0x0014 (size: 0x4)
    bool IconAlwaysDisplayAtEdge;                                                     // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FWrestlerBloodResonanceParameters
{
    bool bIsTypeAssignerEnabled;                                                      // 0x0000 (size: 0x1)
    float UpdateTime;                                                                 // 0x0004 (size: 0x4)
    float AssignmentRange;                                                            // 0x0008 (size: 0x4)
    TArray<FWrestlerBloodResonanceAssignment> Assignments;                            // 0x0010 (size: 0x10)
    TMap<FGameplayTag, float> DeactivationRange;                                      // 0x0020 (size: 0x50)
    FGameplayTag ExcludedTag;                                                         // 0x0070 (size: 0x8)

}; // Size: 0x78

struct FWrestlerBloodResonanceWaypointIcon
{
    TSoftObjectPtr<UTexture2D> WaypointTexture;                                       // 0x0000 (size: 0x28)
    FLinearColor WaypointColor;                                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWrestlerCameraPresent
{
}; // Size: 0x1

struct FWrestlerCanRemovePlayerActionObserverTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerChangeVisibilityCollisionInfo
{
    TArray<TSoftObjectPtr<AActor>> Actors;                                            // 0x0000 (size: 0x10)
    EWrestlerChangeVisibilityCollisionState Visibility;                               // 0x0010 (size: 0x1)
    EWrestlerChangeVisibilityCollisionState Collision;                                // 0x0011 (size: 0x1)
    bool bPropagateToAttachedActors;                                                  // 0x0012 (size: 0x1)

}; // Size: 0x18

struct FWrestlerCharacterCostumeDefinition
{
    class UTexture2D* CostumeTextureSmall;                                            // 0x0000 (size: 0x8)
    class UTexture2D* CostumeTexture;                                                 // 0x0008 (size: 0x8)
    class USkeletalMesh* CostumeMesh_FP;                                              // 0x0010 (size: 0x8)
    class USkeletalMesh* CostumeMesh_TP;                                              // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FWrestlerClanTrainerConversation
{
    EPlayerClan Clan;                                                                 // 0x0000 (size: 0x1)
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0008 (size: 0x8)
    FString FabienDialoguePath;                                                       // 0x0010 (size: 0x10)
    TSoftObjectPtr<UHeraPropertyBool> StartProperty;                                  // 0x0020 (size: 0x28)
    TSoftObjectPtr<UDataTable> ClanAbilitiesDataTable;                                // 0x0048 (size: 0x28)

}; // Size: 0x70

struct FWrestlerClanTrainerConversationInfo
{
    class UHeraDialogueInfo* Info;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FWrestlerClanTrainerConversationParameters
{
    bool bIsConversationsEnabled;                                                     // 0x0000 (size: 0x1)
    TSoftObjectPtr<UHeraDialogueInfo> DialogueInfoDefault;                            // 0x0008 (size: 0x28)
    TSoftObjectPtr<UHeraDialogueInfo> FabienDialogueInfo;                             // 0x0030 (size: 0x28)
    TArray<FWrestlerClanTrainerConversation> Trainers;                                // 0x0058 (size: 0x10)
    bool bDisablePlayerInput;                                                         // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FWrestlerCodex
{
    class UCodexItem* Root;                                                           // 0x0000 (size: 0x8)
    TMap<class UHeraDialogueInfo*, class UStory*> DialogStoryMap;                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FWrestlerCodexPendingShowItem
{
    bool bIsPending;                                                                  // 0x0000 (size: 0x1)
    FString CodexItemID;                                                              // 0x0008 (size: 0x10)
    bool bIsMalkavian;                                                                // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FWrestlerComponentTransformAndVelocityCopyToActorTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerComponentTransformAndVelocityCopyToMassTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerConeParams
{
    float VerticalVisionAngle;                                                        // 0x0000 (size: 0x4)
    float PeripheralVisionAngle;                                                      // 0x0004 (size: 0x4)
    float HorizontalRange;                                                            // 0x0008 (size: 0x4)
    float VerticalRange;                                                              // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWrestlerConfirmationPromptData
{
    FText ConfirmationTitle;                                                          // 0x0000 (size: 0x18)
    FText ConfirmationTextFirstLine;                                                  // 0x0018 (size: 0x18)
    FText ConfirmationTextSecondLine;                                                 // 0x0030 (size: 0x18)
    bool UseBothPromtButtons;                                                         // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FWrestlerContextualAnimations
{
    TArray<TSoftObjectPtr<UAnimMontage>> Animations;                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerContextualAnimationsPerGender
{
    TMap<class EWrestlerGenderType, class FWrestlerContextualAnimations> AnimationsPerGender; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerControlInput
{
    uint8 bPunch;                                                                     // 0x0000 (size: 0x1)
    uint8 bHeavy;                                                                     // 0x0000 (size: 0x1)
    uint8 bDash;                                                                      // 0x0000 (size: 0x1)
    uint8 bFeed;                                                                      // 0x0000 (size: 0x1)
    uint8 bHeal;                                                                      // 0x0000 (size: 0x1)
    uint8 bTarget;                                                                    // 0x0000 (size: 0x1)
    uint8 bCrouch;                                                                    // 0x0000 (size: 0x1)
    uint8 bSprint;                                                                    // 0x0000 (size: 0x1)
    uint8 bJump;                                                                      // 0x0001 (size: 0x1)
    uint8 bVampiricVision;                                                            // 0x0001 (size: 0x1)
    uint8 bStrike;                                                                    // 0x0001 (size: 0x1)
    uint8 bRelocate;                                                                  // 0x0001 (size: 0x1)
    uint8 bMastery;                                                                   // 0x0001 (size: 0x1)
    uint8 bAffect;                                                                    // 0x0001 (size: 0x1)
    uint8 bStrikeInstant;                                                             // 0x0001 (size: 0x1)
    uint8 bRelocateInstant;                                                           // 0x0001 (size: 0x1)
    uint8 bMasteryInstant;                                                            // 0x0002 (size: 0x1)
    uint8 bAffectInstant;                                                             // 0x0002 (size: 0x1)
    uint8 bDisciplineAbility;                                                         // 0x0002 (size: 0x1)
    uint8 bLeftPunch;                                                                 // 0x0002 (size: 0x1)
    uint8 bTelekinesis;                                                               // 0x0002 (size: 0x1)
    uint8 bCounter;                                                                   // 0x0002 (size: 0x1)
    FVector2D Move;                                                                   // 0x0008 (size: 0x10)
    TEnumAsByte<EMovementMode> MovementMode;                                          // 0x0018 (size: 0x1)
    FWrestlerInteractionInput Interaction;                                            // 0x001C (size: 0x4)

}; // Size: 0x20

struct FWrestlerControlInputCue
{
    EWrestlerControlBaseInput Input;                                                  // 0x0000 (size: 0x1)
    EWrestlerControlInputType InputType;                                              // 0x0001 (size: 0x1)
    float Time;                                                                       // 0x0004 (size: 0x4)
    EWrestlerControlDirection Direction;                                              // 0x0008 (size: 0x1)
    TArray<EWrestlerControlMovementMode> MovementMode;                                // 0x0010 (size: 0x10)
    class UWrestlerControlCue* Cue;                                                   // 0x0020 (size: 0x8)

}; // Size: 0x30

struct FWrestlerControllerSetupControl
{
    FWrestlerControllerSetupStick MoveStick;                                          // 0x0000 (size: 0x28)
    FWrestlerControllerSetupStick LookStick;                                          // 0x0028 (size: 0x28)
    bool bIsCrouchToggle;                                                             // 0x0050 (size: 0x1)
    bool bIsSprintToggle;                                                             // 0x0051 (size: 0x1)
    FWrestlerControllerSetupTargeting Targeting;                                      // 0x0054 (size: 0x18)
    FWrestlerControllerSetupLookAt LookAt;                                            // 0x006C (size: 0x8)

}; // Size: 0x74

struct FWrestlerControllerSetupLookAt
{
    float MaxLookAtDistance;                                                          // 0x0000 (size: 0x4)
    TEnumAsByte<ECollisionChannel> LookAtCollisionChannel;                            // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FWrestlerControllerSetupStick
{
    float HorizontalSensitivity;                                                      // 0x0000 (size: 0x4)
    float VerticalSensitivity;                                                        // 0x0004 (size: 0x4)
    float MouseSensitivity;                                                           // 0x0008 (size: 0x4)
    float DeadZone;                                                                   // 0x000C (size: 0x4)
    float MaximumInputThreshold;                                                      // 0x0010 (size: 0x4)
    float AxialDeadzone;                                                              // 0x0014 (size: 0x4)
    float CurveExponent;                                                              // 0x0018 (size: 0x4)
    float Acceleration;                                                               // 0x001C (size: 0x4)
    float AccelerationTime;                                                           // 0x0020 (size: 0x4)
    bool bInvertY;                                                                    // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FWrestlerControllerSetupTargeting
{
    float MaxDistance;                                                                // 0x0000 (size: 0x4)
    float MaxAngle;                                                                   // 0x0004 (size: 0x4)
    float StickThreshold;                                                             // 0x0008 (size: 0x4)
    float TurnRate;                                                                   // 0x000C (size: 0x4)
    bool GlancePush;                                                                  // 0x0010 (size: 0x1)
    float MaxGlanceAngle;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FWrestlerConversationDialogueInfo
{
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0000 (size: 0x8)
    class UHeraDialogueInfo* AmbientInfo;                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerConversationDialogues
{
    TArray<FWrestlerConversationDialogueInfo> Dialogues;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerCreditsIconRow : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    TSoftObjectPtr<UObject> ResourceObject;                                           // 0x0020 (size: 0x28)
    float DesiredHeight;                                                              // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FWrestlerCreditsRow : public FTableRowBase
{
    FString CreditText1;                                                              // 0x0008 (size: 0x10)
    FString CreditText2;                                                              // 0x0018 (size: 0x10)
    EWrestlerCreditType CreditType;                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FWrestlerCrimeChaseTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerCrimeNoticedFragment : public FMassFragment
{
}; // Size: 0x8

struct FWrestlerCrimeNoticedTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerCrowdVisualizationFragment : public FMassFragment
{
}; // Size: 0x10

struct FWrestlerCustomDepthPrimitiveEntry
{
}; // Size: 0x10

struct FWrestlerDeadBodyInvestigators
{
    class AActor* Investigator;                                                       // 0x0000 (size: 0x8)
    TArray<class AActor*> PotentialInvestigators;                                     // 0x0008 (size: 0x10)
    TArray<class AActor*> SeenBodyActors;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FWrestlerDeadBodyObserverFragment : public FMassFragment
{
}; // Size: 0x28

struct FWrestlerDebugKeyToCvarIntToggles
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    FString Cvar;                                                                     // 0x0018 (size: 0x10)
    bool IsDebugMenuWithShiftForFocus;                                                // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FWrestlerDeferredEnemySpawnParam
{
    FGameplayTagContainer TagsToApply;                                                // 0x0000 (size: 0x20)
    FName EnemyTypeOverride;                                                          // 0x0020 (size: 0x8)
    FWrestlerDeferredEnemySpawnParamOnEnemySpawned OnEnemySpawned;                    // 0x0028 (size: 0x10)
    void OnDeferredSpawnCompleted(class AWrestlerEnemyCharacter* SpawnedEnemy);

}; // Size: 0x38

struct FWrestlerDensityFragment : public FMassFragment
{
}; // Size: 0x48

struct FWrestlerDialogueFragment : public FMassFragment
{
}; // Size: 0x40

struct FWrestlerDialogueRequestInstanceData
{
    FGameplayTag Prompt;                                                              // 0x0000 (size: 0x8)
    FStateTreeStructRef MainParticipant;                                              // 0x0008 (size: 0x10)
    FStateTreeStructRef OtherParticipant;                                             // 0x0018 (size: 0x10)

}; // Size: 0x30

struct FWrestlerDialogueRequestTask : public FMassStateTreeTaskBase
{
    float FirstRequstDelay;                                                           // 0x0020 (size: 0x4)
    float RequestFrequency;                                                           // 0x0024 (size: 0x4)

}; // Size: 0x30

struct FWrestlerDialogueSaveDataV1
{
    TMap<class FName, class FHeraDialogueSerialisedDialogue> DialogueData;            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerDialogueSaveDataV2
{
    TMap<class FString, class FHeraDialogueSerialisedDialogue> DialogueData;          // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerEnemiesQuestData
{
    TSet<FString> KilledEnemySpawnerPaths;                                            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerEnemyBehaviours
{
    TMap<class FGameplayTag, class TSoftObjectPtr<UBehaviorTree>> EnemyBehaviourData; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerEnemyNoticedTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerEntityAwarenessWidgetData
{
    FProgressBarStyle AwarenessProgressBarStyle;                                      // 0x0000 (size: 0x290)
    FLinearColor AwarenessBackgroundColor;                                            // 0x0290 (size: 0x10)
    FLinearColor AwarenessBorderColor;                                                // 0x02A0 (size: 0x10)

}; // Size: 0x2B0

struct FWrestlerEntityCloseToLocationCompareInstanceData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FWrestlerEntityMassFragmentFilter
{
    TArray<FInstancedStruct> AnyFragments;                                            // 0x0000 (size: 0x10)
    TArray<FInstancedStruct> AllFragments;                                            // 0x0010 (size: 0x10)
    TArray<FInstancedStruct> NoneFragments;                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWrestlerEntityMassTagFilter
{
    TArray<FInstancedStruct> AnyTags;                                                 // 0x0000 (size: 0x10)
    TArray<FInstancedStruct> AllTags;                                                 // 0x0010 (size: 0x10)
    TArray<FInstancedStruct> NoneTags;                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWrestlerEntityTagFilter
{
    TArray<EWrestlerMassGameplayTags> AnyTags;                                        // 0x0000 (size: 0x10)
    TArray<EWrestlerMassGameplayTags> AllTags;                                        // 0x0010 (size: 0x10)
    TArray<EWrestlerMassGameplayTags> NotTags;                                        // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWrestlerEquipmentActorToSpawn
{
    TSubclassOf<class AActor> ActorToSpawn;                                           // 0x0000 (size: 0x8)
    FName AttachSocket;                                                               // 0x0008 (size: 0x8)
    EAttachmentRule LocationAttachmentRule;                                           // 0x0010 (size: 0x1)
    EAttachmentRule RotationAttachmentRule;                                           // 0x0011 (size: 0x1)
    EAttachmentRule ScaleAttachmentRule;                                              // 0x0012 (size: 0x1)
    FTransform AttachTransform;                                                       // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FWrestlerEquipmentList
{
    TArray<FWrestlerAppliedEquipmentEntry> Entries;                                   // 0x0000 (size: 0x10)
    class UActorComponent* OwnerComponent;                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWrestlerExclusionZoneFragment : public FMassFragment
{
}; // Size: 0xC

struct FWrestlerExponentialHeightFogParameters
{
    float BlendTime;                                                                  // 0x0000 (size: 0x4)
    float FogDensity;                                                                 // 0x0004 (size: 0x4)
    FLinearColor FogInscatteringColor;                                                // 0x0008 (size: 0x10)
    float FogHeightFalloff;                                                           // 0x0018 (size: 0x4)
    float FogMaxOpacity;                                                              // 0x001C (size: 0x4)
    float StartDistance;                                                              // 0x0020 (size: 0x4)
    float FogCutoffDistance;                                                          // 0x0024 (size: 0x4)
    class UTextureCube* InscatteringColorCubemap;                                     // 0x0028 (size: 0x8)
    float InscatteringColorCubemapAngle;                                              // 0x0030 (size: 0x4)
    FLinearColor InscatteringTextureTint;                                             // 0x0034 (size: 0x10)
    float FullyDirectionalInscatteringColorDistance;                                  // 0x0044 (size: 0x4)
    float NonDirectionalInscatteringColorDistance;                                    // 0x0048 (size: 0x4)
    float DirectionalInscatteringExponent;                                            // 0x004C (size: 0x4)
    float DirectionalInscatteringStartDistance;                                       // 0x0050 (size: 0x4)
    FLinearColor DirectionalInscatteringColor;                                        // 0x0054 (size: 0x10)
    bool bEnableVolumetricFog;                                                        // 0x0064 (size: 0x1)
    float VolumetricFogScatteringDistribution;                                        // 0x0068 (size: 0x4)
    FColor VolumetricFogAlbedo;                                                       // 0x006C (size: 0x4)
    FLinearColor VolumetricFogEmissive;                                               // 0x0070 (size: 0x10)
    float VolumetricFogExtinctionScale;                                               // 0x0080 (size: 0x4)
    float VolumetricFogDistance;                                                      // 0x0084 (size: 0x4)
    FVector FogActorLocation;                                                         // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FWrestlerFearFragment : public FMassFragment
{
}; // Size: 0x88

struct FWrestlerFindClosestEntity : public FMassStateTreeTaskBase
{
    FWrestlerEntityMassTagFilter FilterTags;                                          // 0x0028 (size: 0x30)
    FWrestlerEntityMassFragmentFilter FilterFragments;                                // 0x0058 (size: 0x30)
    FWrestlerEntityTagFilter FilterGameplayTags;                                      // 0x0088 (size: 0x30)
    float RefreshRate;                                                                // 0x00B8 (size: 0x4)
    float TendencyToChangeEntity;                                                     // 0x00BC (size: 0x4)

}; // Size: 0xC0

struct FWrestlerFindClosestEntityInstanceData
{
    FMassEntityHandle EntityHandle;                                                   // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FWrestlerFindSmartObjectTask : public FMassFindSmartObjectTask
{
}; // Size: 0x88

struct FWrestlerFindTargetNearPlayer : public FMassStateTreeTaskBase
{
    FZoneGraphTagFilter AllowedAnnotationTags;                                        // 0x0024 (size: 0xC)
    float Range;                                                                      // 0x0030 (size: 0x4)
    bool bLookAtPlayer;                                                               // 0x0034 (size: 0x1)
    bool bStopMoveAtPathEnd;                                                          // 0x0035 (size: 0x1)

}; // Size: 0x38

struct FWrestlerFindTargetNearPlayerInstanceData
{
    FMassZoneGraphTargetLocation NearPlayerTargetLocation;                            // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FWrestlerFinishState : public FMassStateTreeTaskBase
{
    bool bReturnSuccessOnFinish;                                                      // 0x0022 (size: 0x1)

}; // Size: 0x28

struct FWrestlerFinishStateInstanceData
{
}; // Size: 0x1

struct FWrestlerFocusFragment : public FMassFragment
{
    TWeakObjectPtr<class AActor> FocusActor;                                          // 0x0000 (size: 0x8)
    FMassEntityHandle FocusEntity;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x58

struct FWrestlerFrustumPoints
{
}; // Size: 0xC0

struct FWrestlerGameplayEffectContainer
{
    TSoftClassPtr<UWrestlerTargetType> TargetType;                                    // 0x0000 (size: 0x28)
    TArray<TSoftClassPtr<UGameplayEffect>> TargetGameplayEffectClasses;               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWrestlerGameplayEffectContainerSpec
{
    FGameplayAbilityTargetDataHandle TargetData;                                      // 0x0000 (size: 0x28)
    TArray<FGameplayEffectSpecHandle> TargetGameplayEffectSpecs;                      // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWrestlerGameplayEffectContext : public FGameplayEffectContext
{
}; // Size: 0xA8

struct FWrestlerGenderAnimationData
{
    float ChanceToUseThisAnimations;                                                  // 0x0000 (size: 0x4)
    TSoftObjectPtr<UAnimSequence> IdleAnimation;                                      // 0x0008 (size: 0x28)
    TSoftObjectPtr<UBlendSpace> LocomotionBlendspace;                                 // 0x0030 (size: 0x28)

}; // Size: 0x58

struct FWrestlerGetAttributeValue : public FMassStateTreeTaskBase
{
    FGameplayAttribute Attribute;                                                     // 0x0028 (size: 0x38)

}; // Size: 0x60

struct FWrestlerGetAttributeValueInstanceData
{
    float AttributeValue;                                                             // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FWrestlerGrantedPointsData
{
    EWrestlerGrantedPointsType Type;                                                  // 0x0000 (size: 0x1)
    int32 GrantedPoints;                                                              // 0x0004 (size: 0x4)
    FText Description;                                                                // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FWrestlerHasBloodResonanceTypeCondition : public FStateTreeConditionCommonBase
{
    EWrestlerGrantedPointsType BloodType;                                             // 0x0020 (size: 0x1)
    bool bInvert;                                                                     // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FWrestlerHasBloodResonanceTypeInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerHasFocusSetTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerHasMassFragmentCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    FWrestlerEntityMassFragmentFilter FilterTags;                                     // 0x0028 (size: 0x30)

}; // Size: 0x58

struct FWrestlerHasMassFragmentConditionInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerHasMassTagCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    FWrestlerEntityMassTagFilter FilterTags;                                          // 0x0028 (size: 0x30)

}; // Size: 0x58

struct FWrestlerHasMassTagConditionInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerHighlightParticleData
{
    class AActor* ParticleActor;                                                      // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FWrestlerHighlightUpdateData
{
    bool bIsOccluded;                                                                 // 0x0000 (size: 0x1)
    bool bInCombat;                                                                   // 0x0001 (size: 0x1)
    bool bIsWhereIsWally;                                                             // 0x0002 (size: 0x1)
    bool bResonanceTypeChanged;                                                       // 0x0003 (size: 0x1)
    FGameplayTagContainer TypeTags;                                                   // 0x0008 (size: 0x20)
    EWrestlerGrantedPointsType BloodResonanceType;                                    // 0x0028 (size: 0x1)
    EWrestlerMassBloodResonanceState BloodResonanceState;                             // 0x0029 (size: 0x1)
    FVector Velocity;                                                                 // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FWrestlerHighlightVFXData
{
    class AWrestlerHighlightVFXActor* VFXActor;                                       // 0x0000 (size: 0x8)
    TMap<class FMassEntityHandle, class FWrestlerHighlightParticleData> EntitiesParticles; // 0x0028 (size: 0x50)

}; // Size: 0x78

struct FWrestlerHoldAbilityTargetingUpdateData
{
    float ThrowRange;                                                                 // 0x0000 (size: 0x4)
    float AimAssistRange;                                                             // 0x0004 (size: 0x4)
    float AimAssistRadius;                                                            // 0x0008 (size: 0x4)
    TWeakObjectPtr<class AActor> HeldObject;                                          // 0x000C (size: 0x8)
    float HeldObjectRadius;                                                           // 0x0014 (size: 0x4)
    float UpdatePeriod;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FWrestlerHoudiniContainerMode
{
    EWrestlerHoudiniContainerMode Value;                                              // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FWrestlerHoudiniContainerVersion
{
    bool bContainerOutdated;                                                          // 0x0000 (size: 0x1)
    uint32 GeneratorHash;                                                             // 0x0004 (size: 0x4)
    FSoftObjectPath GeneratorPath;                                                    // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FWrestlerIndicatedEntity
{
    class AWrestlerMassEntityIndicator* Indicator;                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerIndicatorData
{
    class UWrestlerEnemyIndicatorWidget* IndicatorWidget;                             // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FWrestlerIndicatorList
{
    TArray<class AWrestlerMassEntityIndicator*> Indicators;                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerIndicatorTypeData
{
    float IndicatorTypeLifespan;                                                      // 0x0000 (size: 0x4)
    FVector2D IndicatorTypeScale;                                                     // 0x0008 (size: 0x10)
    float IndicatorsOffsetFromCenter;                                                 // 0x0018 (size: 0x4)
    float ThresholdDotProduct;                                                        // 0x001C (size: 0x4)

}; // Size: 0x20

struct FWrestlerInput
{
    FVector Move;                                                                     // 0x0000 (size: 0x18)
    FVector Look;                                                                     // 0x0018 (size: 0x18)
    FVector LookRate;                                                                 // 0x0030 (size: 0x18)
    FWrestlerControlInput Control;                                                    // 0x0048 (size: 0x20)
    FWrestlerAbilityInput Ability;                                                    // 0x0068 (size: 0x20)

}; // Size: 0x88

struct FWrestlerInputMappingCategory
{
    FText Category;                                                                   // 0x0000 (size: 0x18)
    TArray<FWrestlerInputMappingEntry> Entries;                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FWrestlerInputMappingEntry
{
    class UInputAction* DependentAction;                                              // 0x0000 (size: 0x8)
    class UInputAction* Action;                                                       // 0x0008 (size: 0x8)
    TArray<FWrestlerSpecialMappingData> SpecialMappings;                              // 0x0010 (size: 0x10)
    bool bRemappableMouseKeyboard;                                                    // 0x0020 (size: 0x1)
    bool bRemappableGamepad;                                                          // 0x0021 (size: 0x1)
    bool bShowOnMouseKeyboard;                                                        // 0x0022 (size: 0x1)
    bool bShowOnGamepad;                                                              // 0x0023 (size: 0x1)
    bool bShowOnMouseKeyboardSpecial;                                                 // 0x0024 (size: 0x1)
    bool bShowOnGamepadSpecial;                                                       // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FWrestlerInputMappingPair
{
    FKey PrimaryKey;                                                                  // 0x0000 (size: 0x18)
    FKey SecondaryKey;                                                                // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FWrestlerInteractableData
{
    FText Name;                                                                       // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FWrestlerInteractionInput
{
    uint8 bInteract;                                                                  // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FWrestlerInteractionTarget
{
    class AActor* ParentActor;                                                        // 0x0000 (size: 0x8)
    class UWrestlerInteractionComponent* Interaction;                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerInterfaceGameplayTargetDataFilter : public FGameplayTargetDataFilter
{
    TSubclassOf<class UInterface> Interface;                                          // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FWrestlerInvestigateDeadBody : public FMassStateTreeTaskBase
{
    float RefreshRate;                                                                // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FWrestlerInvestigateDeadBodyInstanceData
{
    class AActor* DeadActor;                                                          // 0x0000 (size: 0x8)
    FVector DeadBodyLocation;                                                         // 0x0008 (size: 0x18)
    bool bIsInvestigating;                                                            // 0x0020 (size: 0x1)
    bool bLookForPlayer;                                                              // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FWrestlerIsGameplayTagValidCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerIsGameplayTagValidConditionInstanceData
{
    FGameplayTag Tag;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FWrestlerIsPedestrianTypeCondition : public FStateTreeConditionCommonBase
{
    EWrestlerPedestrianType PedestrianType;                                           // 0x0020 (size: 0x1)
    bool bInvert;                                                                     // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FWrestlerIsPedestrianTypeConditionInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerLampDamageLight
{
    class ULightComponent* LightComponent;                                            // 0x0000 (size: 0x8)
    float LightIntensity;                                                             // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FWrestlerLastKnownPositionFragment : public FMassFragment
{
}; // Size: 0x28

struct FWrestlerLastStimulusInfo
{
    class AActor* StimulusActor;                                                      // 0x0000 (size: 0x8)

}; // Size: 0x68

struct FWrestlerLevelSaveData
{
    FGameplayTag MapTag;                                                              // 0x0000 (size: 0x8)
    TArray<FName> ActivatedStreamingLevels;                                           // 0x0008 (size: 0x10)
    bool bRecursiveDataLayerActivation;                                               // 0x0018 (size: 0x1)
    TArray<TSoftObjectPtr<UDataLayerAsset>> ActivatedDataLayers;                      // 0x0020 (size: 0x10)
    TSet<FName> ActivatedDataLayerNames;                                              // 0x0030 (size: 0x50)

}; // Size: 0x80

struct FWrestlerLightActorComponentEmissiveParameters
{
    uint8 bOverrideEmissiveIntensity;                                                 // 0x0000 (size: 0x1)
    uint8 bOverrideEmissiveColour;                                                    // 0x0000 (size: 0x1)
    float EmissiveIntensity;                                                          // 0x0004 (size: 0x4)
    FLinearColor EmissiveColour;                                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWrestlerLightActorComponentFlickerParameters
{
    uint8 bFlickerEnabled;                                                            // 0x0000 (size: 0x1)
    uint8 bFlickerOnlyAffectsEmissive;                                                // 0x0000 (size: 0x1)
    float FlickerSpeed;                                                               // 0x0004 (size: 0x4)
    float FlickerCurveOffset;                                                         // 0x0008 (size: 0x4)
    float FlickerIntensityMultiplier;                                                 // 0x000C (size: 0x4)
    float FlickerElapsedTime;                                                         // 0x0010 (size: 0x4)
    class UCurveFloat* FlickerCurve;                                                  // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FWrestlerLightActorComponentLightParameters
{
    uint8 bOverrideCastShadows;                                                       // 0x0000 (size: 0x1)
    uint8 bOverrideCastVolumetricShadows;                                             // 0x0000 (size: 0x1)
    uint8 bOverrideIntensityUnits;                                                    // 0x0000 (size: 0x1)
    uint8 bOverrideIntensity;                                                         // 0x0000 (size: 0x1)
    uint8 bOverrideColour;                                                            // 0x0000 (size: 0x1)
    uint8 bOverrideMaxDrawDistance;                                                   // 0x0000 (size: 0x1)
    uint8 bOverrideMaxDistanceFadeRange;                                              // 0x0000 (size: 0x1)
    uint8 bCastShadows;                                                               // 0x0000 (size: 0x1)
    uint8 bCastVolumetricShadows;                                                     // 0x0001 (size: 0x1)
    float MaxDrawDistance;                                                            // 0x0004 (size: 0x4)
    float MaxDistanceFadeRange;                                                       // 0x0008 (size: 0x4)
    ELightUnits IntensityUnits;                                                       // 0x000C (size: 0x1)
    float Intensity;                                                                  // 0x0010 (size: 0x4)
    FLinearColor Colour;                                                              // 0x0014 (size: 0x10)

}; // Size: 0x24

struct FWrestlerLightComponent
{
    class ULightComponent* LightComponent;                                            // 0x0000 (size: 0x8)
    float Intensity;                                                                  // 0x0008 (size: 0x4)
    float Temperature;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWrestlerLightMesh
{
    class UStaticMeshComponent* MeshComponent;                                        // 0x0000 (size: 0x8)
    int32 EmissiveIndex;                                                              // 0x0008 (size: 0x4)
    class UMaterialInterface* EmissiveMaterial;                                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWrestlerManagedConfigAssets
{
    TArray<TSoftObjectPtr<UWrestlerConfigDataAsset>> DataConfigSoftObjects;           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMapCategoryData
{
    FText CategoryNameForUI;                                                          // 0x0000 (size: 0x18)
    int32 InitialCategoryMarkersCount;                                                // 0x0018 (size: 0x4)
    bool bCanInteractWithMarkesInCategory;                                            // 0x001C (size: 0x1)
    bool bCanCategoryVisibilityBeToggled;                                             // 0x001D (size: 0x1)
    bool bUpdateObjectRotationInMap;                                                  // 0x001E (size: 0x1)

}; // Size: 0x20

struct FWrestlerMapData
{
    FWrestlerMapCategoryData CategoryData;                                            // 0x0000 (size: 0x20)
    FWrestlerMapMarkerData CategoryMarkerData;                                        // 0x0020 (size: 0x58)

}; // Size: 0x78

struct FWrestlerMapInfo
{
    FGameplayTag Tag;                                                                 // 0x0000 (size: 0x8)
    FSoftObjectPath Map;                                                              // 0x0008 (size: 0x20)
    bool bSeamlessLoad;                                                               // 0x0028 (size: 0x1)
    bool bEnableAutomationTests;                                                      // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FWrestlerMapMarkerData
{
    class UTexture2D* IconImage;                                                      // 0x0000 (size: 0x8)
    FLinearColor ImageColor;                                                          // 0x0008 (size: 0x10)
    FText Description;                                                                // 0x0018 (size: 0x18)
    FText AltDescription;                                                             // 0x0030 (size: 0x18)
    FVector2D IconScale;                                                              // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FWrestlerMapRadialAreaData
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    FVector2D RadialAreaOffset;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWrestlerMapUIImagesData
{
    TMap<class EWrestlerUIMapMode, class UTexture2D*> MapZoneImagePerMode;            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerMasqueradeData
{
    FText MasqueradeTextLevel;                                                        // 0x0000 (size: 0x18)
    class UTexture2D* MasqueradeLevelImage;                                           // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FWrestlerMasqueradeDensityControlParameters
{
    int32 EntitiesDesired;                                                            // 0x0000 (size: 0x4)
    int32 EntitiesTolerance;                                                          // 0x0004 (size: 0x4)
    float ChangePercentage;                                                           // 0x0008 (size: 0x4)
    float MoveSpeedFraction;                                                          // 0x000C (size: 0x4)
    float StandTimeFraction;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWrestlerMasqueradeDensityParameters
{
    bool bIsEnabled;                                                                  // 0x0000 (size: 0x1)
    float NearbyDistance;                                                             // 0x0004 (size: 0x4)
    float ControlRange;                                                               // 0x0008 (size: 0x4)
    TMap<class EWrestlerMasqueradeState, class FWrestlerMasqueradeDensityControlParameters> ControlParams; // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FWrestlerMasqueradeDialogueParameters
{
    bool bDisplayDebugIndividuals;                                                    // 0x0000 (size: 0x1)
    bool bDisplayDebugGroups;                                                         // 0x0001 (size: 0x1)
    bool bDisplayDebugRequests;                                                       // 0x0002 (size: 0x1)
    bool bDisplayDebugActiveEntities;                                                 // 0x0003 (size: 0x1)
    bool bDisplayDebugTotalRequests;                                                  // 0x0004 (size: 0x1)
    float RequestFilterRange;                                                         // 0x0008 (size: 0x4)
    float IdleRange;                                                                  // 0x000C (size: 0x4)
    int32 MaxIdleIndividuals;                                                         // 0x0010 (size: 0x4)
    float IdleDelay;                                                                  // 0x0014 (size: 0x4)
    float IdleRangeGroup;                                                             // 0x0018 (size: 0x4)
    int32 MaxIdleForGroups;                                                           // 0x001C (size: 0x4)
    int32 MaxIdleInGroup;                                                             // 0x0020 (size: 0x4)
    int32 MaxIdleGroups;                                                              // 0x0024 (size: 0x4)
    TSoftObjectPtr<UHeraDialogueInfo> PromptDialogueInfoDefault;                      // 0x0028 (size: 0x28)
    FWrestlerMasqueradeDialoguePrompts Prompts;                                       // 0x0050 (size: 0x40)

}; // Size: 0x90

struct FWrestlerMasqueradeDialoguePrompts
{
    FGameplayTag SingleIdle;                                                          // 0x0000 (size: 0x8)
    FGameplayTag GroupIdle;                                                           // 0x0008 (size: 0x8)
    FGameplayTag Greetings;                                                           // 0x0010 (size: 0x8)
    FGameplayTag Chat;                                                                // 0x0018 (size: 0x8)
    FGameplayTag Passing;                                                             // 0x0020 (size: 0x8)
    FGameplayTag FedOn;                                                               // 0x0028 (size: 0x8)
    FGameplayTag Damaged;                                                             // 0x0030 (size: 0x8)
    FGameplayTag Death;                                                               // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FWrestlerMasqueradeGroupingParameters
{
    int32 UpdateRate;                                                                 // 0x0000 (size: 0x4)
    TMap<class EWrestlerPedestrianType, class FWrestlerMasqueradeDensityParameters> DensityParams; // 0x0008 (size: 0x50)
    TMap<class EWrestlerPedestrianType, class FWrestlerMasqueradeDensityParameters> SpacingParams; // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FWrestlerMasqueradePlayerActionData : public FTableRowBase
{
    FGameplayTag ActionTag;                                                           // 0x0008 (size: 0x8)
    bool bIsViolentAction;                                                            // 0x0010 (size: 0x1)
    float InstantlyAwareRadius;                                                       // 0x0014 (size: 0x4)
    float ActionNoticeability;                                                        // 0x0018 (size: 0x4)
    float ObservationDuration;                                                        // 0x001C (size: 0x4)
    float NoiseRadius;                                                                // 0x0020 (size: 0x4)
    TSet<EWrestlerPedestrianType> ExcludedPedestrianTypes;                            // 0x0028 (size: 0x50)
    FWrestlerMasqueradeScoreUpdateData MasqueradeUpdateData;                          // 0x0078 (size: 0x10)
    TMap<class EWrestlerPedestrianType, class FWrestlerMasqueradeScoreUpdateData> OverrideUpdateData; // 0x0088 (size: 0x50)
    FWrestlerPlayerActionReactionData ReactionData;                                   // 0x00D8 (size: 0x14)
    TMap<class EWrestlerPedestrianType, class FWrestlerPlayerActionReactionData> OverrideReactionData; // 0x00F0 (size: 0x50)

}; // Size: 0x140

struct FWrestlerMasqueradeProperties
{
    TSoftObjectPtr<UHeraPropertyBool> IsMassVisible;                                  // 0x0000 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> ExclusionZoneMask;                               // 0x0028 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> ExclusionZoneSpeedOverride;                    // 0x0050 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> ExclusionZoneSetPedestrians;                    // 0x0078 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> ExclusionZoneSetPolice;                         // 0x00A0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> IsMasqueradeEnabled;                            // 0x00C8 (size: 0x28)

}; // Size: 0xF0

struct FWrestlerMasqueradeQuestData
{
    class UWrestlerQuestData* MasqueradeQuestDataAsset;                               // 0x0000 (size: 0x8)
    class UHeraPropertyRule* HighMasqueradeLevelRule;                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerMasqueradeScoreData
{
    float MasqueradeScoreToEnterState;                                                // 0x0000 (size: 0x4)
    float MasqueradeScorePauseTime;                                                   // 0x0004 (size: 0x4)
    float MasqueradeScoreDecreaseSpeed;                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FWrestlerMasqueradeScoreUpdateData
{
    bool bCanAffectEngagedState;                                                      // 0x0000 (size: 0x1)
    float InitialScoreToAdd;                                                          // 0x0004 (size: 0x4)
    float ScoreOverTime;                                                              // 0x0008 (size: 0x4)
    EWrestlerMasqueradeState MinimalMasqueradeState;                                  // 0x000C (size: 0x1)

}; // Size: 0x10

struct FWrestlerMasqueradeWallaParameters
{
    bool bIsEnabled;                                                                  // 0x0000 (size: 0x1)
    bool bDisplayDebugWalla;                                                          // 0x0001 (size: 0x1)
    float UpdateTime;                                                                 // 0x0004 (size: 0x4)
    TArray<FWrestlerMasqueradeWallaQueryParameters> QueryParams;                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWrestlerMasqueradeWallaQueryParameters
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    TArray<EWrestlerPedestrianType> Types;                                            // 0x0008 (size: 0x10)
    float MinRange;                                                                   // 0x0018 (size: 0x4)
    float MaxRange;                                                                   // 0x001C (size: 0x4)
    float FearWeightViolence;                                                         // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassActorHasAnyGameplayTagCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    FGameplayTagContainer GameplayTags;                                               // 0x0028 (size: 0x20)

}; // Size: 0x48

struct FWrestlerMassActorHasAnyGameplayTagConditionInstanceData
{
}; // Size: 0x1

struct FWrestlerMassActors
{
    TArray<class AActor*> Array;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassAddProp : public FMassStateTreeTaskBase
{
    TSoftObjectPtr<UWrestlerMassSOPropDataAsset> PropDataAsset;                       // 0x0028 (size: 0x28)

}; // Size: 0x50

struct FWrestlerMassAddPropInstanceData
{
    class UWrestlerMassSOPropDataAsset* LoadedPropAsset;                              // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerMassAwareOfUnconsciousEntityTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassBloodResonanceData
{
}; // Size: 0xA8

struct FWrestlerMassBloodResonanceEventFragment : public FMassFragment
{
}; // Size: 0x38

struct FWrestlerMassBloodResonanceEventSpawnRequestFragment : public FMassFragment
{
}; // Size: 0xF0

struct FWrestlerMassBloodResonanceFragment : public FMassFragment
{
}; // Size: 0x2C

struct FWrestlerMassBloodResonanceTypeInfo
{
    FWrestlerBloodResonanceAssignment Assignment;                                     // 0x0000 (size: 0x28)
    EWrestlerGrantedPointsType Type;                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FWrestlerMassCanBecomeWitness : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassCanBecomeWitnessInstanceData
{
}; // Size: 0x1

struct FWrestlerMassCharacterMovementCopyToActorTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassClaimSmartObjectTask : public FMassClaimSmartObjectTask
{
}; // Size: 0x40

struct FWrestlerMassClearResetFleeingPathValue : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassClearResetFleeingPathValueInstanceData
{
}; // Size: 0x1

struct FWrestlerMassConversationCameraParameters
{
    bool bIsDebugging;                                                                // 0x0000 (size: 0x1)
    bool bIsShakeEnabled;                                                             // 0x0001 (size: 0x1)
    FWrestlerMassConversationCameraShakeParameters ShakePitch;                        // 0x0004 (size: 0xC)
    FWrestlerMassConversationCameraShakeParameters ShakeYaw;                          // 0x0010 (size: 0xC)
    FWrestlerMassConversationCameraShakeParameters ShakeFOV;                          // 0x001C (size: 0xC)
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x0028 (size: 0x1)
    float CollsionShapeRadius;                                                        // 0x002C (size: 0x4)
    float MinCameraLOSPercentage;                                                     // 0x0030 (size: 0x4)
    bool bUseCameraWithBlockedLOS;                                                    // 0x0034 (size: 0x1)
    bool bStickWithCurrentCamera;                                                     // 0x0035 (size: 0x1)
    bool bChooseRandomAvailableCamera;                                                // 0x0036 (size: 0x1)

}; // Size: 0x38

struct FWrestlerMassConversationCameraShakeParameters
{
    float Offset;                                                                     // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    float Amplitude;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FWrestlerMassConversationCameraTrace
{
}; // Size: 0x10

struct FWrestlerMassConversationCostumeParameters
{
    TSoftObjectPtr<UHeraPropertyBool> CostumeProperty;                                // 0x0000 (size: 0x28)
    TArray<FGameplayTag> CostumeTags;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWrestlerMassConversationInfo
{
}; // Size: 0x20

struct FWrestlerMassConversationParameters
{
    bool bIsConversationsEnabled;                                                     // 0x0000 (size: 0x1)
    bool bIsAmbienceEnabled;                                                          // 0x0001 (size: 0x1)
    bool bIsDebugging;                                                                // 0x0002 (size: 0x1)
    bool bPauseGame;                                                                  // 0x0003 (size: 0x1)
    float MaxRange;                                                                   // 0x0004 (size: 0x4)
    TSoftObjectPtr<AWrestlerDialogueRig> ConversatationDialogRig;                     // 0x0008 (size: 0x28)
    TSoftClassPtr<AWrestlerDialogueRig> ConversatationDialogRigClass;                 // 0x0030 (size: 0x28)
    TSoftObjectPtr<UHeraDialogueInfo> ConversationDialogueInfoDefault;                // 0x0058 (size: 0x28)
    TSoftObjectPtr<UHeraDialogueInfo> ConversationAmbientInfoDefault;                 // 0x0080 (size: 0x28)
    FVector2D ConversationAvoidanceArea;                                              // 0x00A8 (size: 0x10)
    float AmbienceChance;                                                             // 0x00B8 (size: 0x4)
    float AmbienceCooldownMin;                                                        // 0x00BC (size: 0x4)
    float AmbienceCooldownMax;                                                        // 0x00C0 (size: 0x4)
    FVector PromptButtonOffset;                                                       // 0x00C8 (size: 0x18)
    TSoftObjectPtr<UHeraPropertyBool> MassConversationStartProperty;                  // 0x00E0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> MassConversationFlirtProperty;                  // 0x0108 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> MassConversationFightProperty;                  // 0x0130 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> MassConversationFearProperty;                   // 0x0158 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> MassConversationBREventProperty;                // 0x0180 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> MassConversationWallyProperty;                  // 0x01A8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> MassConversationMarkedWallyNumberForNixProperty; // 0x01D0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> MassConversationMarkedWallyNumberForLouProperty; // 0x01F8 (size: 0x28)
    TMap<class TSoftObjectPtr<UHeraPropertyBool>, class TSoftObjectPtr<UWrestlerAbilityDefinition>> MassConversationHasAbilityProperties; // 0x0220 (size: 0x50)
    TArray<FWrestlerMassConversationCostumeParameters> CostumeParams;                 // 0x0270 (size: 0x10)
    TSoftClassPtr<UGameplayAbility> AbilityToTriggerAtSuccessBRConversation;          // 0x0280 (size: 0x28)
    bool bDisablePlayerInput;                                                         // 0x02A8 (size: 0x1)

}; // Size: 0x2B0

struct FWrestlerMassCoordinateSmartObjectInstanceData
{
}; // Size: 0x4

struct FWrestlerMassCoordinateSmartObjectTask : public FMassStateTreeTaskBase
{
    float MaxTimeToWait;                                                              // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassDeactivateBloodResonance : public FMassStateTreeTaskBase
{
    bool bClearBloodResonance;                                                        // 0x0022 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassDeactivateBloodResonanceInstanceData
{
}; // Size: 0x1

struct FWrestlerMassDeadBodyData
{
}; // Size: 0x60

struct FWrestlerMassDeadBodyInvestigated : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassDeadBodyInvestigatedInstanceData
{
}; // Size: 0x1

struct FWrestlerMassDeathFragment : public FMassSharedFragment
{
    bool bCanRespawnOnDeath;                                                          // 0x0000 (size: 0x1)
    class UHeraPropertyBool* DeathProperty;                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerMassDebugFallDetectParameters
{
    bool bIsEnabled;                                                                  // 0x0000 (size: 0x1)
    bool bIsVelocityFallDetectEnabled;                                                // 0x0001 (size: 0x1)
    float FallVelocityThreshold;                                                      // 0x0004 (size: 0x4)
    FColor VelocityDetectColor;                                                       // 0x0008 (size: 0x4)
    bool bIsGroundAboveDetectEnabled;                                                 // 0x000C (size: 0x1)
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x000D (size: 0x1)
    float SweepShapeRadius;                                                           // 0x0010 (size: 0x4)
    float SweepHeight;                                                                // 0x0014 (size: 0x4)
    FColor GroundDetectColor;                                                         // 0x0018 (size: 0x4)
    float CapsuleHeight;                                                              // 0x001C (size: 0x4)
    float CapsuleRadius;                                                              // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FWrestlerMassDebugLODColors
{
    TArray<FColor> Colors;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassDebugLocationParameters
{
    bool bIsVLogEnabled;                                                              // 0x0000 (size: 0x1)
    bool bIncludeSOUsers;                                                             // 0x0001 (size: 0x1)
    bool bOnlySOUsers;                                                                // 0x0002 (size: 0x1)
    float CapsuleHeight;                                                              // 0x0004 (size: 0x4)
    float CapsuleRadius;                                                              // 0x0008 (size: 0x4)
    FColor CapsuleDefaultColor;                                                       // 0x000C (size: 0x4)
    TArray<FWrestlerMassDebugLODColors> LODColors;                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerMassDebugMobilityParameters
{
    EWrestlerPedestrianType QueryType;                                                // 0x0000 (size: 0x1)
    bool bIncludeSOUsers;                                                             // 0x0001 (size: 0x1)
    float ShortTime;                                                                  // 0x0004 (size: 0x4)
    float LongTime;                                                                   // 0x0008 (size: 0x4)
    float MinDistance;                                                                // 0x000C (size: 0x4)
    bool TeleportToImmobileNext;                                                      // 0x0010 (size: 0x1)
    bool TeleportToImmobilePrevious;                                                  // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FWrestlerMassDebugTurningParameters
{
    EWrestlerPedestrianType QueryType;                                                // 0x0000 (size: 0x1)
    bool bIncludeSOUsers;                                                             // 0x0001 (size: 0x1)
    float AveRate;                                                                    // 0x0004 (size: 0x4)
    float TurningAngle;                                                               // 0x0008 (size: 0x4)
    float MinSpeed;                                                                   // 0x000C (size: 0x4)
    float VelMultiplier;                                                              // 0x0010 (size: 0x4)
    float TurnedDisplayTime;                                                          // 0x0014 (size: 0x4)
    float ControlledTurnDetectionTime;                                                // 0x0018 (size: 0x4)
    bool bShowDirectionLogging;                                                       // 0x001C (size: 0x1)
    bool bShowTurnPointLogging;                                                       // 0x001D (size: 0x1)
    bool bShowEntityOfInterest;                                                       // 0x001E (size: 0x1)
    uint32 EntityOfInterest;                                                          // 0x0020 (size: 0x4)
    bool bFollowEntityOfInterest;                                                     // 0x0024 (size: 0x1)
    bool bTeleportToLastTurnEntity;                                                   // 0x0025 (size: 0x1)
    bool TeleportToTurnedNext;                                                        // 0x0026 (size: 0x1)
    bool TeleportToTurnedPrevious;                                                    // 0x0027 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassDestroyActorFragment : public FMassFragment
{
}; // Size: 0x8

struct FWrestlerMassDialogueData
{
}; // Size: 0x38

struct FWrestlerMassDisableFragment : public FMassFragment
{
}; // Size: 0x1B8

struct FWrestlerMassDisableMovement : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassDisableMovementInstanceData
{
}; // Size: 0x1

struct FWrestlerMassEntityCloseToLocationCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    float AllowedDistance;                                                            // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassEntityCloseToPlayerCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    float DistanceToPlayer;                                                           // 0x0024 (size: 0x4)

}; // Size: 0x30

struct FWrestlerMassEntityCloseToPlayerInstanceData
{
}; // Size: 0x1

struct FWrestlerMassEntityHandle_BP
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    int32 SerialNumber;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWrestlerMassEntityPairedEntityData
{
    bool bAllowGlancing;                                                              // 0x0000 (size: 0x1)
    FWrestlerMassPairedEntityTypeParams GlanceParams;                                 // 0x0008 (size: 0x58)
    bool bAllowSideBySidePairing;                                                     // 0x0060 (size: 0x1)
    FWrestlerMassPairedEntityTypeParams SideBySideParams;                             // 0x0068 (size: 0x58)

}; // Size: 0xC0

struct FWrestlerMassEntityPersistentData
{
    bool bOverridePedestrianType;                                                     // 0x0000 (size: 0x1)
    EWrestlerPedestrianType PedestrianType;                                           // 0x0001 (size: 0x1)
    bool bOverrideGender;                                                             // 0x0002 (size: 0x1)
    EWrestlerGenderType GenderType;                                                   // 0x0003 (size: 0x1)
    FVector OffsetFromPivotToHead;                                                    // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FWrestlerMassEntityPersistentDataFragment : public FMassFragment
{
}; // Size: 0x40

struct FWrestlerMassEntitySOEventActivationInstanceData
{
}; // Size: 0x1

struct FWrestlerMassEntitySharedData
{
    class UWrestlerMassContextualAnimationData* ContextualAnimDataAsset;              // 0x0000 (size: 0x8)
    class UWrestlerModularCharacterProfiles* ModularCharacterProfiles;                // 0x0008 (size: 0x8)
    FName EnemyTypeName;                                                              // 0x0010 (size: 0x8)
    float UnconsciousAfterFeedTime;                                                   // 0x0018 (size: 0x4)
    FGameplayTag FeedXPAwardTag;                                                      // 0x001C (size: 0x8)

}; // Size: 0x28

struct FWrestlerMassEntitySharedDataFragment : public FMassSharedFragment
{
    FWrestlerMassEntitySharedData SharedData;                                         // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FWrestlerMassEntitySmartObjectEventActivation : public FStateTreeConditionCommonBase
{
    float ConeAngle;                                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassFleeingVolumeFragment : public FMassFragment
{
}; // Size: 0x8

struct FWrestlerMassGameplayAbilityInProgressTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassGetActiveGameplayAbilityTask : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetActiveGameplayAbilityTaskInstanceData
{
    FGameplayTagContainer ActiveAbilityTags;                                          // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FWrestlerMassGetBloodResonanceActivationPrompt : public FMassStateTreeTaskBase
{
    FGameplayTag DefaultIdlePrompt;                                                   // 0x0024 (size: 0x8)

}; // Size: 0x30

struct FWrestlerMassGetBloodResonanceActivationPromptInstanceData
{
    FGameplayTag OutActivationPrompt;                                                 // 0x0000 (size: 0x8)
    FGameplayTag OutActiveIdlePrompt;                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerMassGetClaimedSmartObjectLocationInstanceData
{
    FSmartObjectClaimHandle ClaimedSlot;                                              // 0x0000 (size: 0x20)
    FVector SlotLocation;                                                             // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FWrestlerMassGetClaimedSmartObjectLocationTask : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetCrimeEntity : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetCrimeEntityInstanceData
{
    FMassEntityHandle CrimeEntity;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FWrestlerMassGetDesiredMoveLocationFromSO : public FWrestlerZGFindWanderTarget
{
    float ZoneGraphSearchRange;                                                       // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FWrestlerMassGetDesiredMoveLocationFromSOInstanceData : public FWrestlerZGFindWanderTargetInstanceData
{
    FVector OutLocation;                                                              // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FWrestlerMassGetEntityLocation : public FMassStateTreeTaskBase
{
    float RefreshRate;                                                                // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FWrestlerMassGetEntityLocationInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)
    FVector OutLocation;                                                              // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FWrestlerMassGetGameplayAbilityTags : public FMassStateTreeTaskBase
{
    float RefreshRate;                                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassGetGameplayAbilityTagsInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)
    FGameplayTagContainer OutTags;                                                    // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FWrestlerMassGetIntoPositionAnimationData
{
    TArray<FWrestlerMassGetIntoPositionParams> GetIntoPositionAnims;                  // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FWrestlerMassGetIntoPositionAnimationDataFragment : public FMassSharedFragment
{
    FWrestlerMassGetIntoPositionAnimationData AnimationData;                          // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FWrestlerMassGetIntoPositionAnimationParamsFragment : public FMassFragment
{
}; // Size: 0x40

struct FWrestlerMassGetIntoPositionParams
{
    class UAnimMontage* Montage;                                                      // 0x0000 (size: 0x8)
    FVector2D TargetOffsetFromAnimStart;                                              // 0x0008 (size: 0x10)
    int32 DegreesTurn;                                                                // 0x0018 (size: 0x4)
    FName SequenceName;                                                               // 0x001C (size: 0x8)

}; // Size: 0x28

struct FWrestlerMassGetLastKnownPosition : public FMassStateTreeTaskBase
{
    float RefreshRate;                                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassGetLastKnownPositionInstanceData
{
    FVector OutLastKnownPosition;                                                     // 0x0000 (size: 0x18)
    FVector OutInstigatorPosition;                                                    // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FWrestlerMassGetNoticedEnemyActor : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetNoticedEnemyActorInstanceData
{
    class AActor* EnemyActor;                                                         // 0x0000 (size: 0x8)
    FVector EnemyLocation;                                                            // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FWrestlerMassGetNoticedScaredEntity : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetNoticedScaredEntityInstanceData
{
    FMassEntityHandle ScaredEntity;                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FWrestlerMassGetObservedPlayerActionData : public FMassStateTreeTaskBase
{
    float UpdateRate;                                                                 // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FWrestlerMassGetObservedPlayerActionDataInstanceData
{
    bool bIsViolentAction;                                                            // 0x0000 (size: 0x1)
    bool bShouldBecomeWitness;                                                        // 0x0001 (size: 0x1)
    bool bShouldReact;                                                                // 0x0002 (size: 0x1)
    FName ReactionAnimName;                                                           // 0x0004 (size: 0x8)
    FGameplayTag ReactionBarkTag;                                                     // 0x000C (size: 0x8)
    float ObservedMasqueradeScore;                                                    // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FWrestlerMassGetObservedUnconsciousEntity : public FMassStateTreeTaskBase
{
    float UpdateRate;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassGetObservedUnconsciousEntityInstanceData
{
    FMassEntityHandle UnconsciousEntity;                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FWrestlerMassGetPlayerAwarenessData : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetPlayerAwarenessDataInstanceData
{
    bool bCanSeePlayer;                                                               // 0x0000 (size: 0x1)
    bool bIsFullyAwareOfPlayer;                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FWrestlerMassGetPlayerPositionInstanceData
{
    FVector OutPlayerPosition;                                                        // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FWrestlerMassGetPlayerPositionTask : public FMassStateTreeTaskBase
{
    float RefreshRate;                                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassGetPoliceNoticedCrime : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetPoliceNoticedCrimeInstanceData
{
    FMassEntityHandle PoliceEntity;                                                   // 0x0000 (size: 0x8)
    FVector PoliceLocation;                                                           // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FWrestlerMassGetSmartObjectData : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassGetSmartObjectDataInstanceData
{
    bool bTeleportToSmartObject;                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FWrestlerMassHasActiveBloodResonance : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassHasActiveBloodResonanceBehaviour : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassHasActiveBloodResonanceBehaviourInstanceData
{
}; // Size: 0x1

struct FWrestlerMassHasActiveBloodResonanceInstanceData
{
}; // Size: 0x1

struct FWrestlerMassHasActorRepresentationTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassIgnoreActorCollisionWithPawnsTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassIgnoreDeadBodiesTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassIgnoreNoisesTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassIgnorePlayerActionsTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassInformAboutCrimeNoticed : public FMassStateTreeTaskBase
{
}; // Size: 0x20

struct FWrestlerMassInformAboutCrimeNoticedInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassIsPairedSOEntityReadyCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassIsPairedSOEntityReadyConditionInstanceData
{
}; // Size: 0x1

struct FWrestlerMassMakeAlerted : public FMassStateTreeTaskBase
{
}; // Size: 0x20

struct FWrestlerMassMakeAlertedInstanceData
{
}; // Size: 0x1

struct FWrestlerMassMakeNoise : public FMassStateTreeTaskBase
{
    float NoiseRadius;                                                                // 0x0024 (size: 0x4)
    EWrestlerMassHearInvestigationType NoiseInvestigationType;                        // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FWrestlerMassMakeNoiseInstanceData
{
    FStateTreeStructRef NoiseLocation;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassMakeWitness : public FMassStateTreeTaskBase
{
    FGameplayTagContainer NoClearWithTags;                                            // 0x0028 (size: 0x20)

}; // Size: 0x48

struct FWrestlerMassMakeWitnessInstanceData
{
}; // Size: 0x1

struct FWrestlerMassMapBoundariesFragment : public FMassFragment
{
}; // Size: 0xA0

struct FWrestlerMassMeshSlotEntry : public FWrestlerMeshSlotData
{
}; // Size: 0x40

struct FWrestlerMassMeshSlotList
{
    TArray<class USkeletalMesh*> MeshesData;                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassModCharProfileGroup
{
    class UWrestlerModularCharacterProfiles* Profiles;                                // 0x0000 (size: 0x8)
    class UWrestlerMassModularCharacterGroup* Group;                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerMassModularCharacterArchetype
{
    EWrestlerGenderType Gender;                                                       // 0x0000 (size: 0x1)
    EWrestlerPedestrianType PedestrianType;                                           // 0x0001 (size: 0x1)
    uint8 Distribution;                                                               // 0x0002 (size: 0x1)
    FWrestlerMassModularCharacterData CharacterData;                                  // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FWrestlerMassModularCharacterArchetypeGroup
{
    TArray<FWrestlerMassModularCharacterArchetype> PedestrianArchetypes;              // 0x0000 (size: 0x10)
    uint8 Distribution;                                                               // 0x0010 (size: 0x1)
    FString GroupName;                                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FWrestlerMassModularCharacterData
{
    TMap<class EWrestlerMeshSlot, class FWrestlerMassModularCharacterSlotData> MeshesByBodyType; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerMassModularCharacterEntry
{
    FWrestlerMassMeshSlotEntry MeshData;                                              // 0x0000 (size: 0x40)
    uint8 Distribution;                                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FWrestlerMassModularCharacterProfileData
{
    class UWrestlerModularCharacterProfile* SavedProfile;                             // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FWrestlerMassModularCharacterSlotData
{
    TArray<FWrestlerMassModularCompatibleCharacterEntry> MeshEntries;                 // 0x0000 (size: 0x10)
    bool bOptionalSlot;                                                               // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FWrestlerMassModularCompatibleCharacterEntry : public FWrestlerMassModularCharacterEntry
{
    TMap<class EWrestlerMeshSlot, class FWrestlerMassMeshSlotList> Incompatabilities; // 0x0048 (size: 0x50)

}; // Size: 0x98

struct FWrestlerMassMoveTo : public FMassStateTreeTaskBase
{
    float AcceptableDistance;                                                         // 0x003C (size: 0x4)
    bool bAllowPartialPath;                                                           // 0x0040 (size: 0x1)
    EWrestlerMoveSuccessCondition MoveSuccessCondition;                               // 0x0041 (size: 0x1)
    EWrestlerMassMoveUpdateType PathUpdateType;                                       // 0x0042 (size: 0x1)
    EWrestlerNavigationType NavigationType;                                           // 0x0043 (size: 0x1)
    float ZoneGraphSearchRange;                                                       // 0x0044 (size: 0x4)
    float UpdateRate;                                                                 // 0x0048 (size: 0x4)
    float MoveDistanceToRefreshPath;                                                  // 0x004C (size: 0x4)
    TArray<FWrestlerMassNavMeshProjectionBounds> ProjectPointToNavMeshBoundsData;     // 0x0050 (size: 0x10)
    TSubclassOf<class UNavigationQueryFilter> NavMeshQueryFilterClass;                // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FWrestlerMassMoveToClosestZoneGraph : public FWrestlerMassMoveTo
{
}; // Size: 0x68

struct FWrestlerMassMoveToInstanceData
{
    FMassMovementStyleRef MovementStyle;                                              // 0x0000 (size: 0x18)
    float SpeedScale;                                                                 // 0x0018 (size: 0x4)
    bool bCheckRemainingPathDistance;                                                 // 0x001C (size: 0x1)
    bool bFailIfTimeOut;                                                              // 0x001D (size: 0x1)
    float TimeOutAfter;                                                               // 0x0020 (size: 0x4)

}; // Size: 0xB8

struct FWrestlerMassMovementSpeedParameters : public FMassSharedFragment
{
    float MaxSideSpeed;                                                               // 0x0000 (size: 0x4)
    float MaxBackwardSpeed;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWrestlerMassNavMeshProjectionBounds
{
    FVector BoxOffset;                                                                // 0x0000 (size: 0x18)
    FVector BoxExtent;                                                                // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FWrestlerMassPairedEntitiesFragment : public FMassFragment
{
}; // Size: 0x18

struct FWrestlerMassPairedEntitiesParamsFragment : public FMassSharedFragment
{
}; // Size: 0xC0

struct FWrestlerMassPairedEntityTypeParams
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    TMap<class EWrestlerPedestrianType, class FWrestlerPercentChance> PerEntityPercentChance; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FWrestlerMassPairedSmartObjectSpawnRequestFragment : public FMassFragment
{
}; // Size: 0xB0

struct FWrestlerMassPlayContextualAnim : public FMassStateTreeTaskBase
{
    EWrestlerMassContextualAnimType ContextualAnimType;                               // 0x0030 (size: 0x4)
    bool bStopMovement;                                                               // 0x0034 (size: 0x1)
    float MinPlayAnimationDelay;                                                      // 0x0038 (size: 0x4)
    float MaxPlayAnimationDelay;                                                      // 0x003C (size: 0x4)
    bool bForceAnimationDuration;                                                     // 0x0040 (size: 0x1)
    float ForcedAnimationDuration;                                                    // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FWrestlerMassPlayContextualAnimInstanceData
{
    FName ContextualAnimName;                                                         // 0x0000 (size: 0x8)
    FGameplayTag DialoguePrompt;                                                      // 0x0008 (size: 0x8)
    bool bJumpToLoop;                                                                 // 0x0010 (size: 0x1)
    class UAnimMontage* AnimMontage;                                                  // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FWrestlerMassPlayerActionObserverFragment : public FMassFragment
{
}; // Size: 0x24

struct FWrestlerMassPlayerFragment : public FMassFragment
{
}; // Size: 0x1

struct FWrestlerMassQueuedTrace
{
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FWrestlerMassQueuedTraceContainer
{
}; // Size: 0x10

struct FWrestlerMassRemoveSwapFragment : public FMassStateTreeTaskBase
{
}; // Size: 0x20

struct FWrestlerMassRemoveSwapFragmentInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassReservedSmartObjectFragment : public FMassFragment
{
}; // Size: 0x80

struct FWrestlerMassRunEQS : public FMassStateTreeTaskBase
{
    class UEnvQuery* Query;                                                           // 0x0028 (size: 0x8)
    bool bUpdateLastKnowPositionSightData;                                            // 0x0030 (size: 0x1)
    float RefreshRate;                                                                // 0x0034 (size: 0x4)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FWrestlerMassRunEQSInstanceData
{
    bool bOutEQSFinished;                                                             // 0x0000 (size: 0x1)
    FVector OutLocation;                                                              // 0x0008 (size: 0x18)
    class AActor* OutActor;                                                           // 0x0020 (size: 0x8)

}; // Size: 0x40

struct FWrestlerMassRunSubTreeTaskDebugStrings
{
}; // Size: 0x20

struct FWrestlerMassRunSubTreeTaskInstanceData
{
    FStateTreeInstanceData PerEntityInstanceData;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassScareEntities : public FMassStateTreeTaskBase
{
    FWrestlerEntityMassTagFilter FilterTags;                                          // 0x0028 (size: 0x30)
    FWrestlerEntityMassFragmentFilter FilterFragments;                                // 0x0058 (size: 0x30)
    float ScareRadius;                                                                // 0x0088 (size: 0x4)

}; // Size: 0x90

struct FWrestlerMassScareEntitiesInstanceData
{
    FStateTreeStructRef ScareLocation;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassScaredFragment : public FMassFragment
{
}; // Size: 0x8

struct FWrestlerMassSetLastKnownPosition : public FMassStateTreeTaskBase
{
    bool bPlayerAsInstigator;                                                         // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassSetLastKnownPositionInstanceData
{
    FVector TargetLocation;                                                           // 0x0000 (size: 0x18)
    FStateTreeStructRef InstigatorEntity;                                             // 0x0018 (size: 0x10)
    class AActor* InstigatorActor;                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWrestlerMassShouldInstantlyMoveToSmartObject : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassShouldInstantlyMoveToSmartObjectInstanceData
{
}; // Size: 0x1

struct FWrestlerMassShouldTransitionFromSO : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassShouldTransitionFromSOInstanceData
{
}; // Size: 0x1

struct FWrestlerMassSignalEntity : public FMassStateTreeTaskBase
{
    float SignalRate;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassSignalEntityInstanceData
{
}; // Size: 0x4

struct FWrestlerMassSmartObjectPropsFragment : public FObjectWrapperFragment
{
}; // Size: 0x38

struct FWrestlerMassSmartObjectQueueFragment : public FMassFragment
{
}; // Size: 0x90

struct FWrestlerMassSpawnerTableRow : public FTableRowBase
{
    EWrestlerPlayerMissionType Type;                                                  // 0x0008 (size: 0x1)
    int32 Count;                                                                      // 0x000C (size: 0x4)
    TArray<FMassSpawnedEntityType> EntityTypes;                                       // 0x0010 (size: 0x10)
    TArray<FWrestlerZGSpawnPointsGeneratorData> SpawnGeneratorsData;                  // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWrestlerMassStand : public FMassZoneGraphStandTask
{
    float StoppingChance;                                                             // 0x0030 (size: 0x4)
    FVector2D RandomTimeDeviation;                                                    // 0x0038 (size: 0x10)

}; // Size: 0x50

struct FWrestlerMassStandInstanceData : public FMassZoneGraphStandTaskInstanceData
{
    float RandomDeviation;                                                            // 0x0008 (size: 0x4)
    float TimeFactor;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWrestlerMassStateTreeTask_RunSubTree : public FMassStateTreeTaskBase
{
    FStateTreeReference SubTree;                                                      // 0x0020 (size: 0x18)

}; // Size: 0x48

struct FWrestlerMassSwapAIFragment : public FMassFragment
{
}; // Size: 0x70

struct FWrestlerMassTransformsAndGenderSpawnData
{
}; // Size: 0x20

struct FWrestlerMassTurnOffVolumeFragment : public FMassFragment
{
}; // Size: 0x8

struct FWrestlerMassUseAIActor : public FMassStateTreeTaskBase
{
    bool bChangeTeam;                                                                 // 0x0022 (size: 0x1)
    EWrestlerGameTeam NewTeam;                                                        // 0x0023 (size: 0x1)
    bool bUsePlayerAsInitialTarget;                                                   // 0x0024 (size: 0x1)
    bool bSwapBackOnExit;                                                             // 0x0025 (size: 0x1)
    FWrestlerEntityMassTagFilter FilterTags;                                          // 0x0028 (size: 0x30)
    FWrestlerEntityMassFragmentFilter FilterFragments;                                // 0x0058 (size: 0x30)

}; // Size: 0x88

struct FWrestlerMassUseAIActorInstanceData
{
    class AActor* TargetActor;                                                        // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FWrestlerMassUseGameplayAbilityFragment : public FMassFragment
{
}; // Size: 0x360

struct FWrestlerMassUseGameplayAbilityInstanceData
{
    FGameplayEventData AbilityData;                                                   // 0x0000 (size: 0xB0)

}; // Size: 0xB8

struct FWrestlerMassUseGameplayAbilityTask : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassUseGameplayAbilityTaskTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerMassUseSmartObjectTask : public FMassUseSmartObjectTask
{
    float TimeToDetectSmartObjectIterruption;                                         // 0x0044 (size: 0x4)
    FName InterruptReactionAnimName;                                                  // 0x0048 (size: 0x8)
    FGameplayTag InterruptReactionBarkTag;                                            // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FWrestlerMassUseSmartObjectTaskInstanceData : public FMassUseSmartObjectTaskInstanceData
{
    class UWrestlerMassUseSOBehaviorDefinition* UsingBehaviourDefinition;             // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWrestlerMassVisibilityFragment : public FMassFragment
{
    float TimeToConsiderNotVisible;                                                   // 0x000C (size: 0x4)
    float CloseDistance;                                                              // 0x0010 (size: 0x4)
    float FarDistance;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FWrestlerMassWait : public FMassStateTreeTaskBase
{
    bool bInfiniteWait;                                                               // 0x0020 (size: 0x1)
    float Duration;                                                                   // 0x0024 (size: 0x4)
    FVector2D RandomTimeDeviation;                                                    // 0x0028 (size: 0x10)

}; // Size: 0x40

struct FWrestlerMassWaitInstanceData
{
}; // Size: 0x4

struct FWrestlerMassWakeUpUnconsciousEntity : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerMassWakeUpUnconsciousEntityInstanceData
{
    FMassEntityHandle UnconsciousEntity;                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FWrestlerMassWallaData
{
    TArray<FWrestlerMassWallaQueryData> QueryData;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMassWallaQueryData
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    int32 Count;                                                                      // 0x0004 (size: 0x4)
    FVector AverageLocation;                                                          // 0x0008 (size: 0x18)
    float FearFactor;                                                                 // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FWrestlerMassZoneGraphMovePreciseTask : public FMassStateTreeTaskBase
{
}; // Size: 0x38

struct FWrestlerMassZoneGraphMovePreciseTaskInstanceData
{
    FSmartObjectClaimHandle ClaimedSlot;                                              // 0x0000 (size: 0x20)
    bool bTeleportToSlot;                                                             // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerMassZoneGraphNavigationAvoidanceParameters
{
    bool bUseMoveTargetOffsetting;                                                    // 0x0000 (size: 0x1)
    float MoveTargetOffsetFactor;                                                     // 0x0004 (size: 0x4)
    float MoveTargetOffsetMax;                                                        // 0x0008 (size: 0x4)
    float MoveTargetOffsetInLerp;                                                     // 0x000C (size: 0x4)
    float MoveTargetOffsetOutLerp;                                                    // 0x0010 (size: 0x4)
    bool bEnableAvoidanceForce;                                                       // 0x0014 (size: 0x1)
    bool bEnableSeparationForce;                                                      // 0x0015 (size: 0x1)

}; // Size: 0x18

struct FWrestlerMassZoneGraphNavigationParameters : public FMassSharedFragment
{
    TArray<FWrestlerMassZoneGraphNavigationTagChance> LaneChances;                    // 0x0000 (size: 0x10)
    FWrestlerMassZoneGraphNavigationAvoidanceParameters AvoidanceParams;              // 0x0010 (size: 0x18)
    bool bOverrideEndOfPathOffset;                                                    // 0x0028 (size: 0x1)
    float OverriddenEndOfPathOffset;                                                  // 0x002C (size: 0x4)

}; // Size: 0x30

struct FWrestlerMassZoneGraphNavigationTagChance
{
    FZoneGraphTagMask Tag;                                                            // 0x0000 (size: 0x4)
    float AllowedChance;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWrestlerMeshSlotData
{
    EWrestlerMeshSlot Type;                                                           // 0x0000 (size: 0x1)
    bool bRandomizeMesh;                                                              // 0x0001 (size: 0x1)
    bool bRandomizeMaterial;                                                          // 0x0002 (size: 0x1)
    class USkeletalMesh* SKMesh;                                                      // 0x0008 (size: 0x8)
    TArray<class UMaterialInterface*> ChosenMaterials;                                // 0x0010 (size: 0x10)
    TArray<FWrestlerMeshSlotMaterialSet> MaterialOptions;                             // 0x0020 (size: 0x10)
    class UAkSwitchValue* AudioSwitch;                                                // 0x0030 (size: 0x8)

}; // Size: 0x40

struct FWrestlerMeshSlotMaterialSet
{
    TArray<class UMaterialInterface*> ChosenMaterials;                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerMetadataData
{
    FString SaveSlotName;                                                             // 0x0000 (size: 0x10)
    FDateTime DateTimeStamp;                                                          // 0x0010 (size: 0x8)
    EWrestlerSaveGameVersion Version;                                                 // 0x0018 (size: 0x1)
    FText SaveGameTitle;                                                              // 0x0020 (size: 0x18)
    FText SaveGameDescription;                                                        // 0x0038 (size: 0x18)
    EPlayerClan PlayerClan;                                                           // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FWrestlerModifyMassTags : public FMassStateTreeTaskBase
{
    TArray<FInstancedStruct> TagsToAdd;                                               // 0x0020 (size: 0x10)
    TArray<FInstancedStruct> TagsToRemove;                                            // 0x0030 (size: 0x10)
    bool bRevertOnExit;                                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FWrestlerModifyMassTagsInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FWrestlerModifyTagsInEntity : public FMassStateTreeTaskBase
{
    TArray<EWrestlerMassGameplayTags> TagsToAdd;                                      // 0x0028 (size: 0x10)
    TArray<EWrestlerMassGameplayTags> TagsToRemove;                                   // 0x0038 (size: 0x10)
    bool bSignalWhenTagsChanged;                                                      // 0x0048 (size: 0x1)
    bool bRevertOnExit;                                                               // 0x0049 (size: 0x1)

}; // Size: 0x50

struct FWrestlerModifyTagsInEntityInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerModularCharacterRandomTypeContstraints
{
    bool bOverrideGenerateOnlyGender;                                                 // 0x0000 (size: 0x1)
    EWrestlerGenderType GenerateOnlyGender;                                           // 0x0001 (size: 0x1)
    bool bOverrideGenerateOnlyPedType;                                                // 0x0002 (size: 0x1)
    EWrestlerPedestrianType GenerateOnlyPedestrianType;                               // 0x0003 (size: 0x1)
    bool bOverrideGenerateOnlyDescriptor;                                             // 0x0004 (size: 0x1)
    FString GenerateOnlyDescriptor;                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWrestlerMomentumAbilityChargeParameters
{
    TEnumAsByte<ECollisionChannel> CollisionChannelWorldOnly;                         // 0x0000 (size: 0x1)
    float ChargeMinTime;                                                              // 0x0004 (size: 0x4)
    float ChargeMaxTime;                                                              // 0x0008 (size: 0x4)
    float MinDistance;                                                                // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    float TargetRadius;                                                               // 0x0014 (size: 0x4)
    float MaxDrop;                                                                    // 0x0018 (size: 0x4)
    float MaxStoppingDrop;                                                            // 0x001C (size: 0x4)
    float TraversalTestSpacing;                                                       // 0x0020 (size: 0x4)
    float TimeSlowPercent;                                                            // 0x0024 (size: 0x4)
    float DamageRadius;                                                               // 0x0028 (size: 0x4)
    float PlayerSlowPercent;                                                          // 0x002C (size: 0x4)
    class UAnimMontage* MontageToPlay;                                                // 0x0030 (size: 0x8)
    class UWrestlerControlCue* ControlReleasedCue;                                    // 0x0038 (size: 0x8)
    bool bDrawDebug;                                                                  // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FWrestlerMomentumAbilityMoveParameters
{
    float SpeedAtMinCharge;                                                           // 0x0000 (size: 0x4)
    float SpeedAtMaxCharge;                                                           // 0x0004 (size: 0x4)
    float DamageAtMinCharge;                                                          // 0x0008 (size: 0x4)
    float DamageAtMaxCharge;                                                          // 0x000C (size: 0x4)
    float DamageRadius;                                                               // 0x0010 (size: 0x4)
    float DamageDistance;                                                             // 0x0014 (size: 0x4)
    class UCurveFloat* ChargeCurve;                                                   // 0x0018 (size: 0x8)
    float ChargeProportion;                                                           // 0x0020 (size: 0x4)
    FVector destination;                                                              // 0x0028 (size: 0x18)
    class AActor* PrimaryTarget;                                                      // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FWrestlerMontageFragment : public FMassFragment
{
}; // Size: 0x170

struct FWrestlerMoveSpeedOverrideFragment : public FMassFragment
{
}; // Size: 0x18

struct FWrestlerMoveToEntity : public FWrestlerMoveToLocation
{
}; // Size: 0x70

struct FWrestlerMoveToEntityInstanceData : public FWrestlerMoveToLocationInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x00D0 (size: 0x10)

}; // Size: 0xE0

struct FWrestlerMoveToLocation : public FWrestlerMassMoveTo
{
    float MinimalDistance;                                                            // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FWrestlerMoveToLocationInstanceData : public FWrestlerMassMoveToInstanceData
{
    FVector TargetLocation;                                                           // 0x00B8 (size: 0x18)

}; // Size: 0xD0

struct FWrestlerMoveToPlayer : public FWrestlerMoveToLocation
{
}; // Size: 0x70

struct FWrestlerMovementSetInfo
{
    float WalkSpeed;                                                                  // 0x0000 (size: 0x4)
    float Acceleration;                                                               // 0x0004 (size: 0x4)
    float SprintDistanceThreshold;                                                    // 0x0008 (size: 0x4)
    bool bStrafing;                                                                   // 0x000C (size: 0x1)
    float RotationInterpolationSpeed;                                                 // 0x0010 (size: 0x4)
    bool bTurnSetEnabled;                                                             // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FWrestlerMusicSting
{
    class UAkAudioEvent* TriggerEvent;                                                // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FWrestlerMusicTagEventSectionTemplate : public FMovieSceneEvalTemplate
{
    class UWrestlerMusicTagMovieSceneSection* Section;                                // 0x0020 (size: 0x8)

}; // Size: 0x30

struct FWrestlerMusicTagMovieSceneTrackImplementation : public FMovieSceneTrackImplementation
{
}; // Size: 0x10

struct FWrestlerNavigableWidgetData
{
    EWrestlerNavigableWidgetMode NavigationMode;                                      // 0x0000 (size: 0x1)
    float MaxSizeForBoundaries;                                                       // 0x0004 (size: 0x4)
    bool bMoveBGKWithKeys;                                                            // 0x0008 (size: 0x1)
    bool bMoveBKGWithInputWhenThresholdReached;                                       // 0x0009 (size: 0x1)
    bool bCenterCursorIfNoInput;                                                      // 0x000A (size: 0x1)
    float MovementDeadZone;                                                           // 0x000C (size: 0x4)
    FVector2D BackgroundBoundariesThreshold;                                          // 0x0010 (size: 0x10)
    FVector2D FloatingCursorBoundariesThreshold;                                      // 0x0020 (size: 0x10)
    float RadialBoundaryThreshold;                                                    // 0x0030 (size: 0x4)
    FVector2D MouseBoundariesThreshold;                                               // 0x0038 (size: 0x10)
    float TranslationSpeedRate;                                                       // 0x0048 (size: 0x4)
    FRuntimeFloatCurve HoveringSpeedCurveData;                                        // 0x0050 (size: 0x88)
    float RecenterCursorIfNoInputSpeed;                                               // 0x00D8 (size: 0x4)
    float ZoomRate;                                                                   // 0x00DC (size: 0x4)
    float TranslationSpeed;                                                           // 0x00E0 (size: 0x4)
    float ResetSpeed;                                                                 // 0x00E4 (size: 0x4)
    float ZoomDeadZone;                                                               // 0x00E8 (size: 0x4)
    FRuntimeFloatCurve ZoomCurveData;                                                 // 0x00F0 (size: 0x88)
    float MaxZoomInputGamepad;                                                        // 0x0178 (size: 0x4)
    bool bUseCanvasLocation;                                                          // 0x017C (size: 0x1)
    float OuterSnapThresholdRadius;                                                   // 0x0180 (size: 0x4)
    float InnerSnapThresholdRadius;                                                   // 0x0184 (size: 0x4)
    float PreSnapHysteresis;                                                          // 0x0188 (size: 0x4)
    bool bSnapBKGIndependentlyWhenInFloatingMode;                                     // 0x018C (size: 0x1)
    float SnapSpeed;                                                                  // 0x0190 (size: 0x4)
    float BKGSnapSpeed;                                                               // 0x0194 (size: 0x4)

}; // Size: 0x198

struct FWrestlerNoiseHearingFragment : public FMassFragment
{
}; // Size: 0x20

struct FWrestlerNoiseInvestigationTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerNoiseResponse : public FMassStateTreeTaskBase
{
    float MoveTowardsNoiseDistance;                                                   // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerNoiseResponseInstanceData
{
    FVector MoveDesiredLocation;                                                      // 0x0000 (size: 0x18)
    FVector NoiseLocation;                                                            // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FWrestlerNotificationData
{
    FText BigTitle;                                                                   // 0x0000 (size: 0x18)
    FText SmallTitle;                                                                 // 0x0018 (size: 0x18)
    float Timer;                                                                      // 0x0030 (size: 0x4)
    ENotificationType NotificationType;                                               // 0x0034 (size: 0x1)
    class UTexture2D* SideNotificationIcon;                                           // 0x0038 (size: 0x8)
    EHeraDialogueReactionClass ReactionType;                                          // 0x0040 (size: 0x1)
    bool bHasShortcutTab;                                                             // 0x0041 (size: 0x1)
    bool bShouldDismissOnShortcut;                                                    // 0x0042 (size: 0x1)
    bool bShowXPFill;                                                                 // 0x0043 (size: 0x1)
    EWrestlerRPGMenuTabID AssociatedRPGMenuTab;                                       // 0x0044 (size: 0x1)
    FString CodexItemID;                                                              // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FWrestlerObjectTagData
{
    FString Tag;                                                                      // 0x0000 (size: 0x10)
    TArray<TSoftObjectPtr<UObject>> Objects;                                          // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerObjectTagSaveData
{
    TSet<FWrestlerObjectTagData> Data;                                                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerOpenQuestData
{
    FGameplayTag QuestTag;                                                            // 0x0000 (size: 0x8)
    class UWrestlerQuestData* QuestData;                                              // 0x0008 (size: 0x8)
    TArray<FWrestlerQuestObjective> OpenObjectives;                                   // 0x0010 (size: 0x10)
    FWrestlerTagDelegates TagDelegates;                                               // 0x0020 (size: 0x20)
    FWrestlerEnemiesQuestData EnemiesQuestData;                                       // 0x0040 (size: 0x50)
    int32 CurrentObjectiveIndex;                                                      // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FWrestlerOutfitData
{
    TSoftObjectPtr<UTexture2D> CostumeTextureSmall;                                   // 0x0000 (size: 0x28)
    TSoftObjectPtr<UTexture2D> CostumeTexture;                                        // 0x0028 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> CostumeMesh_FP;                                     // 0x0050 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> CostumeMesh_TP;                                     // 0x0078 (size: 0x28)

}; // Size: 0xA0

struct FWrestlerPassWitnessData : public FMassStateTreeTaskBase
{
}; // Size: 0x28

struct FWrestlerPassWitnessDataInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerPawnParms
{
    FWrestlerPlayerStateParms StateParams;                                            // 0x0000 (size: 0x14)
    FWrestlerPlayerMovementParams MovementParams;                                     // 0x0014 (size: 0x1C)

}; // Size: 0x30

struct FWrestlerPedestrianInteractionList
{
    TArray<FWrestlerSOInteractionEntry> Entries;                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerPedestrianInteractionSOEntry
{
    TMap<class EWrestlerPedestrianType, class FWrestlerPedestrianInteractionList> SecondPedType; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerPercentChance
{
    float PercentChance;                                                              // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FWrestlerPerformanceCameraInfo
{
    EWrestlerPerformanceCameraType Type;                                              // 0x0000 (size: 0x1)
    FGameplayTag MapTag;                                                              // 0x0004 (size: 0x8)
    FName Name;                                                                       // 0x000C (size: 0x8)
    FSoftObjectPath AssetPath;                                                        // 0x0018 (size: 0x20)
    FVector Position;                                                                 // 0x0038 (size: 0x18)
    FRotator Rotation;                                                                // 0x0050 (size: 0x18)
    FVector Scale;                                                                    // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FWrestlerPlayMontage
{
    class UAnimMontage* MontageToPlay;                                                // 0x0000 (size: 0x8)
    float Rate;                                                                       // 0x0008 (size: 0x4)
    FName StartSection;                                                               // 0x000C (size: 0x8)
    bool bStopWhenAbilityEnds;                                                        // 0x0014 (size: 0x1)
    float AnimRootMotionTranslationScale;                                             // 0x0018 (size: 0x4)
    float StartTimeSeconds;                                                           // 0x001C (size: 0x4)

}; // Size: 0x20

struct FWrestlerPlayerActionReactionData
{
    float ReactPercentageChanceToPlayerActions;                                       // 0x0000 (size: 0x4)
    FName ReactionAnimName;                                                           // 0x0004 (size: 0x8)
    FGameplayTag ReactionBarkTag;                                                     // 0x000C (size: 0x8)

}; // Size: 0x14

struct FWrestlerPlayerControlledGameplayTargetDataFilter : public FGameplayTargetDataFilter
{
}; // Size: 0x20

struct FWrestlerPlayerHasAnyGameplayTagCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    FGameplayTagContainer GameplayTags;                                               // 0x0028 (size: 0x20)

}; // Size: 0x48

struct FWrestlerPlayerHasAnyGameplayTagInstanceData
{
}; // Size: 0x1

struct FWrestlerPlayerMovementParams
{
    float JumpZVelocity;                                                              // 0x0000 (size: 0x4)
    float MaxCrouchSpeed;                                                             // 0x0004 (size: 0x4)
    float GravityScale;                                                               // 0x0008 (size: 0x4)
    float MaxAcceleration;                                                            // 0x000C (size: 0x4)
    float BrakingFriction;                                                            // 0x0010 (size: 0x4)
    float AirControl;                                                                 // 0x0014 (size: 0x4)
    bool bCanCrouch;                                                                  // 0x0018 (size: 0x1)
    bool bCanJump;                                                                    // 0x0019 (size: 0x1)

}; // Size: 0x1C

struct FWrestlerPlayerSaveData
{
    FSoftObjectPath PlayerStart;                                                      // 0x0000 (size: 0x20)
    bool bCrouched;                                                                   // 0x0020 (size: 0x1)
    EPlayerClan PlayerClan;                                                           // 0x0021 (size: 0x1)
    EWrestlerPlayerDifficulty PlayerDifficulty;                                       // 0x0022 (size: 0x1)
    FGameplayTagContainer BlockedAbilities;                                           // 0x0028 (size: 0x20)
    TMap<FGameplayAttribute, float> PlayerAttributes;                                 // 0x0048 (size: 0x50)

}; // Size: 0x98

struct FWrestlerPlayerSightTest : public FMassStateTreeTaskBase
{
    float EyeHeight;                                                                  // 0x0028 (size: 0x4)
    float MaxDistance;                                                                // 0x002C (size: 0x4)

}; // Size: 0x30

struct FWrestlerPlayerSightTestInstanceData
{
    bool bCanSeePlayer;                                                               // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FWrestlerPlayerStateParms
{
    float MaxHealth;                                                                  // 0x0000 (size: 0x4)
    float MaxBlood;                                                                   // 0x0004 (size: 0x4)
    float AttackPower;                                                                // 0x0008 (size: 0x4)
    float HeavyFallSpeedThreshold;                                                    // 0x000C (size: 0x4)
    float MaxHeightForFloorCast;                                                      // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWrestlerPlaythroughSaveData
{
    FGuid PlaythroughGUID;                                                            // 0x0000 (size: 0x10)
    FString CurrentActivityID;                                                        // 0x0010 (size: 0x10)
    FCommonLoadingScreenPresetAttributes LoadingPreset;                               // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FWrestlerPointAxis
{
    FVector ForwardVector;                                                            // 0x0000 (size: 0x18)
    FVector UpVector;                                                                 // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FWrestlerPoliceTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerPositionedPlane
{
}; // Size: 0x40

struct FWrestlerPromptDialogues
{
    TArray<class UHeraDialogueInfo*> DialogueInfos;                                   // 0x0000 (size: 0x10)
    class UHeraDialogueInfo* SharedPromptStory;                                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWrestlerQualityDeviceProfileVariant
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    FString DeviceProfileSuffix;                                                      // 0x0018 (size: 0x10)
    int32 MinRefreshRate;                                                             // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FWrestlerQuestObjective
{
    FString Objective;                                                                // 0x0000 (size: 0x10)
    bool bOverrideTitle;                                                              // 0x0010 (size: 0x1)
    FText TitleOverride;                                                              // 0x0018 (size: 0x18)
    FText Description;                                                                // 0x0030 (size: 0x18)
    class UHeraDialogueInfo* StoryDialogueInfo;                                       // 0x0048 (size: 0x8)
    TSet<UHeraPropertyBool*> ObjectiveCompletedProperties;                            // 0x0050 (size: 0x50)
    bool bUseSideQuestIcon;                                                           // 0x00A0 (size: 0x1)
    TSoftObjectPtr<AActor> ObjectToTag;                                               // 0x00A8 (size: 0x28)

}; // Size: 0xD0

struct FWrestlerQuestProgressData
{
    FText ActiveQuestTitle;                                                           // 0x0000 (size: 0x18)
    FText ActiveQuestDescription;                                                     // 0x0018 (size: 0x18)
    FGameplayTag ActiveQuestTag;                                                      // 0x0030 (size: 0x8)
    TArray<FGameplayTag> CompletedQuestTags;                                          // 0x0038 (size: 0x10)
    TArray<FWrestlerOpenQuestData> OpenQuests;                                        // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FWrestlerRPGMenuTabData
{
    EWrestlerRPGMenuTabID TabId;                                                      // 0x0000 (size: 0x1)
    FText TabTitle;                                                                   // 0x0008 (size: 0x18)
    TSubclassOf<class UWrestlerRPGMenuTabWidget> TabWidgetClass;                      // 0x0020 (size: 0x8)
    bool bCurrentlyAvailable;                                                         // 0x0028 (size: 0x1)
    FName SettingCollectionName;                                                      // 0x002C (size: 0x8)
    class UInputMappingContext* PlayerMappingContext;                                 // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FWrestlerRangedAttackEQSSettings
{
    float RangedGapCloseMinDistance;                                                  // 0x0000 (size: 0x4)
    float RangedGapCloseMaxDistance;                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWrestlerRangedRotateConfig
{
    float CatchupSpeed;                                                               // 0x0000 (size: 0x4)
    float OffsetClamp;                                                                // 0x0004 (size: 0x4)
    float RotationRate;                                                               // 0x0008 (size: 0x4)
    class UCurveFloat* TurnCurve;                                                     // 0x0010 (size: 0x8)
    FName SocketName;                                                                 // 0x0018 (size: 0x8)
    double TargetHeightOffset;                                                        // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FWrestlerRemoveTagsOnExit : public FMassStateTreeTaskBase
{
    TArray<EWrestlerMassGameplayTags> TagsToRemove;                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWrestlerRemoveTagsOnExitInstanceData
{
    FStateTreeStructRef TargetEntity;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerResetEntityTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerRunAwayFromFearSource : public FWrestlerMassMoveTo
{
    uint8 SearchDepth;                                                                // 0x006A (size: 0x1)
    float AcceptableDistanceThreshold;                                                // 0x006C (size: 0x4)
    float MinimumMoveAngleToDanger;                                                   // 0x0070 (size: 0x4)
    float AvoidDangerRadius;                                                          // 0x0074 (size: 0x4)
    float MinimumPathLength;                                                          // 0x0078 (size: 0x4)

}; // Size: 0x80

struct FWrestlerSOInteractionEntry
{
    TSubclassOf<class AActor> SmartObjectActorTemplate;                               // 0x0000 (size: 0x8)
    float SpawnProbability;                                                           // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FWrestlerSaveSlotPromptData
{
}; // Size: 0x50

struct FWrestlerScalabilitySnapshot
{
}; // Size: 0x60

struct FWrestlerScaredTag : public FMassTag
{
}; // Size: 0x1

struct FWrestlerScoredInteraction
{
    FWrestlerInteractionTarget Target;                                                // 0x0008 (size: 0x10)

}; // Size: 0x20

struct FWrestlerSearchLastKnownPosition : public FWrestlerMassMoveTo
{
    float SearchRadius;                                                               // 0x006C (size: 0x4)

}; // Size: 0x70

struct FWrestlerSearchTeam
{
    TMap<class AActor*, class EWrestlerSearchTeamStatus> Team;                        // 0x0000 (size: 0x50)
    class AActor* TeamCaptain;                                                        // 0x0050 (size: 0x8)
    FVector SearchSpot;                                                               // 0x0058 (size: 0x18)
    EWrestlerSearchTeamType Type;                                                     // 0x0070 (size: 0x1)
    int32 NumberSearchesLeft;                                                         // 0x0074 (size: 0x4)

}; // Size: 0x78

struct FWrestlerSelectByTagGameplayTargetDataFilter : public FGameplayTargetDataFilter
{
    FGameplayTagContainer TagContainer;                                               // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FWrestlerSequenceBinding
{
    FName BindingTag;                                                                 // 0x0000 (size: 0x8)
    TArray<class AActor*> Actors;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWrestlerSequenceSettings
{
    TArray<FWrestlerSequenceBinding> BindingsList;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerSetFocus : public FMassStateTreeTaskBase
{
    bool bFocusOnPlayer;                                                              // 0x0026 (size: 0x1)
    bool bFocusAhead;                                                                 // 0x0027 (size: 0x1)
    float FocusDuration;                                                              // 0x0028 (size: 0x4)
    float MinAngleToStartRotating;                                                    // 0x002C (size: 0x4)

}; // Size: 0x30

struct FWrestlerSetFocusInstanceData
{
    FStateTreeStructRef FocusingEntity;                                               // 0x0000 (size: 0x10)
    FStateTreeStructRef TargetEntity;                                                 // 0x0010 (size: 0x10)
    class AActor* TargetActor;                                                        // 0x0020 (size: 0x8)
    FStateTreeStructRef TargetLocation;                                               // 0x0028 (size: 0x10)

}; // Size: 0x68

struct FWrestlerSetGameplayTags : public FMassStateTreeTaskBase
{
    FGameplayTagContainer GameplayTagsToAdd;                                          // 0x0028 (size: 0x20)

}; // Size: 0x48

struct FWrestlerSetGameplayTagsInstanceData
{
}; // Size: 0x1

struct FWrestlerShouldResetScaredRunningPath : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWrestlerShouldResetScaredRunningPathInstanceData
{
}; // Size: 0x1

struct FWrestlerShouldScaredEntityCowerCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    float MinScareDuration;                                                           // 0x0024 (size: 0x4)
    float MaxScareDuration;                                                           // 0x0028 (size: 0x4)
    float MinimumTimeOnRequiredArea;                                                  // 0x002C (size: 0x4)
    float CowerPercentageChance;                                                      // 0x0030 (size: 0x4)
    TSubclassOf<class UNavigationQueryFilter> NavMeshFilterClass;                     // 0x0038 (size: 0x8)
    FZoneGraphTagFilter ZoneGraphLaneTags;                                            // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FWrestlerShouldScaredEntityCowerInstanceData
{
}; // Size: 0x8

struct FWrestlerSignificanceBucket
{
    float MaxDistance;                                                                // 0x0000 (size: 0x4)
    float SignificanceValueOnScreen;                                                  // 0x0004 (size: 0x4)
    float SignificanceValueOffScreen;                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FWrestlerSignificanceBucketContainer
{
    TArray<FWrestlerSignificanceBucket> SignificanceBuckets;                          // 0x0000 (size: 0x10)
    TArray<FWrestlerSignificanceEffect> SignificanceEffects;                          // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerSignificanceEffect
{
    float MaxSignificance;                                                            // 0x0000 (size: 0x4)
    EWrestlerSignificanceOptimizationLevel OptimizationLevel;                         // 0x0004 (size: 0x1)
    float TickRate;                                                                   // 0x0008 (size: 0x4)
    bool CullShadows;                                                                 // 0x000C (size: 0x1)

}; // Size: 0x10

struct FWrestlerSimplifyAbilityDataStruct
{
    FString AbilityID;                                                                // 0x0000 (size: 0x10)
    FString AbilityName;                                                              // 0x0010 (size: 0x10)
    class UTexture2D* AbilityIcon;                                                    // 0x0020 (size: 0x8)
    FString Description;                                                              // 0x0028 (size: 0x10)
    TArray<FTrainingCost> AbilityTrainingCost;                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FWrestlerSmartObjectBehaviourData
{
    FName ContextualAnimationName;                                                    // 0x0000 (size: 0x8)
    TArray<EWrestlerPedestrianType> AllowedPedestrianTypes;                           // 0x0008 (size: 0x10)
    TArray<EWrestlerGenderType> AllowedGenderTypes;                                   // 0x0018 (size: 0x10)
    float InteractionCooldown;                                                        // 0x0028 (size: 0x4)
    bool bOverrideAnimMontagePlayTime;                                                // 0x002C (size: 0x1)
    float UseTime;                                                                    // 0x0030 (size: 0x4)
    int32 Idx;                                                                        // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FWrestlerSmartObjectDataDefinitionTableRow : public FTableRowBase
{
    FName RowName;                                                                    // 0x0008 (size: 0x8)
    TArray<FWrestlerSmartObjectBehaviourData> BehavioursData;                         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWrestlerSmartObjectFindOptionsFragment : public FMassFragment
{
}; // Size: 0xC

struct FWrestlerSmartObjectSlotStateData : public FSmartObjectSlotStateData
{
}; // Size: 0x8

struct FWrestlerSmartObjectUserData
{
    TSoftObjectPtr<UAnimMontage> SmartObjectAnim;                                     // 0x0000 (size: 0x28)
    float MaxConsiderDistanceBehind;                                                  // 0x0040 (size: 0x4)
    float MinConsiderDistanceAhead;                                                   // 0x0044 (size: 0x4)
    float MaxConsiderDistanceAhead;                                                   // 0x0048 (size: 0x4)
    float DynamicSearchDistance;                                                      // 0x004C (size: 0x4)
    float DynamicSearchHeight;                                                        // 0x0050 (size: 0x4)
    bool bAllowFindingBehindEntity;                                                   // 0x0054 (size: 0x1)

}; // Size: 0x60

struct FWrestlerSmartObjectUserDataFragment : public FMassFragment
{
}; // Size: 0x60

struct FWrestlerSmoothOrientationFragment : public FMassSharedFragment
{
    float EndOfPathDuration;                                                          // 0x0000 (size: 0x4)
    float OrientationSmoothingTime;                                                   // 0x0004 (size: 0x4)
    float MinRotationSpeed;                                                           // 0x0008 (size: 0x4)
    float MinVelocityWeightSpeed;                                                     // 0x000C (size: 0x4)
    FMassSmoothOrientationWeights Moving;                                             // 0x0010 (size: 0x8)
    FMassSmoothOrientationWeights Standing;                                           // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FWrestlerSpecialInput
{
    class UInputAction* Action;                                                       // 0x0000 (size: 0x8)
    FName ID;                                                                         // 0x0008 (size: 0x8)
    FKey Key;                                                                         // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FWrestlerSpecialMappingData
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    FEnhancedActionKeyMapping KeyMapping;                                             // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FWrestlerStateGameplayTagContainer
{
    TMap<class FName, class FGameplayTagContainer> ActiveStateTags;                   // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerStateTreeHasTagCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    FWrestlerEntityTagFilter FilterTags;                                              // 0x0028 (size: 0x30)

}; // Size: 0x58

struct FWrestlerStateTreeHasTagInstanceData
{
}; // Size: 0x1

struct FWrestlerStateTreeIntPropertyCompareInstanceData
{
    int32 Right;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FWrestlerStateTreeIntPropertyCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    EGenericAICheck Operator;                                                         // 0x0021 (size: 0x1)
    class UHeraPropertyInt* Left;                                                     // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWrestlerStatsFragment : public FMassFragment
{
}; // Size: 0x4

struct FWrestlerTagDelegates
{
    FWrestlerTagDelegatesOnTagAddedToObjectEvent OnTagAddedToObjectEvent;             // 0x0000 (size: 0x10)
    void WrestlerOnTagChangedOnObjectBP(FString Tag, class UObject* Object);
    FWrestlerTagDelegatesOnTagRemovedFromObjectEvent OnTagRemovedFromObjectEvent;     // 0x0010 (size: 0x10)
    void WrestlerOnTagChangedOnObjectBP(FString Tag, class UObject* Object);

}; // Size: 0x20

struct FWrestlerTagsFragment : public FMassFragment
{
}; // Size: 0x60

struct FWrestlerTaskBoardConfig
{
    TArray<FGameplayTag> TaskTypes;                                                   // 0x0000 (size: 0x10)
    float NextTaskMinDelay;                                                           // 0x0010 (size: 0x4)
    float NextTaskMaxDelay;                                                           // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FWrestlerTaskBoardPerDifficulty
{
    TMap<class EWrestlerPlayerDifficulty, class UWrestlerTaskBoardData*> TaskBoards;  // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerTaskCollection
{
    TArray<class UWrestlerTaskData*> TaskCollection;                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerTaskExecutionResult
{
    EWrestlerTaskStatus Result;                                                       // 0x0000 (size: 0x1)
    class UWrestlerTask* ReturnTask;                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerTaskFilterParams
{
    class UWrestlerTask* Task;                                                        // 0x0000 (size: 0x8)
    FGameplayTagContainer StateTags;                                                  // 0x0008 (size: 0x20)
    TArray<class AActor*> IgnoreAgents;                                               // 0x0028 (size: 0x10)
    FGameplayTagContainer IgnoreWithTags;                                             // 0x0038 (size: 0x20)

}; // Size: 0x58

struct FWrestlerTeamAttitudeTowardsCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0020 (size: 0x1)
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;                                    // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FWrestlerTeamAttitudeTowardsConditionInstanceData
{
}; // Size: 0x1

struct FWrestlerTeamHostility
{
    TMap<class EWrestlerGameTeam, class bool> TeamHostility;                          // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FWrestlerTelekinesisTargetDataFilter : public FGameplayTargetDataFilter
{
}; // Size: 0x20

struct FWrestlerThrowTargetData : public FGameplayAbilityTargetData
{
    FVector ThrowVelocity;                                                            // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FWrestlerTimeDilationConfig
{
    float TimeDilation;                                                               // 0x0000 (size: 0x4)
    float Duration;                                                                   // 0x0004 (size: 0x4)
    ETimeScale TimeScale;                                                             // 0x0008 (size: 0x1)
    class AActor* TimeScaleActor;                                                     // 0x0010 (size: 0x8)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FWrestlerTimeDilationData
{
    float TimeDilation;                                                               // 0x0000 (size: 0x4)
    class AActor* TimeScaleActor;                                                     // 0x0010 (size: 0x8)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWrestlerTimeDilator
{
}; // Size: 0x4

struct FWrestlerTokenContainer
{
    TArray<class UWrestlerToken*> FreeTokens;                                         // 0x0000 (size: 0x10)
    TArray<class UWrestlerToken*> ActiveTokens;                                       // 0x0010 (size: 0x10)
    TArray<class UWrestlerToken*> QueuedTokens;                                       // 0x0020 (size: 0x10)
    TArray<class UWrestlerToken*> CooldownTokens;                                     // 0x0030 (size: 0x10)
    TArray<class AActor*> Queue;                                                      // 0x0040 (size: 0x10)

}; // Size: 0x60

struct FWrestlerTokenRequestQuery
{
    EWrestlerGameplayTokenType RequestedTokenType;                                    // 0x0000 (size: 0x1)
    class AActor* RequestingActor;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWrestlerTokenRequestResult
{
    EWrestlerTokenResult Result;                                                      // 0x0000 (size: 0x1)
    class UWrestlerToken* ReturnToken;                                                // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FWrestlerTokenTypeConfig
{
    uint8 InitialNumberOfTokens;                                                      // 0x0000 (size: 0x1)
    uint8 MaxNumberOfActiveTokens;                                                    // 0x0001 (size: 0x1)
    TSubclassOf<class UWrestlerTokenStealingController> StealingControllerClass;      // 0x0008 (size: 0x8)
    float CooldownDuration;                                                           // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FWrestlerTrackedEnemyProperties
{
    float ThreatLevel;                                                                // 0x0000 (size: 0x4)
    float DistanceSqr;                                                                // 0x0004 (size: 0x4)
    EWrestlerAudioEnemyState EnemyState;                                              // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FWrestlerTransitionTransform
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0020 (size: 0x20)
    FQuat ControllerRotation;                                                         // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FWrestlerTraversalCommonVars
{
    float TraversalMaxFacingAngleDegrees;                                             // 0x0000 (size: 0x4)
    float CollisionCapsuleRadius;                                                     // 0x0004 (size: 0x4)
    float CollisionCapsuleHalfHeight;                                                 // 0x0008 (size: 0x4)
    TEnumAsByte<ECollisionChannel> Channel;                                           // 0x000C (size: 0x1)
    float LandingZoneFloorAngleErrorDegrees;                                          // 0x0010 (size: 0x4)
    float SmallPlatformThickness;                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FWrestlerTraversalLedgeVaultVars
{
    float ObstacleLengthMin;                                                          // 0x0000 (size: 0x4)
    float ObstacleLengthMax;                                                          // 0x0004 (size: 0x4)
    float LedgeVaultDetectionDistance;                                                // 0x0008 (size: 0x4)
    float LedgeMaxThickness;                                                          // 0x000C (size: 0x4)
    float WallHugSpeed;                                                               // 0x0010 (size: 0x4)
    float WallHugMaxDistance;                                                         // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FWrestlerTraversalMantleOffsets
{
    float MantleHeight;                                                               // 0x0000 (size: 0x4)
    float MantleDistance;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWrestlerTraversalMantleVars
{
    float CheckInterval;                                                              // 0x0000 (size: 0x4)
    float MaxMantleHeight;                                                            // 0x0004 (size: 0x4)
    float MaxMantleDistance;                                                          // 0x0008 (size: 0x4)
    float PlatformTraceSeparation;                                                    // 0x000C (size: 0x4)
    float WallNormalAngleThreshold;                                                   // 0x0010 (size: 0x4)
    float LandingDistanceInFromLip;                                                   // 0x0014 (size: 0x4)
    float IgnoreMantleViewAngle;                                                      // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FWrestlerTraversalObjectSearchVars
{
    float CheckInterval;                                                              // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FWrestlerTraversalVaultVars
{
    float CheckInterval;                                                              // 0x0000 (size: 0x4)
    float ObstacleMinHeight;                                                          // 0x0004 (size: 0x4)
    float ObstacleMaxHeight;                                                          // 0x0008 (size: 0x4)
    float ObstacleMinDepth;                                                           // 0x000C (size: 0x4)
    float MaxHeadHeight;                                                              // 0x0010 (size: 0x4)
    float ObstacleWallErrorDegrees;                                                   // 0x0014 (size: 0x4)
    float LandingZoneSmallLift;                                                       // 0x0018 (size: 0x4)
    float SpeedMultiplier;                                                            // 0x001C (size: 0x4)
    float Duration;                                                                   // 0x0020 (size: 0x4)
    float ClimbDuration;                                                              // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerTraversalWallClimbVars
{
    float CheckInterval;                                                              // 0x0000 (size: 0x4)
    float ForwardTraceHeight;                                                         // 0x0004 (size: 0x4)
    float ForwardTraceLength;                                                         // 0x0008 (size: 0x4)
    float ForwardTraceVerticalSlopeErrorDegrees;                                      // 0x000C (size: 0x4)
    float MinHeight;                                                                  // 0x0010 (size: 0x4)
    float UpSweepOffset;                                                              // 0x0014 (size: 0x4)
    float VerticalSpeed;                                                              // 0x0018 (size: 0x4)
    float ForwardTraceSpacing;                                                        // 0x001C (size: 0x4)
    float Offset;                                                                     // 0x0020 (size: 0x4)
    float Duration;                                                                   // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWrestlerTriggerMasqueradeEvent : public FMassStateTreeTaskBase
{
    FGameplayTag EventTag;                                                            // 0x0024 (size: 0x8)

}; // Size: 0x30

struct FWrestlerTriggerMasqueradeEventInstanceData
{
}; // Size: 0x1

struct FWrestlerTriggerZoneDanger : public FMassStateTreeTaskBase
{
    float DangerRadius;                                                               // 0x0028 (size: 0x4)
    float DangerDuration;                                                             // 0x002C (size: 0x4)

}; // Size: 0x30

struct FWrestlerTriggerZoneDangerInstanceData
{
}; // Size: 0x1

struct FWrestlerTutorialData
{
    FText Title;                                                                      // 0x0000 (size: 0x18)
    FText KeyboardMouseDescription;                                                   // 0x0018 (size: 0x18)
    FText ControllerDescription;                                                      // 0x0030 (size: 0x18)
    bool bWaitForPlayerAction;                                                        // 0x0048 (size: 0x1)
    FGameplayTag AbilityTag;                                                          // 0x004C (size: 0x8)
    FGameplayTag SecondaryAbilityTag;                                                 // 0x0054 (size: 0x8)
    FName PCIcon;                                                                     // 0x005C (size: 0x8)
    FName XBoxIcon;                                                                   // 0x0064 (size: 0x8)
    FName PSIcon;                                                                     // 0x006C (size: 0x8)
    FName SecondoryPCIcon;                                                            // 0x0074 (size: 0x8)
    FName SecondaryXBoxIcon;                                                          // 0x007C (size: 0x8)
    FName SecondaryPSIcon;                                                            // 0x0084 (size: 0x8)
    FName PrimarySymbolIcon;                                                          // 0x008C (size: 0x8)
    FName SecondarySymbolIcon;                                                        // 0x0094 (size: 0x8)

}; // Size: 0xA0

struct FWrestlerUIAchievementInfo
{
    TArray<FTransform> Positions;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWrestlerUILocalisationDataTableRowBase : public FTableRowBase
{
    FString LocalisationNotes;                                                        // 0x0008 (size: 0x10)
    FString CharactersLimit;                                                          // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FWrestlerUIMarkerInfo
{
    FString Objective;                                                                // 0x0000 (size: 0x10)
    FText MarkerTitle;                                                                // 0x0010 (size: 0x18)
    FText MarkerDescription;                                                          // 0x0028 (size: 0x18)
    EWrestlerUIMarkerInfoType MarkerType;                                             // 0x0040 (size: 0x1)
    FGameplayTag MarkerTag;                                                           // 0x0044 (size: 0x8)
    TWeakObjectPtr<class UObject> ObjectToTag;                                        // 0x004C (size: 0x8)
    class UHeraDialogueInfo* StoryDialogueInfo;                                       // 0x0058 (size: 0x8)
    TArray<class UHeraPropertyBool*> MarkerCompletedProperties;                       // 0x0060 (size: 0x10)
    FString WaypointActorName;                                                        // 0x0070 (size: 0x10)
    FWrestlerQuestObjective QuestObjective;                                           // 0x0080 (size: 0xD0)
    bool bUseSideQuestIcon;                                                           // 0x0150 (size: 0x1)

}; // Size: 0x158

struct FWrestlerUISaveData
{
    TMap<class FGameplayTag, class FTransform> TrainersPositions;                     // 0x0000 (size: 0x50)
    TMap<class FGameplayTag, class FWrestlerUIAchievementInfo> FoundAchievementCollectibles; // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FWrestlerUltraVolumetricsFogParameters
{
    EWrestlerUltraVolumetricsFogLayer2 SecondLayer;                                   // 0x0000 (size: 0x1)
    float SecondLayerAmount;                                                          // 0x0004 (size: 0x4)
    bool bUseDistanceField;                                                           // 0x0008 (size: 0x1)
    float DistanceFieldHeight;                                                        // 0x000C (size: 0x4)
    float DistanceFieldMultiply;                                                      // 0x0010 (size: 0x4)
    float DistanceFieldPower;                                                         // 0x0014 (size: 0x4)
    float Opacity;                                                                    // 0x0018 (size: 0x4)
    float SelfShadowAmount;                                                           // 0x001C (size: 0x4)
    FVector NoiseSize;                                                                // 0x0020 (size: 0x18)
    float NoisePower;                                                                 // 0x0038 (size: 0x4)
    float NoiseMultiply;                                                              // 0x003C (size: 0x4)
    FLinearColor Color;                                                               // 0x0040 (size: 0x10)
    float PanningSpeedX;                                                              // 0x0050 (size: 0x4)
    float PanningSpeedY;                                                              // 0x0054 (size: 0x4)
    float PanningSpeedZ;                                                              // 0x0058 (size: 0x4)
    float FarFadeDistance;                                                            // 0x005C (size: 0x4)
    float NearFadeDistance;                                                           // 0x0060 (size: 0x4)
    bool bUseThirdPersonNearFade;                                                     // 0x0064 (size: 0x1)

}; // Size: 0x68

struct FWrestlerUltraVolumetricsFogQualityParameters
{
    int32 GridPixelSize;                                                              // 0x0000 (size: 0x4)
    int32 GridSizeZ;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWrestlerUseAbility : public FMassStateTreeTaskBase
{
    FGameplayTag GameplayAbilityTag;                                                  // 0x0024 (size: 0x8)

}; // Size: 0x30

struct FWrestlerUseAbilityInstanceData
{
}; // Size: 0x8

struct FWrestlerViolentActionWitnessData
{
    FWrestlerIndicatedEntity IndicatorData;                                           // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FWrestlerVisionGameplayTargetDataFilter : public FGameplayTargetDataFilter
{
    TSubclassOf<class UInterface> Interface;                                          // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FWrestlerVisionPane
{
}; // Size: 0x60

struct FWrestlerVisionRectangle
{
    float Width;                                                                      // 0x0000 (size: 0x4)
    float Height;                                                                     // 0x0004 (size: 0x4)
    float FwdOffset;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FWrestlerWallClimbParameters
{
    float LerpToWallDuration;                                                         // 0x0000 (size: 0x4)
    float MaxWallClimbDuration;                                                       // 0x0004 (size: 0x4)
    float InwardProjection;                                                           // 0x0008 (size: 0x4)
    float ForwardDirectionLerpStrength;                                               // 0x000C (size: 0x4)
    float LedgeVaultDetectionDistance;                                                // 0x0010 (size: 0x4)
    float LedgeMinProtrusion;                                                         // 0x0014 (size: 0x4)
    float LedgeMaxProtrusion;                                                         // 0x0018 (size: 0x4)
    float LedgeMaxThickness;                                                          // 0x001C (size: 0x4)
    float StepUpHeight;                                                               // 0x0020 (size: 0x4)
    float SlopeBoostMultiplier;                                                       // 0x0024 (size: 0x4)
    bool bFallOnBlock;                                                                // 0x0028 (size: 0x1)

}; // Size: 0x2C

struct FWrestlerWaypointData
{
    class AWrestlerWaypointActor* WaypointActor;                                      // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FWrestlerWaypointIndicatorData
{
    class AActor* WaypointTarget;                                                     // 0x0000 (size: 0x8)
    FString WaypointTargetName;                                                       // 0x0008 (size: 0x10)
    FString Tag;                                                                      // 0x0018 (size: 0x10)
    class UWrestlerWaypointIndicator* IndicatorWidget;                                // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWrestlerWeatherParameters
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    float BlendTime;                                                                  // 0x0008 (size: 0x4)
    float WindIntensity;                                                              // 0x000C (size: 0x4)
    FVector WindDirection;                                                            // 0x0010 (size: 0x18)
    float WindGustProbability;                                                        // 0x0028 (size: 0x4)
    float WindGustDuration;                                                           // 0x002C (size: 0x4)
    FWrestlerWindGustIntensity WindGustIntensity;                                     // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FWrestlerWindGustIntensity
{
    float Min;                                                                        // 0x0000 (size: 0x4)
    float Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWrestlerXPConversionData
{
    FRuntimeFloatCurve XPToAPConversionCurve;                                         // 0x0000 (size: 0x88)

}; // Size: 0x88

struct FWrestlerZGFindConversationExitWanderTarget : public FMassStateTreeTaskBase
{
    float ZoneGraphSearchRange;                                                       // 0x0020 (size: 0x4)

}; // Size: 0x38

struct FWrestlerZGFindConversationExitWanderTargetInstanceData
{
    bool bUseWanderTaget;                                                             // 0x0000 (size: 0x1)
    FMassZoneGraphTargetLocation WanderTargetLocation;                                // 0x0008 (size: 0x60)
    FVector NavMeshTargetLocation;                                                    // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FWrestlerZGFindWanderTarget : public FMassStateTreeTaskBase
{
}; // Size: 0x38

struct FWrestlerZGFindWanderTargetInstanceData
{
    FMassZoneGraphTargetLocation WanderTargetLocation;                                // 0x0000 (size: 0x60)
    bool bDoAdjacentLaneSwap;                                                         // 0x0060 (size: 0x1)
    float AdjacentLanesSwapAheadDistance;                                             // 0x0064 (size: 0x4)

}; // Size: 0x68

struct FWrestlerZGPathFollowTask : public FMassStateTreeTaskBase
{
}; // Size: 0x38

struct FWrestlerZGSpawnPointsGeneratorData
{
    FZoneGraphTagFilter TagFilter;                                                    // 0x0000 (size: 0xC)
    float MinGap;                                                                     // 0x000C (size: 0x4)
    float MaxGap;                                                                     // 0x0010 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x0014 (size: 0x4)
    bool RandomizeLocations;                                                          // 0x0018 (size: 0x1)
    bool bFillZones;                                                                  // 0x0019 (size: 0x1)
    float WidthRandomUsage;                                                           // 0x001C (size: 0x4)
    bool bCapWidthUsage;                                                              // 0x0020 (size: 0x1)
    float EntityWidth;                                                                // 0x0024 (size: 0x4)
    bool bConvertedFromOldData;                                                       // 0x0028 (size: 0x1)

}; // Size: 0x2C

struct FWrestlerZoneGraphAnnotationArea : public FZoneGraphAnnotationEventBase
{
    class ATriggerBox* AnnotationVolume;                                              // 0x0000 (size: 0x8)

}; // Size: 0x10

class AAbilityDeadZoneVolume : public AWrestlerVolumeBase
{
    TSubclassOf<class UWrestlerAbilityDeadZoneSetup> AbilityDeadZoneSetupClass;       // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class ADEPRECATED_WrestlerGlobalLightVisibilityGroup : public AActor
{
    bool bEnabled;                                                                    // 0x0298 (size: 0x1)
    FGameplayTag GlobalVisibilityTag;                                                 // 0x029C (size: 0x8)
    float FadeTime;                                                                   // 0x02A4 (size: 0x4)
    TArray<class ULightComponent*> AttachedLights;                                    // 0x02A8 (size: 0x10)
    float PreviousIntensity;                                                          // 0x02B8 (size: 0x4)

    void SetRenderIntensity(float InNewIntensity);
    void SetEnabled(bool bEnabled);
    float GetRenderIntensity();
    FGameplayTag GetGlobalVisibilityTag();
    bool GetEnabled();
}; // Size: 0x2C0

class ADEPRECATED_WrestlerLightVisibilityGroup : public AActor
{
    TArray<class ULightComponent*> AttachedLights;                                    // 0x0298 (size: 0x10)

}; // Size: 0x2B0

class ADEPRECATED_WrestlerLightVisibilityVolume : public AWrestlerVolumeBase
{
    bool bManageAttachedActors;                                                       // 0x02D0 (size: 0x1)
    EWrestlerLightVisibilityVolumeToggleMode VisibilityMode;                          // 0x02D1 (size: 0x1)
    float FadeTime;                                                                   // 0x02D4 (size: 0x4)
    TArray<TSoftObjectPtr<AActor>> ManagedActors;                                     // 0x02D8 (size: 0x10)
    TArray<FGameplayTag> GlobalGroupsOff;                                             // 0x02F0 (size: 0x10)
    class UDEPRECATED_WrestlerLightVisibilityVolumeManager* LightVisibilityVolumeManager; // 0x0300 (size: 0x8)

    void SetVisibilityMode(const EWrestlerLightVisibilityVolumeToggleMode& InNewMode);
    bool IsPlayerWithin(bool bInAssumeIfNoPlayer);
}; // Size: 0x308

class ADroneController : public AWrestlerEnemyController
{

    void DroneSight(FVector& out_Location, FRotator& out_Rotation);
}; // Size: 0x5B0

class AInteractableQuestActor : public AWrestlerActorInteractionBase
{
    class UHeraMissionActorComponent* MissionComponent;                               // 0x02C8 (size: 0x8)
    class UHeraPersistenceComponentInt32* PersistentState;                            // 0x02D0 (size: 0x8)
    EItemState ItemState;                                                             // 0x02D8 (size: 0x1)
    EItemType InteractType;                                                           // 0x02D9 (size: 0x1)
    class UHeraMissionObjective* ObjectiveToUpdate;                                   // 0x02E0 (size: 0x8)
    class UHeraMissionObjective* OnInteractEndObjective;                              // 0x02E8 (size: 0x8)
    bool bShouldSetUsed;                                                              // 0x02F0 (size: 0x1)

    void OnInteractionPerformed(class AActor* InInteractingActor);
    void OnInteractionEnded(class AActor* InInteractingActor);
    void OnAnyInteractionEnded(class AActor* InInteractingActor);
    void OnAnyInteraction(class AActor* InInteractingActor);
}; // Size: 0x2F8

class AWrestlerAICharacter : public AWrestlerCharacterBase
{
    FGameplayTagContainer InterestingPointTags;                                       // 0x0AB0 (size: 0x20)
    bool bFadeOutStunGlow;                                                            // 0x0AD0 (size: 0x1)
    float StunGlowFadeSpeed;                                                          // 0x0AD4 (size: 0x4)
    FWrestlerAICharacterWrestlerCharacterDeathCleanUpDelegate WrestlerCharacterDeathCleanUpDelegate; // 0x0AD8 (size: 0x10)
    void WrestlerCharacterDeathCleanUpDelegate(class AActor* DeadActor);
    FWrestlerAICharacterOnDeadBodySpawned OnDeadBodySpawned;                          // 0x0AE8 (size: 0x10)
    void DeadBodySpawnedDelegate(class AActor* DeadBodyActor);
    bool bEnableUVGlow;                                                               // 0x0AF8 (size: 0x1)
    class UWrestlerModularCharacterProfile* ModularCharacterProfile;                  // 0x0B00 (size: 0x8)
    FVector2D MinMaxMeshHeightScale;                                                  // 0x0B08 (size: 0x10)
    class USkeletalMeshComponent* IKRetargetMesh;                                     // 0x0B18 (size: 0x8)
    class UWrestlerBloodResonanceComponent* BloodResonanceComponent;                  // 0x0B20 (size: 0x8)

    bool TraceToActor(class AActor* ActorToTrace, FHitResult& OutHit, const FName& TraceName);
    void SetUseStunGlow(const float InUseStunGlow);
    void SetMeshHeightScale(const float InHeightScale, const float InLerpDuration);
    void SetFadeOutStunGlow();
    void SetEnableUVGlow(bool bInNewUVGlow);
    void SetDefaultMeshHeightScale(const float InLerpDuration);
    void OnAIDeath();
    bool IsActorInView(class AActor* ActorToCheck);
    class UWrestlerModularCharacterProfile* GetModularCharacterProfile();
    class USkeletalMeshComponent* GetIKRetargetMesh();
    bool CanBeSeen(const class AActor* InActor);
}; // Size: 0xB50

class AWrestlerAIController : public AAIController
{
    FWrestlerAIControllerOnTeamChangedEvent OnTeamChangedEvent;                       // 0x03C8 (size: 0x10)
    void WrestlerTeamChangedEvent(class AAIController* AIController, EWrestlerGameTeam NewTeamID);
    class UBlackboardData* DefaultBlackboard;                                         // 0x03D8 (size: 0x8)
    class UBlackboardComponent* BlackboardComponent;                                  // 0x03E0 (size: 0x8)
    EWrestlerGameTeam GameTeamID;                                                     // 0x03E8 (size: 0x1)
    float InterestingPointSelectionAngle;                                             // 0x03EC (size: 0x4)
    class AActor* SelectedInterestingPoint;                                           // 0x03F0 (size: 0x8)
    class UWrestlerEnemyTeamAttitudeConfig* TeamAttitudeConfig;                       // 0x03F8 (size: 0x8)

    void WrestlerSetGenericTeamId(const FGenericTeamId& InTeamID);
    TEnumAsByte<ETeamAttitude::Type> WrestlerGetTeamAttitudeTowards(const class AActor* InOther);
    FGenericTeamId WrestlerGetGenericTeamId();
    void SetLookForExitPoint(bool bLookExitPoint);
    bool IsActorPerceived(class AActor* ActorToCheck);
    void InitialiseAIBehaviourTree();
    TEnumAsByte<ETeamAttitude::Type> GetTeamAttitudeTowardsTeam(const EWrestlerGameTeam InTeam);
    bool GetLookForExitPoint();
    void GetCurrentlyPerceivedActorsOfSense(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
}; // Size: 0x408

class AWrestlerAISpawner : public ATargetPoint
{
    FWrestlerAISpawnerOnEnemyHasSpawned OnEnemyHasSpawned;                            // 0x0298 (size: 0x10)
    void WrestlerEnemyHasSpawnedSignature(class AWrestlerEnemyCharacter* Enemy);
    FName EnemyTypeName;                                                              // 0x02B0 (size: 0x8)
    FWrestlerAISpawnerData SpawnData;                                                 // 0x02B8 (size: 0xC8)
    TSoftObjectPtr<UWrestlerModularCharacterProfile> ModularCharacterProfile;         // 0x0380 (size: 0x28)
    bool bSpawnOnBeginPlay;                                                           // 0x03A8 (size: 0x1)
    FWrestlerAISpawnerOnEnemySpawned OnEnemySpawned;                                  // 0x03B0 (size: 0x10)
    void WrestlerEnemySpawned(FWrestlerAISpawnerData OutSpawnData, const class AWrestlerAISpawner* OutSpawner);
    bool bOffsetSpawnedActor;                                                         // 0x03C0 (size: 0x1)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSourceComponent; // 0x03C8 (size: 0x8)
    class UWrestlerNavInvokerComponent* NavigationInvoker;                            // 0x03D0 (size: 0x8)
    FGameplayTagContainer TagContainerToApply;                                        // 0x03E0 (size: 0x20)
    FGameplayTag SquadIdTag;                                                          // 0x0400 (size: 0x8)
    bool bIsLeader;                                                                   // 0x0408 (size: 0x1)

    void SpawnEnemyTypeByName(FName InTypeName);
    void SpawnEnemy();
    bool ShouldSpawnOnBeginPlay();
    void RerollRandomMesh();
    void OnTimer();
    TSoftObjectPtr<UWrestlerModularCharacterProfile> GetModularCharacterProfile();
}; // Size: 0x420

class AWrestlerAbilitySystemActor : public AActor
{
    class UWrestlerAbilitySystemComponent* AbilitySystemComponent;                    // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class AWrestlerAbilitySystemCharacter : public ACharacter
{
    class UWrestlerAbilitySystemComponent* AbilitySystemComponent;                    // 0x0680 (size: 0x8)

}; // Size: 0x690

class AWrestlerActorInteractionBase : public AActor
{
    class USceneComponent* Root;                                                      // 0x02A0 (size: 0x8)
    FWrestlerInteractableData InteractableData;                                       // 0x02A8 (size: 0x18)

}; // Size: 0x2C0

class AWrestlerActor_Trace : public AGameplayAbilityTargetActor_Trace
{
}; // Size: 0x400

class AWrestlerArachnesKissTrigger : public AActor
{
    class USphereComponent* TriggerSphere;                                            // 0x0298 (size: 0x8)
    float ExplosionDamageRadius;                                                      // 0x02A0 (size: 0x4)
    bool bDebugExplosion;                                                             // 0x02A4 (size: 0x1)
    class UWrestlerGameplayAbility_ArachnesKiss* GameplayAbility;                     // 0x02A8 (size: 0x8)
    FEffectsMap ExplosionHitEffectsMap;                                               // 0x02B0 (size: 0x50)

    void Explode_Internal();
    void Explode(float InExplosionDelay);
    void BP_OnExplode();
}; // Size: 0x308

class AWrestlerAudioDiegeticMusicController : public AActor
{
    TArray<class UHeraAudioPositionalRtpcComponent*> EmitterArray;                    // 0x0298 (size: 0x10)
    TMap<class FGameplayTag, class AWrestlerAudioDiegeticMusicSpline*> SplineTagMap;  // 0x02A8 (size: 0x50)
    class AWrestlerAudioDiegeticMusicSpline* ActiveSpline;                            // 0x02F8 (size: 0x8)
    class UHeraPropertyGameplayTag* ActiveSplineProperty;                             // 0x0300 (size: 0x8)
    TArray<float> PerimeterDistanceModifiers;                                         // 0x0308 (size: 0x10)
    bool bDebug;                                                                      // 0x0318 (size: 0x1)

    void HandleSplineExit(FGameplayTag SplineTag, bool bExitFromStart, bool bHoldAtExit, bool& bExited);
    void ActivateSpline(FGameplayTag SplineTag, bool bActivate);
}; // Size: 0x320

class AWrestlerAudioDiegeticMusicSpline : public AActor
{
}; // Size: 0x298

class AWrestlerAudioFoliageVolume : public AActor
{
    class UHeraAudioVolumeComponent* VolumeComponent;                                 // 0x0298 (size: 0x8)
    class UBoxComponent* DefaultVolume;                                               // 0x02A0 (size: 0x8)
    class UAkAudioEvent* FoliageLoopEvent;                                            // 0x02A8 (size: 0x8)
    class UAkAudioEvent* FoliageStopEvent;                                            // 0x02B0 (size: 0x8)

    void OnPlayerInsideVolumeChanged(bool bPlayerInsideVolume);
}; // Size: 0x2D0

class AWrestlerBasePathPoint : public AActor
{
    FGameplayTag GameplayAbilityTag;                                                  // 0x0298 (size: 0x8)
    FGameplayTag QuestAbilityTag;                                                     // 0x02A0 (size: 0x8)
    bool bOverrideWaitTime;                                                           // 0x02A8 (size: 0x1)
    float WaitTime;                                                                   // 0x02AC (size: 0x4)
    class USceneComponent* SceneComponent;                                            // 0x02B0 (size: 0x8)
    FColor PathPointArrowColor;                                                       // 0x02B8 (size: 0x4)
    float DebugSphereRadius;                                                          // 0x02BC (size: 0x4)

}; // Size: 0x2C8

class AWrestlerBaseRoute : public AActor
{
    bool bActive;                                                                     // 0x0298 (size: 0x1)
    bool bSingleRun;                                                                  // 0x0299 (size: 0x1)
    bool bLoop;                                                                       // 0x029A (size: 0x1)
    TArray<class AWrestlerBasePathPoint*> PathPoints;                                 // 0x02A0 (size: 0x10)
    FColor PathLineColor;                                                             // 0x02B0 (size: 0x4)

    void SetPathPoints(TArray<class AWrestlerBasePathPoint*> InPathPoints);
    TArray<class AWrestlerBasePathPoint*> GetPathPoints();
    class AWrestlerBasePathPoint* GetPathPoint(int32 InIndex);
    int32 GetPathLength();
}; // Size: 0x2C0

class AWrestlerBreakable : public AActor
{
    class UStaticMeshComponent* BreakableMesh;                                        // 0x0298 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> BrokenMesh;                                           // 0x02A0 (size: 0x28)
    TSet<TSoftClassPtr<UDamageType>> BreakOnDamageTypes;                              // 0x02C8 (size: 0x50)
    float BreakNoiseLoudness;                                                         // 0x0318 (size: 0x4)
    float BreakNoiseRange;                                                            // 0x031C (size: 0x4)

    void OnBroken(class AController* InEventInstigator, class AActor* InDamageCauser);
}; // Size: 0x320

class AWrestlerCameraManager : public APlayerCameraManager
{

    void DestroySceneCaptureComponent(class APlayerCameraManager* PlayerCameraManager, class USceneCaptureComponent* SceneCaptureComponent);
}; // Size: 0x2400

class AWrestlerCharacter : public AWrestlerCharacterBase
{
    FWrestlerCharacterOnPlayerCharacterInitializedEvent OnPlayerCharacterInitializedEvent; // 0x0AC8 (size: 0x10)
    void WrestlerCharacterInitializationSucceeded();
    FWrestlerCharacterOnJumpInputReleased OnJumpInputReleased;                        // 0x0AD8 (size: 0x10)
    void WrestlerCharacterJumpInputReleased();
    FWrestlerCharacterOnJumpInputHeld OnJumpInputHeld;                                // 0x0AE8 (size: 0x10)
    void WrestlerCharacterJumpInputHeld();
    FWrestlerCharacterOnTeleportSucceeded OnTeleportSucceeded;                        // 0x0AF8 (size: 0x10)
    void WrestlerCharacterTeleportSucceeded();
    FWrestlerCharacterOnStealthActiveEvent OnStealthActiveEvent;                      // 0x0B08 (size: 0x10)
    void WrestlerCharacterStealthActive(bool bInStealthActive);
    FWrestlerCharacterOnDealMeleeDamageEvent OnDealMeleeDamageEvent;                  // 0x0B18 (size: 0x10)
    void WrestlerCharacterHasTag();
    FWrestlerCharacterOnReceiveHitDamageEvent OnReceiveHitDamageEvent;                // 0x0B28 (size: 0x10)
    void WrestlerCharacterHasTag();
    FWrestlerCharacterOnFeedEndEvent OnFeedEndEvent;                                  // 0x0B38 (size: 0x10)
    void WrestlerCharacterHasTag();
    FGameplayTag TorporTag;                                                           // 0x0B48 (size: 0x8)
    TSoftClassPtr<UWrestlerGameplayAbility> TorporAbility;                            // 0x0B50 (size: 0x28)
    FGameplayTag StealthTag;                                                          // 0x0B78 (size: 0x8)
    FGameplayTag HitReactTag;                                                         // 0x0B80 (size: 0x8)
    FGameplayTag FeedTag;                                                             // 0x0B88 (size: 0x8)
    FGameplayTag NarrativeModeTag;                                                    // 0x0B90 (size: 0x8)
    class UWrestlerControlCue* CrouchControlCue;                                      // 0x0B98 (size: 0x8)
    TSoftObjectPtr<UWrestlerMoveToDataAsset> CombatFeedMoveToDataSoftPtr;             // 0x0BA0 (size: 0x28)
    class UWrestlerMoveToDataAsset* CombatFeedMoveToData;                             // 0x0BC8 (size: 0x8)
    class UHeraPropertyStateTrackingList* EquippedAbilities;                          // 0x0BE8 (size: 0x8)
    FGameplayTagContainer AutoTraversalTags;                                          // 0x0BF0 (size: 0x20)
    bool bGlideAvailable;                                                             // 0x0C10 (size: 0x1)
    bool bGlidePressed;                                                               // 0x0C11 (size: 0x1)
    FWrestlerPlayerMovementParams MovementParams;                                     // 0x0C14 (size: 0x1C)
    class UWrestlerControlComponent* ControlComponent;                                // 0x0C30 (size: 0x8)
    class UWrestlerTraversalComponent* TraversalComponent;                            // 0x0C38 (size: 0x8)
    class UWrestlerEquippedAbilityComponent* EquippedAbilityComponent;                // 0x0C40 (size: 0x8)
    class UWrestlerPassiveTargetingComponent* PassiveTargetingComponent;              // 0x0C48 (size: 0x8)
    class UWrestlerXPComponent* XPComponent;                                          // 0x0C50 (size: 0x8)
    bool bModifyCollisionDuringTraversal;                                             // 0x0C58 (size: 0x1)
    FVector StableGround;                                                             // 0x0C70 (size: 0x18)
    int32 skillPoints;                                                                // 0x0C88 (size: 0x4)
    int32 TotalAbilityPoints;                                                         // 0x0C8C (size: 0x4)
    TSubclassOf<class UWrestlerGameplayAbility> CurrentPassiveAbility;                // 0x0C90 (size: 0x8)
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0C98 (size: 0x8)

    void WrestlerCharacterStealthActive__DelegateSignature(bool bInStealthActive);
    void WrestlerCharacterHasTag__DelegateSignature();
    void TryStartGliding();
    bool ToggleThirdPersonCamera();
    bool ToggleSecondaryViewpoint();
    void StopGliding();
    void SpawnDebugCamera();
    void SetStableGround(FVector InNewStableGround);
    void SetJumpCount(int32 InJumpCount);
    void SetGlideAvailable(bool Available);
    void SetGlideAcceleration(FVector Acceleration);
    void SetCanJumpFromCrouched(bool bInCanJump);
    void OnPlayerUnlockedFromDialogue();
    void OnPlayerLockedIntoDialogue();
    void OnPlayerClanChanged(class UWrestlerPlayerClan* InNewClan);
    void OnPlayerCharacterInitialized();
    void OnPlayerAbilityEarned();
    void OnNarrativeModeChanged(bool InNarrativeModeEnabled);
    bool IsGliding();
    float GetWalkSpeed();
    FVector GetVelocityLocal();
    FVector GetStableGround();
    float GetSprintSpeed();
    class UWrestlerPlayerMovementDataAsset* GetMovementConfigData();
    float GetMaxFeedRange();
    bool GetIsHeavyLanding();
    bool GetGlideAvailable();
    class UWrestlerEquippedAbilityComponent* GetEquippedAbilityComponent();
    float GetDistanceToFloor(float InCastDistance);
    void ForceAllowNextJump();
    bool CanGlide();
    void BP_ResetJumpState();
}; // Size: 0xCA0

class AWrestlerCharacterBase : public ACharacter
{
    class UHeraAudioCharacterComponent* AudioCharacterComponent;                      // 0x06E0 (size: 0x8)
    float HealthRegenDelay;                                                           // 0x06F0 (size: 0x4)
    float HealthRegenSegment_MaxHealthPercentage;                                     // 0x06F4 (size: 0x4)
    float HealthRegenSegment;                                                         // 0x06F8 (size: 0x4)
    float HealthSubBar;                                                               // 0x06FC (size: 0x4)
    float CurrentHealthCache;                                                         // 0x0700 (size: 0x4)
    class UWrestlerAttributeSet* AttributeSetBase;                                    // 0x0708 (size: 0x8)
    class UWrestlerCameraShakeAttributeSet* CameraShakeAttributeSet;                  // 0x0710 (size: 0x8)
    class UWrestlerLastBreathHealthAttributeSet* LastBreathHealthAttributeSet;        // 0x0718 (size: 0x8)
    class UAnimDataAsset* AnimDataAsset;                                              // 0x0720 (size: 0x8)
    FName DespawnTag;                                                                 // 0x0728 (size: 0x8)
    FGameplayTag CharacterTag;                                                        // 0x0730 (size: 0x8)
    FGameplayTag SprintTag;                                                           // 0x0738 (size: 0x8)
    FGameplayTag CrouchTag;                                                           // 0x0740 (size: 0x8)
    FGameplayTag SlideTag;                                                            // 0x0748 (size: 0x8)
    FGameplayTag JumpTag;                                                             // 0x0750 (size: 0x8)
    FGameplayTag GlideTag;                                                            // 0x0758 (size: 0x8)
    FGameplayTag OutOfCombatTag;                                                      // 0x0760 (size: 0x8)
    FGameplayTag RegenTag;                                                            // 0x0768 (size: 0x8)
    FGameplayTag StunnedTag;                                                          // 0x0770 (size: 0x8)
    TMap<TEnumAsByte<EMovementMode>, FGameplayTag> MovementTags;                      // 0x0778 (size: 0x50)
    FGameplayTag FeedXPAwardTag;                                                      // 0x07C8 (size: 0x8)
    bool CheckForCombat;                                                              // 0x07D0 (size: 0x1)
    float OutOfCombatTime;                                                            // 0x07D4 (size: 0x4)
    FWrestlerCharacterBaseOnOutOfCombat OnOutOfCombat;                                // 0x07D8 (size: 0x10)
    void WrestlerCharacterBaseBool(bool bBoolCheck);
    FWrestlerCharacterBaseOnCutsceneStarted OnCutsceneStarted;                        // 0x07E8 (size: 0x10)
    void WrestlerCharacterCutsceneStarted();
    FWrestlerCharacterBaseOnCutsceneEnded OnCutsceneEnded;                            // 0x07F8 (size: 0x10)
    void WrestlerCharacterCutsceneEnded();
    bool bRegenHealth;                                                                // 0x0820 (size: 0x1)
    TMap<FName, float> SightTargets;                                                  // 0x0828 (size: 0x50)
    int32 VampiricVisionId;                                                           // 0x0878 (size: 0x4)
    FWrestlerCharacterBaseWrestlerCharacterDeathDelegate WrestlerCharacterDeathDelegate; // 0x0880 (size: 0x10)
    void WrestlerCharacterDeathDelegate(class AActor* DeadActor);
    FWrestlerCharacterBaseWrestlerCharacterMarkedForDespawnDelegate WrestlerCharacterMarkedForDespawnDelegate; // 0x0890 (size: 0x10)
    void WrestlerCharacterMarkedForDespawnDelegate(class AActor* ActorToDespawn);
    FWrestlerCharacterBaseOnCharacterDamaged OnCharacterDamaged;                      // 0x08A0 (size: 0x10)
    void OnDamaged(class APawn* CharacterDamaged);
    FWrestlerCharacterBaseOnCharacterAttacked OnCharacterAttacked;                    // 0x08B0 (size: 0x10)
    void OnAttacked(class APawn* CharacterAttacked, class APawn* CharacterAttacking);
    FWrestlerCharacterBaseOnCharacterVanished OnCharacterVanished;                    // 0x08C0 (size: 0x10)
    void OnVanished(class APawn* CharacterVanished);
    bool bRegisterAsVampiricVisionTarget;                                             // 0x08D0 (size: 0x1)
    TSoftClassPtr<AActor> DeadActor;                                                  // 0x08D8 (size: 0x28)
    FGameplayTag DeathBehaviourTag;                                                   // 0x0900 (size: 0x8)
    class APawn* DeathInstigator;                                                     // 0x0908 (size: 0x8)
    class UWrestlerAbilitySystemComponent* AbilitySystemComponent;                    // 0x0910 (size: 0x8)
    class UWrestlerSequenceBlendComponent* SequenceBlendComponent;                    // 0x0918 (size: 0x8)
    int32 CharacterLevel;                                                             // 0x0920 (size: 0x4)
    class UWrestlerDefaultAbilities* DefaultAbilitiesAsset;                           // 0x0928 (size: 0x8)
    TArray<TSoftClassPtr<UGameplayEffect>> DefaultEffectsOnStart;                     // 0x0930 (size: 0x10)
    class UTextRenderComponent* StatusText;                                           // 0x0950 (size: 0x8)
    bool bIsInDialogue;                                                               // 0x0960 (size: 0x1)
    bool bIsInCutscene;                                                               // 0x0961 (size: 0x1)
    bool bIsSpeaking;                                                                 // 0x0962 (size: 0x1)
    bool bIsTargetable;                                                               // 0x0970 (size: 0x1)

    void Slide();
    void SetWalkSpeed(float NewWalkSpeed);
    void SetSprintSpeed(float NewSprintSpeed);
    void SetPlayerTarget(bool bIsTarget);
    void SetOutOfCombat(bool bNewOutOfCombat);
    void SetIsTargetable(bool InIsTargetable);
    void SetIsSpeaking(const bool bIsSpeaking);
    void SetIsInDialogue(const bool bInDialogue);
    void SetIsInCutscene(const bool bInCutscene);
    void SetDeathInstigator(class APawn* InInstigator);
    void SetDeathBehaviourTag(const FGameplayTag& InDeathBehaviourTag);
    void SetDead();
    void SetCrouchSpeed(float NewCrouchSpeed);
    bool SetCharacterLevel(int32 NewLevel);
    void SetAllowPawnOverlap(float InDuration);
    void ResetRecentlyAttacked();
    void RemoveAbility(TSubclassOf<class UWrestlerGameplayAbility> InAbility);
    void OnSequenceBindingChanged(bool bInIsBound);
    void OnNewMovementMode(TEnumAsByte<EMovementMode> InMovementMode);
    void OnHealthChanged(float CurrentHealth, float MaxHealth);
    void OnGameplayTagsChanged(const FGameplayTagContainer& InAddedGameplayTags, const FGameplayTagContainer& InRemovedGameplayTags);
    void OnDamagedGAS(float Damage);
    void OnBloodChanged(float CurrentBlood, float MaxBlood);
    void OnAbilityFailed(const ECouldNotActivateReason& OutFailureReason, const FGameplayTagContainer& TagFailure, class UGameplayAbility* AbilityFailure);
    FGameplayEventData MeleeHitGameplayEvent(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, FHitResult InHitResult, FGameplayTargetDataFilterHandle InFilterHandle, EWrestlerOutputPins& OutPins);
    bool MatchesCharacterTag(const FGameplayTag& InCharacterTag);
    FGameplayAbilityTargetDataHandle MakeTargetDataFromOverlapSweep(const class UPrimitiveComponent* InOverlappedComponent, FHitResult InHitResult);
    bool IsDead();
    void IsCurrentlyTargeting(bool& bOutIsTargeting, class AActor*& OutCurrentTarget);
    void GiveAbility(TSubclassOf<class UWrestlerGameplayAbility> InAbility);
    class UWrestlerMovementComponent* GetWrestlerMovementComponent();
    bool GetWasRecentlyAttacked();
    class UWrestlerTraversalComponent* GetTraversalComponent();
    class USkeletalMeshComponent* GetSkeletalMeshComp();
    bool GetIsWallClimbing();
    bool GetIsVaulting();
    bool GetIsSpeaking();
    bool GetIsMantling();
    bool GetIsLedgeVaulting();
    bool GetIsInDialogue();
    bool GetIsInCutscene();
    float GetHealth();
    TEnumAsByte<EPhysicalSurface> GetFloorSurfaceType();
    class UHeraDialogueInfo* GetDialogueInfo();
    FGameplayTag GetDialogueCharacterTag();
    int32 GetCharacterLevel();
    class UAkGameObject* GetAudioComponent();
    class UHeraAudioCharacterComponent* GetAudioCharacterComponent();
    FString GetActorName();
    void EventOnHealthChanged(float InCurrentHealth, float InMaxHealth);
    void EventOnDamage(float InDamage, class AActor* InDamageInstigator);
    void EventOnBloodChanged(float InCurrentBlood, float InMaxBlood);
    void DoHealthRegen();
    void Death();
    void ControlCueProcessed(class UWrestlerControlCue* InControlCue);
}; // Size: 0xAB0

class AWrestlerClueTrail : public AActor
{
    FName EmissiveParameterName;                                                      // 0x0298 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;                         // 0x02A0 (size: 0x10)
    class UWrestlerHeightenedSensesClueComponent* ClueComponent;                      // 0x02B0 (size: 0x8)

    void OnDecalAlphaUpdate(float InAlpha);
}; // Size: 0x2B8

class AWrestlerCollectable : public AInteractableQuestActor
{
    class UHeraPersistenceComponentHidden* PersistenceComponentHidden;                // 0x02F8 (size: 0x8)
    ECollectableType CollectableType;                                                 // 0x0300 (size: 0x1)
    bool bHasNotification;                                                            // 0x0301 (size: 0x1)
    bool bHasXPReward;                                                                // 0x0302 (size: 0x1)
    FWrestlerNotificationData Notification;                                           // 0x0308 (size: 0x58)
    FString CodexNameID;                                                              // 0x0360 (size: 0x10)
    FString CodexUnlock;                                                              // 0x0370 (size: 0x10)
    FGameplayTag XPRewardType;                                                        // 0x0380 (size: 0x8)
    bool bIsPartOfGameProgression;                                                    // 0x0388 (size: 0x1)

    void OnInteractionStarted(class AActor* InInteractingActor);
}; // Size: 0x390

class AWrestlerControllerFrontEnd : public AWrestlerPlayerController
{
}; // Size: 0x890

class AWrestlerControllerInGame : public AWrestlerPlayerController
{
    class UWrestlerCombatTargetComponent* TargetComponent;                            // 0x08A0 (size: 0x8)
    EWrestlerGameTeam GameTeamID;                                                     // 0x08A8 (size: 0x1)
    bool bAutoLockOn;                                                                 // 0x09C2 (size: 0x1)
    class UWrestlerPlayerActionAssetMap* PlayerActionAssetMap;                        // 0x09D0 (size: 0x8)
    class UInputMappingContext* PlayerMappingContext;                                 // 0x09D8 (size: 0x8)
    class UUserWidget* DebugMenuWidget;                                               // 0x09E0 (size: 0x8)
    class UUserWidget* PropertyWidget;                                                // 0x09E8 (size: 0x8)
    float LookAtTraceInterval;                                                        // 0x09F0 (size: 0x4)
    int32 MaxLookAtTraceQueryAttempts;                                                // 0x0A04 (size: 0x4)
    TMap<class TWeakObjectPtr<AActor>, class TWeakObjectPtr<UWrestlerLookAtComponent>> ActorToLookAtCompMap; // 0x0A08 (size: 0x50)
    TArray<TWeakObjectPtr<UWrestlerLookAtComponent>> ActiveLookAtComponents;          // 0x0A58 (size: 0x10)

    void UpdateUITargeting(class AActor* CurrentTarget, class AActor* OldTarget);
    void ReceiveOnPlayerInput(float InDeltaTime, const FWrestlerInput& InCurrent, const FWrestlerInput& InLast);
    void ReceiveOnPlayerDeath();
    void ReceiveOnGameOver();
    FVector2D ProcessStickInput(const FWrestlerControllerSetupStick& InStick, const FVector2D& InInput, float InDeltaTime, float& OutCurrentAcceleration, bool bInUnscaled);
    void OnVentrueElixirActivated();
    void OnPreSave();
    void OnPostSave(bool bInSuccess);
    void OnMovementModeChange(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PreviousMovementMode, uint8 PreviousCustomMode);
    void OnHealthElixirActivated();
    void OnDialogueSkipped();
    void OnBrujahElixirActivated();
    void OnBloodElixirActivated();
    bool IsTargeting();
    float GetYawAxisScale();
    class AWrestlerCharacterBase* GetWrestlerCharacter();
    class AActor* GetTarget();
    float GetPitchAxisScale();
    FWrestlerInput GetFrameInput();
    float GetForwardInput();
}; // Size: 0xA70

class AWrestlerControllerLoadScreen : public AWrestlerPlayerController
{
}; // Size: 0x890

class AWrestlerCrowdCharacter : public ACharacter
{
    class UWrestlerModularCharacter* ModularCharacterComponent;                       // 0x0680 (size: 0x8)
    class UWrestlerModularCharacterProfile* ModularCharacterProfile;                  // 0x0688 (size: 0x8)
    bool bCanMove;                                                                    // 0x0690 (size: 0x1)
    bool bUseAudio;                                                                   // 0x0691 (size: 0x1)
    bool bLazyLoad;                                                                   // 0x0692 (size: 0x1)
    FName SignificanceTag;                                                            // 0x0694 (size: 0x8)
    bool bAddToSignificanceManager;                                                   // 0x069C (size: 0x1)
    float SignificanceManagerMaxDrawDistance;                                         // 0x06A0 (size: 0x4)

    void OnDeath();
}; // Size: 0x6B0

class AWrestlerCrowdKillVolume : public AActor
{
    TSoftClassPtr<AWrestlerCrowdCharacter> CrowdClass;                                // 0x0298 (size: 0x28)
    TSubclassOf<class AWrestlerCrowdCharacter> LoadedCrowdClass;                      // 0x02C0 (size: 0x8)
    class USceneComponent* SceneComponent;                                            // 0x02C8 (size: 0x8)
    TArray<TWeakObjectPtr<AWrestlerCrowdCharacter>> OverlappingCrowd;                 // 0x02D0 (size: 0x10)

    void KillOverlappingCrowd();
    TArray<class AWrestlerCrowdCharacter*> GetOverlappingCrowd();
}; // Size: 0x2E0

class AWrestlerDeadBody : public AActor
{
    class UWrestlerAIPerceptionStimuliSource* StimuliSource;                          // 0x02B8 (size: 0x8)
    TArray<FName> SightTargets;                                                       // 0x02C0 (size: 0x10)
    FWrestlerDeadBodyOnDeadBodyDestroyed OnDeadBodyDestroyed;                         // 0x02D0 (size: 0x10)
    void DeadBodyDestroyedDelegate(class AActor* DeadBodyActor);
    FGameplayTag CharacterTag;                                                        // 0x02E0 (size: 0x8)
    EWrestlerGameTeam GameTeam;                                                       // 0x02E8 (size: 0x1)
    FPoseSnapshot DeadBodySnapshot;                                                   // 0x02F0 (size: 0x38)
    TSubclassOf<class UAISense> SenseToSelfRegister;                                  // 0x0328 (size: 0x8)
    class UWrestlerModularCharacterProfile* ModularCharacterProfile;                  // 0x0330 (size: 0x8)
    bool bHasUVGlow;                                                                  // 0x0338 (size: 0x1)
    FGameplayTag DeathBehaviourTag;                                                   // 0x033C (size: 0x8)
    class UAkSwitchValue* EnemyTypeAudioSwitch;                                       // 0x0348 (size: 0x8)
    FGameplayTagContainer OwnedCharacterTags;                                         // 0x0350 (size: 0x20)
    class USkeletalMeshComponent* DeadBodyMesh;                                       // 0x0370 (size: 0x8)
    class UHeraAudioCharacterComponent* AudioCharacterComponent;                      // 0x0378 (size: 0x8)
    float CorpseLifeSpan;                                                             // 0x0380 (size: 0x4)
    float CorpseDisposalDistance;                                                     // 0x0384 (size: 0x4)
    bool bIsInDialogue;                                                               // 0x0399 (size: 0x1)
    bool bIsSpeaking;                                                                 // 0x039A (size: 0x1)

    void SetIsSpeaking(const bool bIsSpeaking);
    void SetIsInDialogue(const bool bInDialogue);
    void SetIsInCutscene(const bool bInCutscene);
    void SetGameTeam(EWrestlerGameTeam InGameTeam);
    void SetDeathPose();
    void SetCharacterProfile(class UWrestlerModularCharacterProfile* InCharacterProfiler);
    bool MatchesCharacterTag(const FGameplayTag& InCharacterTag);
    class USkeletalMeshComponent* GetSkeletalMeshComp();
    bool GetIsSpeaking();
    bool GetIsInDialogue();
    bool GetIsInCutscene();
    class UAkSwitchValue* GetEnemyTypeAudioSwitch();
    FGameplayTag GetDialogueCharacterTag();
    FPoseSnapshot GetDeadBodySnapshot();
    class UAkGameObject* GetAudioComponent();
    class UHeraAudioCharacterComponent* GetAudioCharacterComponent();
    FString GetActorName();
}; // Size: 0x3A0

class AWrestlerDebugCamera : public AActor
{
    class USpringArmComponent* SpringArmComponent;                                    // 0x0298 (size: 0x8)
    class UCameraComponent* CameraComponent;                                          // 0x02A0 (size: 0x8)
    FString CameraName;                                                               // 0x02A8 (size: 0x10)

    void SetCameraPresent(int32 InCameraPresentIndex);
}; // Size: 0x2B8

class AWrestlerDefendZone : public AActor
{
    int32 AcceptablePointCount;                                                       // 0x0298 (size: 0x4)
    TArray<FVector> Points;                                                           // 0x02A0 (size: 0x10)

    bool IsPointInsideZone(FVector Point, float ExtentMultiplier, bool IncludeHysteresis);
    bool IsInQueryResponseRange(FVector Vector);
    TArray<FVector> GetPoints();
    TArray<FVector> GetEQGPoints(const FVector& InLocation, const float InQueryRange);
}; // Size: 0x2B0

class AWrestlerDialogueActor : public AActor
{
    bool bIsInDialogue;                                                               // 0x02A8 (size: 0x1)
    bool bIsInCutscene;                                                               // 0x02A9 (size: 0x1)
    bool bIsSpeaking;                                                                 // 0x02AA (size: 0x1)
    FGameplayTag DialogueCharacterTag;                                                // 0x02AC (size: 0x8)

    void SetIsSpeaking(const bool bIsSpeaking);
    void SetIsInDialogue(const bool bInDialogue);
    void SetIsInCutscene(const bool bInCutscene);
    bool MatchesCharacterTag(const FGameplayTag& InCharacterTag);
    class USkeletalMeshComponent* GetSkeletalMeshComp();
    bool GetIsSpeaking();
    bool GetIsInDialogue();
    bool GetIsInCutscene();
    FGameplayTag GetDialogueCharacterTag();
    class UAkGameObject* GetAudioComponent();
    class UHeraAudioComponent* GetAudioComp();
    FString GetActorName();
}; // Size: 0x2B8

class AWrestlerDialogueLevelSequenceActor : public ALevelSequenceActor
{
    bool bIsInDialogue;                                                               // 0x0348 (size: 0x1)
    bool bIsInCutscene;                                                               // 0x0349 (size: 0x1)
    bool bIsSpeaking;                                                                 // 0x034A (size: 0x1)
    FGameplayTag DialogueCharacterTag;                                                // 0x034C (size: 0x8)

    void SetIsSpeaking(const bool bIsSpeaking);
    void SetIsInDialogue(const bool bInDialogue);
    void SetIsInCutscene(const bool bInCutscene);
    bool MatchesCharacterTag(const FGameplayTag& InCharacterTag);
    class USkeletalMeshComponent* GetSkeletalMeshComp();
    bool GetIsSpeaking();
    bool GetIsInDialogue();
    bool GetIsInCutscene();
    FGameplayTag GetDialogueCharacterTag();
    class UAkGameObject* GetAudioComponent();
    class UHeraAudioComponent* GetAudioComp();
    FString GetActorName();
}; // Size: 0x358

class AWrestlerDialogueRig : public AHeraDialogueRig
{
    class UHeraMissionObjective* MissionObjective;                                    // 0x03F0 (size: 0x8)
    TSubclassOf<class UWrestlerDialogueAbilitylData> DialogueAbilityData;             // 0x03F8 (size: 0x8)
    TSoftObjectPtr<UHeraPropertyBool> InteractionProperty;                            // 0x0400 (size: 0x28)
    class UHeraMissionActorComponent* MissionActorComponent;                          // 0x0428 (size: 0x8)
    class UWrestlerInteractionComponent* StartDialogueInteraction;                    // 0x0430 (size: 0x8)
    FGameplayTagContainer OwnedGameplayTags;                                          // 0x0438 (size: 0x20)

    void SetInteractionPropertyPayload(const bool bIsActive);
    void OnStartDialogueInteraction(class AActor* InInteractingActor);
}; // Size: 0x460

class AWrestlerDoor : public AInteractableQuestActor
{
}; // Size: 0x2F8

class AWrestlerDoorActorBase : public AWrestlerActorInteractionBase
{
}; // Size: 0x2C0

class AWrestlerDynamicMaskObject : public AActor
{
}; // Size: 0x2A8

class AWrestlerEnemyCharacter : public AWrestlerAICharacter
{
    FWrestlerEnemyCharacterPCSBlockingStateDelegate PCSBlockingStateDelegate;         // 0x0BD0 (size: 0x10)
    void OnPSCBlockingState(const bool bBlocking, const EWrestlerEnemyType InEnemyType, class AActor* InInstigator);
    FName DebugEnemyTypeName;                                                         // 0x0BE0 (size: 0x8)
    class UAkSwitchValue* DebugEnemyTypeAudioSwitch;                                  // 0x0BE8 (size: 0x8)
    TSoftClassPtr<AActor> DebugDeadActorClass;                                        // 0x0BF0 (size: 0x28)
    TSoftObjectPtr<UStateTree> DebugStateTree;                                        // 0x0C18 (size: 0x28)
    TSubclassOf<class AController> DebugAIControllerClass;                            // 0x0C40 (size: 0x8)
    class UWrestlerEquipmentDefinition* DebugWeaponDefiniton;                         // 0x0C48 (size: 0x8)
    TSubclassOf<class UWrestlerWeaponInstance> DebugWeaponInstanceClass;              // 0x0C50 (size: 0x8)
    class UAnimDataAsset* DebugAnimAsset;                                             // 0x0C58 (size: 0x8)
    class UWrestlerControlComponent* ControlComponent;                                // 0x0C90 (size: 0x8)
    class UWrestlerAIPatrolComponent* PatrolComponent;                                // 0x0C98 (size: 0x8)
    class UHeraMissionActorComponent* HeraMissionActorComponent;                      // 0x0CA0 (size: 0x8)
    class UWrestlerAIPerceptionStimuliSource* PerceptionStimuliSourceComponent;       // 0x0CA8 (size: 0x8)
    class UWrestlerEquipmentManagerComponent* EquipmentManagerComponent;              // 0x0CB0 (size: 0x8)
    class UWrestlerRouteFollowingComponent* RouteFollowingComponent;                  // 0x0CB8 (size: 0x8)
    class UWrestlerStateTreeComponent* StateTreeComponent;                            // 0x0CC0 (size: 0x8)
    class UWrestlerCharacterFloorControlComponent* CharacterFloorControl;             // 0x0CC8 (size: 0x8)
    FName PCSTeamTag;                                                                 // 0x0CD0 (size: 0x8)
    float MoveToTolerance;                                                            // 0x0CD8 (size: 0x4)
    class UHeraMissionObjective* DeathObjective;                                      // 0x0CE0 (size: 0x8)
    class UHeraMissionObjective* StunObjective;                                       // 0x0CE8 (size: 0x8)
    class UHeraMissionObjective* AwareOfPlayerObjective;                              // 0x0CF0 (size: 0x8)
    class UHeraMissionObjective* DetectedPlayerObjective;                             // 0x0CF8 (size: 0x8)
    class UHeraMissionObjective* TKedObjective;                                       // 0x0D00 (size: 0x8)
    class UWrestlerEnemyHealthStunWidgetComponent* UIHealthStunWidgetComponent;       // 0x0D08 (size: 0x8)
    class UWrestlerEnemyAlertnessWidgetComponent* UIAlertnessWidgetComponent;         // 0x0D10 (size: 0x8)
    class UWrestlerTaskDebugWidgetComponent* TaskDebugWidgetComponent;                // 0x0D18 (size: 0x8)
    class AWrestlerPatrolRoute* PatrolRoute;                                          // 0x0D20 (size: 0x8)
    float CanBeFedOnTime;                                                             // 0x0D28 (size: 0x4)
    TSubclassOf<class UUserWidget> TagWidgetClass;                                    // 0x0D30 (size: 0x8)
    FName EnemyTypeName;                                                              // 0x0D44 (size: 0x8)
    FName EnemyDebugName;                                                             // 0x0D4C (size: 0x8)
    FName SignificanceTag;                                                            // 0x0D54 (size: 0x8)
    bool bAddToSignificanceManager;                                                   // 0x0D5C (size: 0x1)
    float SignificanceManagerMaxDrawDistance;                                         // 0x0D60 (size: 0x4)
    TArray<class UWrestlerModularCharacterProfile*> ModularCharacterProfiles;         // 0x0D68 (size: 0x10)
    class UAkSwitchValue* EnemyTypeAudioSwitch;                                       // 0x0D78 (size: 0x8)
    class UAkSwitchValue* WeaponAudioSwitch;                                          // 0x0D80 (size: 0x8)
    class UAnimDataAsset* AnimationSet;                                               // 0x0D88 (size: 0x8)
    class UWrestlerMovementSetData* MovementSet;                                      // 0x0D90 (size: 0x8)
    FWrestlerMovementSetInfo CurrentMovementSettings;                                 // 0x0D98 (size: 0x18)
    FWrestlerRangedRotateConfig RangedRotationSettings;                               // 0x0DB0 (size: 0x28)
    TWeakObjectPtr<class AWrestlerAISpawner> Spawner;                                 // 0x0DD8 (size: 0x8)

    void ToggleDebug(const bool bOutDebug);
    bool ShouldApplyPlayerOffset();
    void SetInteractedWithPlayer(const bool InHasInteractedWithPlayer);
    void SetDebugDetails();
    void SetCanTalk(const bool CanTalk);
    void SetAnimationAsset(class UAnimDataAsset* InAnimAsset);
    void RaiseTKedObjective();
    void PrintDebugDetails();
    void PlayBark(FGameplayTag& BarkTag);
    void MoveTo_Internal(const FVector& InDestination);
    bool IsMassCharacter();
    class UAkSwitchValue* GetWeaponAudioSwitch();
    class UWrestlerMovementSetData* GetMovementSet();
    bool GetInteractedWithPlayer();
    FName GetEnemyTypeName();
    class UAkSwitchValue* GetEnemyTypeAudioSwitch();
    class UWrestlerEnemySubsystem* GetEnemySubsystem();
    class UWrestlerConfigDataAsset_EnemyStats* GetEnemyStatsDataAsset();
    FName GetEnemyDebugName();
    class UWrestlerDataAsset_ModularEnemies* GetEnemies();
    float GetDamageAmountByTag(FGameplayTag InDamageTag);
    FWrestlerMovementSetInfo GetCurrentMovementSettings();
    bool GetCanTalk();
    class UAnimDataAsset* GetAnimationSet();
    void EventOnStunChanged(float CurrentValue, float MaxValue);
    void ChangeWeapon(TSubclassOf<class UWrestlerEquipmentDefinition> InWeapon, TSoftObjectPtr<UAnimDataAsset> InAnimation, TSoftObjectPtr<UWrestlerMovementSetData> InMovement, FName InTaskOverride, class AActor*& OutOldWeapon, class AActor*& OutNewWeapon);
}; // Size: 0xE20

class AWrestlerEnemyController : public AWrestlerAIController
{
    bool bEnemySightDisabled;                                                         // 0x0410 (size: 0x1)
    bool bUseFocusAimOffsets;                                                         // 0x0411 (size: 0x1)
    bool bAutoEnableStreaming;                                                        // 0x0412 (size: 0x1)
    class UWrestlerBehaviorTreeComponent* BehaviourTreeComponent;                     // 0x0418 (size: 0x8)
    class UWrestlerTokenSinkComponent* TokenSinkComponent;                            // 0x0420 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSourceComponent; // 0x0428 (size: 0x8)
    FWrestlerEnemyBehaviours DefaultEnemyBehaviours;                                  // 0x0430 (size: 0x50)
    TMap<class FName, class FWrestlerEnemyBehaviours> EnemyCombatBehaviours;          // 0x0480 (size: 0x50)
    FName BBKeyLastSensedLocation;                                                    // 0x04DC (size: 0x8)
    FName BBKeyLastSeenLocation;                                                      // 0x04E4 (size: 0x8)
    FName BBKeyLastHeardLocation;                                                     // 0x04EC (size: 0x8)
    FName BBKeyLastSensedLocationWasHearing;                                          // 0x04F4 (size: 0x8)
    FName BBKeyMoveToLocation;                                                        // 0x04FC (size: 0x8)
    FName BBKeyStunTimer;                                                             // 0x0504 (size: 0x8)
    bool bUseHardSetRotation;                                                         // 0x050C (size: 0x1)
    FGameplayTag stun;                                                                // 0x0510 (size: 0x8)
    FGameplayTag combat;                                                              // 0x0518 (size: 0x8)
    FGameplayTag dash;                                                                // 0x0520 (size: 0x8)
    FName ConfigDataName;                                                             // 0x0528 (size: 0x8)
    FName CombatConfigName;                                                           // 0x0530 (size: 0x8)
    FGameplayTag TeamBattleFinishedTag;                                               // 0x0540 (size: 0x8)
    FGameplayTag SearchFinishedTag;                                                   // 0x0548 (size: 0x8)
    TEnumAsByte<EWrestlerEnemySubTeam> EnemySubTeam;                                  // 0x0578 (size: 0x1)
    TArray<class AActor*> SeenDeadBodies;                                             // 0x0580 (size: 0x10)
    FName SeenDeadBodyTagName;                                                        // 0x0590 (size: 0x8)
    class AWrestlerStealthCoverVolume* SearchVolume;                                  // 0x05A0 (size: 0x8)

    void SetMoveToLocation(const FVector& MoveToLocation);
    void ReportNoiseForInvestigation(FName InStimulusTag, FVector InNoiseLocation);
    bool HasPreviouslySeenDeadBody(class AActor* InDeadBodyActor);
    TArray<FName> GetStimuliSearches();
    class AWrestlerStealthCoverVolume* GetSearchVolume();
    TEnumAsByte<EWrestlerEnemySubTeam> GetEnemySubTeam();
    TSoftObjectPtr<UBehaviorTree> GetEnemyBehaviour(FGameplayTag InGameplayTag);
}; // Size: 0x5B0

class AWrestlerEnemyPatrolPoint : public AActor
{
    float Weight;                                                                     // 0x0298 (size: 0x4)
    float TimeAtPoint;                                                                // 0x029C (size: 0x4)
    float RotationRateMultiplier;                                                     // 0x02A0 (size: 0x4)

}; // Size: 0x2A8

class AWrestlerEnemyPatrolRoute : public AActor
{
    bool bSingleRun;                                                                  // 0x0298 (size: 0x1)
    float TimeAtPoints;                                                               // 0x029C (size: 0x4)
    bool bActive;                                                                     // 0x02A0 (size: 0x1)
    TArray<FGroupedPatrolPoints> PatrolPoints;                                        // 0x02A8 (size: 0x10)
    bool bUpdateAllPatrolPoints;                                                      // 0x02B8 (size: 0x1)

    void UpdateAllPatrolPoints();
    TArray<FGroupedPatrolPoints> GetPatrolPoints();
    void DrawDebugRoute();
}; // Size: 0x2C8

class AWrestlerEnemyTraversalNavLink : public ANavLinkProxy
{
    class UWrestlerAbilitySystemComponent* AbilitySystemComponent;                    // 0x02E8 (size: 0x8)

    void NotifySmartLinkReached(class UNavLinkCustomComponent* LinkComp, class UObject* PathingAgent, const FVector& DestinationPoint);
}; // Size: 0x2F8

class AWrestlerExecuteCommandVolume : public AActor
{
    class UBoxComponent* BoxCollision;                                                // 0x0298 (size: 0x8)
    TMap<FString, float> CommandValues;                                               // 0x02A0 (size: 0x50)

}; // Size: 0x340

class AWrestlerExponentialHeightFog : public AActor
{
    FWrestlerExponentialHeightFogParameters BaseExponentialHeightFogParameters;       // 0x0298 (size: 0xA0)
    FWrestlerExponentialHeightFogParameters CurrentExponentialHeightFogParameters;    // 0x0338 (size: 0xA0)
    FWrestlerExponentialHeightFogParameters BlendStartParameters;                     // 0x03D8 (size: 0xA0)
    FWrestlerExponentialHeightFogParameters BlendEndParameters;                       // 0x0478 (size: 0xA0)
    float CurrentBlendAlpha;                                                          // 0x0518 (size: 0x4)
    class UExponentialHeightFogComponent* FogComponent;                               // 0x0520 (size: 0x8)
    uint8 bEnabled;                                                                   // 0x0528 (size: 0x1)

    void SetFogEnabled(const bool bInEnabled);
    void OnRep_bEnabled();
}; // Size: 0x530

class AWrestlerExponentialHeightFogVolume : public AWrestlerVolumeBase
{
    int32 Priority;                                                                   // 0x02D0 (size: 0x4)
    FWrestlerExponentialHeightFogParameters ExponentialHeightFogParameters;           // 0x02D8 (size: 0xA0)
    bool bPlayerCurrentlyWithin;                                                      // 0x0378 (size: 0x1)

    void OnDisableTimerEnded();
}; // Size: 0x390

class AWrestlerFakeElevator : public AWrestlerTransitionActor
{

    void ModifyElevator(bool bInWait, bool bInLock, bool bInForceOpen, bool bInForceClose);
}; // Size: 0x2E0

class AWrestlerFeedTargetActor : public AWrestlerGameplayAbilityTargetActor_TargetAssisted
{
    FGameplayTagContainer TargetFilterOutTags;                                        // 0x0450 (size: 0x20)
    FGameplayTagContainer TargetFilterInTags;                                         // 0x0470 (size: 0x20)
    float VerticalRangeAbove;                                                         // 0x0490 (size: 0x4)

    void ShowPassiveReticle();
    void HidePassiveReticle();
    TSubclassOf<class UInterface> GetFilterInterface();
    void EnableTargetActor();
    void DisableTargetActor();
    void BP_OnTargetingStarted();
}; // Size: 0x4A0

class AWrestlerGA_GetTargetActor : public AGameplayAbilityTargetActor
{
    float ScanRange;                                                                  // 0x03E0 (size: 0x4)

}; // Size: 0x3F0

class AWrestlerGameModeBase : public AHeraGameMode
{
    class UHeraPropertyInt* PI_UI_MenuID;                                             // 0x0380 (size: 0x8)
    TSoftClassPtr<UAbilitySystemGlobals> AbilityGlobalsClass;                         // 0x0388 (size: 0x28)
    class UAkStateValue* LoadingFinishedAudioState;                                   // 0x03B0 (size: 0x8)

    void StopLongRunningSoakTest();
    void StartLongRunningSoakTest();
    void SetCurrentMenuID(EWrestlerMenu InMenuID);
    void OnLoadingScreenVisibilityChanged(bool bInVisibility);
    bool IsLongRunningSoakTestRunning();
    EWrestlerMenu GetCurrentMenuID();
}; // Size: 0x3E0

class AWrestlerGameState : public AGameState
{
}; // Size: 0x310

class AWrestlerGameStateInGame : public AWrestlerGameState
{
    class UWrestlerAISpawnHelper* AISpawnHelper;                                      // 0x0310 (size: 0x8)
    class UWrestlerEnemyAudioController* EnemyAudioController;                        // 0x0318 (size: 0x8)
    class UWrestlerClanPerkUsageEvaluator* ClanPerkUsageEvaluator;                    // 0x0320 (size: 0x8)

    class UWrestlerClanPerkUsageEvaluator* GetClanPerkUsageEvaluator();
    class UWrestlerAISpawnHelper* GetAISpawnerHelper();
}; // Size: 0x328

class AWrestlerGameplayAbilityTargetActor : public AGameplayAbilityTargetActor
{
    TWeakObjectPtr<class AGameplayAbilityWorldReticle> ReticleActor;                  // 0x03E0 (size: 0x8)

    FGameplayTargetDataFilterHandle WrestlerMakeFilterHandle(class UStruct* AnyFilter);
    void ShowReticle();
    void HideReticle();
}; // Size: 0x3F0

class AWrestlerGameplayAbilityTargetActor_Persistent : public AWrestlerGameplayAbilityTargetActor
{
}; // Size: 0x3F0

class AWrestlerGameplayAbilityTargetActor_SphereTarget : public AWrestlerGameplayAbilityTargetActor
{
    float OverlapRadius;                                                              // 0x03E8 (size: 0x4)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x03EC (size: 0x1)

    bool GetPlayerLookAtPoint(FVector& OutViewPoint);
}; // Size: 0x3F0

class AWrestlerGameplayAbilityTargetActor_SphereTrace : public AWrestlerActor_Trace
{
    float Radius;                                                                     // 0x03F8 (size: 0x4)
    bool bTraceByChannel;                                                             // 0x03FC (size: 0x1)
    bool bReticleUseEyeLocation;                                                      // 0x03FD (size: 0x1)
    bool bPitchRangeReduction;                                                        // 0x03FE (size: 0x1)
    float PitchedRange;                                                               // 0x0400 (size: 0x4)
    TEnumAsByte<ECollisionChannel> Channel;                                           // 0x0408 (size: 0x1)

}; // Size: 0x410

class AWrestlerGameplayAbilityTargetActor_TargetAssisted : public AWrestlerGameplayAbilityTargetActor
{
    float Radius;                                                                     // 0x03E8 (size: 0x4)
    float MaxAngleDegrees;                                                            // 0x03EC (size: 0x4)
    float MaxAnglePitchDegrees;                                                       // 0x03F0 (size: 0x4)
    float WeightDistance;                                                             // 0x03F4 (size: 0x4)
    float WeightAngle;                                                                // 0x03F8 (size: 0x4)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x03FC (size: 0x1)
    float SphereCastPeriod;                                                           // 0x0400 (size: 0x4)
    float SphereCastDistance;                                                         // 0x0404 (size: 0x4)
    float SphereCastRadius;                                                           // 0x0408 (size: 0x4)
    TEnumAsByte<ECollisionChannel> LineOfSightTestCollisionChannel;                   // 0x0420 (size: 0x1)
    bool bRequireLineOfSight;                                                         // 0x0421 (size: 0x1)
    float LineOfSightTestSphereRadius;                                                // 0x0424 (size: 0x4)
    bool bFindTargetOnConfirm;                                                        // 0x0428 (size: 0x1)
    class AActor* CurrentTarget;                                                      // 0x0430 (size: 0x8)

}; // Size: 0x450

class AWrestlerGameplayAbilityTargetActor_Telekinesis : public AWrestlerGameplayAbilityTargetActor_TargetAssisted
{
}; // Size: 0x450

class AWrestlerGameplayAbilityTargetActor_TelekinesisTrajectory : public AWrestlerGameplayAbilityTargetActor_Persistent
{
    float ReticleTeleportThreshold;                                                   // 0x03E8 (size: 0x4)
    float TrajectorySmoothRate;                                                       // 0x03EC (size: 0x4)

    void RecalculateTrajectory();
}; // Size: 0x470

class AWrestlerGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
{

    void WhileActiveAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
    void OnRemoveAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
    void OnExecuteAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
    void OnActiveAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
}; // Size: 0x308

class AWrestlerGameplayCueNotify_MassActor : public AWrestlerGameplayCueNotify_Actor
{
    class AActor* TargetActor;                                                        // 0x0308 (size: 0x8)

    void OnMassTargetActorChanged(class AActor* PreviousActor, class AActor* NewActor);
    void OnMassEntityDisabled();
}; // Size: 0x318

class AWrestlerHUD : public AHeraHUD
{

    void ShowDLCEntitlementsChangedPrompt();
    void ReturnToMainMenu();
    class UHeraFadeWidget* GetFadeOverlayWidget();
}; // Size: 0x460

class AWrestlerHUDFrontEnd : public AWrestlerHUD
{
}; // Size: 0x460

class AWrestlerHUDInGame : public AWrestlerHUD
{

    void ReceiveOnGameOver();
    void ReceiveOnDeadByMasquerade();
}; // Size: 0x460

class AWrestlerHUDLoadScreen : public AWrestlerHUD
{
}; // Size: 0x460

class AWrestlerHighlightVFXActor : public AActor
{

    void UpdateMassParticle(class AActor* InParticleActor, const FWrestlerHighlightUpdateData& InUpdateData);
    class AActor* SpawnMassParticleEffect(const FWrestlerHighlightUpdateData& InUpdateData, class USceneComponent* AttachParentComponent);
    bool IsCleaningUp();
    float GetHighlightRadius();
    void CleanUpAndDestroy();
}; // Size: 0x2A0

class AWrestlerHoudiniContainer : public APartitionActor
{
}; // Size: 0x298

class AWrestlerInteractionTargetActor : public AWrestlerGameplayAbilityTargetActor_TargetAssisted
{
    int32 ReticleLimit;                                                               // 0x0450 (size: 0x4)
    float ChosenTargetDist;                                                           // 0x0454 (size: 0x4)
    float ChosenTargetScore;                                                          // 0x0458 (size: 0x4)
    float LOSBreakDistance;                                                           // 0x045C (size: 0x4)
    bool bUpdateCrosshairUI;                                                          // 0x0460 (size: 0x1)
    float CrossRadius;                                                                // 0x0464 (size: 0x4)
    TMap<class USceneComponent*, class FWrestlerScoredInteraction> Scores;            // 0x0478 (size: 0x50)
    class AWrestlerHUD* CrosshairHUD;                                                 // 0x04F8 (size: 0x8)
    int32 MaxCrosshairTraceQueryAttempts;                                             // 0x050C (size: 0x4)

    bool GetInteractionFromTargetData(const FGameplayAbilityTargetDataHandle& InHandle, int32 InIndex, FWrestlerInteractionTarget& OutInteraction);
}; // Size: 0x520

class AWrestlerInteractionWorldReticle : public AGameplayAbilityWorldReticle
{
    class UWrestlerInteractionComponent* CurrentTarget;                               // 0x02C8 (size: 0x8)
    class UWrestlerInteractionWidgetComponent* InteractionWidgetComponent;            // 0x02D0 (size: 0x8)
    float ExipryDuration;                                                             // 0x02D8 (size: 0x4)
    class UWrestlerInteractionWidget* InteractionWidget;                              // 0x02E0 (size: 0x8)

    void OnPlayerHudVisibilityChanged(bool bIsVisible);
    void OnHudHideForGameOver();
    void Interact(class AActor* InInteractingActor);
}; // Size: 0x2F0

class AWrestlerLevelStreamingVolume : public ALevelStreamingVolume
{
    class UHeraPropertyComponentBool* StreamingVolumeEnabledPropertyComponent;        // 0x02E8 (size: 0x8)
    class UHeraMissionActorComponent* HeraMissionActorComponent;                      // 0x02F0 (size: 0x8)

    void OnStreamingVolumeEnabledPropertyChanged(bool bInNewValue);
}; // Size: 0x2F8

class AWrestlerLightActorBase : public AActor
{
    class UWrestlerLightActorComponent* MainLights;                                   // 0x02A0 (size: 0x8)
    class UWrestlerLightActorComponent* SecondaryLights;                              // 0x02A8 (size: 0x8)
    class UHeraAudioMassComponent* Audio;                                             // 0x02B0 (size: 0x8)
    EWrestlerLightActorFixedTickRate FixedLightTickRate;                              // 0x02B8 (size: 0x1)
    class UAkRtpc* AudioIntensityRTPC;                                                // 0x02C0 (size: 0x8)
    bool AddToSignificanceManager;                                                    // 0x02C8 (size: 0x1)
    FName SignificanceTag;                                                            // 0x02CC (size: 0x8)

    void OnLightEnabledChanged(class UWrestlerLightActorComponent* InComponent, bool bIsEnabled);
}; // Size: 0x2E8

class AWrestlerLightmaster : public AHeraLightingActorBase
{
    class USceneComponent* VFXBurst;                                                  // 0x02E0 (size: 0x8)
    class USceneComponent* Lights;                                                    // 0x02E8 (size: 0x8)
    class USceneComponent* Meshes;                                                    // 0x02F0 (size: 0x8)
    class USceneComponent* VFX;                                                       // 0x02F8 (size: 0x8)
    class USceneComponent* RotationRoot;                                              // 0x0300 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0308 (size: 0x8)
    class UTimelineComponent* OnFadeTimelineInternal;                                 // 0x0310 (size: 0x8)
    class UTimelineComponent* OffFadeTimelineInternal;                                // 0x0318 (size: 0x8)
    class UTimelineComponent* FadeOnTimeline;                                         // 0x0320 (size: 0x8)
    class UTimelineComponent* FadeOffTimeline;                                        // 0x0328 (size: 0x8)
    class UTimelineComponent* DamageTimeline;                                         // 0x0330 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> EmissiveMaterialArray;                    // 0x0338 (size: 0x10)
    TArray<FWrestlerLampDamageLight> LampPostVarsArray;                               // 0x0348 (size: 0x10)
    FRotator MeshUndamagedRotation;                                                   // 0x0358 (size: 0x18)
    double DamageShakeRandomFreq;                                                     // 0x0370 (size: 0x8)
    double DamageShakeRandomIntensityX;                                               // 0x0378 (size: 0x8)
    double DamageShakeRandomIntensityY;                                               // 0x0380 (size: 0x8)
    double DamageShakeMultiplier;                                                     // 0x0388 (size: 0x8)
    double DamageShakeFrequency;                                                      // 0x0390 (size: 0x8)
    double DamageShakeDuration;                                                       // 0x0398 (size: 0x8)
    bool bDamageRandomShake;                                                          // 0x03A0 (size: 0x1)
    bool bEnableDamage;                                                               // 0x03A1 (size: 0x1)
    double DamageMaxAmount;                                                           // 0x03A8 (size: 0x8)
    class UMaterialInstance* DecalMaterial;                                           // 0x03B0 (size: 0x8)
    TArray<class UNiagaraComponent*> BurstParticleArrayNiagara;                       // 0x03B8 (size: 0x10)
    bool bVFXOn;                                                                      // 0x03C8 (size: 0x1)
    bool bVFXisOn;                                                                    // 0x03C9 (size: 0x1)
    bool bCurveFlickerOn;                                                             // 0x03CA (size: 0x1)
    bool bCurveFlickerInEditor;                                                       // 0x03CB (size: 0x1)
    bool bFlickerOnlyAffectsEmissive;                                                 // 0x03CC (size: 0x1)
    class UCurveFloat* FlickerCurve;                                                  // 0x03D0 (size: 0x8)
    double FlickerSpeed;                                                              // 0x03D8 (size: 0x8)
    bool bFlickeringAffectsTemperature;                                               // 0x03E0 (size: 0x1)
    bool bLightFadesOn;                                                               // 0x03E1 (size: 0x1)
    class UCurveFloat* OnCurve;                                                       // 0x03E8 (size: 0x8)
    double LightFadeOnMaxSpeed;                                                       // 0x03F0 (size: 0x8)
    double LightFadeOnMinSpeed;                                                       // 0x03F8 (size: 0x8)
    bool bLightFadesOff;                                                              // 0x0400 (size: 0x1)
    class UCurveFloat* OffCurve;                                                      // 0x0408 (size: 0x8)
    double GlobalFlickerValueMultiplier;                                              // 0x0410 (size: 0x8)
    double GlobalFlickerIntensityModifier;                                            // 0x0418 (size: 0x8)
    bool bIsFlickerOn_0;                                                              // 0x0420 (size: 0x1)
    float CurrentStormShakeIntensity;                                                 // 0x0424 (size: 0x4)
    bool bFlickerWhenEnergyActorNear;                                                 // 0x0428 (size: 0x1)
    double EnergyActorInfluenceMinRadius;                                             // 0x0430 (size: 0x8)
    double EnergyActorInfluenceMaxRadius;                                             // 0x0438 (size: 0x8)
    class AActor* EnergyAlteringActor;                                                // 0x0440 (size: 0x8)
    bool bEnergyAlteringActorExists;                                                  // 0x0448 (size: 0x1)
    bool bEnergyActorIsNearby;                                                        // 0x0449 (size: 0x1)
    bool bFlickerOnStormShake;                                                        // 0x044A (size: 0x1)
    double EventFlickerDecayRate;                                                     // 0x0450 (size: 0x8)
    double PowerFade;                                                                 // 0x0458 (size: 0x8)
    bool bPowerFadeAffectsTemperature;                                                // 0x0460 (size: 0x1)
    double PowerFadeTemperatureFloor;                                                 // 0x0468 (size: 0x8)
    bool bUsesLightmasterValues;                                                      // 0x0470 (size: 0x1)
    bool bLightsOn;                                                                   // 0x0471 (size: 0x1)
    double EmissiveIntensity;                                                         // 0x0478 (size: 0x8)
    FLinearColor EmissiveTint;                                                        // 0x0480 (size: 0x10)
    double MainLightIntensity;                                                        // 0x0490 (size: 0x8)
    double MainLightTemperature;                                                      // 0x0498 (size: 0x8)
    double MainLightAttenuation;                                                      // 0x04A0 (size: 0x8)
    double BounceLightIntensity;                                                      // 0x04A8 (size: 0x8)
    double BounceLightTemperature;                                                    // 0x04B0 (size: 0x8)
    double BounceLightAttenuation;                                                    // 0x04B8 (size: 0x8)
    bool bEmissiveTintUsesTemperature;                                                // 0x04C0 (size: 0x1)
    bool bValuesCached;                                                               // 0x04C1 (size: 0x1)
    TMap<ULightComponent*, double> LightIntensityCache;                               // 0x04C8 (size: 0x50)
    TMap<ULightComponent*, double> LightTemperatureCache;                             // 0x0518 (size: 0x50)
    class AWrestlerCharacter* Character;                                              // 0x0568 (size: 0x8)
    TArray<class ULightComponent*> LightComponents;                                   // 0x0570 (size: 0x10)
    TArray<FWrestlerLightComponent> LightComponentData;                               // 0x0580 (size: 0x10)
    bool bLightsFound;                                                                // 0x0590 (size: 0x1)
    TArray<class ULightComponent*> MainLights;                                        // 0x0598 (size: 0x10)
    class ULightComponent* BounceLight;                                               // 0x05A8 (size: 0x8)
    TArray<class UStaticMeshComponent*> MeshComponents;                               // 0x05B0 (size: 0x10)
    TArray<FWrestlerLightMesh> EmissiveLightMeshes;                                   // 0x05C0 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> DynamicEmissiveMaterials;                 // 0x05D0 (size: 0x10)
    bool bNoDynamicMaterials;                                                         // 0x05E0 (size: 0x1)
    double OriginalAverageLightTemperature;                                           // 0x05E8 (size: 0x8)
    double SumOfTemperatures;                                                         // 0x05F0 (size: 0x8)
    bool bMeshComponentsFound;                                                        // 0x05F8 (size: 0x1)
    bool bSetMeshEmissiveLightSource;                                                 // 0x05F9 (size: 0x1)
    FString LightName;                                                                // 0x0600 (size: 0x10)
    double FlickerCurveLength;                                                        // 0x0610 (size: 0x8)
    TArray<FName> CachedMaterialSlotNames;                                            // 0x0618 (size: 0x10)
    double PlayerMinimumTickDistance;                                                 // 0x0628 (size: 0x8)
    double MaxDrawDistance;                                                           // 0x0630 (size: 0x8)
    double MaxFadeDistance;                                                           // 0x0638 (size: 0x8)
    FTimerHandle CharacterFindTimer;                                                  // 0x0640 (size: 0x8)
    int32 EnergyActorFindCounter;                                                     // 0x0648 (size: 0x4)
    double CurrentFadeValue;                                                          // 0x0650 (size: 0x8)
    double CurrentLightTemperature;                                                   // 0x0658 (size: 0x8)
    double ElapsedTime;                                                               // 0x0660 (size: 0x8)
    float CurrentRigShakeIntensity;                                                   // 0x0668 (size: 0x4)
    bool bIsFlickering;                                                               // 0x066C (size: 0x1)
    bool bLightIsChangingState;                                                       // 0x066D (size: 0x1)
    TMap<ULightComponent*, double> CachedTemperature;                                 // 0x0670 (size: 0x50)

    void EditorTick2(float InDeltaTime);
}; // Size: 0x6C0

class AWrestlerMapBoundaryActor : public ATriggerBox
{
}; // Size: 0x2A8

class AWrestlerMapCheckActor : public AActor
{
}; // Size: 0x298

class AWrestlerMapZone : public AActor
{
    class UBoxComponent* MapZoneBoundaries;                                           // 0x0298 (size: 0x8)

    FVector GetMapZoneBoundariesLocation();
    FVector GetMapZoneBoundaries();
}; // Size: 0x2A0

class AWrestlerMassActor : public AActor
{
    class UWrestlerModularCharacter* ModularCharacterComponent;                       // 0x02F0 (size: 0x8)
    class UMassAgentComponent* MassAgentComponent;                                    // 0x02F8 (size: 0x8)
    bool bCanBePooled;                                                                // 0x0300 (size: 0x1)
    int32 MaxPoolSize;                                                                // 0x0304 (size: 0x4)
    float BaseEyeHeight;                                                              // 0x0308 (size: 0x4)
    class UWrestlerModularCharacterProfile* CurrentModularCharacterProfile;           // 0x0310 (size: 0x8)

    void SetBloodResonanceTypeByTag_Native(FGameplayTag BloodTypeTag, bool bActivateImmediately);
    bool IsMale();
}; // Size: 0x318

class AWrestlerMassAwarenessIndicator : public AWrestlerMassEntityIndicator
{
    class UWidgetComponent* AwarenessWidgetComponent;                                 // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AWrestlerMassCharacter : public AWrestlerCharacterBase
{
    class UWrestlerModularCharacter* ModularCharacterComponent;                       // 0x0B20 (size: 0x8)
    class UMassAgentComponent* MassAgentComponent;                                    // 0x0B28 (size: 0x8)
    class UWrestlerCrosshairReactComponent* ReactiveCrosshairComponent;               // 0x0B30 (size: 0x8)
    bool bCanBePooled;                                                                // 0x0B38 (size: 0x1)
    int32 MaxPoolSize;                                                                // 0x0B3C (size: 0x4)
    class UWrestlerModularCharacterProfile* CurrentModularCharacterProfile;           // 0x0B40 (size: 0x8)

    void SetBloodResonanceTypeByTag_Native(FGameplayTag BloodTypeTag, bool bActivateImmediately);
    void OnTookDamage(class AActor* InDamageCauser);
    bool IsPolice();
    bool IsMale();
    void GetEntityIndexAndSerialNumber(int32& OutIndex, int32& OutSerialNumber);
    void DisconnectEntity();
}; // Size: 0xB50

class AWrestlerMassDebugDisplay : public AActor
{
    bool bIsEnabled;                                                                  // 0x0298 (size: 0x1)
    FVector2D ScreenLocation;                                                         // 0x02A0 (size: 0x10)
    bool bShowLODInfo;                                                                // 0x02B0 (size: 0x1)
    bool bShowTemplates;                                                              // 0x02B1 (size: 0x1)
    bool bShowProfiles;                                                               // 0x02B2 (size: 0x1)
    bool bShowDensity;                                                                // 0x02B3 (size: 0x1)
    bool bShowSpawningInfo;                                                           // 0x02B4 (size: 0x1)
    bool bShowMasqueradeInfo;                                                         // 0x02B5 (size: 0x1)
    bool bShowSpacingInfo;                                                            // 0x02B6 (size: 0x1)
    bool bShowBloodResonanceInfo;                                                     // 0x02B7 (size: 0x1)
    bool bShowBloodResonanceEventInfo;                                                // 0x02B8 (size: 0x1)
    bool bShowWallyInfo;                                                              // 0x02B9 (size: 0x1)
    bool bShowWallaInfo;                                                              // 0x02BA (size: 0x1)
    bool bShowMobilityInfo;                                                           // 0x02BB (size: 0x1)
    bool bShowTurningInfo;                                                            // 0x02BC (size: 0x1)
    bool bShowMassActors;                                                             // 0x02BD (size: 0x1)
    FWrestlerMassDebugLocationParameters LocationParams;                              // 0x02C0 (size: 0x20)
    float NearbyDistance;                                                             // 0x02E0 (size: 0x4)
    FWrestlerMassDebugFallDetectParameters FallDetectParams;                          // 0x02E4 (size: 0x24)
    FWrestlerMassDebugMobilityParameters MobilityParams;                              // 0x0308 (size: 0x14)
    FWrestlerMassDebugTurningParameters TurningParams;                                // 0x031C (size: 0x28)

}; // Size: 0x458

class AWrestlerMassEntityIndicator : public AActor
{
}; // Size: 0x298

class AWrestlerMassFleeingVolume : public ATriggerBox
{
    bool bActivateOnBeginPlay;                                                        // 0x02A0 (size: 0x1)
    float DistanceToPlayerToRunAway;                                                  // 0x02A4 (size: 0x4)

    bool IsVolumeActivated();
    void DeactivateVolume();
    void ActivateVolume();
}; // Size: 0x2B0

class AWrestlerMassModularCharGameMode : public AGameMode
{
    bool bRandomiseOrderOnStart;                                                      // 0x0380 (size: 0x1)
    TMap<class EWrestlerPedestrianType, class FWrestlerMassModCharProfileGroup> ProfileGroupsPerType; // 0x0388 (size: 0x50)
    TArray<TSoftObjectPtr<UWrestlerModularCharacterProfile>> ProfilesToPreview;       // 0x03D8 (size: 0x10)
    TMap<class FString, class EWrestlerMassModCharProfileState> ProfileStates;        // 0x03E8 (size: 0x50)
    TSubclassOf<class APawn> PawnClassToSpawn;                                        // 0x0438 (size: 0x8)
    TSoftObjectPtr<UWrestlerModularCharacterProfile> CurrentCharProfile;              // 0x0440 (size: 0x28)
    class APawn* PreviewPawn;                                                         // 0x0468 (size: 0x8)
    class UWrestlerModularCharacter* ModCharComp;                                     // 0x0470 (size: 0x8)
    TArray<class UPackage*> PackagesToCheckOutAndSave;                                // 0x0478 (size: 0x10)

    void ResetOutputProfiles(FName TypeName);
    void RandomiseCharacterOrder();
    void OnSkipToUnsetPressed();
    void OnPrevButtonPressed(int32 SkipAmount);
    void OnNextButtonPressed(int32 SkipAmount);
    void OnDeleteBadAssetsButtonPressed();
    void OnAssetGoodButtonPressed();
    void OnAssetBadButtonPressed();
    void ImportProfiles(FName NewTypeName);
    TArray<FName> GetPedestrianTypeNames();
    EWrestlerMassModCharProfileState GetCurrentProfileState();
    FString GetCurrentProfileInfo();
    void GenerateFromGroup(FName TypeName, int32 NumToGenerate);
    void ClearPreviewProfiles();
    void AddGoodToOutputProfiles(FName TypeName);
}; // Size: 0x490

class AWrestlerMassSpawner : public AMassSpawner
{
    FDataTableRowHandle SpawnerData;                                                  // 0x0340 (size: 0x10)
    EWrestlerPlayerMissionType Type;                                                  // 0x0350 (size: 0x1)

    void OnSpawningFinished();
    void OnMissionTypeChanged(EWrestlerPlayerMissionType CurrentMissionType);
    void OnDespawningFinished();
}; // Size: 0x358

class AWrestlerMassZGAnnotationVolume : public ATriggerBox
{
    bool bActivateOnBeginPlay;                                                        // 0x02A0 (size: 0x1)
    FZoneGraphTag AnnotationTag;                                                      // 0x02A1 (size: 0x1)

    bool IsVolumeActivated();
    void DeactivateVolume();
    void ActivateVolume();
}; // Size: 0x2A8

class AWrestlerMissionSubSystemProxy : public AHeraMissionSubSystemProxy
{
}; // Size: 0x2B8

class AWrestlerModeFrontEnd : public AWrestlerGameModeBase
{
}; // Size: 0x3E8

class AWrestlerModeInGame : public AWrestlerGameModeBase
{
    class UWrestlerWaypointComponent* WaypointComponent;                              // 0x03E0 (size: 0x8)
    class UWrestlerQuestProgressComponent* QuestProgressComponent;                    // 0x03E8 (size: 0x8)
    class UWrestlerTutorialComponent* TutorialComponent;                              // 0x03F0 (size: 0x8)
    float AbilityWheelTimeDilation;                                                   // 0x03F8 (size: 0x4)
    class AActor* TempPlayerSpawnActor;                                               // 0x0400 (size: 0x8)

    class UWrestlerWaypointComponent* GetWaypointComponent();
    class UWrestlerTutorialComponent* GetTutorialComponent();
    class UWrestlerQuestProgressComponent* GetQuestProgressComponent();
    void ClearAbilityWheelTimeDilation();
    void ApplyAbilityWheelTimeDilation();
}; // Size: 0x410

class AWrestlerModeLoadScreen : public AWrestlerGameModeBase
{
}; // Size: 0x3E0

class AWrestlerModularAIWeapon : public AActor
{

    void GetCollisionComponents(TArray<class UPrimitiveComponent*>& OutCollisionComponents, FName InCollisionTag);
}; // Size: 0x298

class AWrestlerNavigationDataChunkActor : public ANavigationDataChunkActor
{
}; // Size: 0x2E0

class AWrestlerPathPoint : public AWrestlerBasePathPoint
{
}; // Size: 0x2C8

class AWrestlerPatrolRoute : public AWrestlerBaseRoute
{
}; // Size: 0x2C0

class AWrestlerPerformanceTestActor : public AHeraPerformanceTestActor
{
    EWrestlerPerformanceCameraType CameraType;                                        // 0x0450 (size: 0x1)

}; // Size: 0x4D8

class AWrestlerPlayerController : public AHeraPlayerController
{
    bool UsingGamepad;                                                                // 0x0860 (size: 0x1)
    FWrestlerPlayerControllerOnControllerSwitched OnControllerSwitched;               // 0x0868 (size: 0x10)
    void WrestlerPlayerControllerDelegate(bool InDPad);
    class UHeraPropertyInt* GamepadTypeProperty;                                      // 0x0878 (size: 0x8)

}; // Size: 0x890

class AWrestlerPlayerParticleKillVolume : public AVolume
{
    bool bResetOnActivation;                                                          // 0x02D0 (size: 0x1)
    TSet<TSoftObjectPtr<UNiagaraSystem>> ParticleSystemExclusions;                    // 0x02D8 (size: 0x50)

}; // Size: 0x328

class AWrestlerPlayerStart : public AHeraCheckpointStartActor
{
}; // Size: 0x2F8

class AWrestlerPlayerState : public APlayerState
{
    FName ConfigDataName;                                                             // 0x0350 (size: 0x8)
    class UWrestlerTokenManager* TokenManager;                                        // 0x0358 (size: 0x8)

    class UWrestlerTokenManager* GetTokenManager();
}; // Size: 0x360

class AWrestlerPlayerStateInGame : public AWrestlerPlayerState
{
    FWrestlerPlayerStateInGameOnClanPropertyChangeEvent OnClanPropertyChangeEvent;    // 0x0368 (size: 0x10)
    void WrestlerClanPropertyChange(class UWrestlerPlayerClan* PlayerClan);
    FWrestlerPlayerStateInGameOnMissionTypePropertyChangeEvent OnMissionTypePropertyChangeEvent; // 0x0378 (size: 0x10)
    void WrestlerMissionTypeChange(EWrestlerPlayerMissionType CurrentMissionType);
    FWrestlerPlayerStateInGameOnPlayableCharacterPropertyChangeEvent OnPlayableCharacterPropertyChangeEvent; // 0x0388 (size: 0x10)
    void PlayableCharacterPropertyChange(class UWrestlerPlayerTypeDefinition* PlayableCharacter);
    FWrestlerPlayerStateInGameOnNarrativeModePropertyChangeEvent OnNarrativeModePropertyChangeEvent; // 0x0398 (size: 0x10)
    void WrestlerNarrativeModePropertyChange(bool bNarrativeMode);
    FWrestlerPlayerStateInGameOnConsumablePropertyChangeEvent OnConsumablePropertyChangeEvent; // 0x03A8 (size: 0x10)
    void WrestlerConsumablePropertyChange(EConsumableType ConsumableType, bool bHasIncreased);
    FWrestlerPlayerStateInGameOnConsumableFailedEvent OnConsumableFailedEvent;        // 0x03B8 (size: 0x10)
    void WrestlerConsumablePropertyChange(EConsumableType ConsumableType, bool bHasIncreased);
    class UHeraPropertyInt* ClanValue;                                                // 0x03C8 (size: 0x8)
    class UHeraPropertyStateTrackingList* ClanStateTrackingList;                      // 0x03D0 (size: 0x8)
    class UHeraPropertyGameplayTag* PlayerCostumeID;                                  // 0x03D8 (size: 0x8)
    class UHeraPropertyGameplayTag* PlayerHairID;                                     // 0x03E0 (size: 0x8)
    class UHeraPropertyGameplayTag* PlayerMakeUpID;                                   // 0x03E8 (size: 0x8)
    class UHeraPropertyGameplayTag* PlayerPiercingID;                                 // 0x03F0 (size: 0x8)
    class UHeraPropertyGameplayTag* PlayerEyesID;                                     // 0x03F8 (size: 0x8)
    class UHeraPropertyBool* PlayerInNarrativeMode;                                   // 0x0400 (size: 0x8)
    class UHeraPropertyGameplayTag* PlayerCharacterID;                                // 0x0408 (size: 0x8)
    int32 ConsumableCap;                                                              // 0x0410 (size: 0x4)
    class UWrestlerAttributeSet* StateAttributeSet;                                   // 0x0420 (size: 0x8)
    TMap<class EConsumableType, class UHeraPropertyInt*> ConsumableProperties;        // 0x0468 (size: 0x50)
    class UWrestlerPlayerClan* CurrentClan;                                           // 0x04C0 (size: 0x8)
    class UWrestlerPlayerTypeDefinition* CurrentPlayerType;                           // 0x04C8 (size: 0x8)
    class UWrestlerCharacterCostumesCollection* CostumesCollection;                   // 0x04D0 (size: 0x8)
    class UWrestlerCharacterHairCollection* HairCollection;                           // 0x04D8 (size: 0x8)
    class UWrestlerCharacterMakeUpCollection* MakeUpCollection;                       // 0x04E0 (size: 0x8)
    class UWrestlerCharacterPiercingCollection* PiercingCollection;                   // 0x04E8 (size: 0x8)
    class UWrestlerCharacterEyesCollection* EyesCollection;                           // 0x04F0 (size: 0x8)

    bool UpdateConsumable(EConsumableType InConsumableType, bool bShouldAdd);
    void SetUpClanAttributes(TArray<class UWrestlerAbilityDefinition*> InAbilityArray, float InMaxHealth, float InMaxBlood);
    void SetNarrativeModeEnabled(bool bInNarrativeModeEnabled);
    void SetClan(class UWrestlerPlayerClan* InClan, bool UpdateProperty);
    void OnConsumableFailed(EConsumableType InConsumableType, bool bShouldAdd);
    void MasqueradeLevelChanged(EWrestlerMasqueradeState InPrevMasqState, EWrestlerMasqueradeState InNewMasqState);
    bool IsDeadByMasquerade();
    bool IsDead();
    void InitPlayerCostume();
    float GetWalkSpeed();
    float GetShield();
    class UWrestlerCharacterPiercingDataAsset* GetPiercingDataAsset();
    class UWrestlerCharacterPiercingCollection* GetPiercingCollection();
    bool GetNarrativeModeEnabled();
    float GetMaxShield();
    float GetMaxHeightForFloorCast();
    float GetMaxHealth();
    float GetMaxBlood();
    class UWrestlerCharacterMakeUpDataAsset* GetMakeUpDataAsset();
    class UWrestlerCharacterMakeUpCollection* GetMakeUpCollection();
    float GetHeavyFallThresholdSpeed();
    float GetHealth();
    class UWrestlerCharacterHairDataAsset* GetHairDataAsset();
    class UWrestlerCharacterHairCollection* GetHairCollection();
    class UWrestlerCharacterEyesDataAsset* GetEyesDataAsset();
    class UWrestlerCharacterEyesCollection* GetEyesCollection();
    class UWrestlerCharacterCostumesCollection* GetCostumesCollection();
    class UWrestlerCharacterCostumeDataAsset* GetCostumeDataAsset();
    class UWrestlerPlayerClan* GetClan();
    int32 GetCharacterLevel();
    float GetBlood();
    class UWrestlerAttributeSet* GetAttributeSet();
    float GetAttackPower();
    void Death();
    bool CanCollectConsumable(EConsumableType InConsumableType);
}; // Size: 0x500

class AWrestlerPropVent : public AHeraFXMassActor
{
}; // Size: 0x2A8

class AWrestlerRangedProjectile : public AActor
{
    float GravityScale;                                                               // 0x0298 (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;                                        // 0x029C (size: 0x1)
    bool bShouldTraceComplex;                                                         // 0x029D (size: 0x1)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x02A0 (size: 0x10)
    float MaxLifeSpan;                                                                // 0x02B0 (size: 0x4)
    FVector Velocity;                                                                 // 0x02B8 (size: 0x18)
    float MaxDistance;                                                                // 0x02D0 (size: 0x4)
    float Speed;                                                                      // 0x02D4 (size: 0x4)
    float AccumulatedDistance;                                                        // 0x02D8 (size: 0x4)
    float DamageAmount;                                                               // 0x02DC (size: 0x4)
    FVector Gravity;                                                                  // 0x02E0 (size: 0x18)
    float CurrentLifeSpan;                                                            // 0x02F8 (size: 0x4)
    bool bHasCollided;                                                                // 0x02FC (size: 0x1)

    void ReturnToPool();
    void ProjectileActivated();
    float GetDamageAmount();
    void CollisionImpact(FHitResult OutHit);
}; // Size: 0x300

class AWrestlerScreenCaptureActor : public AActor
{
    TArray<FBufferToCapture> BuffersToCapture;                                        // 0x0298 (size: 0x10)
    class UTextureRenderTarget2D* DestinationTextureBackBuffer;                       // 0x02A8 (size: 0x8)

}; // Size: 0x2C0

class AWrestlerSeamlessTransitionActor : public AWrestlerTransitionActor
{
    FGameplayTag PlayerStartTag;                                                      // 0x02E0 (size: 0x8)

    void OnSeamlessTransitionStateChanged(EWrestlerSeamlessTravelStatus OldState, EWrestlerSeamlessTravelStatus NewState);
    FGameplayTag GetPlayerStartGameplayTag();
}; // Size: 0x2E8

class AWrestlerSearchRoute : public AWrestlerBaseRoute
{
    int32 AvailableSlots;                                                             // 0x02C0 (size: 0x4)

    void ReleaseSlot(class AActor* InActor);
    bool HasSlotAvailable();
    void ClaimSlot(class AActor* InActor);
}; // Size: 0x2D8

class AWrestlerSmartObjectDataActor : public AWrestlerSmartObjectSyncActor
{
}; // Size: 0x298

class AWrestlerSmartObjectDataTableActor : public AActor
{
    TMap<class FName, class FDataTableRowHandle> DataTableRows;                       // 0x0298 (size: 0x50)

}; // Size: 0x2E8

class AWrestlerSmartObjectMeshActor : public AWrestlerSmartObjectSyncActor
{
}; // Size: 0x298

class AWrestlerSmartObjectSyncActor : public AActor
{
}; // Size: 0x298

class AWrestlerStateTreeEventVolume : public AWrestlerVolumeBase
{
    FGameplayTag EventTag;                                                            // 0x02D0 (size: 0x8)

    void HandleActorSpawnedInVolume(class AWrestlerEnemyCharacter* InEnemyCharacter);
}; // Size: 0x2D8

class AWrestlerStealthCoverVolume : public AWrestlerVolumeBase
{
}; // Size: 0x2D0

class AWrestlerTargetPoint : public ATargetPoint
{
}; // Size: 0x298

class AWrestlerTeleportTargetPoint : public AWrestlerTargetPoint
{
    class UHeraMissionActorComponent* HeraMissionActorComponent;                      // 0x02A0 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSourceComponent; // 0x02A8 (size: 0x8)

    bool IsStreamingEnabled();
    void EnableStreaming();
    void DisableStreaming();
}; // Size: 0x2C0

class AWrestlerTokenSinkTestActor : public APawn
{
    class UWrestlerToken* HeldToken;                                                  // 0x0320 (size: 0x8)
    class UWrestlerTokenManager* SourceTokenManager;                                  // 0x0328 (size: 0x8)
    FString Status;                                                                   // 0x0330 (size: 0x10)
    FColor DebugColor;                                                                // 0x0340 (size: 0x4)

    void OnTokenStolen(const FWrestlerTokenRequestQuery& InStealersRequest);
    FString GetStatus();
    FColor GetDebugColor();
    void DoAttack();
}; // Size: 0x360

class AWrestlerTokenSourceTestActor : public AActor
{
    FName ConfigDataName;                                                             // 0x0298 (size: 0x8)
    class UWrestlerTokenManager* TokenManager;                                        // 0x02A0 (size: 0x8)

    class UWrestlerTokenManager* GetTokenManager();
}; // Size: 0x2A8

class AWrestlerTransitionActor : public AActor
{
    FGameplayTag LocationTagA;                                                        // 0x02A0 (size: 0x8)
    FGameplayTag LocationTagB;                                                        // 0x02A8 (size: 0x8)
    class UBoxComponent* LocationVolumeComponentA;                                    // 0x02B0 (size: 0x8)
    class UBoxComponent* LocationVolumeComponentB;                                    // 0x02B8 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSourceComponent; // 0x02C0 (size: 0x8)
    class UHeraMissionObjective* MissionScriptObjectiveToRaiseOnFinish;               // 0x02C8 (size: 0x8)
    FGameplayTag DestinationTag;                                                      // 0x02D4 (size: 0x8)

    void SetStreamingSourceActive(bool bIsStreamingSourceActive);
    void OnVolumeOverlapEndB(class UPrimitiveComponent* InOverlapEndComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex);
    void OnVolumeOverlapEndA(class UPrimitiveComponent* InOverlapEndComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex);
    void OnVolumeOverlapBeginB(class UPrimitiveComponent* InOverlapBeginComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex, bool bInFromSweep, const FHitResult& InSweepResult);
    void OnVolumeOverlapBeginA(class UPrimitiveComponent* InOverlapBeginComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex, bool bInFromSweep, const FHitResult& InSweepResult);
    void OnTransitionRequestCompleted();
    void OnPlayerTransitionToB();
    void OnPlayerTransitionToA();
    void OnPlayerTeleportedHere();
    void OnPlayerExitVolumeB();
    void OnPlayerExitVolumeA();
    void OnPlayerEnterVolumeB();
    void OnPlayerEnterVolumeA();
    void CalculateRelativeTransitionTransform(const class APawn* InPlayer, FWrestlerTransitionTransform& OutTransform);
    void ApplyActorRelativeTransform(class APawn* InPlayer, const FWrestlerTransitionTransform& InTransitionTransform);
}; // Size: 0x2E0

class AWrestlerTraversalActor : public AActor
{
    FGameplayTag AbilityTag;                                                          // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AWrestlerTraversalNavLinkProxy : public ANavLinkProxy
{
    FGameplayTag GameplayTagLeftToRight;                                              // 0x02E8 (size: 0x8)
    FGameplayTag GameplayTagRightToLeft;                                              // 0x02F0 (size: 0x8)
    bool bDrawDebug;                                                                  // 0x02F8 (size: 0x1)
    float Frequency;                                                                  // 0x02FC (size: 0x4)
    class AWrestlerEnemyCharacter* CrossingCharacter;                                 // 0x0300 (size: 0x8)
    class UAnimMontage* PlayingMontage;                                               // 0x0308 (size: 0x8)

    void OnMontageEnded(class UAnimMontage* InMontage, bool bInInterrupted);
    void NotifySmartLinkReached(class UNavLinkCustomComponent* LinkComp, class UObject* PathingAgent, const FVector& DestPoint);
}; // Size: 0x318

class AWrestlerTraversalTargetActor : public AWrestlerGameplayAbilityTargetActor
{
    FVector LocalSearchOffset;                                                        // 0x03F0 (size: 0x18)
    float SearchCapsuleRadius;                                                        // 0x0408 (size: 0x4)
    float SearchCapsuleHeight;                                                        // 0x040C (size: 0x4)
    TSubclassOf<class AActor> SearchClass;                                            // 0x0410 (size: 0x8)

}; // Size: 0x430

class AWrestlerTrespassingVolume : public ATriggerVolume
{
    bool bEnableOnBeginPlay;                                                          // 0x02D0 (size: 0x1)

    void TurnOn();
    void TurnOff();
    void OnActorEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnActorBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    bool IsTurnedOn();
}; // Size: 0x2D8

class AWrestlerTurnOffMassEntityVolume : public AWrestlerMassZGAnnotationVolume
{
    EWrestlerTurnOffVolumeMode TurnOffMode;                                           // 0x02E8 (size: 0x1)
    class UNavModifierComponent* NavModifier;                                         // 0x02F0 (size: 0x8)

    void ClearMassEntitiesInside();
}; // Size: 0x2F8

class AWrestlerUltraVolumetricsActor : public AActor
{
    class USceneComponent* Root;                                                      // 0x0298 (size: 0x8)
    class UWrestlerUltraVolumetricsFogPreset* FogPreset;                              // 0x02A0 (size: 0x8)
    FWrestlerUltraVolumetricsFogParameters FogParameters;                             // 0x02A8 (size: 0x68)
    class UStaticMeshComponent* Fog;                                                  // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x0318 (size: 0x8)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0320 (size: 0x10)
    TArray<class UMaterialInterface*> MaterialsDF;                                    // 0x0330 (size: 0x10)
    bool bRandomizeWithDistanceFields;                                                // 0x0340 (size: 0x1)

}; // Size: 0x348

class AWrestlerVolumeBase : public AVolume
{
}; // Size: 0x2D0

class AWrestlerWaypoint : public AWrestlerTargetPoint
{
    TSoftObjectPtr<AWrestlerWaypoint> ParentWaypoint;                                 // 0x02A0 (size: 0x28)
    TSoftObjectPtr<AWrestlerWaypoint> ChildWaypoint;                                  // 0x02C8 (size: 0x28)
    class UHeraMissionActorComponent* MissionActorComponent;                          // 0x02F0 (size: 0x8)
    TSoftObjectPtr<UHeraMissionObjective> Objective;                                  // 0x02F8 (size: 0x28)
    TSoftObjectPtr<AActor> InteractionActor;                                          // 0x0320 (size: 0x28)
    FComponentReference Interaction;                                                  // 0x0348 (size: 0x28)
    bool bMoveToInteraction;                                                          // 0x0370 (size: 0x1)
    float DisappearDistance;                                                          // 0x0374 (size: 0x4)

    void OnInteractionBegin(class AActor* InInteractingActor);
    void ActivateWaypoint();
}; // Size: 0x390

class AWrestlerWaypointActor : public AActor
{
    float TraceInitialHeight;                                                         // 0x0298 (size: 0x4)

}; // Size: 0x2A8

class AWrestlerWaypointSplineActor : public AActor
{
    FGameplayTag QuestTag;                                                            // 0x0298 (size: 0x8)
    float MinDistanceThreshold;                                                       // 0x02A0 (size: 0x4)
    float OffsetDistance;                                                             // 0x02A4 (size: 0x4)
    class USplineComponent* WaypointSpline;                                           // 0x02A8 (size: 0x8)
    EWrestlerWaypointMode WaypointMode;                                               // 0x02B0 (size: 0x1)

}; // Size: 0x2B8

class AWrestlerWaypoint_BoxTrigger : public AWrestlerWaypoint_Trigger
{
    class UShapeComponent* Collider;                                                  // 0x03D0 (size: 0x8)

}; // Size: 0x3D8

class AWrestlerWaypoint_Location : public AWrestlerWaypoint
{
    class UHeraPropertyComponentGameplayTag* PlayerLocationPropertyComponent;         // 0x0390 (size: 0x8)
    FGameplayTag SourceLocation;                                                      // 0x0398 (size: 0x8)
    FGameplayTag TargetLocation;                                                      // 0x03A0 (size: 0x8)

}; // Size: 0x3A8

class AWrestlerWaypoint_SphereTrigger : public AWrestlerWaypoint_Trigger
{
    class UShapeComponent* Collider;                                                  // 0x03D0 (size: 0x8)

}; // Size: 0x3D8

class AWrestlerWaypoint_Trigger : public AWrestlerWaypoint
{
    TArray<class AWrestlerWaypoint_Trigger*> Listeners;                               // 0x0398 (size: 0x10)
    WrestlerWaypointPassCondition PassCondition;                                      // 0x03B8 (size: 0x4)
    TArray<class AWrestlerWaypoint_Trigger*> ReferenceTriggers;                       // 0x03C0 (size: 0x10)

    void OnEndOverlapTimerEnded(class AActor* OtherActor);
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x3D0

class AWrestlerWeather : public AActor
{
    class UWrestlerWeatherSetupComponent* WeatherSetupComponent;                      // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AWrestlerWeatherNiagaraActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;                                        // 0x0298 (size: 0x8)
    class UWrestlerWeatherRecvNiagaraComp* WeatherReceiverComponent;                  // 0x02A0 (size: 0x8)
    uint8 bDestroyOnSystemFinish;                                                     // 0x02A8 (size: 0x1)

    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
}; // Size: 0x2B0

class AWrestlerWeatherVolume : public AWrestlerVolumeBase
{
    class UWrestlerWeatherSetupComponent* WeatherSetupComponent;                      // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class AWrestlerWorldSettings : public AWorldSettings
{
    class UDataTable* MassSpawnerDataTableAsset;                                      // 0x04B8 (size: 0x8)
    class UDataTable* SmartObjectDataTableAsset;                                      // 0x04C0 (size: 0x8)

}; // Size: 0x4C8

class AWrestlerXPCollectable : public AActor
{
    FGameplayTag XPCollectableType;                                                   // 0x0298 (size: 0x8)
    class UWrestlerXPCollectableBoolComponent* Collected;                             // 0x02A0 (size: 0x8)

    bool IsCollectable();
    void Collect();
}; // Size: 0x2A8

class IAIFocusInterface : public IInterface
{

    void Reset(class AWrestlerAIController* Controller);
    FVector CalculateFocusPoint(class AWrestlerAIController* Controller, float DeltaTime);
}; // Size: 0x28

class IWrestlerAIHelperInterface : public IInterface
{

    class UWrestlerAIPatrolComponent* GetPatrolComponent();
    FVector GetMoveToLocation();
}; // Size: 0x28

class IWrestlerAbilitySourceInterface : public IInterface
{
}; // Size: 0x28

class IWrestlerActorInteractionInterface : public IInterface
{

    FWrestlerInteractableData GetInteractableData();
}; // Size: 0x28

class IWrestlerAnimInterface : public IInterface
{

    void SetCurrentAnimState(EWrestlerEnemyAnimState NewState);
    class UAnimMontage* GetMontage(FGameplayTag GameplayTag);
    class UAnimDataAsset* GetAnimDataAsset();
}; // Size: 0x28

class IWrestlerCombatStateInterface : public IInterface
{

    void OnCombatStateChanged(bool& bOutIsInCombat);
    bool IsInCombat();
}; // Size: 0x28

class IWrestlerControlCueInterface : public IInterface
{

    void ProcessControlCue(class UWrestlerControlCue* InCue);
    void ProcessCombatCue(class UWrestlerControlCue* InCue);
}; // Size: 0x28

class IWrestlerCrosshairReactInterface : public IInterface
{

    class UWrestlerCrosshairReactComponent* GetCrosshairReactComponent();
}; // Size: 0x28

class IWrestlerFearEmitterInterface : public IInterface
{

    class UWrestlerFearEmitterComponent* GetFearEmitter();
}; // Size: 0x28

class IWrestlerFeedTargetInterface : public IInterface
{

    void OnFeedStarted();
    void OnFeedEnded();
    void OnFeedBlendingOut();
    TSubclassOf<class UGameplayEffect> GetFeedReactGameplayEffect();
    bool CanFeedInstaKill();
    bool CanBeFedOn();
}; // Size: 0x28

class IWrestlerHeightenedSensesInterface : public IInterface
{

    void VisionPulseEnd();
    void VisionFadeOutBegin(float InDuration);
    void VisionFadeInEnd();
    void VisionFadeInBegin(float InDuration);
    void VisionEnd();
    void VisionBegin();
    void SetVisionVisibility(const bool bInVisible);
    class UMeshComponent* GetMeshComponent();
    FGameplayTagContainer GetHeightenedSenseTypeTag();
    TArray<class UPrimitiveComponent*> GetHeightenedSensesSceneCaptureComponents();
    class UWrestlerDataAsset_HeightenedSensesClue* GetClueDataAsset();
}; // Size: 0x28

class IWrestlerItemStateInterface : public IInterface
{

    void SetItemState(EItemState InItemState);
    EItemState GetItemState();
    FString GetDebugString();
}; // Size: 0x28

class IWrestlerMapCheckInterface : public IInterface
{
}; // Size: 0x28

class IWrestlerMapDataInterface : public IInterface
{

    void OnMarkerSelected();
    void OnMarkerDeselected();
    FWrestlerMapRadialAreaData GetRadialAreaData();
    bool GetMapMarkerData(FWrestlerMapMarkerData& OutMarkerData);
}; // Size: 0x28

class IWrestlerMasqueradeInterface : public IInterface
{

    FGameplayTagContainer GetTagContainer();
}; // Size: 0x28

class IWrestlerMassCrowdActor : public IInterface
{
}; // Size: 0x28

class IWrestlerMassEnemyCharacter : public IInterface
{

    void OnSpawnedByMass();
    void OnPreSwitchToMass();
}; // Size: 0x28

class IWrestlerMassPoolableInterface : public IInterface
{
}; // Size: 0x28

class IWrestlerMeleeCollisionInterface : public IInterface
{

    void SetSecondaryMeleeCollision(TEnumAsByte<ECollisionEnabled::Type> NewCollisionMode, bool bRightSide);
    void SetMeleeCollision(TEnumAsByte<ECollisionEnabled::Type> NewCollisionMode, bool bRightSide);
}; // Size: 0x28

class IWrestlerMovableInterface : public IInterface
{

    void MovableInteract(const FVector& Origin, const FVector& Direction, const float Strength, const FGameplayTag& Tag);
}; // Size: 0x28

class IWrestlerPCSInterface : public IInterface
{

    void SetZoneIndex(const int32 ZoneIndex);
    void SetPCSBlockingState(const bool bInBlocking);
    void SetInitiateAttack(const bool bInInitiate);
    void SetEveryEnemyHasLostLOSOfPlayer(const bool bInLostLOS);
    void SetBattlePropagated(const bool bInBattlePropagated);
    void RequestStateRetreat();
    void RequestStateAttack();
    bool ReceiveOnComboFinished();
    void QueryStateRetreat(bool& bOutRetreating);
    void QueryStateAttacker(bool& bOutIsAttacker);
    void QuerySensingPlayer(bool& bOutSensingPlayer);
    void QueryPCSReady(bool& bOutReady);
    void OverridePriorityActor(class AActor* InNewPriorityActor);
    void MoveTo(const FVector& Location);
    bool InitiateAttack();
    class AActor* GetPriorityActorForPCS();
    void GetPotentialEnemies(TArray<class AActor*>& OutPotentialEnemies);
}; // Size: 0x28

class IWrestlerParticlesInterface : public IInterface
{

    void OnParticlesDeactivated();
    void OnParticlesActivated(bool bInResetNiagaraSystem);
}; // Size: 0x28

class IWrestlerPassiveTargetActor : public IInterface
{

    void ShowPassiveReticle();
    void OnPassiveTargetLost(class AActor* lostTarget);
    void OnPassiveTargetFound(class AActor* foundTarget);
    void HidePassiveReticle();
    TSubclassOf<class UInterface> GetFilterInterface();
}; // Size: 0x28

class IWrestlerPerceptionInterface : public IInterface
{

    void ToggleSight();
    void ToggleSense(TSubclassOf<class UAISense> Sense);
    void ToggleHearing();
    void StopSensingAttractiveActor();
    void GetRepulsiveActor(class AActor*& OutRepulsiveActor);
    void GetPriorityActor(class AActor*& OutPriorityActor);
    void GetPlayerActor(class AActor*& OutPlayerActor);
    void GetLastSensedActorAndLocation(class AActor*& OutLastSensedActor, FVector& OutLocation, float& OutTime, bool& OutWasHearingSense);
    void GetLastSeenActorAndLocation(class AActor*& OutLastSeenActor, FVector& OutLocation, float& OutTime);
    void GetLastHeardActorAndLocation(class AActor*& OutLastHeardActor, FVector& OutLocation, float& OutTime);
    void GetAttractiveActor(class AActor*& OutAttractiveActor);
}; // Size: 0x28

class IWrestlerSignificanceInterface : public IInterface
{
}; // Size: 0x28

class IWrestlerTaggedObjectInterface : public IInterface
{

    void OnTagRemoved(FString InTag);
    void OnTagAdded(FString InTag);
    void OnGameplayTagRemoved(const FGameplayTag& InTag);
    void OnGameplayTagAdded(const FGameplayTag& InTag);
}; // Size: 0x28

class IWrestlerTargetableActorInterface : public IInterface
{

    void OverrideTargetViewPoint(FVector& OutLocation, FRotator& OutRotation);
    bool IsTargetable();
}; // Size: 0x28

class IWrestlerTargetingControllerInterface : public IInterface
{

    void SwitchToPriorityTarget();
    void SwitchedTarget(class AActor* CurrentTarget, class AActor* PreviousTarget, class AActor*& OutCurrentTarget, class AActor*& OutPreviousTarget);
    void OverrideTarget(class AActor* InActor);
    void IsCurrentlyTargeting(bool bIsTargeting, class AActor* CurrentTarget, bool& bOutIsTargeting, class AActor*& OutCurrentTarget);
    void GetTargetActorAndLocation(class AActor*& OutCurrentTarget, FVector& OutLocation);
    void GetSoftLockTarget(class AActor*& OutSoftLockTarget);
}; // Size: 0x28

class IWrestlerTeamAgentInterface : public IInterface
{

    void SetGameTeamId(const EWrestlerGameTeam& InNewTeamID);
    EWrestlerGameTeam GetGameTeamId();
    void BP_SetGenericTeamId(const FGenericTeamId& InOther);
    TEnumAsByte<ETeamAttitude::Type> BP_GetTeamAttitudeTowards(const class AActor* InOther);
    FGenericTeamId BP_GetGenericTeamId();
}; // Size: 0x28

class IWrestlerTelekinesisTargetInterface : public IInterface
{

    void OnThrow();
    void OnPull();
    void OnInteract();
    void OnDrop();
    bool IsThrowable();
    bool IsPointed();
    bool IsExplosive();
    uint8 GetThrowableType();
    FRotator GetThrowableOrientation(bool& IsWellOriented);
    class UPrimitiveComponent* GetThrowableComponent();
    ETelekinesisTargetType GetTargetType();
    float GetScoreBias();
    FWrestlerPointAxis GetPointAxis();
    class UHeraMissionObjective* GetInteractObjective();
    class ULevelSequence* GetInteractAnimation();
    FVector GetHandleLocation();
    class UWrestlerDataAsset_Throwable* GetDataAsset();
    int32 GetCurrentAmmo();
    bool CanPull();
    bool CanInteract();
}; // Size: 0x28

class IWrestlerVisionTaggable : public IInterface
{

    TSubclassOf<class UUserWidget> GetTagWidget();
}; // Size: 0x28

class UAIFocusTypeBase : public UObject
{
    float EyePosZOffset;                                                              // 0x0028 (size: 0x4)

    FVector RotateHead(class AWrestlerAIController* InController, const float InYaw, const float InPitch, const float InZOffSet);
    bool IsMovingOrTurning(const class AWrestlerAIController* InController, const float InVelocityTolerance, const float InTurnTolerance);
    FVector InterpVector(const FVector& InCurrent, const FVector& InTarget, const float InDeltaTime, const float InSpeed, EExecutionPin& Pin);
    FVector GetScaledForwardLocation(const class AWrestlerAIController* InController, const float InScale);
    class ACharacter* GetPlayerCharacter(const class UObject* InWorldContext, const int32 InPlayerIndex);
    float GetHeadYaw(const class AWrestlerAIController* InController);
    float GetHeadPitch(const class AWrestlerAIController* InController);
    FVector GetHeadDirection(const class AWrestlerAIController* InController);
    FVector GetCurrentFocalPoint(const class AWrestlerAIController* InController);
}; // Size: 0x30

class UAIFocusType_BlueprintBase : public UAIFocusTypeBase
{
}; // Size: 0x38

class UAIFocusType_LookBothWays : public UAIFocusTypeBase
{
    float HalfConeAngle;                                                              // 0x0038 (size: 0x4)
    float HalfGlanceTime;                                                             // 0x003C (size: 0x4)

}; // Size: 0x70

class UAIFocus_LookForward : public UAIFocusTypeBase
{
}; // Size: 0x40

class UAbilitiesData : public UObject
{

    void Get(FGameplayTag Tag, int32& Value, bool& IsValid);
    void Add(FGameplayTag Tag, const int32& Value);
}; // Size: 0x78

class UAnimDataAsset : public UHeraDataAsset
{
    TMap<class FGameplayTag, class FVariationMontages> MontagesByTag;                 // 0x0030 (size: 0x50)

    class UAnimMontage* GetMontageByTag(const FGameplayTag& InGameplayTag);
}; // Size: 0x80

class UBTTask_WrestlerChooseTarget : public UBTTask_BlackboardBase
{
}; // Size: 0x98

class UBTTask_WrestlerRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic
{
}; // Size: 0x88

class UBlockUnblockAbilityTask : public UHeraAutomataTask
{

    void UnBlockAllAbilities(class AActor* InActor);
    void UnBlockAbilityHack(class AActor* InOtherActor);
    void UnBlockAbility(class AActor* InOtherActor, FGameplayTagContainer InAbilityTag);
    void BlockAbility(class AActor* InOtherActor, FGameplayTagContainer InAbilityTag);
}; // Size: 0x88

class UCameraModifier_HeadTrack : public UCameraModifier
{
    FName TrackedSocketName;                                                          // 0x0048 (size: 0x8)

}; // Size: 0x50

class UCameraModifier_MotionBlurTimeScaler : public UCameraModifier
{
    float MinTimeDilation;                                                            // 0x0048 (size: 0x4)
    float MotionBlurMax;                                                              // 0x004C (size: 0x4)

}; // Size: 0x50

class UCodexAssetMap : public UHeraDataAsset
{
    TMap<class FString, class TSoftObjectPtr<UTexture2D>> TextureMapAsset;            // 0x0030 (size: 0x50)
    TMap<class FString, class TSoftObjectPtr<UHeraDialogueInfo>> DialogueMapAsset;    // 0x0080 (size: 0x50)
    TMap<class FString, class TSoftClassPtr<UObject>> ObjectClassMapAsset;            // 0x00D0 (size: 0x50)

}; // Size: 0x120

class UCodexEntry : public UHeraCommonUIBaseWidget
{

    void ReceiveOnCodexUpdate(class UCodexItem* ItemContent);
    class UCodexEntry* GetOwningEntryWidget();
    class UCodexItem* GetItem();
}; // Size: 0x338

class UCodexItem : public UObject
{
    FCodexItemDetail Detail;                                                          // 0x0028 (size: 0x78)
    TArray<class UCodexItem*> Children;                                               // 0x00A0 (size: 0x10)
    bool bIsExpaneded;                                                                // 0x00B0 (size: 0x1)
    int32 NextChildIndex;                                                             // 0x00B4 (size: 0x4)
    int32 Index;                                                                      // 0x00B8 (size: 0x4)

    void SetName(const FText& Name);
    void SetItemViewed();
    bool SetExpanded(bool bIsExpanded);
    void SetDepth(int32 Depth);
    bool IsItemViewed();
    bool IsExpanded();
    TArray<class UCodexItem*> GetSortedItems();
    class UCodexItem* GetParent();
    FString GetNameID();
    FText GetName();
    TArray<class UCodexItem*> GetItemsWithChildren();
    TArray<class UCodexItem*> GetItems();
    class UTexture2D* GetForeground(bool& bHasImage);
    FText GetDescription();
    int32 GetDepth();
    class UTexture2D* GetBackground(bool& bHasImage);
    class UCodexItem* FindRecursive(FString Name);
    void AddItem(class UCodexItem* Item);
}; // Size: 0xC0

class UControlsDisplayData : public UDataAsset
{
    TArray<FWrestlerInputMappingCategory> Categories;                                 // 0x0030 (size: 0x10)
    TArray<FEnhancedActionKeyMapping> SpecialMappings;                                // 0x0040 (size: 0x10)
    class UInputAction* MoveAction;                                                   // 0x0050 (size: 0x8)
    class UInputModifierPriority* PriorityModifierInstance;                           // 0x0058 (size: 0x8)

}; // Size: 0x60

class UDEPRECATED_WrestlerLightVisibilityVolumeManager : public UObject
{
    TSet<ADEPRECATED_WrestlerLightVisibilityVolume*> PlayerOverlappingVolumes;        // 0x0028 (size: 0x50)
    TArray<class ADEPRECATED_WrestlerGlobalLightVisibilityGroup*> GlobalVisibilityGroups; // 0x0078 (size: 0x10)
    TSet<TSoftObjectPtr<AActor>> ManagedLights;                                       // 0x0088 (size: 0x50)

}; // Size: 0xD8

class UGameSettingListEntrySetting_Input : public UGameSettingListEntry_Setting
{
    bool bIsGamepad;                                                                  // 0x0328 (size: 0x1)
    class UInputMappingContext* PlayerMappingContext;                                 // 0x0330 (size: 0x8)
    class UInputAction* MoveAction;                                                   // 0x0338 (size: 0x8)
    FKey MoveKeyControllerOverride;                                                   // 0x0340 (size: 0x18)
    FSlateBrush OverrideMoveIcon_MK;                                                  // 0x0360 (size: 0xD0)
    class UGameSettingValueDiscrete_Input* InputSetting;                              // 0x0430 (size: 0x8)
    ECommonInputType CurrentInputType;                                                // 0x0438 (size: 0x1)
    class UCommonButtonBase* Button_Action;                                           // 0x0440 (size: 0x8)
    class UMultiactionWidget* MultiactionWidget;                                      // 0x0448 (size: 0x8)

    void UpdateKeyIcon(bool InIsGamepad);
    void SetKeyMapping_MK(const FKey& InNewKey, bool bPrimary, const FName& ID);
    void SetKeyMapping_C(const FKey& InNewKey, bool bPrimary);
    void ResetKey(bool InIsGamepad);
    void OnInputChanged(ECommonInputType InCurrentInputType);
    bool IsRemappable();
    void HandleActionButtonClicked();
    FWrestlerInputMappingPair GetKeyMapping_MK();
    FWrestlerInputMappingPair GetKeyMapping_C();
    FInputMappingData GetInitialInputData();
    FText GetDisplayName();
    class UInputAction* GetDependentAction();
    class UInputAction* GetAction();
}; // Size: 0x450

class UGameSettingValueDiscreteDynamic_Language : public UGameSettingValueDiscreteDynamic
{
}; // Size: 0x200

class UGameSettingValueDiscrete_Input : public UGameSettingValueDiscrete
{
}; // Size: 0x248

class UHeraAutomataTestSettings : public UHeraSettings
{
    TMap<class TSoftObjectPtr<UHeraAutomata>, class FHeraAutomataTestFlowData> FlowTests; // 0x0038 (size: 0x50)
    TMap<class TSoftObjectPtr<UHeraAutomata>, class FHeraAutomataTestBackreferenceStateChainData> BackreferenceStateChainTests; // 0x0088 (size: 0x50)
    TMap<class TSoftObjectPtr<UHeraAutomata>, class FHeraAutomataTestBackreferenceBootChainData> BackreferenceBootChainTests; // 0x00D8 (size: 0x50)

}; // Size: 0x128

class UHeraMenuUserSettings : public UHeraSettings
{
    bool bShowDebugPanels;                                                            // 0x0038 (size: 0x1)

}; // Size: 0x40

class UIconLookupTable : public UHeraDataAsset
{
    TMap<class TSoftObjectPtr<UTexture2D>, class TSoftObjectPtr<UTexture2D>> IconsLookupTable; // 0x0030 (size: 0x50)

}; // Size: 0x80

class UInputIconLookupTable : public UHeraDataAsset
{
    TMap<class FString, class UInputAction*> InputIconsLookupTable;                   // 0x0030 (size: 0x50)

    FString GetIconName(class UCommonInputSubsystem* InInputSystem, class UInputAction* InEnhancedInputAction);
}; // Size: 0x80

class UInputModifierIdentifier : public UInputModifier
{
    FName ID;                                                                         // 0x0028 (size: 0x8)
    FText DisplayName;                                                                // 0x0030 (size: 0x18)

}; // Size: 0x48

class UInputModifierPriority : public UInputModifier
{
}; // Size: 0x28

class ULoadingTipsDataTable : public UHeraDataAsset
{
    TMap<class FGameplayTag, class FLoadingTipData> TipsList;                         // 0x0030 (size: 0x50)
    TMap<class FGameplayTag, class TSoftObjectPtr<UTexture2D>> ImagesList;            // 0x0080 (size: 0x50)

}; // Size: 0xD0

class UMultiactionWidget : public UCommonUserWidget
{
    TArray<FKey> Keys;                                                                // 0x02E8 (size: 0x10)

    void SetOverrideIconForIndex(const FSlateBrush& Brush, int32 Index);
    void GenerateInputActions();
}; // Size: 0x2F8

class UObjectiveEntryObject : public UObject
{
}; // Size: 0x48

class UQuestObjectiveEntry : public UHeraCommonUIBaseWidget
{
    class UCommonRichTextBlock* QuestDescriptionText;                                 // 0x0338 (size: 0x8)
    class UPanelWidget* IconPanel;                                                    // 0x0340 (size: 0x8)

}; // Size: 0x348

class USubtitlesAssetMap : public UHeraDataAsset
{
    TMap<class FString, class TSubclassOf<UCommonTextStyle>> SubtitleTextStyleMapAsset; // 0x0030 (size: 0x50)

}; // Size: 0x80

class UTutorialAssetMap : public UHeraDataAsset
{
    TMap<class FString, class FWrestlerTutorialData> TutorialMap;                     // 0x0030 (size: 0x50)
    class UDataTable* Icons;                                                          // 0x0080 (size: 0x8)

    TArray<FName> GetIconIDs();
}; // Size: 0x88

class UUWrestlerSpawnSquadAutomataTask : public UWrestlerSpawnEnemyAutomataTask
{
    TSoftObjectPtr<AWrestlerAISpawner> Leader;                                        // 0x00C8 (size: 0x28)
    FGameplayTag SquadIdTag;                                                          // 0x00F0 (size: 0x8)

}; // Size: 0xF8

class UUnlockCodexAndMilestoneTask : public UHeraAutomataTask
{
    FString CodexProperty;                                                            // 0x0088 (size: 0x10)

    void UnlockCodex(FString InCodexProperty);
    FString GetCodexVariable();
    void AddXPPoints(FGameplayTag InXPGameTag);
    void AddPoints(int32 InPoints);
}; // Size: 0x98

class UWAD_SoaringLeap_LevelConfig : public UHeraDataAsset
{
    float FearDuration;                                                               // 0x0030 (size: 0x4)
    float FearStrength;                                                               // 0x0034 (size: 0x4)
    int32 MasqueradeLevel;                                                            // 0x0038 (size: 0x4)
    float JumpDistance;                                                               // 0x003C (size: 0x4)
    float JumpHeight;                                                                 // 0x0040 (size: 0x4)
    float JumpDuration;                                                               // 0x0044 (size: 0x4)
    class UAnimMontage* JumpMontage;                                                  // 0x0048 (size: 0x8)
    FName JumpMontageSection;                                                         // 0x0050 (size: 0x8)
    FGameplayTagContainer OnJumpStartCues;                                            // 0x0058 (size: 0x20)
    float TargetingDelay;                                                             // 0x0078 (size: 0x4)
    float TargetingDuration;                                                          // 0x007C (size: 0x4)
    float TargetingSphereRadius;                                                      // 0x0080 (size: 0x4)
    float TargetingTimeDilation;                                                      // 0x0084 (size: 0x4)
    float TargetingSearchAngle;                                                       // 0x0088 (size: 0x4)
    class UCurveFloat* TargetingCameraYawCurve;                                       // 0x0090 (size: 0x8)
    FWrestlerAbilityMoveTo MoveToData;                                                // 0x0098 (size: 0x88)
    float AimAssistStrength;                                                          // 0x0120 (size: 0x4)
    FName LandMontageSection;                                                         // 0x0124 (size: 0x8)
    FGameplayTagContainer OnJumpLandCues;                                             // 0x0130 (size: 0x20)
    TSubclassOf<class UGameplayEffect> DamageEffect;                                  // 0x0150 (size: 0x8)
    uint32 DamageLevel;                                                               // 0x0158 (size: 0x4)
    FGameplayTag ReactionEventTag;                                                    // 0x015C (size: 0x8)
    FGameplayTagContainer OnDamageCues;                                               // 0x0168 (size: 0x20)
    TArray<class TSubclassOf<UGameplayEffect>> OnDamageExtraGameplayEffects;          // 0x0188 (size: 0x10)

}; // Size: 0x198

class UWrestleVideoPlayerWidget : public UWrestlerBaseWidget
{
    class UMediaPlayer* MediaPlayer;                                                  // 0x02D0 (size: 0x8)

    void ClearMediaPlayer();
}; // Size: 0x2D8

class UWrestlerAIAwarenessConfig : public UHeraDataAsset
{
    float DetectionEscalationRate;                                                    // 0x0030 (size: 0x4)
    float DetectionDeEscalationRate;                                                  // 0x0034 (size: 0x4)
    float ProximityDetectionEscalationRate;                                           // 0x0038 (size: 0x4)
    float EscalationRate;                                                             // 0x003C (size: 0x4)
    float DeEscalationRate;                                                           // 0x0040 (size: 0x4)
    float ProximityEscalationRate;                                                    // 0x0044 (size: 0x4)
    float DamageDetectionIncrease;                                                    // 0x0048 (size: 0x4)
    float DamageLKPOffset;                                                            // 0x004C (size: 0x4)
    float DamageAwarenessIncrease;                                                    // 0x0050 (size: 0x4)
    float TouchAwarenessIncrease;                                                     // 0x0054 (size: 0x4)
    float LostSightOfPlayerDelay;                                                     // 0x0058 (size: 0x4)
    FHeraScaledCurve EscalationValueDistanceCurve;                                    // 0x0060 (size: 0xA0)
    FHeraScaledCurve EscalationValueAngleCurve;                                       // 0x0100 (size: 0xA0)
    FHeraScaledCurve NoticeabilitySightDistanceCurve;                                 // 0x01A0 (size: 0xA0)
    float BiasToCurrentTarget;                                                        // 0x0240 (size: 0x4)
    float FlatBias;                                                                   // 0x0248 (size: 0x4)
    float BiasRangeMultiplier;                                                        // 0x0250 (size: 0x4)

}; // Size: 0x258

class UWrestlerAIBlueprintLibrary : public UWrestlerBlueprintFunctionLibrary
{

    bool WasLastStimulusSight(const class AAIController* InController);
    bool WasLastActiveStimulusSight(const class AAIController* InController);
    void SetOverrideTargetActor(const class AAIController* InController, class AActor* InOverrideTargetActor);
    void ResetDetectionOfPlayer(const class AAIController* InController);
    void ResetDetectionOfActor(const class AAIController* InController, class AActor* InActor, bool bInStartAtMaxDetection);
    void ResetDetection(const class AAIController* InController, bool bInStartAtMaxDetection);
    void ResetAwarenessOfActor(const class AAIController* InController, class AActor* InActor, bool bInStartAtMaxAwareness);
    void ResetAwareness(const class AAIController* InController, bool bInStartAtMaxAwareness);
    bool IsDetectingActor(const class AAIController* InController, const class AActor* InActor);
    bool IsAwareOfActor(const class AAIController* InController, const class AActor* InActor);
    float GetTimeLastSensedLocationUpdated(const class AAIController* InController);
    class AActor* GetTargetActor(const class AAIController* FromController);
    class AActor* GetSeenActorByTag(const class AAIController* InController, FGameplayTag InTag);
    FVector GetLastSensedLocation(const class AAIController* FromController);
    FVector GetLastSeenPosition(const class AAIController* FromController);
    class UNavigationPath* FindStraightPathToLocationSynchronously(class UObject* InWorldContextObject, const FVector& InPathStart, const FVector& InPathEnd);
}; // Size: 0x28

class UWrestlerAIDebugSettings : public UHeraSettings
{
}; // Size: 0x38

class UWrestlerAIDebugWidgetComponent : public UWidgetComponent
{
}; // Size: 0x740

class UWrestlerAIFocus : public UObject
{
    class AWrestlerAIController* Controller;                                          // 0x0040 (size: 0x8)
    class UWrestlerFocusConfig* FocusConfig;                                          // 0x0048 (size: 0x8)
    class UAIFocusTypeBase* CurrentFocusType;                                         // 0x0050 (size: 0x8)
    class UAIFocusTypeBase* DefaultFocusType;                                         // 0x0058 (size: 0x8)
    TMap<class FGameplayTag, class UAIFocusTypeBase*> FocusTypeCache;                 // 0x0060 (size: 0x50)

}; // Size: 0xB0

class UWrestlerAIInterestingComponent : public USceneComponent
{
    float Interest;                                                                   // 0x02A0 (size: 0x4)
    FGameplayTag InterestingPointTag;                                                 // 0x02A4 (size: 0x8)
    bool bShowDebug;                                                                  // 0x02AC (size: 0x1)
    int32 MaxCapacity;                                                                // 0x02B0 (size: 0x4)

    void IncrementOccupation();
    void DecrementOccupation();
}; // Size: 0x2C0

class UWrestlerAIPatrolComponent : public UActorComponent
{
    class AWrestlerEnemyPatrolRoute* PatrolRoute;                                     // 0x00A0 (size: 0x8)
    class AWrestlerEnemyPatrolPoint* CurrentPatrolPoint;                              // 0x00A8 (size: 0x8)

    void SetPatrolRoute(class AWrestlerEnemyPatrolRoute* InPatrolRoute);
    void SetCurrentPatrolPointIndex(int32 PatrolPointIndex);
    void SetCurrentPatrolPoint(class AWrestlerEnemyPatrolPoint* PatrolPoint);
    class AWrestlerEnemyPatrolRoute* GetPatrolRoute();
    class AWrestlerEnemyPatrolPoint* GetNextPatrolPoint();
    int32 GetCurrentPatrolPointIndex();
    class AWrestlerEnemyPatrolPoint* GetCurrentPatrolPoint();
}; // Size: 0xB8

class UWrestlerAIPerceptionComponent : public UAIPerceptionComponent
{
    class UWrestlerAwareness* CurrentAwareness;                                       // 0x0190 (size: 0x8)
    TSoftObjectPtr<UWrestlerAISenseConfig> DefaultSenseConfig;                        // 0x0198 (size: 0x28)
    TMap<class FGameplayTag, class TSoftObjectPtr<UWrestlerAISenseConfig>> PerStateSenseConfig; // 0x01C0 (size: 0x50)
    class UWrestlerAIFocus* AIFocus;                                                  // 0x0210 (size: 0x8)

    void OnStateTreeTagsAdded(FGameplayTagContainer InAddedTags);
}; // Size: 0x218

class UWrestlerAIPerceptionStimuliSource : public UAIPerceptionStimuliSourceComponent
{
    float StimulusStrength;                                                           // 0x00B8 (size: 0x4)

    void SetRegisterAsSourceForSense(TSubclassOf<class UAISense> InSenseClass, bool InEnabled);
    void ReportRepulsion(FVector StimuliLocation, class AActor* Instigator, class AActor* Receiver);
    void ReportFear(FVector FearLocation, float Stimulus, class AActor* Instigator, float MaxRange, FName InFullTag);
    void ReportAttraction(FVector StimuliLocation, class AActor* Instigator, class AActor* Receiver);
}; // Size: 0xC0

class UWrestlerAISense : public UAISense
{
    TArray<FWrestlerAIStimulusEvent> RegisteredEvents;                                // 0x0078 (size: 0x10)

    void ReportSenseEvent(class UObject* InWorldContextObject, class AActor* InInstigator, FVector InSenseLocation, float InMaxRange, FName InTag);
}; // Size: 0x88

class UWrestlerAISenseConfig : public UHeraDataAsset
{
    TArray<class UAISenseConfig*> Senses;                                             // 0x0030 (size: 0x10)

}; // Size: 0x40

class UWrestlerAISenseConfig_Attraction : public UAISenseConfig
{
    TSubclassOf<class UWrestlerAISense_Attraction> Implementation;                    // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerAISenseConfig_CoffinSight : public UWrestlerAISenseConfig_SightBase
{
    FWrestlerVisionRectangle NearPane;                                                // 0x0058 (size: 0xC)
    FWrestlerVisionRectangle MiddlePane;                                              // 0x0064 (size: 0xC)
    FWrestlerVisionRectangle FarPane;                                                 // 0x0070 (size: 0xC)
    float AutoSuccessRangeFromLastSeenLocation;                                       // 0x007C (size: 0x4)
    float PointOfViewBackwardOffset;                                                  // 0x0080 (size: 0x4)
    float NearClippingRadius;                                                         // 0x0084 (size: 0x4)
    FColor CoffinDebugColorNearPane;                                                  // 0x0088 (size: 0x4)
    FColor CoffinDebugColorMiddlePane;                                                // 0x008C (size: 0x4)
    FColor CoffinDebugColorFarPane;                                                   // 0x0090 (size: 0x4)
    TSubclassOf<class UWrestlerAISense_Sight> SightImplementation;                    // 0x0098 (size: 0x8)

}; // Size: 0xA0

class UWrestlerAISenseConfig_Fear : public UAISenseConfig
{
    TSubclassOf<class UWrestlerAISense_Fear> Implementation;                          // 0x0048 (size: 0x8)
    float FearRange;                                                                  // 0x0050 (size: 0x4)

}; // Size: 0x58

class UWrestlerAISenseConfig_Hearing : public UAISenseConfig
{
    TSubclassOf<class UWrestlerAISense_Hearing> Implementation;                       // 0x0048 (size: 0x8)
    float HearingRange;                                                               // 0x0050 (size: 0x4)
    FAISenseAffiliationFilter DetectionByAffiliation;                                 // 0x0054 (size: 0x4)
    FHeraScaledCurve AttenuationCurve;                                                // 0x0058 (size: 0xA0)
    FGameplayTagContainer ListenerTagsToIgnore;                                       // 0x00F8 (size: 0x20)
    FGameplayTagContainer SourceTagsToIgnore;                                         // 0x0118 (size: 0x20)
    int32 NumDebugSpheres;                                                            // 0x0138 (size: 0x4)
    int32 NumDebugRings;                                                              // 0x013C (size: 0x4)
    float MaxDebugSphereSize;                                                         // 0x0140 (size: 0x4)

}; // Size: 0x148

class UWrestlerAISenseConfig_Proximity : public UAISenseConfig
{
    TSubclassOf<class UWrestlerAISense_Proximity> Implementation;                     // 0x0048 (size: 0x8)
    float ProximityRange;                                                             // 0x0050 (size: 0x4)
    FHeraScaledCurve FalloffCurve;                                                    // 0x0058 (size: 0xA0)
    FGameplayTagContainer ListenerTagsToIgnore;                                       // 0x00F8 (size: 0x20)
    FGameplayTagContainer SourceTagsToIgnore;                                         // 0x0118 (size: 0x20)

}; // Size: 0x138

class UWrestlerAISenseConfig_Repulsion : public UAISenseConfig
{
    TSubclassOf<class UWrestlerAISense_Repulsion> Implementation;                     // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerAISenseConfig_SightBase : public UAISenseConfig
{
    FAISenseAffiliationFilter DetectionByAffiliation;                                 // 0x0048 (size: 0x4)
    FName EyesViewPointSocketName;                                                    // 0x004C (size: 0x8)

}; // Size: 0x58

class UWrestlerAISenseConfig_VisionCone : public UWrestlerAISenseConfig_SightBase
{
    TSubclassOf<class UWrestlerAISense_Sight> Implementation;                         // 0x0058 (size: 0x8)
    float SightRadius;                                                                // 0x0060 (size: 0x4)
    float LoseSightRadius;                                                            // 0x0064 (size: 0x4)
    float PeripheralVisionAngleDegrees;                                               // 0x0068 (size: 0x4)
    float AutoSuccessRangeFromLastSeenLocation;                                       // 0x006C (size: 0x4)
    float PointOfViewBackwardOffset;                                                  // 0x0070 (size: 0x4)
    float NearClippingRadius;                                                         // 0x0074 (size: 0x4)

}; // Size: 0x78

class UWrestlerAISenseEvent : public UAISenseEvent
{
    FWrestlerAIStimulusEvent Event;                                                   // 0x0028 (size: 0x30)

}; // Size: 0x58

class UWrestlerAISenseEvent_Fear : public UAISenseEvent
{
    FWrestlerAIFearEvent FearEvent;                                                   // 0x0028 (size: 0x38)

}; // Size: 0x60

class UWrestlerAISense_Attraction : public UWrestlerAISense
{
    TArray<FWrestlerAIAttractionEvent> AttractionEvents;                              // 0x0088 (size: 0x10)

    void ReportAttractionEvent(class UObject* WorldContextObject, const FVector& InAttractionLocation, class AActor* InEventInstigator, class AActor* InReceiver, FName InTag);
}; // Size: 0xE8

class UWrestlerAISense_Fear : public UWrestlerAISense
{
    TArray<FWrestlerAIFearEvent> FearEvents;                                          // 0x0088 (size: 0x10)
    TArray<class AActor*> FearActors;                                                 // 0x00E8 (size: 0x10)

    void ReportFearEvent(class UObject* WorldContextObject, FVector FearLocation, float FearStrength, class AActor* Instigator, float MaxRange, FName InFullTag);
}; // Size: 0xF8

class UWrestlerAISense_Hearing : public UAISense
{
    TArray<FWrestlerAINoiseEvent> NoiseEvents;                                        // 0x00C8 (size: 0x10)
    float SpeedOfSoundSq;                                                             // 0x00D8 (size: 0x4)

}; // Size: 0xE0

class UWrestlerAISense_Proximity : public UAISense
{
}; // Size: 0x118

class UWrestlerAISense_Repulsion : public UWrestlerAISense
{
    TArray<FWrestlerAIRepulsionEvent> RepulsionEvents;                                // 0x0088 (size: 0x10)

    void ReportRepulsionEvent(class UObject* WorldContextObject, const FVector& InRepulsionLocation, class AActor* InEventInstigator, class AActor* InReceiver, FName InTag);
}; // Size: 0xE8

class UWrestlerAISense_Sight : public UAISense
{
    TArray<FWrestlerAISightEvent> SightEvents;                                        // 0x0078 (size: 0x10)
    int32 MaxTracesPerTick;                                                           // 0x0088 (size: 0x4)
    int32 MinQueriesPerTimeSliceCheck;                                                // 0x008C (size: 0x4)
    double MaxTimeSlicePerTick;                                                       // 0x0090 (size: 0x8)
    float HighImportanceQueryDistanceThreshold;                                       // 0x0098 (size: 0x4)
    float MaxQueryImportance;                                                         // 0x00A0 (size: 0x4)
    float SightLimitQueryImportance;                                                  // 0x00A4 (size: 0x4)

}; // Size: 0x178

class UWrestlerAISpawnHelper : public UObject
{
    TArray<class AWrestlerEnemyCharacter*> SpawnedEnemies;                            // 0x0058 (size: 0x10)
    TArray<class AWrestlerCharacterBase*> ActiveMassCharacters;                       // 0x0068 (size: 0x10)
    TArray<class AWrestlerCharacterBase*> SuspendedEnemies;                           // 0x0078 (size: 0x10)
    TArray<class AWrestlerCharacterBase*> AllAgents;                                  // 0x0088 (size: 0x10)
    TMap<class FName, class TWeakObjectPtr<AWrestlerEnemyCharacter>> SpawnerToSpawnedMap; // 0x0098 (size: 0x50)
    TMap<class FName, class FWrestlerDeferredEnemySpawnParam> PendingSpawnRequests;   // 0x00E8 (size: 0x50)
    TSubclassOf<class AWrestlerEnemyPatrolRoute> PatrolRouteSubclass;                 // 0x0138 (size: 0x8)
    TSubclassOf<class AWrestlerEnemyPatrolPoint> PatrolPointSubclass;                 // 0x0140 (size: 0x8)

}; // Size: 0x148

class UWrestlerAIStimuliPriorities : public UHeraDataAsset
{
    FGameplayTagContainer UrgentStimuliTags;                                          // 0x0030 (size: 0x20)

}; // Size: 0x50

class UWrestlerAbilityBloodExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UWrestlerAbilityConfigDataAsset : public UWrestlerConfigDataAsset
{
    FEffectMagnitudesContainer MagnitudesContainer;                                   // 0x0030 (size: 0x50)
    FEffectsMap EffectsModifiersOnActivateAbility;                                    // 0x0080 (size: 0x50)
    FEffectsMap EffectsModifiersAtTheEndAbility;                                      // 0x00D0 (size: 0x50)
    FEffectsMap EffectsModifiersAtAbilityCancelled;                                   // 0x0120 (size: 0x50)
    TMap<class FGameplayTag, class FEffectsMap> EffectsModifiersOnEvent;              // 0x0170 (size: 0x50)

    float GetMagnitude(FGameplayTag MagnitudeTag, int32 AbilityLevel);
}; // Size: 0x1C0

class UWrestlerAbilityDPadWidget : public UHeraCommonUIBaseWidget
{
    class UWrestlerPlayerActionAssetMap* PlayerActionAssetMap;                        // 0x0330 (size: 0x8)
    class UInputMappingContext* PlayerMappingContext;                                 // 0x0338 (size: 0x8)
    ECommonInputType DpadInputType;                                                   // 0x0340 (size: 0x1)

    void UpdateRenderOpacity(bool InStatus);
    void UpdateDPadWidget(class UWrestlerPlayerClan* InPlayerClan);
    void UpdateAllSlots();
    bool IsAnyoneInCombat();
    void InitializeDPadWidget();
    void CallUpdatedCoolDown();
}; // Size: 0x348

class UWrestlerAbilityDeadZoneSetup : public UHeraConfigurationAsset
{
    FGameplayTagContainer AbilityTagToBlock;                                          // 0x0030 (size: 0x20)
    FGameplayTagContainer AbilityTagToCancel;                                         // 0x0050 (size: 0x20)

}; // Size: 0x70

class UWrestlerAbilityDebugSettings : public UHeraSettings
{
    bool bIsAbilityCostDisabled;                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

class UWrestlerAbilityDefinition : public UHeraDataAsset
{
    FGameplayTag PerkTag;                                                             // 0x0030 (size: 0x8)
    class UWrestlerControlGraph* ControlGraph;                                        // 0x0038 (size: 0x8)
    TSoftClassPtr<UWrestlerGameplayAbility> GameplayAbility;                          // 0x0040 (size: 0x28)
    EWrestlerClanAbilityType ClanAbilityType;                                         // 0x0068 (size: 0x1)
    int32 BloodCost;                                                                  // 0x006C (size: 0x4)
    int32 ProgressAutomataUID;                                                        // 0x0070 (size: 0x4)

}; // Size: 0x88

class UWrestlerAbilityFunctionLibrary : public UWrestlerBlueprintFunctionLibrary
{

    void UnregisterVampiricVisionTarget(class UObject* VampiricVisionObject);
    void ReportMeleeHitGameplayEvent(class AActor* InActor, class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, FHitResult InHitResult, TSubclassOf<class AActor> InClassToIgnore, FGameplayTag InGameplayTag);
    void RegisterVampiricVisionTarget(class UObject* VampiricVisionObject);
    class AActor* K2_TargetActor(const class UObject* InObject, const bool bGetSoftTarget, EWrestlerOutputPins& OutPins);
    bool K2_IsAttackFromRight(const FGameplayEventData& InEventData, const class AActor* InActor, EWrestlerOutputPins& OutPins);
    class AActor* K2_GetTargetActor(const class AActor* InActor, const bool bGetSoftTarget, EWrestlerOutputPins& OutPins);
    class AActor* K2_GetSingleActorFromTargetData(FGameplayAbilityTargetDataHandle InTargetData, EWrestlerOutputPins& OutPins);
    FVector K2_GetHitReactOffsetDirection(const FGameplayEventData& InEventData, const class AActor* InActor, EWrestlerOutputPins& OutPins);
    float K2_GetFloatAttribute(const class AActor* InActor, FGameplayAttribute InAttribute, EWrestlerOutputPins& OutPins);
    FVector K2_GetAttackDirection(const FGameplayEventData& InEventData, const class AActor* InActor, EWrestlerOutputPins& OutPins);
    class UAbilitySystemComponent* K2_GetAbilitySystemComponentFromActor(const class AActor* InActor);
    void K2_DamageNonGASActorFromHitResults(class UObject* WorldContextObject, const TArray<FHitResult>& HitResults, const float EnvironmentDamage, const TSubclassOf<class UDamageType> DamageTypeClass);
    void K2_DamageNonGASActor(class UObject* WorldContextObject, const FHitResult& HitResult, const float EnvironmentDamage, const TSubclassOf<class UDamageType> DamageTypeClass);
    void K2_DamageAllNonGASActors(class UObject* WorldContextObject, const FGameplayAbilityTargetDataHandle& TargetData, const float EnvironmentDamage, const TSubclassOf<class UDamageType> DamageTypeClass);
    FVector K2_CalculateTargetOffset(class UCharacterMovementComponent* InSourceMovementComponent, class AActor* InTargetActor, FVector InTargetLocationOffset);
    bool K2_ApplyRadialDamageWithFalloff(const class UObject* InWorldContextObject, float InBaseDamage, float InMinimumDamage, const FVector& InOrigin, float InDamageInnerRadius, float InDamageOuterRadius, float InDamageFalloff, TSubclassOf<class UDamageType> InDamageTypeClass, const TArray<class AActor*>& InIgnoreActors, float& OutDamage, const bool bInDamageGASActors, const bool bInDamageNonGASActor, EWrestlerOutputPins& OutPins, class AActor* InDamageCauser, class AController* InInstigatedByController, TEnumAsByte<ECollisionChannel> InDamagePreventionChannel, bool bInDebug);
    void K2_AddStrikeBlood(class AActor* InPlayerActor, int32 InAmount);
    void K2_AddRelocateBlood(class AActor* InPlayerActor, int32 InAmount);
    void K2_AddMasteryBlood(class AActor* InPlayerActor, int32 InAmount);
    void K2_AddAffectBlood(class AActor* InPlayerActor, int32 InAmount);
    class UAkSwitchValue* GetWeaponAudioSwitch(class AActor* InEnemy);
    void GetThrowVelocityFromEventData(const FGameplayEventData& InEventData, FVector& OutThrowVelocity, EWrestlerOutputPins& OutPins);
    void GetShotOriginAndDirectionFromSocket(class AActor* InActor, FName WeaponSocketName, FName MuzzleSocket, class AActor* InTarget, FVector& OutOrigin, FVector& OutDirection);
    class UWrestlerRangedWeaponInstance* GetRangedWeapon(class AActor* InEnemy);
    void GetPlayerControllerFromActor(class AActor* InActor, class APlayerController*& OutPlayerController);
    class UAkSwitchValue* GetEnemyTypeAudioSwitch(class AActor* InEnemy);
    class UAkAudioEvent* GetAudioRangedWeaponTail(class AActor* InEnemy);
    class UAkAudioEvent* GetAudioRangedWeaponReload(class AActor* InEnemy);
    class UAkAudioEvent* GetAudioRangedWeaponMelee(class AActor* InEnemy);
    class UAkAudioEvent* GetAudioRangedWeaponImpact(class AActor* InEnemy);
    class UAkAudioEvent* GetAudioRangedWeaponFlyby(class AActor* InEnemy);
    class UAkAudioEvent* GetAudioRangedWeaponFire(class AActor* InEnemy);
    class UAkAudioEvent* GetAudioRangedWeaponAim(class AActor* InEnemy);
    TMap<FString, float> GetAllAttributes(class AActor* Actor);
    void GenerateTargetDataFromHitResults(const TArray<FHitResult>& InHitResults, FGameplayAbilityTargetDataHandle& OutTargetData);
    void CancelAbilitiesByTag(class AActor* InActor, FGameplayTagContainer TagsToCancel, FGameplayTagContainer TagsToIgnore);
    TArray<class AActor*> ApplyMovableForceAtLocation(const class UObject* WorldContextObject, const FVector& Origin, const float Radius, const FVector Direction, const float Strength, const TSubclassOf<class AFieldSystemActor> FieldToSpawn, const FGameplayTag Tag, const bool Debug);
    FGameplayAbilityTargetDataHandle ApplyFiltersToTargetData(const FGameplayAbilityTargetDataHandle InTargetData, TSet<TSubclassOf<AActor>> InClassesToIgnore, FGameplayTargetDataFilter Filter, class AActor* InFilterActor);
}; // Size: 0x28

class UWrestlerAbilityHitData : public UHeraDataAsset
{
    float HitDamage;                                                                  // 0x0030 (size: 0x4)
    TSubclassOf<class UDamageType> HitDamageType;                                     // 0x0038 (size: 0x8)
    FGameplayTagContainer CuesToExecuteForAllHits;                                    // 0x0040 (size: 0x20)
    FGameplayTagContainer HitEventsToSendToTargets;                                   // 0x0060 (size: 0x20)
    TArray<class TSubclassOf<UGameplayEffect>> EffectsToApplyToOwnerOnHit;            // 0x0080 (size: 0x10)
    FGameplayTag HitKillingTag;                                                       // 0x0090 (size: 0x8)
    FGameplayTagContainer EffectContainerTagsToApply;                                 // 0x0098 (size: 0x20)
    float HitFreezeDuration;                                                          // 0x00B8 (size: 0x4)
    float HitFreezeTimeDilation;                                                      // 0x00BC (size: 0x4)
    float HitFreezeDelay;                                                             // 0x00C0 (size: 0x4)
    float FearEmissionDuration;                                                       // 0x00C4 (size: 0x4)
    float FearEmissionStrength;                                                       // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UWrestlerAbilityHotkeySlotWidget : public UWrestlerBaseWidget
{
    class UImage* AbilitySlotImage;                                                   // 0x02C8 (size: 0x8)
    EWrestlerAbilitySlot SlotType;                                                    // 0x02D0 (size: 0x1)
    EWrestlerClanAbilityType AbilityType;                                             // 0x02D1 (size: 0x1)
    FWrestlerAbilityHotkeySlotWidgetOnAbilityFailed OnAbilityFailed;                  // 0x02D8 (size: 0x10)
    void AbilityFailed();
    bool bAbilityAcquired;                                                            // 0x02E8 (size: 0x1)
    FWrestlerNotificationData NotificationData;                                       // 0x02F0 (size: 0x58)

    void UpdateAbilitySlotVisuals();
    void UpdateAbilitySlot();
    void OnBloodValueChanged(float InCurrentValue, float InMaxValue);
}; // Size: 0x348

class UWrestlerAbilityMenuTooltipWidget : public UHeraCommonUIBaseWidget
{
    class UImage* AbilityTooltipImage;                                                // 0x0330 (size: 0x8)
    class UTextBlock* AbilityTooltipName;                                             // 0x0338 (size: 0x8)
    class UTextBlock* AbilityTooltipCost;                                             // 0x0340 (size: 0x8)
    class UTextBlock* AbilityTooltipType;                                             // 0x0348 (size: 0x8)
    class UTextBlock* AbilityCholericCost;                                            // 0x0350 (size: 0x8)
    class UTextBlock* AbilitySanguineCost;                                            // 0x0358 (size: 0x8)
    class UTextBlock* AbilityMelancholicCost;                                         // 0x0360 (size: 0x8)
    class UTextBlock* AbilityTooltipDescription;                                      // 0x0368 (size: 0x8)

    void UpdateTooltipWidgetVisuals(class UWrestlerAbilityNodeWidget* InFocusedWidget);
    void PopulateTooltipWidget(class UWrestlerAbilityNodeWidget* InFocusedWidget);
    void PlayAbilityClip(class UMediaSource* InMediaSource, class UMediaPlayer* InMediaPlayer);
}; // Size: 0x370

class UWrestlerAbilityMenuWidget : public UHeraActivatableWidget
{
    class UCanvasPanel* AbilityMenuPanel;                                             // 0x0450 (size: 0x8)
    class UDataTable* AbilityDataTable;                                               // 0x0458 (size: 0x8)
    TArray<class UWrestlerAbilityNodeWidget*> AbilityMarkers;                         // 0x0460 (size: 0x10)
    FDataTableRowHandle StartUnlockInputActionData;                                   // 0x0470 (size: 0x10)
    FDataTableRowHandle ReverseUnlockInputActionData;                                 // 0x0488 (size: 0x10)
    uint32 MainPositionValue;                                                         // 0x049C (size: 0x4)
    class UHeraPropertyBool* ResetTreeProperty;                                       // 0x04A0 (size: 0x8)

    void UpdateAllAbilities();
    void UnlockTierNavigation(EWrestlerClanAbilityType InAbilityType);
    void ToggleInputBindings(bool bAddBindings);
    void StartUnlock();
    void ReverseUnlock();
    void ResetTreeTier(EWrestlerClanAbilityType InAbilityType);
    void ResetTree(bool InShouldResetAnim);
    void ResetAllAnimations();
    void RefreshAbilityNodeVisuals(class UWrestlerAbilityNodeWidget* InAbilityNode);
    void PopulatePreviewAbilityNodes(int32 InSelectedClan);
    void PopulateAbilityNodes();
    class UWrestlerAbilityNodeWidget* GetFocusedNode();
}; // Size: 0x4B0

class UWrestlerAbilityNodeWidget : public UHeraCommonUIBaseWidget
{
    class UHeraButtonBase* NodeButton;                                                // 0x0330 (size: 0x8)
    bool bCanAfford;                                                                  // 0x0340 (size: 0x1)
    EAbilityStatus AbilityStatus;                                                     // 0x0341 (size: 0x1)
    EWrestlerClanAbilityType AbilityType;                                             // 0x0342 (size: 0x1)
    uint32 ClanValPosition;                                                           // 0x0344 (size: 0x4)
    FString RowID;                                                                    // 0x0348 (size: 0x10)
    FWrestlerAbilityNodeWidgetOnAbilityFocusedEvent OnAbilityFocusedEvent;            // 0x0358 (size: 0x10)
    void WrestlerAbilityFocused(class UWrestlerAbilityNodeWidget* FocusedAbility);
    FWrestlerAbilityNodeWidgetOnAbilityUnfocusedEvent OnAbilityUnfocusedEvent;        // 0x0368 (size: 0x10)
    void WrestlerAbilityUnfocused(class UWrestlerAbilityNodeWidget* UnfocusedAbility);
    class UImage* NodeImage;                                                          // 0x0378 (size: 0x8)
    class UTextBlock* NodeCost;                                                       // 0x0380 (size: 0x8)

    void UpdateVisibilityByDLC(bool InIsOwnedDLC);
    void UpdateNodeIcon();
    void UnlockNodeAnimation();
    void ReverseUnlockNodeAnimation();
    void Reset();
    void OnAbilityUnfocused(class UWrestlerAbilityNodeWidget* InAbility);
    void OnAbilityFocused(class UWrestlerAbilityNodeWidget* InAbility);
    bool IsAbilityMain();
    bool IsAbilityCostModified();
    bool IsAbilityAcquired();
    FVector2D GetNodePosition();
    FText GetNodeName();
    class UTexture2D* GetNodeIcon();
    int32 GetClanValue();
    int32 GetClanValPosition();
    TArray<FString> GetAllAbilityRows();
    class UMediaSource* GetAbilityVideoclip();
    TArray<EWrestlerClanDiscipline> GetAbilityDisciplines();
}; // Size: 0x388

class UWrestlerAbilitySlotsData : public UDataAsset
{
    class UDataTable* ClanAbilities;                                                  // 0x0030 (size: 0x8)
    TMap<class EWrestlerAbilitySlot, class UWrestlerAbilityDefinition*> AssignedAbilities; // 0x0038 (size: 0x50)
    TMap<class EWrestlerAbilitySlot, class FRowIDAbilityProperty> AssignedAbilities_Alt; // 0x0088 (size: 0x50)
    TSubclassOf<class UWrestlerGameplayAbility> PassiveAbility;                       // 0x00D8 (size: 0x8)

}; // Size: 0xE0

class UWrestlerAbilityState : public UAbilityTask
{
    FWrestlerAbilityStateOnStateEndedDelegate OnStateEndedDelegate;                   // 0x0080 (size: 0x10)
    void AbilityStateDelegate();
    FWrestlerAbilityStateOnStateInterruptedDelegate OnStateInterruptedDelegate;       // 0x0090 (size: 0x10)
    void AbilityStateDelegate();
    class UAbilityTask_StartAbilityState* StartAbilityStateTask;                      // 0x00B0 (size: 0x8)

    void OnStateInterrupted();
    void OnStateEnded();
    void ExternalCancel();
}; // Size: 0xB8

class UWrestlerAbilityState_CauldronOfBlood_Boiling : public UWrestlerAbilityState
{
    class UAnimMontage* MontageToPlay;                                                // 0x00B8 (size: 0x8)
    class AActor* CurrentTarget;                                                      // 0x0178 (size: 0x8)
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent; // 0x0180 (size: 0x8)
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEventTarget; // 0x0188 (size: 0x8)
    class UWrestlerAbilityTask_OverrideTarget* OverrideTarget;                        // 0x0190 (size: 0x8)

    void OnTargetObtained(class AActor* InTarget);
    void OnFirstMontageCompleted(FGameplayTag InEventTag, FGameplayEventData InEventData);
}; // Size: 0x1B0

class UWrestlerAbilityState_CauldronOfBlood_Explosion : public UWrestlerAbilityState
{
    class UAnimMontage* MontageToPlay;                                                // 0x00B8 (size: 0x8)
    FGameplayTagContainer MontageTagWaitingFor;                                       // 0x00C0 (size: 0x20)
    class ACharacter* Target;                                                         // 0x00E0 (size: 0x8)
    FGameplayTag MontageToPlayOnTarget;                                               // 0x00E8 (size: 0x8)
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEventOwner; // 0x0138 (size: 0x8)
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEventTarget; // 0x0140 (size: 0x8)

    void TargetsOnExplosion(TArray<FHitResult>& InTargets);
    void OwnerMontageEventReceived(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void MontageCompleted(FGameplayTag InEventTag, FGameplayEventData InEventData);
}; // Size: 0x148

class UWrestlerAbilitySystemComponent : public UAbilitySystemComponent
{
    FGameplayTag Invincible;                                                          // 0x1250 (size: 0x8)
    FGameplayTag Invisible;                                                           // 0x1258 (size: 0x8)
    FGameplayTag Silent;                                                              // 0x1260 (size: 0x8)
    class UAbilitiesData* AbilitiesData;                                              // 0x1270 (size: 0x8)

    void ToggleSilent();
    void ToggleNinja();
    void ToggleInvisible();
    void ToggleInvincible();
    void SetEnableRotateTo(bool bInNewRotateTo);
    void SetEnableMoveTo(bool bInNewMoveTo);
    FGameplayEventData MakeHitEventDataFromLineTrace(class AActor* InOtherActor, FHitResult InHitResult, FGameplayTag InEventTag);
    void MakeEffectContextWithHit(const FHitResult& Hit, FGameplayEffectContextHandle& Context);
    bool IsSilent();
    bool IsNinja();
    bool IsInvisible();
    bool IsInvincible();
    bool HasTag(const FGameplayTag& TagToGet);
    bool GetStartupEffectsApplied();
    int32 GetDefaultAbilityLevel();
    bool GetCharacterAbilitiesGiven();
    class UWrestlerAbilitySystemComponent* GetAbilitySystemComponentFromActor(const class AActor* Actor, bool LookForComponent);
    FString CurrentGameplayTags();
    FGameplayTagContainer CurrentGameplayTagContainer();
    FString CurrentGameplayEffects();
}; // Size: 0x1288

class UWrestlerAbilitySystemGlobals : public UAbilitySystemGlobals
{
    TSet<UWrestlerDefaultAbilities*> LoadedAbilitiesDataAssets;                       // 0x02A8 (size: 0x50)
    TSet<TSubclassOf<UWrestlerGameplayAbility>> PreLoadedAbilities;                   // 0x02F8 (size: 0x50)
    FGameplayTag SprintTag;                                                           // 0x0348 (size: 0x8)
    FGameplayTag CrouchTag;                                                           // 0x0350 (size: 0x8)
    FGameplayTag SlideTag;                                                            // 0x0358 (size: 0x8)
    FGameplayTag JumpTag;                                                             // 0x0360 (size: 0x8)
    FGameplayTag GlideTag;                                                            // 0x0368 (size: 0x8)
    FGameplayTag OutOfCombatTag;                                                      // 0x0370 (size: 0x8)
    FGameplayTag RegenTag;                                                            // 0x0378 (size: 0x8)
    FGameplayTag StunnedTag;                                                          // 0x0380 (size: 0x8)
    FGameplayTag StunRegenerableTag;                                                  // 0x0388 (size: 0x8)
    FGameplayTag DeadTag;                                                             // 0x0390 (size: 0x8)
    FGameplayTag NoDeathTag;                                                          // 0x0398 (size: 0x8)
    FGameplayTag Invincible;                                                          // 0x03A0 (size: 0x8)
    FGameplayTag Invisible;                                                           // 0x03A8 (size: 0x8)
    FGameplayTag FeedableTag;                                                         // 0x03B0 (size: 0x8)
    FGameplayTag NoKillTag;                                                           // 0x03B8 (size: 0x8)
    FGameplayTag RangedTag;                                                           // 0x03C0 (size: 0x8)
    FGameplayTag PedestrianDefaultDeathTag;                                           // 0x03C8 (size: 0x8)
    FGameplayTag LeaderTag;                                                           // 0x03D0 (size: 0x8)
    FGameplayTag FollowerTag;                                                         // 0x03D8 (size: 0x8)
    FGameplayTag FrozenTag;                                                           // 0x03E0 (size: 0x8)
    FGameplayTag PauseDetectionTag;                                                   // 0x03E8 (size: 0x8)
    FGameplayTag PauseTargetPickingTag;                                               // 0x03F0 (size: 0x8)
    FGameplayTag BlockPropagationTag;                                                 // 0x03F8 (size: 0x8)
    FGameplayTag PedestrianTag;                                                       // 0x0400 (size: 0x8)
    FGameplayTag VampiricVisionTag;                                                   // 0x0408 (size: 0x8)
    TMap<TEnumAsByte<EMovementMode>, FGameplayTag> MovementTags;                      // 0x0410 (size: 0x50)
    TMap<class ECouldNotActivateReason, class FGameplayTag> CouldNotActivateTags;     // 0x0460 (size: 0x50)
    TSubclassOf<class UGameplayEffect> StunDamageEffect;                              // 0x04B0 (size: 0x8)
    FGameplayTag StunDataTag;                                                         // 0x04B8 (size: 0x8)
    TSubclassOf<class UGameplayEffect> DamageEffect;                                  // 0x04C0 (size: 0x8)
    FGameplayTag DamageReactCue;                                                      // 0x04C8 (size: 0x8)
    FGameplayTag DamageDataTag;                                                       // 0x04D0 (size: 0x8)
    FGameplayTag MuteTag;                                                             // 0x04D8 (size: 0x8)
    FGameplayTag BlindTag;                                                            // 0x04E0 (size: 0x8)
    FGameplayTag DeafTag;                                                             // 0x04E8 (size: 0x8)
    FGameplayTag AttackingTag;                                                        // 0x04F0 (size: 0x8)
    FGameplayTag AIPatrolStateTag;                                                    // 0x04F8 (size: 0x8)
    FGameplayTag AIHeightenedStateTag;                                                // 0x0500 (size: 0x8)
    FGameplayTag AIInvestigateStateTag;                                               // 0x0508 (size: 0x8)
    FGameplayTag AICombatStateTag;                                                    // 0x0510 (size: 0x8)
    FGameplayTag AIChaseStateTag;                                                     // 0x0518 (size: 0x8)
    FGameplayTag CombatStateTag;                                                      // 0x0520 (size: 0x8)
    FGameplayTag HeightenedStateTag;                                                  // 0x0528 (size: 0x8)
    FGameplayTag HostileSearchStateTag;                                               // 0x0530 (size: 0x8)
    FGameplayTag EmptyTaskBoardTag;                                                   // 0x0538 (size: 0x8)
    FGameplayTag NoiseEventTag;                                                       // 0x0540 (size: 0x8)
    FGameplayTag ContinuousNoiseEventTag;                                             // 0x0548 (size: 0x8)
    FGameplayTag InstantNoiseEventTag;                                                // 0x0550 (size: 0x8)
    FGameplayTag SightEventTag;                                                       // 0x0558 (size: 0x8)
    FGameplayTag VampireSpeciesTag;                                                   // 0x0560 (size: 0x8)
    FGameplayTag DamageImmuneAgainstAllTag;                                           // 0x0568 (size: 0x8)
    FGameplayTag DamageImmuneAgainstEnemiesTag;                                       // 0x0570 (size: 0x8)
    FGameplayTag DamageImmuneAgainstPlayerTag;                                        // 0x0578 (size: 0x8)
    FGameplayTag WasAwareOfPlayerTag;                                                 // 0x0580 (size: 0x8)
    FGameplayTag BeingFedOnTag;                                                       // 0x0588 (size: 0x8)

    void SetTagsFromSubClass(TSubclassOf<class UAbilitySystemGlobals> InAbilitySystemGlobals);
    class UWrestlerAbilitySystemComponent* GetWrestlerAbilitySystemComponent(class AActor* Actor);
}; // Size: 0x590

class UWrestlerAbilityTargetActorData_SphereTrace : public UHeraDataAsset
{
    float Radius;                                                                     // 0x0030 (size: 0x4)
    bool bTraceByChannel;                                                             // 0x0034 (size: 0x1)
    bool bReticleUseEyeLocation;                                                      // 0x0035 (size: 0x1)
    bool bPitchRangeReduction;                                                        // 0x0036 (size: 0x1)
    float PitchedRange;                                                               // 0x0038 (size: 0x4)
    TEnumAsByte<ECollisionChannel> Channel;                                           // 0x003C (size: 0x1)
    float MaxRange;                                                                   // 0x0040 (size: 0x4)
    FCollisionProfileName TraceProfile;                                               // 0x0044 (size: 0x8)
    bool bTraceAffectsAimPitch;                                                       // 0x004C (size: 0x1)
    FName TargetingStartLocationSocketName;                                           // 0x0050 (size: 0x8)
    FGameplayTargetDataFilter Filter;                                                 // 0x0058 (size: 0x20)
    TSoftClassPtr<AGameplayAbilityWorldReticle> ReticleClass;                         // 0x0078 (size: 0x28)
    bool bDebug;                                                                      // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class UWrestlerAbilityTask : public UAbilityTask
{
}; // Size: 0xA0

class UWrestlerAbilityTask_ActorTimeDelay : public UAbilityTask
{
    FWrestlerAbilityTask_ActorTimeDelayOnFinish OnFinish;                             // 0x0080 (size: 0x10)
    void ActorTimeDelayDelegate();
    TWeakObjectPtr<class AActor> OwnerActor;                                          // 0x0094 (size: 0x8)

    void OnDurationFinish();
    class UWrestlerAbilityTask_ActorTimeDelay* ActorTimeDelay(class UGameplayAbility* OwningAbility, float Duration);
}; // Size: 0xA0

class UWrestlerAbilityTask_AimAssist : public UAbilityTask
{
    FWrestlerAbilityTask_AimAssistOnCancelled OnCancelled;                            // 0x0080 (size: 0x10)
    void WrestlerAimAssistEventDelegate();
    FWrestlerAbilityTask_AimAssistOnEnded OnEnded;                                    // 0x0090 (size: 0x10)
    void WrestlerAimAssistEventDelegate();
    class AActor* TargetActor;                                                        // 0x00A0 (size: 0x8)
    bool bUseTargetEyeLocation;                                                       // 0x00A8 (size: 0x1)
    bool bUsePitch;                                                                   // 0x00A9 (size: 0x1)
    FVector TargetLocation;                                                           // 0x00B0 (size: 0x18)
    float Strength;                                                                   // 0x0140 (size: 0x4)
    float Duration;                                                                   // 0x0144 (size: 0x4)
    class AController* OwningController;                                              // 0x0150 (size: 0x8)
    FName TargetSocketName;                                                           // 0x0158 (size: 0x8)

    class UWrestlerAbilityTask_AimAssist* WrestlerAimAssistToSocket(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FName TargetSocketName, bool bUsePitch, bool bClampPitch, float MinClampDegrees, float MaxClampDegrees, FVector TargetOffset, float Strength, float Duration, bool bDebugDraw);
    class UWrestlerAbilityTask_AimAssist* WrestlerAimAssistByDistance(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, bool bUseTargetEyeLocation, bool bUsePitch, float Strength, float MaxDistance);
    class UWrestlerAbilityTask_AimAssist* WrestlerAimAssist(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, bool bUseTargetEyeLocation, bool bUsePitch, FVector TargetLocation, float Strength, float Duration);
}; // Size: 0x180

class UWrestlerAbilityTask_AimAssistWithTargetting : public UAbilityTask
{
    class AActor* ChosenActor;                                                        // 0x0080 (size: 0x8)
    class AActor* PotentialActor;                                                     // 0x0088 (size: 0x8)
    class AActor* PreviousChosenActor;                                                // 0x0090 (size: 0x8)
    bool bShouldUseSocket;                                                            // 0x0098 (size: 0x1)
    FName SocketName;                                                                 // 0x009C (size: 0x8)
    FVector TargetLocationOffset;                                                     // 0x00A8 (size: 0x18)
    float Strength;                                                                   // 0x0140 (size: 0x4)
    class AWrestlerControllerInGame* OwningController;                                // 0x0148 (size: 0x8)
    bool bIsUsingMouse;                                                               // 0x0160 (size: 0x1)
    class AActor* SpawnedTargetReticle;                                               // 0x01A0 (size: 0x8)
    class AActor* SpawnedChosenTargetReticle;                                         // 0x01A8 (size: 0x8)
    class AActor* SpawnedPotentialTargetReticle;                                      // 0x01B0 (size: 0x8)
    float UnlockLookInputThreshold;                                                   // 0x01B8 (size: 0x4)
    FGameplayTag PauseAimAssistTag;                                                   // 0x01C8 (size: 0x8)
    FGameplayTag AimAssistActiveStateTag;                                             // 0x01D0 (size: 0x8)
    FGameplayTagContainer AimAssistBlockedTags;                                       // 0x01D8 (size: 0x20)
    class UCurveFloat* YawStrengthCurve;                                              // 0x01F8 (size: 0x8)
    class UCurveFloat* PitchStrengthCurve;                                            // 0x0200 (size: 0x8)
    float StrengthAlpha;                                                              // 0x0208 (size: 0x4)
    float StrengthAlphaFadeTime;                                                      // 0x020C (size: 0x4)
    float CurrentAlphaTime;                                                           // 0x0210 (size: 0x4)

    class UWrestlerAbilityTask_AimAssistWithTargetting* WrestlerAimAssistWithTargetting(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FAimAssistTargetSettingsStruct InAimAssistTargetSettingsStruct);
}; // Size: 0x220

class UWrestlerAbilityTask_AirJump : public UAbilityTask
{
    FWrestlerAbilityTask_AirJumpOnCancelled OnCancelled;                              // 0x0080 (size: 0x10)
    void WrestlerAirJumpEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_AirJumpOnMovementModeChanged OnMovementModeChanged;          // 0x0090 (size: 0x10)
    void WrestlerAirJumpMovementEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData, TEnumAsByte<EMovementMode> NewMovementMode);
    float AirJumpStrength;                                                            // 0x00A0 (size: 0x4)
    float FallSpeedMultiplier;                                                        // 0x00A4 (size: 0x4)
    float FallSpeedMinimum;                                                           // 0x00A8 (size: 0x4)
    float InitialVelocitySpeed;                                                       // 0x00AC (size: 0x4)

    class UWrestlerAbilityTask_AirJump* WrestlerAirJump(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, float AirJumpStrength, float FallSpeedMultiplier, float FallSpeedMinimum);
    void OnAbilityCancelled();
    void MovementModeChanged(TEnumAsByte<EMovementMode> NewMovementMode);
}; // Size: 0xB8

class UWrestlerAbilityTask_ApplyHit : public UAbilityTask
{
    class UWrestlerAbilityHitData* HitData;                                           // 0x0080 (size: 0x8)

    class UWrestlerAbilityTask_ApplyHit* WrestlerAbilityTask_ApplyHit(class UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, class UWrestlerAbilityHitData* InHitData, const FGameplayTag& InEventTag, const FGameplayEventData& InEventData, const bool InIsHitFreezeDisabled, const float InAudioHitMagnitude);
}; // Size: 0x148

class UWrestlerAbilityTask_Crouch : public UAbilityTask
{
    FWrestlerAbilityTask_CrouchOnCancelled OnCancelled;                               // 0x0080 (size: 0x10)
    void WrestlerCrouchEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FGameplayTagQuery CancelAbilityQuery;                                             // 0x0090 (size: 0x48)
    bool bCanJumpOutOfCrouch;                                                         // 0x00D8 (size: 0x1)
    bool bToggleCrouch;                                                               // 0x00D9 (size: 0x1)

    class UWrestlerAbilityTask_Crouch* WrestlerCrouch(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTagQuery CancelAbilityQuery, bool bCanJumpOutOfCrouch, bool bToggleCrouch);
    void UnCrouch();
    void OnAnotherAbilityActivated(class UGameplayAbility* CancellingAbility);
    void OnAbilityCancelled();
}; // Size: 0xF0

class UWrestlerAbilityTask_Decoy : public UWrestlerAbilityTask
{
    class AWrestlerAbilitySystemCharacter* DecoyInstance;                             // 0x00F8 (size: 0x8)
    class UWrestlerAttributeSet* AttributeSet;                                        // 0x0160 (size: 0x8)

    void OnSpawned(class AWrestlerAbilitySystemCharacter* InActor);
    void OnDamaged(float InDamage, class AActor* InDamageInstigator);
    void LifeTimeExpired();
    void DecoyDelegate__DelegateSignature(class AActor* Actor);
}; // Size: 0x170

class UWrestlerAbilityTask_Deploy : public UWrestlerAbilityTask
{

    void OnMontageEventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    void OnMontageCancelled(FGameplayTag EventTag, FGameplayEventData EventData);
}; // Size: 0xD0

class UWrestlerAbilityTask_DisplacementCheck : public UWrestlerAbilityTask
{
    FWrestlerAbilityTask_DisplacementCheckOnDisplacementReached OnDisplacementReached; // 0x00A0 (size: 0x10)
    void WrestlerDisplacementDelegate();
    class AActor* TargetActor;                                                        // 0x00B0 (size: 0x8)

    class UWrestlerAbilityTask_DisplacementCheck* WrestlerDisplacementCheck(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* InTargetActor, float InMaxDistance);
}; // Size: 0xD8

class UWrestlerAbilityTask_EmitFear : public UAbilityTask
{
}; // Size: 0xB8

class UWrestlerAbilityTask_EnemyClimb : public UWrestlerAbilityTask
{
    FWrestlerAbilityTask_EnemyClimbOnFinishEnemyClimb OnFinishEnemyClimb;             // 0x00A0 (size: 0x10)
    void WrestlerEnemyClimb();
    class UWrestlerGameplayAbility* OwnerAbility;                                     // 0x00B0 (size: 0x8)
    class UAnimMontage* ClimbMontage;                                                 // 0x00B8 (size: 0x8)
    class UWrestlerMovementComponent* MovementComponent;                              // 0x00C0 (size: 0x8)
    class AAIController* Controller;                                                  // 0x00C8 (size: 0x8)

    class UWrestlerAbilityTask_EnemyClimb* EnemyClimb(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* InClimbAnimMontage);
}; // Size: 0xD0

class UWrestlerAbilityTask_FaceActor : public UAbilityTask
{
    FWrestlerAbilityTask_FaceActorOnTargetEvaded OnTargetEvaded;                      // 0x0080 (size: 0x10)
    void WrestlerFaceActorEvadedDelegate();
    class AActor* TargetActor;                                                        // 0x0090 (size: 0x8)
    FGameplayTag EventTag;                                                            // 0x0098 (size: 0x8)
    FVector LocationToFace;                                                           // 0x00A0 (size: 0x18)

    class UWrestlerAbilityTask_FaceActor* WrestlerFaceActor(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* InTargetActor, FGameplayTag InEventTag, FVector InLocationToFace, bool bInDebug);
    void LockRotation();
}; // Size: 0xC8

class UWrestlerAbilityTask_FistHitDetect : public UAbilityTask
{
    FWrestlerAbilityTask_FistHitDetectOnHit OnHit;                                    // 0x0080 (size: 0x10)
    void WrestlerFistHitEventDelegate(FHitResult OutHit);
    class AController* OwningController;                                              // 0x0090 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0098 (size: 0x8)
    class USkeletalMeshComponent* OwnerSkeletalMesh;                                  // 0x00A0 (size: 0x8)
    class USkeletalMeshComponent* TargetSkeletalMesh;                                 // 0x00A8 (size: 0x8)
    FName TraceOriginSocketName;                                                      // 0x00B0 (size: 0x8)

    class UWrestlerAbilityTask_FistHitDetect* FistHitDetect(class UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, FName InTraceOriginSocketName, class AActor* TargetActor, float InTraceDistance, bool InbDebugDraw);
}; // Size: 0xC0

class UWrestlerAbilityTask_Glide : public UAbilityTask
{
    FWrestlerAbilityTask_GlideOnCancelled OnCancelled;                                // 0x0080 (size: 0x10)
    void WrestlerGlideEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_GlideOnAbilityActivated OnAbilityActivated;                  // 0x0090 (size: 0x10)
    void WrestlerGlideEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_GlideOnMovementModeChanged OnMovementModeChanged;            // 0x00A0 (size: 0x10)
    void WrestlerMovementEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData, TEnumAsByte<EMovementMode> NewMovementMode);
    FGameplayTagQuery OtherAbilityActive;                                             // 0x00B0 (size: 0x48)
    TArray<TEnumAsByte<EMovementMode>> MovementModeChange;                            // 0x00F8 (size: 0x10)
    FVector GlideAcceleration;                                                        // 0x0108 (size: 0x18)
    float AirControl;                                                                 // 0x0120 (size: 0x4)
    class UWrestlerMovementComponent* CachedMovementComponent;                        // 0x0128 (size: 0x8)

    class UWrestlerAbilityTask_Glide* WrestlerGlide(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTagQuery OtherAbilityActive, TArray<TEnumAsByte<EMovementMode>> MovementModeChange, FVector GlideAcceleration, float AirControl);
    void StopGliding();
    void OnNewMovementMode(TEnumAsByte<EMovementMode> NewMovementMode);
    void OnAnotherAbilityActivated(class UGameplayAbility* OtherAbility);
    void OnAbilityEnded(class UGameplayAbility* AbilityEnded);
    void OnAbilityCancelled();
}; // Size: 0x150

class UWrestlerAbilityTask_HeightenedSensesTargeting : public UWrestlerAbilityTask
{
    FWrestlerAbilityTask_HeightenedSensesTargetingOnTargetUpdate OnTargetUpdate;      // 0x00A0 (size: 0x10)
    void TargetingReadyEventDelegate();
    class AActor* ReferenceActor;                                                     // 0x00D8 (size: 0x8)
    TArray<class AActor*> Targets;                                                    // 0x00E0 (size: 0x10)
    TArray<class UObject*> AllInterfaceUsers;                                         // 0x00F0 (size: 0x10)

    class UWrestlerAbilityTask_HeightenedSensesTargeting* WrestlerHeightenedSensesTargeting(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, class AActor* ReferenceActor, float ExpansionDuration, float MaxRadius, float RefreshTargetListPeriod, float RefreshTargetListPeriodDuringPulse);
    void RefreshTargets();
    TArray<class AActor*> GetTargets();
    float GetCurrentRadius();
}; // Size: 0x100

class UWrestlerAbilityTask_HitBase : public UAbilityTask
{
    FWrestlerAbilityTask_HitBaseOnCancelled OnCancelled;                              // 0x0080 (size: 0x10)
    void WrestlerHitEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);

}; // Size: 0x90

class UWrestlerAbilityTask_HitReactMove : public UAbilityTask_ApplyRootMotionConstantForce
{

    class UWrestlerAbilityTask_HitReactMove* WrestlerHitReactMove(class UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, const FGameplayEventData& InHitEvent, const float InStrength, float InDuration, const bool bInIsAdditive, class UCurveFloat* InStrengthOverTime, const ERootMotionFinishVelocityMode InVelocityOnFinishMode, const FVector InSetVelocityOnFinish, const float InClampVelocityOnFinish, const bool bInEnableGravity);
}; // Size: 0x110

class UWrestlerAbilityTask_HoldInput : public UWrestlerAbilityTask
{

    void OnControlCueProcess(float InWaitingTime);
}; // Size: 0xB8

class UWrestlerAbilityTask_Jump : public UAbilityTask
{
    FWrestlerAbilityTask_JumpOnLanded OnLanded;                                       // 0x0080 (size: 0x10)
    void WrestlerJumpEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_JumpOnApexReached OnApexReached;                             // 0x0090 (size: 0x10)
    void WrestlerJumpEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_JumpOnCancelled OnCancelled;                                 // 0x00A0 (size: 0x10)
    void WrestlerJumpEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    float JumpSpeedMultiplier;                                                        // 0x00B0 (size: 0x4)
    bool bCanJumpFromCrouch;                                                          // 0x00B4 (size: 0x1)
    bool bExtendableJump;                                                             // 0x00B5 (size: 0x1)
    float ExtendableJumpTime;                                                         // 0x00B8 (size: 0x4)
    FGameplayTagContainer UnBlockAtApex;                                              // 0x00C0 (size: 0x20)

    class UWrestlerAbilityTask_Jump* WrestlerJump(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTagContainer UnBlockAtApex, float JumpSpeedMultiplier, bool bExtendableJump, float ExtendableJumpTime);
    void OnJumpLanded(const FHitResult& Hit);
    void OnJumpApexReached();
    void OnAbilityCancelled();
}; // Size: 0xF0

class UWrestlerAbilityTask_LedgeVault : public UWrestlerTraversalAbilityTask
{

    class UWrestlerAbilityTask_LedgeVault* WrestlerLedgeVault(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, float lerpDuration, float stateDuration);
}; // Size: 0xE8

class UWrestlerAbilityTask_LineTrace : public UWrestlerAbilityTask
{
    FWrestlerAbilityTask_LineTraceOnTargetingCompleted OnTargetingCompleted;          // 0x00A0 (size: 0x10)
    void TargetingCompletedEventDelegate(FVector InTargetLocation);
    FWrestlerAbilityTask_LineTraceOnTargetingFailed OnTargetingFailed;                // 0x00B0 (size: 0x10)
    void GenericGameplayTaskDelegate();
    class AActor* SpawnedReticle;                                                     // 0x0168 (size: 0x8)
    class AActor* TraceToActor;                                                       // 0x0170 (size: 0x8)

    class UWrestlerAbilityTask_LineTrace* LineTraceToTarget(class UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, TArray<TEnumAsByte<EObjectTypeQuery>> InObjectQuery, class AActor* TargetActor, TEnumAsByte<EDrawDebugTrace::Type> debugTraceType, FName InSocketName, float Delay, bool EndTaskOnFirstSuccessfulHit);
}; // Size: 0x190

class UWrestlerAbilityTask_Magnet : public UAbilityTask
{
    class AActor* PhysicActor;                                                        // 0x0080 (size: 0x8)
    class AActor* Owner;                                                              // 0x0088 (size: 0x8)
    class UPrimitiveComponent* PrimitiveComponent;                                    // 0x0090 (size: 0x8)

    class UWrestlerAbilityTask_Magnet* Magnet(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, class AActor* PhysicActor, class AActor* Owner, FVector RelativeOffset, float FollowTightness, float OffsetTightness);
}; // Size: 0xD0

class UWrestlerAbilityTask_Mantle : public UWrestlerTraversalAbilityTask
{

    class UWrestlerAbilityTask_Mantle* WrestlerMantle(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, float lerpDuration, float stateDuration);
}; // Size: 0xE8

class UWrestlerAbilityTask_MomentumCharge : public UWrestlerAbilityTask_WaitControlCue
{
    FWrestlerAbilityTask_MomentumChargeOnFullyCharged OnFullyCharged;                 // 0x00B0 (size: 0x10)
    void MomentumChargeDelegate(float ChargeProportion, FVector destination, class AActor* PrimaryTarget, bool bUnableToWarp);
    FWrestlerAbilityTask_MomentumChargeOnReportData OnReportData;                     // 0x00C0 (size: 0x10)
    void MomentumChargeDelegate(float ChargeProportion, FVector destination, class AActor* PrimaryTarget, bool bUnableToWarp);
    FWrestlerAbilityTask_MomentumChargeOnDestinationUpdated OnDestinationUpdated;     // 0x00D0 (size: 0x10)
    void MomentumChargeDelegate(float ChargeProportion, FVector destination, class AActor* PrimaryTarget, bool bUnableToWarp);
    TWeakObjectPtr<class AActor> ExtraDamageTarget;                                   // 0x0150 (size: 0x8)

    class UWrestlerAbilityTask_MomentumCharge* WrestlerMomentumCharge(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, FWrestlerMomentumAbilityChargeParameters Parameters);
}; // Size: 0x1E8

class UWrestlerAbilityTask_MomentumMove : public UAbilityTask
{
    FWrestlerAbilityTask_MomentumMoveOnMovementComplete OnMovementComplete;           // 0x0080 (size: 0x10)
    void MomentumMoveDelegate(FGameplayEventData TargetData);
    FWrestlerAbilityTask_MomentumMoveOnTargetStruck OnTargetStruck;                   // 0x0090 (size: 0x10)
    void MomentumMoveDelegate(FGameplayEventData TargetData);

    class UWrestlerAbilityTask_MomentumMove* WrestlerMomentumMove(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, FWrestlerMomentumAbilityMoveParameters Parameters);
}; // Size: 0x1A0

class UWrestlerAbilityTask_MoveOverlaps : public UWrestlerAbilityTask
{
    FWrestlerAbilityTask_MoveOverlapsOnOverlap OnOverlap;                             // 0x00A0 (size: 0x10)
    void WrestlerMoveOverlapDelegate(FGameplayEventData EventData);
    class UPrimitiveComponent* OverlappingComp;                                       // 0x0130 (size: 0x8)

    class UWrestlerAbilityTask_MoveOverlaps* WaitMoveOverlaps(class UGameplayAbility* InOwningAbility, FName InTaskInstanceName, TEnumAsByte<ECollisionChannel> InOverlapChannel, TArray<class AActor*> InActorsToIgnore, bool bInEndOnOverlap);
}; // Size: 0x160

class UWrestlerAbilityTask_MovePhysicActorToTarget : public UAbilityTask
{
    FWrestlerAbilityTask_MovePhysicActorToTargetOnCompleted OnCompleted;              // 0x0080 (size: 0x10)
    void PhysicMovementDelegate();
    FWrestlerAbilityTask_MovePhysicActorToTargetOnFailed OnFailed;                    // 0x0090 (size: 0x10)
    void PhysicMovementDelegate();
    class AActor* PhysicActor;                                                        // 0x00A0 (size: 0x8)
    class AActor* destination;                                                        // 0x00A8 (size: 0x8)
    class UPrimitiveComponent* PrimitiveComponent;                                    // 0x00B0 (size: 0x8)

    class UWrestlerAbilityTask_MovePhysicActorToTarget* MovePhysicActorToTarget(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, class AActor* PhysicActor, class AActor* destination, FVector RelativeOffset, const float Speed, const float Acceleration, const float Threshold, const float MaxInertialAngle, const bool bGravity, const float MaxTime);
}; // Size: 0x110

class UWrestlerAbilityTask_MoveToActor : public UAbilityTask_ApplyRootMotionMoveToActorForce
{
    FWrestlerAbilityTask_MoveToActorOnMoveToCancelled OnMoveToCancelled;              // 0x0168 (size: 0x10)
    void WrestlerMoveToDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    float Delay;                                                                      // 0x0178 (size: 0x4)
    float MaximumHeightOffset;                                                        // 0x017C (size: 0x4)
    bool bMoveToFallingTarget;                                                        // 0x0180 (size: 0x1)
    float MaxRange;                                                                   // 0x0184 (size: 0x4)
    float MinRange;                                                                   // 0x0188 (size: 0x4)
    bool bInterruptBeforeDestinationReached;                                          // 0x018C (size: 0x1)
    bool bCanTimeOut;                                                                 // 0x018D (size: 0x1)
    bool bIgnoreDodge;                                                                // 0x018E (size: 0x1)
    bool bIgnoreHeightFromDistanceCheck;                                              // 0x018F (size: 0x1)
    bool bMoveToWhenNotInRange;                                                       // 0x0190 (size: 0x1)
    float VelocityWhenNotInRange;                                                     // 0x0194 (size: 0x4)
    bool bUseAIMoveTo;                                                                // 0x0198 (size: 0x1)
    bool bEnableGravity;                                                              // 0x0199 (size: 0x1)
    bool bDebug;                                                                      // 0x019A (size: 0x1)

    class UWrestlerAbilityTask_MoveToActor* WrestlerMoveToActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* InTargetActor, FWrestlerAbilityMoveTo MoveToData, bool bInDebug);
    void OnMoveToActorCancelled();
    void LockMoveTo();
}; // Size: 0x1A8

class UWrestlerAbilityTask_MoveToForce : public UAbilityTask_ApplyRootMotionMoveToForce
{
    class UCurveFloat* TimeMappingCurve;                                              // 0x0130 (size: 0x8)

    class UWrestlerAbilityTask_MoveToForce* WrestlerApplyMoveToForce(class UGameplayAbility* InOwningAbility, FName InTaskInstanceName, FVector InTargetLocation, float InDuration, bool InbSetNewMovementMode, TEnumAsByte<EMovementMode> InMovementMode, bool InbRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, class UCurveFloat* InTimeMappingCurve, ERootMotionFinishVelocityMode InVelocityOnFinishMode, FVector InSetVelocityOnFinish, float InClampVelocityOnFinish);
}; // Size: 0x138

class UWrestlerAbilityTask_OrbitTarget : public UAbilityTask_ApplyRootMotion_Base
{
    FWrestlerAbilityTask_OrbitTargetOnFinish OnFinish;                                // 0x00C8 (size: 0x10)
    void OrbitTargetDelegate();
    bool bLeft;                                                                       // 0x00D8 (size: 0x1)
    class AActor* Target;                                                             // 0x00E0 (size: 0x8)
    float Angle;                                                                      // 0x00E8 (size: 0x4)
    float Duration;                                                                   // 0x00EC (size: 0x4)
    bool bIsAdditive;                                                                 // 0x00F0 (size: 0x1)
    class UCurveFloat* StrengthOverTime;                                              // 0x00F8 (size: 0x8)
    bool bEnableGravity;                                                              // 0x0100 (size: 0x1)
    FVector StartingOffset;                                                           // 0x0108 (size: 0x18)

    class UWrestlerAbilityTask_OrbitTarget* OrbitTarget(class UGameplayAbility* OwningAbility, FName TaskInstanceName, bool bLeft, class AActor* Target, float Angle, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity, bool bDebug);
}; // Size: 0x128

class UWrestlerAbilityTask_OverrideTarget : public UAbilityTask
{
    class AActor* Target;                                                             // 0x0080 (size: 0x8)

}; // Size: 0x88

class UWrestlerAbilityTask_PlayMontageAndWaitForEvent : public UAbilityTask
{
    FWrestlerAbilityTask_PlayMontageAndWaitForEventOnCompleted OnCompleted;           // 0x0080 (size: 0x10)
    void WrestlerPlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlayMontageAndWaitForEventOnBlendOut OnBlendOut;             // 0x0090 (size: 0x10)
    void WrestlerPlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlayMontageAndWaitForEventOnInterrupted OnInterrupted;       // 0x00A0 (size: 0x10)
    void WrestlerPlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlayMontageAndWaitForEventOnCancelled OnCancelled;           // 0x00B0 (size: 0x10)
    void WrestlerPlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlayMontageAndWaitForEventEventReceived EventReceived;       // 0x00C0 (size: 0x10)
    void WrestlerPlayMontageAndWaitForEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    class UAnimMontage* MontageToPlay;                                                // 0x00D0 (size: 0x8)
    FGameplayTagContainer EventTags;                                                  // 0x00D8 (size: 0x20)
    float Rate;                                                                       // 0x00F8 (size: 0x4)
    FName StartSection;                                                               // 0x00FC (size: 0x8)
    float AnimRootMotionTranslationScale;                                             // 0x0104 (size: 0x4)
    bool bStopWhenAbilityEnds;                                                        // 0x0108 (size: 0x1)
    bool bDoOnce;                                                                     // 0x0109 (size: 0x1)
    class ACharacter* Target;                                                         // 0x0110 (size: 0x8)

    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEventToTarget(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, FGameplayTagContainer EventTags, float Rate, FName StartSection, bool bStopWhenAbilityEnds, bool bDoOnce, float AnimRootMotionTranslationScale, class ACharacter* Target);
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, FGameplayTagContainer EventTags, float Rate, FName StartSection, bool bStopWhenAbilityEnds, bool bDoOnce, float AnimRootMotionTranslationScale);
}; // Size: 0x148

class UWrestlerAbilityTask_PlaySequenceAndWaitForEvent : public UAbilityTask
{
    FWrestlerAbilityTask_PlaySequenceAndWaitForEventOnSequenceStopped OnSequenceStopped; // 0x0080 (size: 0x10)
    void WrestlerSequenceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlaySequenceAndWaitForEventOnSequenceFinished OnSequenceFinished; // 0x0090 (size: 0x10)
    void WrestlerSequenceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlaySequenceAndWaitForEventOnSequencePlay OnSequencePlay;    // 0x00A0 (size: 0x10)
    void WrestlerSequenceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlaySequenceAndWaitForEventOnSequencePause OnSequencePause;  // 0x00B0 (size: 0x10)
    void WrestlerSequenceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlaySequenceAndWaitForEventOnCancelled OnCancelled;          // 0x00C0 (size: 0x10)
    void WrestlerSequenceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlaySequenceAndWaitForEventOnSequenceUpdate OnSequenceUpdate; // 0x00D0 (size: 0x10)
    void WrestlerSequenceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_PlaySequenceAndWaitForEventEventReceived EventReceived;      // 0x00E0 (size: 0x10)
    void WrestlerSequenceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FGameplayTagContainer EventTags;                                                  // 0x00F0 (size: 0x20)
    class ULevelSequencePlayer* SequencePlayer;                                       // 0x0110 (size: 0x8)
    class UDefaultLevelSequenceInstanceData* InstanceData;                            // 0x0118 (size: 0x8)
    FCharacterSequenceData CharacterSequenceData;                                     // 0x0120 (size: 0x80)

    void WrestlerSequenceEventDelegate__DelegateSignature(FGameplayTag EventTag, FGameplayEventData EventData);
    void UpdateSequenceData(const FCharacterSequenceData& InSequenceData);
    void Unbind();
    class UWrestlerAbilityTask_PlaySequenceAndWaitForEvent* PlaySequenceAndWaitForEvent(class UWrestlerGameplayAbility* InOwningAbility, FName InTaskInstanceName, class ULevelSequence* InLevelSequence, FGameplayTagContainer InEventTags, class AActor* InTransformOriginActor, const FTransform& InTransformOrigin, bool bInSendSequenceData, bool bInSequenceIgnoresTaskEnd, const FMovieSceneSequencePlaybackSettings& InPlaybackSettings, const FCharacterSequenceData& InCharacterSequenceData, const FWrestlerSequenceSettings& InBindings, class ALevelSequenceActor*& OutLevelSequenceActor);
    void OnStop();
    void OnPlay();
    void OnPause();
    void OnFinished();
}; // Size: 0x1C0

class UWrestlerAbilityTask_Projectile : public UWrestlerAbilityTask
{
    class AActor* Target;                                                             // 0x0110 (size: 0x8)
    class AActor* ProjectileInstance;                                                 // 0x0118 (size: 0x8)

    void ProjectileDelegateHit__DelegateSignature(class AActor* InOtherActor, FHitResult InHitResult);
    void ProjectileDelegate__DelegateSignature(class AActor* InOtherActor);
    void OnSpawnedActor(class AActor* InActor);
    void OnProjectileOverlapped(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bInFromSweep, const FHitResult& InSweepResult);
    void OnProjectileHitted(class UPrimitiveComponent* InHitComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, FVector InNormalImpulse, const FHitResult& InHit);
    void OnLifeTimeExpired();
}; // Size: 0x128

class UWrestlerAbilityTask_RangedAim : public UAbilityTask_PlayMontageAndWait
{
    FWrestlerAbilityTask_RangedAimOnEvaded OnEvaded;                                  // 0x0108 (size: 0x10)
    void MontageWaitSimpleDelegate();
    FGameplayTag EvadeTag;                                                            // 0x0120 (size: 0x8)
    FGameplayTag AimCue;                                                              // 0x0128 (size: 0x8)
    float AimDuration;                                                                // 0x0130 (size: 0x4)
    FName EvadeSection;                                                               // 0x0134 (size: 0x8)
    float EvadeTime;                                                                  // 0x013C (size: 0x4)
    class AActor* TargetActor;                                                        // 0x0140 (size: 0x8)
    FVector LocationToFace;                                                           // 0x0148 (size: 0x18)
    TWeakObjectPtr<class AActor> Weapon;                                              // 0x0160 (size: 0x8)
    bool bDebug;                                                                      // 0x0168 (size: 0x1)

    class UWrestlerAbilityTask_RangedAim* RangedAim(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, FWrestlerPlayMontage InPlayMontageData, FGameplayTag InEvadeTag, FGameplayTag InAimCue, float InAimDuration, FName InEvadeSection, float InEvadeTime, class AActor* InTargetActor, FVector InTargetLocation, TSoftObjectPtr<AActor> InWeapon, bool bDebug);
    void OnTargetEvaded();
}; // Size: 0x170

class UWrestlerAbilityTask_RangedAttack : public UAbilityTask
{
    FWrestlerAbilityTask_RangedAttackOnRangedAttackHit OnRangedAttackHit;             // 0x0080 (size: 0x10)
    void WrestlerRangedAttackDelegate(FGameplayTag EventTag, FGameplayEventData EventData, FGameplayAbilityTargetDataHandle TargetData);
    FWrestlerAbilityTask_RangedAttackOnRangedAttackMiss OnRangedAttackMiss;           // 0x0090 (size: 0x10)
    void WrestlerRangedAttackMissDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    float Spread;                                                                     // 0x00A0 (size: 0x4)
    TEnumAsByte<ECollisionChannel> TraceCollisionChannel;                             // 0x00A4 (size: 0x1)
    FGameplayTargetDataFilter TargetDataFilter;                                       // 0x00A8 (size: 0x20)
    TSet<TSubclassOf<AActor>> ClassesToIgnore;                                        // 0x00C8 (size: 0x50)
    FName MuzzleSocketName;                                                           // 0x0118 (size: 0x8)
    FName WeaponSocketName;                                                           // 0x0120 (size: 0x8)
    class AActor* Target;                                                             // 0x0128 (size: 0x8)
    float MaxRange;                                                                   // 0x0130 (size: 0x4)
    float EnvironmentalDamage;                                                        // 0x0134 (size: 0x4)
    FGameplayTag ImpactCueTag;                                                        // 0x0138 (size: 0x8)
    FGameplayTag FireCueTag;                                                          // 0x0140 (size: 0x8)
    float MultifireSpread;                                                            // 0x0148 (size: 0x4)
    uint8 MultifireTraceNum;                                                          // 0x014C (size: 0x1)
    bool bPlayerDodged;                                                               // 0x014D (size: 0x1)
    bool bDebug;                                                                      // 0x014E (size: 0x1)

    class UWrestlerAbilityTask_RangedAttack* WrestlerRangedAttack(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<ECollisionChannel> TraceCollisionChannel, TSet<TSubclassOf<AActor>> ClassesToIgnore, FGameplayTargetDataFilter TargetDataFilter, FName MuzzleSocketName, FName WeaponSocketName, class AActor* Target, float Spread, float MaxRange, float EnvironmentalDamage, FGameplayTag ImpactCueTag, FGameplayTag FireCueTag, float MultifireSpread, uint8 MultifireTraceNum, bool bInPlayerDodged, bool bDebug);
    void OnHitTargets(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayEventData EventData);
}; // Size: 0x150

class UWrestlerAbilityTask_RealTimeDelay : public UAbilityTask
{
    FWrestlerAbilityTask_RealTimeDelayOnFinish OnFinish;                              // 0x0080 (size: 0x10)
    void RealTimeDelayDelegate();

    class UWrestlerAbilityTask_RealTimeDelay* WaitRealDelay(class UGameplayAbility* OwningAbility, float Duration);
    void OnDurationFinish();
}; // Size: 0xB0

class UWrestlerAbilityTask_RotateActor : public UAbilityTask
{
    FWrestlerAbilityTask_RotateActorOnRotateToCancelled OnRotateToCancelled;          // 0x0080 (size: 0x10)
    void WrestlerRotateEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    class AActor* ActorToFace;                                                        // 0x0090 (size: 0x8)
    FVector LocationToFace;                                                           // 0x0098 (size: 0x18)
    FRotator RotatorOverride;                                                         // 0x00B0 (size: 0x18)
    float Duration;                                                                   // 0x00C8 (size: 0x4)
    float Precision;                                                                  // 0x00CC (size: 0x4)
    bool bUsePrecision;                                                               // 0x00D0 (size: 0x1)
    float Delay;                                                                      // 0x00D4 (size: 0x4)
    bool bIgnoreDodge;                                                                // 0x00D8 (size: 0x1)
    bool bUseAISetFocus;                                                              // 0x00D9 (size: 0x1)
    bool bDebug;                                                                      // 0x00DA (size: 0x1)

    class UWrestlerAbilityTask_RotateActor* WrestlerRotateActor(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* InTargetActor, FWrestlerAbilityRotate AbilityRotateData, bool bInDebug);
    void OnRotationCancelled();
    void LockRotation();
}; // Size: 0x108

class UWrestlerAbilityTask_SetAITarget : public UWrestlerAbilityTask
{
}; // Size: 0xB8

class UWrestlerAbilityTask_SetCtrlRot : public UWrestlerAbilityTask
{
    class AController* OwningController;                                              // 0x00A0 (size: 0x8)
    FRotator NewRotation;                                                             // 0x00A8 (size: 0x18)
    float Speed;                                                                      // 0x00C0 (size: 0x4)
    float Timeout;                                                                    // 0x00C4 (size: 0x4)
    float TimeCount;                                                                  // 0x00C8 (size: 0x4)

    class UWrestlerAbilityTask_SetCtrlRot* SetControlRotation(class UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, FRotator InNewRotation, float InInterSpeed);
}; // Size: 0xD0

class UWrestlerAbilityTask_Slide : public UAbilityTask
{
    FWrestlerAbilityTask_SlideOnCancelled OnCancelled;                                // 0x0080 (size: 0x10)
    void WrestlerSlideEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_SlideOnCrouchSpeedReached OnCrouchSpeedReached;              // 0x0090 (size: 0x10)
    void WrestlerSlideEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_SlideOnFacingThresholdReached OnFacingThresholdReached;      // 0x00A0 (size: 0x10)
    void WrestlerSlideEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    FWrestlerAbilityTask_SlideOnSlideEnded OnSlideEnded;                              // 0x00B0 (size: 0x10)
    void WrestlerSlideEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    float Deceleration;                                                               // 0x00C0 (size: 0x4)
    float MinimumSlideSpeed;                                                          // 0x00C8 (size: 0x4)
    float MinimumSlideDot;                                                            // 0x00CC (size: 0x4)
    float MoveInputScale;                                                             // 0x00D0 (size: 0x4)
    float SlopeAccelerationFactor;                                                    // 0x00D4 (size: 0x4)
    float GroundFriction;                                                             // 0x00D8 (size: 0x4)
    float MaxAcceleration;                                                            // 0x00E0 (size: 0x4)
    bool bSprintPersists;                                                             // 0x00E8 (size: 0x1)
    FVector SlideDirection;                                                           // 0x00F0 (size: 0x18)

    class UWrestlerAbilityTask_Slide* WrestlerSlide(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, float Deceleration, float GroundFriction, float MaxAcceleration, float MinimumSlideSpeed, float MinimumSlideDot, float MoveInputScale, float SlopeAccelerationFactor, bool bSprintPersists);
    void StopSliding();
    void SlideEnded();
    void OnReachedFacingThreshold();
    void OnReachedCrouchSpeed();
    void OnAbilityCancelled();
}; // Size: 0x130

class UWrestlerAbilityTask_SpawnReticle : public UAbilityTask
{
    class AActor* SpawnedReticle;                                                     // 0x0080 (size: 0x8)

    class UWrestlerAbilityTask_SpawnReticle* WrestlerSpawnReticle(class UGameplayAbility* OwningAbility, FName InTaskInstanceName, TSubclassOf<class AGameplayAbilityWorldReticle> InReticleType);
}; // Size: 0x90

class UWrestlerAbilityTask_SphereTrace : public UWrestlerAbilityTask
{
}; // Size: 0xE8

class UWrestlerAbilityTask_SphericalTrigger : public UWrestlerAbilityTask
{
    class AActor* Instance;                                                           // 0x0160 (size: 0x8)

    void OverlapDelegate__DelegateSignature(class AActor* InOtherActor);
    void OnSpawnedActor(class AWrestlerAbilitySystemActor* InActor);
    void OnOverlapped(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bInFromSweep, const FHitResult& InSweepResult);
    void OnLifeTimeExpired();
}; // Size: 0x190

class UWrestlerAbilityTask_StartDialogue : public UWrestlerAbilityTask
{
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x00A0 (size: 0x8)
    FString StartKnotOverride;                                                        // 0x00A8 (size: 0x10)
    class UHeraPropertyBool* FeedChoice;                                              // 0x00B8 (size: 0x8)
    FWrestlerAbilityTask_StartDialogueOnFinish OnFinish;                              // 0x00C0 (size: 0x10)
    void GenericGameplayTaskDelegate();
    FWrestlerAbilityTask_StartDialogueOnFeed OnFeed;                                  // 0x00D0 (size: 0x10)
    void GenericGameplayTaskDelegate();

    class UWrestlerAbilityTask_StartDialogue* WrestlerTaskStartDialogue(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UHeraDialogueInfo* Story, FString JumpToKnot, class UHeraPropertyBool* Choice);
}; // Size: 0x108

class UWrestlerAbilityTask_Stun : public UAbilityTask
{
    FWrestlerAbilityTask_StunStunDelegate StunDelegate;                               // 0x0080 (size: 0x10)
    void WrestlerStunDelegate(float StunDuration);

    class UWrestlerAbilityTask_Stun* WrestlerStun(class UGameplayAbility* InOwningAbility, FName InTaskInstanceName);
}; // Size: 0x90

class UWrestlerAbilityTask_TargetAssistAndConfirm : public UWrestlerAbilityTask
{
    TSubclassOf<class AActor> ReticleClass;                                           // 0x00C0 (size: 0x8)
    FGameplayTargetDataFilter Filter;                                                 // 0x00D0 (size: 0x20)
    class AActor* SpawnedReticle;                                                     // 0x00F0 (size: 0x8)
    class UGameplayAbility* OwningAbility;                                            // 0x00F8 (size: 0x8)

}; // Size: 0x118

class UWrestlerAbilityTask_TargetAssisted : public UWrestlerAbilityTask
{
    FWrestlerAbilityTask_TargetAssistedOnTargetingCompleted OnTargetingCompleted;     // 0x00A0 (size: 0x10)
    void TargetingCompletedEventDelegate(class AActor* InTarget);

    void TargetingCompletedEventDelegate__DelegateSignature(class AActor* InTarget);
    class UWrestlerAbilityTask_TargetAssisted* TargetAssistedLerp(class UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, float InRadius, float InMinThreshold, float InMaxThreshold, float InWeightDistance, float InWeightAngle, TEnumAsByte<ECollisionChannel> InQueryChannel, TEnumAsByte<ECollisionChannel> InIsReachableChannel, bool bInShouldBeReachable, FTransform InTransform, FGameplayTargetDataFilter InFilter);
    class UWrestlerAbilityTask_TargetAssisted* TargetAssisted(class UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, float InRadius, float InThreshold, float InWeightDistance, float InWeightAngle, TEnumAsByte<ECollisionChannel> InQueryChannel, TEnumAsByte<ECollisionChannel> InIsReachableChannel, bool bInShouldBeReachable, FTransform InTransform, FGameplayTargetDataFilter InFilter);
}; // Size: 0x160

class UWrestlerAbilityTask_TargetLockOn : public UWrestlerAbilityTask
{
    FGameplayTargetDataFilter Filter;                                                 // 0x0110 (size: 0x20)
    TSubclassOf<class AActor> ReticleClass;                                           // 0x0130 (size: 0x8)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x0138 (size: 0x1)
    class AActor* SpawnedReticle;                                                     // 0x0140 (size: 0x8)
    class AController* OwningController;                                              // 0x0148 (size: 0x8)
    class APawn* OwningPawn;                                                          // 0x0150 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0158 (size: 0x8)
    class APawn* TargetPawn;                                                          // 0x0160 (size: 0x8)
    TArray<TWeakObjectPtr<AActor>> ActorsToIgnore;                                    // 0x0168 (size: 0x10)
    class UCurveFloat* CameraYawCurve;                                                // 0x0178 (size: 0x8)

}; // Size: 0x180

class UWrestlerAbilityTask_Tick : public UAbilityTask
{
    FWrestlerAbilityTask_TickOnFinish OnFinish;                                       // 0x0080 (size: 0x10)
    void GenericGameplayTaskDelegate();
    FWrestlerAbilityTask_TickOnCancelled OnCancelled;                                 // 0x0090 (size: 0x10)
    void GenericGameplayTaskDelegate();
    FWrestlerAbilityTask_TickOnTick OnTick;                                           // 0x00A0 (size: 0x10)
    void GenericGameplayTaskDelegate();
    float ElapsedTime;                                                                // 0x00B0 (size: 0x4)
    float Duration;                                                                   // 0x00B4 (size: 0x4)

    class UWrestlerAbilityTask_Tick* WrestlerTaskTick(class UGameplayAbility* OwningAbility, FName TaskInstanceName, float Duration);
}; // Size: 0xB8

class UWrestlerAbilityTask_TimeDilation : public UAbilityTask
{
    class UGameplayAbility* OwningAbility;                                            // 0x0080 (size: 0x8)

    void OnTargetObtained(TArray<FHitResult>& Targets);
}; // Size: 0xC0

class UWrestlerAbilityTask_Trance : public UAbilityTask
{
    FWrestlerAbilityTask_TranceOnCancelled OnCancelled;                               // 0x0080 (size: 0x10)
    void WrestlerTranceEventDelegate(FGameplayTag EventTag, FGameplayEventData EventData);
    class AActor* Target;                                                             // 0x0090 (size: 0x8)

    class UWrestlerAbilityTask_Trance* WrestlerTrance(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* Target);
    void OnAbilityCancelled();
}; // Size: 0xA0

class UWrestlerAbilityTask_UpdateWarpTarget : public UAbilityTask
{
    class AActor* Target;                                                             // 0x0088 (size: 0x8)
    class UMotionWarpingComponent* MotionWarpingComponent;                            // 0x0090 (size: 0x8)

    class UWrestlerAbilityTask_UpdateWarpTarget* UpdateWarpTarget(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, FName InWarpTargetName, class AActor* InTarget, float InDistanceOffset, float InRotationOffset);
}; // Size: 0xA0

class UWrestlerAbilityTask_Vault : public UWrestlerTraversalAbilityTask
{

    class UWrestlerAbilityTask_Vault* WrestlerVault(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, float lerpDuration, float stateDuration);
}; // Size: 0xE8

class UWrestlerAbilityTask_WaitControlCue : public UWrestlerAbilityTask_WaitControlCue_Base
{
    class UWrestlerControlCue* CueToWaitFor;                                          // 0x0098 (size: 0x8)

    class UWrestlerAbilityTask_WaitControlCue* WrestlerAbilityTask_WaitControlCue(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, class UWrestlerControlCue* CueToWaitFor, bool bUnbindOnExecute);
    void OnProcessCallback();
}; // Size: 0xB0

class UWrestlerAbilityTask_WaitControlCue_Base : public UAbilityTask
{
    FWrestlerAbilityTask_WaitControlCue_BaseOnControlCueProcess OnControlCueProcess;  // 0x0080 (size: 0x10)
    void WrestlerControlCueProcessDelegate(float WaitingTime);

}; // Size: 0x90

class UWrestlerAbilityTask_WaitInputReleased : public UAbilityTask
{
    FWrestlerAbilityTask_WaitInputReleasedOnRelease OnRelease;                        // 0x0080 (size: 0x10)
    void WrestlerInputReleaseDelegate(float TimeHeld);

    class UWrestlerAbilityTask_WaitInputReleased* WrestlerWaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased, class UWrestlerControlCue* CueToWaitFor);
    void OnReleaseCallback();
    void OnInputReleased(class UWrestlerControlCue* CuePressed);
}; // Size: 0xA8

class UWrestlerAbilityTask_WaitTargetData : public UAbilityTask_WaitTargetData
{

    class UAbilityTask_WaitTargetData* WrestlerWaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, class AGameplayAbilityTargetActor* InTargetActor);
    class UWrestlerAbilityTask_WaitTargetData* WrestlerWaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> InTargetActorClass);
}; // Size: 0xC0

class UWrestlerAbilityTask_WaitTargetDataUsingActor : public UAbilityTask
{
    FWrestlerAbilityTask_WaitTargetDataUsingActorValidData ValidData;                 // 0x0080 (size: 0x10)
    void WaitTargetDataUsingActorDelegate(const FGameplayAbilityTargetDataHandle& Data);
    FWrestlerAbilityTask_WaitTargetDataUsingActorCancelled Cancelled;                 // 0x0090 (size: 0x10)
    void WaitTargetDataUsingActorDelegate(const FGameplayAbilityTargetDataHandle& Data);
    class AGameplayAbilityTargetActor* TargetActor;                                   // 0x00A0 (size: 0x8)

    class UWrestlerAbilityTask_WaitTargetDataUsingActor* WaitTargetDataWithReusableActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, class AGameplayAbilityTargetActor* InTargetActor);
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
}; // Size: 0xB0

class UWrestlerAbilityTask_WaitTarget_SphereTarget : public UWrestlerAbilityTask
{
    FGameplayTargetDataFilterHandle Filter;                                           // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UWrestlerAbilityTask_WaitTarget_SphereTrace : public UWrestlerAbilityTask_WrestlerWaitTargetData
{
}; // Size: 0xC0

class UWrestlerAbilityTask_WallClimb : public UAbilityTask
{
    FWrestlerAbilityTask_WallClimbOnFinishToFall OnFinishToFall;                      // 0x0080 (size: 0x10)
    void WallClimbDelegate();
    FWrestlerAbilityTask_WallClimbOnFinishToFallBlocked OnFinishToFallBlocked;        // 0x0090 (size: 0x10)
    void WallClimbDelegate();
    FWrestlerAbilityTask_WallClimbOnFinishToLedgeVault OnFinishToLedgeVault;          // 0x00A0 (size: 0x10)
    void WallClimbDelegate();
    FWrestlerAbilityTask_WallClimbOnFinishToMantle OnFinishToMantle;                  // 0x00B0 (size: 0x10)
    void WallClimbDelegate();
    FWrestlerAbilityTask_WallClimbOnFinishToVault OnFinishToVault;                    // 0x00C0 (size: 0x10)
    void WallClimbDelegate();
    FWrestlerAbilityTask_WallClimbOnCancel OnCancel;                                  // 0x00D0 (size: 0x10)
    void WallClimbDelegate();
    FWrestlerAbilityTask_WallClimbOnLerpComplete OnLerpComplete;                      // 0x00E0 (size: 0x10)
    void TraversalDelegate();
    FVector SmoothedForwardVector;                                                    // 0x00F8 (size: 0x18)
    FVector WallInwardVector;                                                         // 0x0110 (size: 0x18)
    FVector2D LastClimbVector;                                                        // 0x0128 (size: 0x10)

    class UWrestlerAbilityTask_WallClimb* WrestlerWallClimb(class UWrestlerGameplayAbility* OwningAbility, FName TaskInstanceName, const FWrestlerWallClimbParameters& InParameters);
}; // Size: 0x1D8

class UWrestlerAbilityTask_WrestlerWaitTargetData : public UAbilityTask_WaitTargetData
{
}; // Size: 0xC0

class UWrestlerAbilityTreeMenu : public UWrestlerMenu
{
    class UTextBlock* PlayerCurrentPoints_Text;                                       // 0x0300 (size: 0x8)
    class UTextBlock* PlayerTotalPoints_Text;                                         // 0x0308 (size: 0x8)

    void UpdateText();
}; // Size: 0x310

class UWrestlerAbilityUIDataBindAsset : public UHeraDataAsset
{
    FWrestlerAbilityUIDataBindAssetOnUIAbilityDataChangeDelegate OnUIAbilityDataChangeDelegate; // 0x0030 (size: 0x10)
    void WrestlerUIAbilityDataDelegate();

    void SetIsActive(bool InIsActive);
    void SetActiveHandle(FActiveGameplayEffectHandle InHandle);
    bool GetIsActive();
    FActiveGameplayEffectHandle GetActiveHandle();
}; // Size: 0x50

class UWrestlerAbilityWidgetSubsystem : public UWorldSubsystem
{
    FWrestlerAbilityWidgetSubsystemOnAbilityAcquiredEvent OnAbilityAcquiredEvent;     // 0x0090 (size: 0x10)
    void WidgetAbilityAcquired(class UWrestlerAbilityDefinition* AbilityAcquired);
    FWrestlerAbilityWidgetSubsystemOnTrainerAbilityAcquiredEvent OnTrainerAbilityAcquiredEvent; // 0x00A0 (size: 0x10)
    void WidgetTrainerAbilityAcquired(class UWrestlerAbilityDefinition* AbilityAcquired);
    FWrestlerAbilityWidgetSubsystemOnCostumeUnlockedEvent OnCostumeUnlockedEvent;     // 0x00B0 (size: 0x10)
    void CostumeUnlocked(const FGameplayTag& CostumeTag);
    FWrestlerAbilityWidgetSubsystemOnCostumeViewedEvent OnCostumeViewedEvent;         // 0x00C0 (size: 0x10)
    void CostumeUnlocked(const FGameplayTag& CostumeTag);

    void SwapEquipAbility(class UWrestlerAbilityNodeWidget* InAbility);
    void OnCostumeViewed(const FGameplayTag& InCostumeTag);
    bool IsAbilityEquipped(class UWrestlerAbilityNodeWidget* InAbility);
    FText GetMainAbilityNameByTier(class UWrestlerAbilityNodeWidget* InFocusedWidget);
    void AcquireAbilityFromTrainer(class UWrestlerClanTrainerAbilityWidget* InAbility);
    void AcquireAbility(class UWrestlerAbilityNodeWidget* InAbility);
}; // Size: 0xD0

class UWrestlerActionListButton : public UHeraButtonBase
{
    class UInputAction* PlayerAction;                                                 // 0x13E0 (size: 0x8)
    class UInputMappingContext* PlayerMappingContext;                                 // 0x13E8 (size: 0x8)
    FKey DefaultKey_MK;                                                               // 0x13F0 (size: 0x18)
    FKey DefaultKey_C;                                                                // 0x1408 (size: 0x18)
    bool bIsGamepad;                                                                  // 0x1420 (size: 0x1)
    class UTextBlock* ActionName;                                                     // 0x1428 (size: 0x8)
    class UTextBlock* KeyName;                                                        // 0x1430 (size: 0x8)

    void UpdateKeyText(bool InIsGamepad);
    void ResetKey(bool InIsGamepad);
    FKey GetMappingKey_MK();
    FKey GetMappingKey_C();
}; // Size: 0x1440

class UWrestlerActionWidget : public UCommonActionWidget
{
    class UInputAction* AssociatedInputAction;                                        // 0x0488 (size: 0x8)
    FKey OverrideKey;                                                                 // 0x0490 (size: 0x18)

    void UpdateMe();
    void SetOverrideKey(const FKey& NewKey);
    void SetOverrideIcon(const FSlateBrush& NewBrush);
}; // Size: 0x590

class UWrestlerActiveQuestPoolWidget : public UWrestlerMapMarkersPoolWidget
{
    bool bUseCustomIconForMarkers;                                                    // 0x0498 (size: 0x1)
    class UTexture2D* MainQuestIconImage;                                             // 0x04A0 (size: 0x8)
    class UTexture2D* SideQuestIconImage;                                             // 0x04A8 (size: 0x8)

}; // Size: 0x558

class UWrestlerActorOcclusionConfig : public UWrestlerConfigDataAsset
{
    float MovementDistanceThreshold;                                                  // 0x0030 (size: 0x4)
    float MaxAngleDegrees;                                                            // 0x0034 (size: 0x4)
    float MinPeriod;                                                                  // 0x0038 (size: 0x4)

}; // Size: 0x40

class UWrestlerActorOcclusionSubsystem : public UWorldSubsystem
{

    bool IsOccluded(const class UObject* WorldContextObject, class AActor* Actor, FName ConfigName);
}; // Size: 0x30

class UWrestlerActorVisibilitySubsystem : public UWorldSubsystem
{
    FWrestlerActorVisibilities ActorVisibilities;                                     // 0x0030 (size: 0x50)

}; // Size: 0x80

class UWrestlerAddPropToMassAI : public UAnimNotifyState
{
    class UWrestlerMassSOPropDataAsset* PropToAdd;                                    // 0x0030 (size: 0x8)
    EWrestlerMassPropRemoveType EndRemoveType;                                        // 0x0038 (size: 0x1)
    EWrestlerMassPropRemoveType InterruptRemoveType;                                  // 0x0039 (size: 0x1)

}; // Size: 0x40

class UWrestlerAddTagToLiveEnemies : public UHeraAutomataTask
{
    FGameplayTagContainer TagsToAdd;                                                  // 0x0088 (size: 0x20)
    FGameplayTagContainer TagsToRemove;                                               // 0x00A8 (size: 0x20)

}; // Size: 0xC8

class UWrestlerAgentTaskFunctionLibrary : public UBlueprintFunctionLibrary
{

    EWrestlerTaskRequestResult SetTaskBoardConfig(const class UObject* WorldContextObject, FGameplayTag InTaskBoardTag);
    EWrestlerTaskRequestResult RequestTaskForAgent(const class UObject* WorldContextObject, FGameplayTag InTaskTypeTag, class AActor* InAgent);
    EWrestlerTaskRequestResult RequestExactTaskForAgent(const class UObject* WorldContextObject, FGameplayTag InTaskTag, class AActor* InAgent);
    EWrestlerTaskRequestResult DistributeTask(const class UObject* WorldContextObject, FGameplayTag InTaskTypeTag);
}; // Size: 0x28

class UWrestlerAnimInstance : public UAnimInstance
{
    FVector FocalPoint;                                                               // 0x0350 (size: 0x18)

    void ResetAnimationData();
}; // Size: 0x370

class UWrestlerAnimNotify : public UAnimNotify
{
}; // Size: 0x38

class UWrestlerAnimNotifyState : public UAnimNotifyState
{
}; // Size: 0x30

class UWrestlerAnimationFragmentInitializer : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerAssetManager : public UAssetManager
{
}; // Size: 0x4D0

class UWrestlerAttributeSet : public UAttributeSet
{
    FGameplayAttributeData MaxHealth;                                                 // 0x0030 (size: 0x10)
    FGameplayAttributeData Health;                                                    // 0x0040 (size: 0x10)
    FGameplayAttributeData MaxBlood;                                                  // 0x0050 (size: 0x10)
    FGameplayAttributeData Blood;                                                     // 0x0060 (size: 0x10)
    FGameplayAttributeData Damage;                                                    // 0x0070 (size: 0x10)
    FGameplayAttributeData DamageCap;                                                 // 0x0080 (size: 0x10)
    FGameplayAttributeData AttackPower;                                               // 0x0090 (size: 0x10)
    FGameplayAttributeData CrouchSpeed;                                               // 0x00A0 (size: 0x10)
    FGameplayAttributeData WalkSpeed;                                                 // 0x00B0 (size: 0x10)
    FGameplayAttributeData SprintSpeed;                                               // 0x00C0 (size: 0x10)
    FGameplayAttributeData SlideMinSpeed;                                             // 0x00D0 (size: 0x10)
    FGameplayAttributeData AccelerationRate;                                          // 0x00E0 (size: 0x10)
    FGameplayAttributeData TurnRate;                                                  // 0x00F0 (size: 0x10)
    FGameplayAttributeData HealthRegenRate;                                           // 0x0100 (size: 0x10)
    FGameplayAttributeData HealthRegenValue;                                          // 0x0110 (size: 0x10)
    FGameplayAttributeData HealthFragility;                                           // 0x0120 (size: 0x10)
    FGameplayAttributeData Ammo;                                                      // 0x0130 (size: 0x10)
    FGameplayAttributeData MaxAmmo;                                                   // 0x0140 (size: 0x10)
    FGameplayAttributeData Shield;                                                    // 0x0150 (size: 0x10)
    FGameplayAttributeData MaxShield;                                                 // 0x0160 (size: 0x10)
    FGameplayAttributeData stun;                                                      // 0x0170 (size: 0x10)
    FGameplayAttributeData MaxStun;                                                   // 0x0180 (size: 0x10)
    FGameplayAttributeData StunDamage;                                                // 0x0190 (size: 0x10)
    FGameplayAttributeData StunResistance;                                            // 0x01A0 (size: 0x10)
    FGameplayAttributeData MaxStunResistance;                                         // 0x01B0 (size: 0x10)
    FGameplayAttributeData StunFragility;                                             // 0x01C0 (size: 0x10)
    FGameplayAttributeData StunRegenRate;                                             // 0x01D0 (size: 0x10)
    FGameplayAttributeData StunRegenValue;                                            // 0x01E0 (size: 0x10)
    FGameplayAttributeData StunThreshold;                                             // 0x01F0 (size: 0x10)
    FGameplayAttributeData InnerRadius;                                               // 0x0200 (size: 0x10)
    FGameplayAttributeData OuterRadius;                                               // 0x0210 (size: 0x10)
    FGameplayAttributeData Exponent;                                                  // 0x0220 (size: 0x10)
    FGameplayAttributeData Armor;                                                     // 0x0230 (size: 0x10)
    FGameplayAttributeData MaxArmor;                                                  // 0x0240 (size: 0x10)
    FGameplayAttributeData ArmorDamage;                                               // 0x0250 (size: 0x10)
    FGameplayAttributeData StrikeAbilityBlood;                                        // 0x0260 (size: 0x10)
    FGameplayAttributeData MaxStrikeAbilityBlood;                                     // 0x0270 (size: 0x10)
    FGameplayAttributeData RelocateAbilityBlood;                                      // 0x0280 (size: 0x10)
    FGameplayAttributeData MaxRelocateAbilityBlood;                                   // 0x0290 (size: 0x10)
    FGameplayAttributeData MasteryAbilityBlood;                                       // 0x02A0 (size: 0x10)
    FGameplayAttributeData MaxMasteryAbilityBlood;                                    // 0x02B0 (size: 0x10)
    FGameplayAttributeData AffectAbilityBlood;                                        // 0x02C0 (size: 0x10)
    FGameplayAttributeData MaxAffectAbilityBlood;                                     // 0x02D0 (size: 0x10)
    FGameplayAttributeData Noticeability;                                             // 0x02E0 (size: 0x10)
    FWrestlerAttributeSetOnHealthChanged OnHealthChanged;                             // 0x02F0 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnBloodChanged OnBloodChanged;                               // 0x0300 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnShieldChanged OnShieldChanged;                             // 0x0310 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnStunChanged OnStunChanged;                                 // 0x0320 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnStunFragilityChanged OnStunFragilityChanged;               // 0x0330 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnArmorChanged OnArmorChanged;                               // 0x0340 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnStrikeAbilityBloodChanged OnStrikeAbilityBloodChanged;     // 0x0350 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnRelocateAbilityBloodChanged OnRelocateAbilityBloodChanged; // 0x0360 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnMasteryAbilityBloodChanged OnMasteryAbilityBloodChanged;   // 0x0370 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnAffectAbilityBloodChanged OnAffectAbilityBloodChanged;     // 0x0380 (size: 0x10)
    void AttributeChange(float CurrentValue, float MaxValue);
    FWrestlerAttributeSetOnMaximumValueChangedEvent OnMaximumValueChangedEvent;       // 0x0390 (size: 0x10)
    void AttributeMaxChange(FGameplayAttribute AffectedAttribute, float NewMax);
    FWrestlerAttributeSetOnDamaged OnDamaged;                                         // 0x03A0 (size: 0x10)
    void AttributeValueChangeWithInstigator(float NewValue, class AActor* Instigator);
    FWrestlerAttributeSetOnWalkSpeedChanged OnWalkSpeedChanged;                       // 0x03B0 (size: 0x10)
    void AttributeValueChange(float NewValue);
    FWrestlerAttributeSetOnSprintSpeedChanged OnSprintSpeedChanged;                   // 0x03C0 (size: 0x10)
    void AttributeValueChange(float NewValue);
    FWrestlerAttributeSetOnCrouchSpeedChanged OnCrouchSpeedChanged;                   // 0x03D0 (size: 0x10)
    void AttributeValueChange(float NewValue);
    FWrestlerAttributeSetOnSlideMinSpeedChanged OnSlideMinSpeedChanged;               // 0x03E0 (size: 0x10)
    void AttributeValueChange(float NewValue);
    FWrestlerAttributeSetOnStunDamaged OnStunDamaged;                                 // 0x03F0 (size: 0x10)
    void AttributeValueChangeWithInstigator(float NewValue, class AActor* Instigator);
    FWrestlerAttributeSetOnArmorDamaged OnArmorDamaged;                               // 0x0400 (size: 0x10)
    void AttributeValueChange(float NewValue);
    FWrestlerAttributeSetOnAccelerationRateChanged OnAccelerationRateChanged;         // 0x0410 (size: 0x10)
    void AttributeValueChange(float NewValue);
    FWrestlerAttributeSetOnTurnRateChanged OnTurnRateChanged;                         // 0x0420 (size: 0x10)
    void AttributeValueChange(float NewValue);

    void SetWalkSpeedAttribute(float Speed);
    void SetSprintSpeedAttribute(float Speed);
    void OnMaximumValueChanged(const FGameplayAttribute& InAffectedAttribute, float InNewValue);
    void GetAttributeValuesByAbility(EWrestlerClanAbilityType InAbilityType, float& OutCurrentValue, float& OutMaxValue);
}; // Size: 0x430

class UWrestlerAttributeWidget : public UWrestlerBaseWidget
{

    class UWrestlerAttributeSet* GetAttributeSet();
}; // Size: 0x2C8

class UWrestlerAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetSurfaceParameters(FVector InTraceStart, FVector InTraceEnd, class AActor*& InIgnoredActor, FWrestlerAudioSurfaceParameters& OutParams, EHeraSurfaceTypeQueryResult& OutExecBranches, const class UObject* InWorldContextObject);
}; // Size: 0x28

class UWrestlerAudioDebugSettings : public UWrestlerSettingsBase
{
    uint32 SurfaceQueryDebugFlags;                                                    // 0x0048 (size: 0x4)
    float SurfaceDebugDrawDuration;                                                   // 0x004C (size: 0x4)
    float SurfaceLineThickness;                                                       // 0x0050 (size: 0x4)
    float SurfaceLocationRadius;                                                      // 0x0054 (size: 0x4)
    float SurfaceTextFontSize;                                                        // 0x0058 (size: 0x4)
    FLinearColor SurfaceTextColour;                                                   // 0x005C (size: 0x10)
    FLinearColor SurfaceLineTraceColour;                                              // 0x006C (size: 0x10)
    FLinearColor SurfaceBaseColour;                                                   // 0x007C (size: 0x10)
    FLinearColor SurfaceCoverColour;                                                  // 0x008C (size: 0x10)
    FLinearColor SurfaceNotFoundColour;                                               // 0x009C (size: 0x10)

}; // Size: 0xB0

class UWrestlerAudioSettings : public UWrestlerSettingsBase
{
    TSoftObjectPtr<UAkStateValue> LoadingStartedState;                                // 0x0048 (size: 0x28)
    TSoftObjectPtr<UAkStateValue> LoadingFinishedState;                               // 0x0070 (size: 0x28)
    TEnumAsByte<EPhysicalSurface> SurfaceTypeDrySnow;                                 // 0x0098 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> SurfaceTypeWetSnow;                                 // 0x0099 (size: 0x1)
    float RVTSnowWetnessThreshold;                                                    // 0x009C (size: 0x4)
    float BuildUpSnowAmount;                                                          // 0x00A0 (size: 0x4)

}; // Size: 0xA8

class UWrestlerAudioSetup : public UHeraConfigurationAsset
{
    TMap<TEnumAsByte<EWrestlerFootwearType>, UAkSwitchValue*> FootwearSwitches;       // 0x0030 (size: 0x50)
    TMap<TEnumAsByte<EWrestlerClothingMaterialType>, UAkSwitchValue*> ClothingMaterialSwitches; // 0x0080 (size: 0x50)
    TMap<TEnumAsByte<EPhysicalSurface>, UAkSwitchValue*> SurfaceSwitches;             // 0x00D0 (size: 0x50)
    TMap<TEnumAsByte<EPhysicalSurface>, UAkSwitchValue*> MeleeSurfaceSwitchs;         // 0x0120 (size: 0x50)
    TMap<class FGameplayTag, class UAkSwitchValue*> AbilitySwitches;                  // 0x0170 (size: 0x50)

}; // Size: 0x1C0

class UWrestlerAudioStatics : public UBlueprintFunctionLibrary
{

    class UWrestlerAudioSetup* GetAudioSetup(const class UObject* InWorldContextObject);
    void AudioImpactFromGameplayCue(const FGameplayCueParameters& CueParams, FAudioImpact& Impact);
}; // Size: 0x28

class UWrestlerAutomataCancelGameplayAbilityClass : public UHeraAutomataAutocompleteState
{
    TSoftClassPtr<UWrestlerGameplayAbility> ControlAbility;                           // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UWrestlerAutomataCancelGameplayAbilityTag : public UHeraAutomataAutocompleteState
{
    FGameplayTag ControlAbilityTag;                                                   // 0x0078 (size: 0x8)

}; // Size: 0x80

class UWrestlerAutomataCombatGraphPause : public UWrestlerAutomataStateSuccessFailure
{
    bool bShouldPause;                                                                // 0x0088 (size: 0x1)

}; // Size: 0x90

class UWrestlerAutomataGameplayAbilityClass : public UWrestlerAutomataStateSuccessFailure
{
    TSoftClassPtr<UWrestlerGameplayAbility> ControlAbility;                           // 0x0088 (size: 0x28)
    bool bUseAbilityEnd;                                                              // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UWrestlerAutomataGameplayAbilityTag : public UWrestlerAutomataStateSuccessFailure
{
    FGameplayTag ControlAbilityTag;                                                   // 0x0088 (size: 0x8)
    bool bUseAbilityEnd;                                                              // 0x0090 (size: 0x1)

}; // Size: 0x98

class UWrestlerAutomataPCSBlockingState : public UHeraAutomataAutocompleteState
{
    bool bBlockStart;                                                                 // 0x0078 (size: 0x1)
    EWrestlerEnemyType EnemyType;                                                     // 0x0079 (size: 0x1)

}; // Size: 0x80

class UWrestlerAutomataProcessControlCue : public UHeraAutomataAutocompleteState
{
    class UWrestlerControlCue* ControlCue;                                            // 0x0078 (size: 0x8)
    bool UpdateAutomatas;                                                             // 0x0080 (size: 0x1)

}; // Size: 0x88

class UWrestlerAutomataStateSuccessFailure : public UHeraAutomataStateBase
{
    class UHeraAutomataObjective* SuccessObjective;                                   // 0x0078 (size: 0x8)
    class UHeraAutomataObjective* FailureObjective;                                   // 0x0080 (size: 0x8)

}; // Size: 0x88

class UWrestlerAwareness : public UObject
{
    FWrestlerLastStimulusInfo LastSightStimulusInfo;                                  // 0x0028 (size: 0x68)
    FWrestlerLastStimulusInfo LastHearingStimulusInfo;                                // 0x0090 (size: 0x68)
    FAIStimulus ActiveStimulus;                                                       // 0x00F8 (size: 0x58)
    FAIStimulus LastPlayerStimulus;                                                   // 0x0150 (size: 0x58)
    TWeakObjectPtr<class AActor> Owner;                                               // 0x01A8 (size: 0x8)

    void OnTargetPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& InUpdateInfo);
    bool IsLastPlayerStimulusSight();
    bool IsActiveStimulusSight();
}; // Size: 0x1B8

class UWrestlerAwarenessTargetPicker : public UObject
{
    FWrestlerAwarenessTargetPickerOnBecomeAware OnBecomeAware;                        // 0x0028 (size: 0x10)
    void WrestlerAwarenessEvent();
    FWrestlerAwarenessTargetPickerOnNotAware OnNotAware;                              // 0x0038 (size: 0x10)
    void WrestlerAwarenessEvent();
    FWrestlerAwarenessTargetPickerOnStartDetecting OnStartDetecting;                  // 0x0048 (size: 0x10)
    void WrestlerAwarenessEvent();
    FWrestlerAwarenessTargetPickerOnNotDetecting OnNotDetecting;                      // 0x0058 (size: 0x10)
    void WrestlerAwarenessEvent();
    TWeakObjectPtr<class AActor> Owner;                                               // 0x0068 (size: 0x8)
    TSet<TWeakObjectPtr<AActor>> DetectedActors;                                      // 0x0070 (size: 0x50)
    TSet<TWeakObjectPtr<AActor>> AwareActors;                                         // 0x00C0 (size: 0x50)
    TWeakObjectPtr<class AActor> CurrentTarget;                                       // 0x0110 (size: 0x8)
    TWeakObjectPtr<class AActor> OverrideTarget;                                      // 0x0118 (size: 0x8)
    class UWrestlerAIAwarenessConfig* Config;                                         // 0x0120 (size: 0x8)

}; // Size: 0x128

class UWrestlerAwareness_Default : public UWrestlerAwareness
{
    class UWrestlerAwarenessTargetPicker* TargetPicker;                               // 0x01C8 (size: 0x8)
    class UWrestlerDeadBodyIdentifier* DeadBodyIdentifier;                            // 0x01D8 (size: 0x8)
    class UWrestlerAIAwarenessConfig* Config;                                         // 0x01E0 (size: 0x8)
    float UpdatePeriod;                                                               // 0x01E8 (size: 0x4)
    TMap<class TWeakObjectPtr<AActor>, class FWrestlerAwarenessTrackingData> TargetAwarenessValues; // 0x01F8 (size: 0x50)
    class UWrestlerAIAwarenessConfig* DefaultAwarenessConfig;                         // 0x0248 (size: 0x8)
    TMap<class FGameplayTag, class TSoftObjectPtr<UWrestlerAIAwarenessConfig>> PerStateAwarenessConfigs; // 0x0250 (size: 0x50)
    TMap<class FGameplayTag, class FWrestlerAwarenessTagTrackingData> VisibleTagTracking; // 0x02A0 (size: 0x50)
    TMap<class FGameplayTag, class FWrestlerAwarenessTagTrackingData> AudibleTagTracking; // 0x02F0 (size: 0x50)
    class UObject* WorldContextObject;                                                // 0x0340 (size: 0x8)

    void SensedActorChangedTeams(class AAIController* InSensedController, EWrestlerGameTeam InTeam);
    void OwnerChangedTeams(class AAIController* InController, EWrestlerGameTeam InTeam);
    void OnStateTreeTagsAdded(FGameplayTagContainer InAddedTags);
    float GetTimeSinceLastSawTarget(const class AActor* InActor);
    bool CanSeeTag(const FGameplayTag& GameplayTag, const float SightAge, class AActor*& SeenActor);
    bool CanSeePlayer();
}; // Size: 0x358

class UWrestlerBTD_AttributeComparison : public UBTDecorator
{
    FGameplayAttribute AttributeToCompare;                                            // 0x0068 (size: 0x38)
    EWrestlerComparisonMethod ComparisonMethod;                                       // 0x00A0 (size: 0x1)
    FGameplayAttribute OtherAttribute;                                                // 0x00A8 (size: 0x38)
    float OtherValue;                                                                 // 0x00E0 (size: 0x4)

}; // Size: 0xE8

class UWrestlerBTD_CloseToEnemies : public UBTDecorator
{
    float DistanceThreshold;                                                          // 0x0068 (size: 0x4)

}; // Size: 0x70

class UWrestlerBTD_IsAtLocation : public UBTDecorator_IsAtLocation
{
    FBlackboardKeySelector BBKeyDistance;                                             // 0x00D8 (size: 0x28)
    float WaitingDistanceMin;                                                         // 0x0100 (size: 0x4)
    float WaitingDistanceMax;                                                         // 0x0104 (size: 0x4)

}; // Size: 0x108

class UWrestlerBTD_ShouldChasePlayerInHostile : public UBTDecorator
{
}; // Size: 0x68

class UWrestlerBTD_ShouldCheckNoise : public UBTDecorator
{
    FBlackboardKeySelector MoveToLocation;                                            // 0x0068 (size: 0x28)

}; // Size: 0x90

class UWrestlerBTD_SwapEnemyType : public UBTDecorator
{
    FBlackboardKeySelector BBKeyTargetActor;                                          // 0x0068 (size: 0x28)
    float SwappingThreshold;                                                          // 0x0090 (size: 0x4)

}; // Size: 0x98

class UWrestlerBTDecorator_BlueprintBase : public UBTDecorator_BlueprintBase
{
}; // Size: 0xA0

class UWrestlerBTDecorator_CVar : public UBTDecorator
{
    FString CVarName;                                                                 // 0x0068 (size: 0x10)

}; // Size: 0x78

class UWrestlerBTDecorator_IsHearingSeveralNoises : public UBTDecorator
{
    bool bIndividual;                                                                 // 0x0068 (size: 0x1)

}; // Size: 0x70

class UWrestlerBTDecorator_PatrolRouteAvailable : public UBTDecorator_BlackboardBase
{
    FBlackboardKeySelector PatrolPoint;                                               // 0x0090 (size: 0x28)

}; // Size: 0xB8

class UWrestlerBTDecorator_SearchRouteAvailable : public UBTDecorator_BlackboardBase
{
    FBlackboardKeySelector SearchesLeftKey;                                           // 0x0090 (size: 0x28)
    float Radius;                                                                     // 0x00B8 (size: 0x4)

}; // Size: 0xC0

class UWrestlerBTDecorator_ShouldInvestigateStimulus : public UBTDecorator_BlackboardBase
{
}; // Size: 0x90

class UWrestlerBTService_ControlRotations : public UBTService_BlackboardBase
{
    TArray<FName> ExcludedEnemyTypes;                                                 // 0x0098 (size: 0x10)
    FGameplayTag TurningMontageTag;                                                   // 0x00A8 (size: 0x8)
    float MontageSpeed;                                                               // 0x00B0 (size: 0x4)
    float RotationInterpolationSpeed;                                                 // 0x00B4 (size: 0x4)
    float OriginalMaxWalkSpeed;                                                       // 0x00B8 (size: 0x4)
    float MovingMinDegreesMontage;                                                    // 0x00BC (size: 0x4)
    float IdleMinDegreesMontage;                                                      // 0x00C0 (size: 0x4)

}; // Size: 0xD0

class UWrestlerBTService_GameplayFocus : public UBTService_DefaultFocus
{
}; // Size: 0xA0

class UWrestlerBTService_RangedRotateToTarget : public UBTService_BlackboardBase
{
    FBlackboardKeySelector AimAtTarget;                                               // 0x0098 (size: 0x28)
    FVector CurrentAimLocation;                                                       // 0x00C0 (size: 0x18)
    FRotator CurrentAimRotation;                                                      // 0x00D8 (size: 0x18)

}; // Size: 0xF0

class UWrestlerBTService_TrackSeenActorByTagLocation : public UBTService_BlackboardBase
{
    FGameplayTag DeadBodyTag;                                                         // 0x0098 (size: 0x8)

}; // Size: 0xA0

class UWrestlerBTService_TrackStimulusLocation : public UBTService_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTService_UpdateTarget : public UBTService
{
    bool bCheckLOS;                                                                   // 0x0070 (size: 0x1)
    bool bCheckPath;                                                                  // 0x0071 (size: 0x1)
    bool bCheckSpaceClear;                                                            // 0x0072 (size: 0x1)
    float BentPathTolerance;                                                          // 0x0074 (size: 0x4)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x0078 (size: 0x1)
    FVector BoxTraceHalfSize;                                                         // 0x0080 (size: 0x18)
    FBlackboardKeySelector PriorityActor;                                             // 0x0098 (size: 0x28)
    FBlackboardKeySelector SelfActor;                                                 // 0x00C0 (size: 0x28)
    FBlackboardKeySelector HasLOS;                                                    // 0x00E8 (size: 0x28)
    FBlackboardKeySelector HasPathToTarget;                                           // 0x0110 (size: 0x28)
    FBlackboardKeySelector IsPathStraight;                                            // 0x0138 (size: 0x28)
    FBlackboardKeySelector TimeSincePathLost;                                         // 0x0160 (size: 0x28)
    FBlackboardKeySelector HasSpaceClear;                                             // 0x0188 (size: 0x28)
    FBlackboardKeySelector OptimalRangedDistance;                                     // 0x01B0 (size: 0x28)
    uint8 bShowPropertyDetails;                                                       // 0x01D8 (size: 0x1)
    uint8 bEnableDebug;                                                               // 0x01D8 (size: 0x1)
    class AActor* PriorityActorRef;                                                   // 0x01E0 (size: 0x8)
    class APawn* SelfActorRef;                                                        // 0x01E8 (size: 0x8)

    void UpdatePriorityActor(class UBehaviorTreeComponent* OwnerComp, class AAIController* InController);
}; // Size: 0x200

class UWrestlerBTService_UpdateToken : public UBTService_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTTask_DebugDrawText : public UBTTask_Wait
{
    FString DebugString;                                                              // 0x0078 (size: 0x10)
    FColor DebugStringColor;                                                          // 0x0088 (size: 0x4)
    FVector TextOffsetFromPawnCenter;                                                 // 0x0090 (size: 0x18)

}; // Size: 0xA8

class UWrestlerBTTask_Despawn : public UBTTaskNode
{
}; // Size: 0x70

class UWrestlerBTTask_DrawDebugSphereBBEntry : public UBTTaskNode
{
    FBlackboardKeySelector BBKey;                                                     // 0x0070 (size: 0x28)
    float Lifetime;                                                                   // 0x0098 (size: 0x4)
    float Radius;                                                                     // 0x009C (size: 0x4)
    uint32 Segments;                                                                  // 0x00A0 (size: 0x4)
    FColor Color;                                                                     // 0x00A4 (size: 0x4)

}; // Size: 0xB0

class UWrestlerBTTask_EnableAimOffsets : public UBTTaskNode
{
    float Duration;                                                                   // 0x0070 (size: 0x4)
    float RandomDeviation;                                                            // 0x0074 (size: 0x4)

}; // Size: 0x90

class UWrestlerBTTask_EndSearch : public UBTTaskNode
{
    class UWrestlerSearchManager* SearchManager;                                      // 0x0070 (size: 0x8)

}; // Size: 0x78

class UWrestlerBTTask_EndSearchCoverVolume : public UBTTaskNode
{
    FBlackboardKeySelector NumSearchesLeftKey;                                        // 0x0070 (size: 0x28)
    float MaxWaitTime;                                                                // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UWrestlerBTTask_EndStimulusInvestigation : public UBTTask_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTTask_FinishAssignedAgentTask : public UBTTaskNode
{
    EWrestlerTaskStatus FinishStatus;                                                 // 0x0070 (size: 0x1)

}; // Size: 0x78

class UWrestlerBTTask_GetClosestPathPoint : public UBTTask_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTTask_GetNextPathPoint : public UBTTask_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTTask_GetRangedWeaponInfo : public UBTTaskNode
{
    FBlackboardKeySelector MinRangedDistanceKey;                                      // 0x0070 (size: 0x28)
    float DefaultMinRangedDistance;                                                   // 0x0098 (size: 0x4)
    FBlackboardKeySelector MaxRangedDistanceKey;                                      // 0x00A0 (size: 0x28)
    float DefaultMaxRangedDistance;                                                   // 0x00C8 (size: 0x4)
    FBlackboardKeySelector TimeSinceRangedRepositionKey;                              // 0x00D0 (size: 0x28)
    float DefaultTimeSinceReposition;                                                 // 0x00F8 (size: 0x4)
    FBlackboardKeySelector TimeBeforeAimKey;                                          // 0x0100 (size: 0x28)
    float DefaultTimeBeforeAim;                                                       // 0x0128 (size: 0x4)

}; // Size: 0x130

class UWrestlerBTTask_MarkForDespawn : public UBTTaskNode
{
}; // Size: 0x70

class UWrestlerBTTask_ModifyKeyInt : public UBTTask_BlackboardBase
{
    int32 ModifyingValue;                                                             // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UWrestlerBTTask_MoveToPatrol : public UBTTask_MoveTo
{
    float OriginalMaxWalkSpeed;                                                       // 0x00B0 (size: 0x4)
    float SpeedMultiplier;                                                            // 0x00B8 (size: 0x4)
    FRuntimeFloatCurve AccelerationCurve;                                             // 0x00C0 (size: 0x88)
    FRuntimeFloatCurve DecelerationCurve;                                             // 0x0148 (size: 0x88)
    float AccelerationDistance;                                                       // 0x01D0 (size: 0x4)
    float DecelerationDistance;                                                       // 0x01D4 (size: 0x4)
    float MinAngleForDeceleration;                                                    // 0x01D8 (size: 0x4)
    float MovementInterpolationSpeed;                                                 // 0x01DC (size: 0x4)
    TArray<int32> TurningPathPointIndices;                                            // 0x01E0 (size: 0x10)

}; // Size: 0x1F0

class UWrestlerBTTask_PlayMontage : public UBTTaskNode
{
    FGameplayTag MontageTag;                                                          // 0x0070 (size: 0x8)
    float MontageSpeed;                                                               // 0x0078 (size: 0x4)
    bool bMontageFinished;                                                            // 0x007C (size: 0x1)
    class UAnimMontage* Montage;                                                      // 0x0080 (size: 0x8)

    void OnMontageEnded(class UAnimMontage* InMontage, bool bInterrupted);
}; // Size: 0x88

class UWrestlerBTTask_RegisterInvestigateStimulusFound : public UBTTask_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTTask_ReleaseRoute : public UBTTask_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTTask_RequestToken : public UBTTask_BlackboardBase
{
    EWrestlerGameplayTokenType RequestedTokenType;                                    // 0x0098 (size: 0x1)

}; // Size: 0xA0

class UWrestlerBTTask_ReturnToken : public UBTTask_BlackboardBase
{
}; // Size: 0x98

class UWrestlerBTTask_RotateAtPathPoint : public UBTTaskNode
{
    FBlackboardKeySelector PathPointKey;                                              // 0x0070 (size: 0x28)
    class AActor* PathPoint;                                                          // 0x0098 (size: 0x8)
    float Precision;                                                                  // 0x00A0 (size: 0x4)
    float FocalPointDist;                                                             // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class UWrestlerBTTask_SendNoiseEvent : public UBTTaskNode
{
    float Loudness;                                                                   // 0x0070 (size: 0x4)
    float MaxRange;                                                                   // 0x0074 (size: 0x4)
    FGameplayTag Tag;                                                                 // 0x0078 (size: 0x8)

}; // Size: 0x80

class UWrestlerBTTask_SetComboFinished : public UBTTaskNode
{
    bool bComboFinished;                                                              // 0x0070 (size: 0x1)

}; // Size: 0x78

class UWrestlerBTTask_SetSearchFinished : public UBTTaskNode
{
    bool bInvestigateFinished;                                                        // 0x0070 (size: 0x1)

}; // Size: 0x78

class UWrestlerBTTask_SpreadFear : public UBTTaskNode
{
    float FearDuration;                                                               // 0x0070 (size: 0x4)
    float FearStrengthMultiplier;                                                     // 0x0074 (size: 0x4)
    FBlackboardKeySelector FearInstigator;                                            // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UWrestlerBTTask_StartAssignedAgentTask : public UBTTaskNode
{
    class UBehaviorTreeComponent* OwnerComponent;                                     // 0x0070 (size: 0x8)
    class UWrestlerTask* AgentTask;                                                   // 0x0078 (size: 0x8)

    void HandleTaskComplete(FWrestlerTaskExecutionResult InResult);
    class UWrestlerTask* GetAssignedTask(const class AActor* InAgent);
}; // Size: 0x80

class UWrestlerBTTask_StartBark : public UBTTaskNode
{
    FGameplayTag BarkTag;                                                             // 0x0070 (size: 0x8)
    int32 PlayChance;                                                                 // 0x0078 (size: 0x4)

}; // Size: 0x80

class UWrestlerBTTask_StartSearch : public UBTTaskNode
{
    class UWrestlerSearchManager* SearchManager;                                      // 0x0070 (size: 0x8)

}; // Size: 0x78

class UWrestlerBTTask_StartSearchCoverVolume : public UBTTaskNode
{
}; // Size: 0x70

class UWrestlerBTTask_UseAbility : public UBTTask_BlackboardBase
{
    FGameplayTag GameplayAbilityTag;                                                  // 0x0098 (size: 0x8)
    FGameplayTag QuestAbilityTag;                                                     // 0x00A0 (size: 0x8)
    bool bUseBlackboardTarget;                                                        // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UWrestlerBTTask_UsePathPointAbility : public UWrestlerBTTask_UseAbility
{
    FBlackboardKeySelector PatrolPointKey;                                            // 0x00B0 (size: 0x28)

}; // Size: 0xD8

class UWrestlerBTTask_WaitAtPathPoint : public UBTTask_Wait
{
    FBlackboardKeySelector PathPointKey;                                              // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UWrestlerBaseGameplayWidget : public UWrestlerBaseWidget
{
}; // Size: 0x2C8

class UWrestlerBaseMapWidget : public UWrestlerBaseWidget
{
    TSubclassOf<class UWrestlerMapMarkersPoolWidget> MapMarkersPoolClass;             // 0x02C8 (size: 0x8)
    TMap<class FGameplayTag, class TSubclassOf<UWrestlerMapMarkerWidget>> OverrideMarkerForPool; // 0x02D0 (size: 0x50)
    TMap<class FGameplayTag, class TSubclassOf<UWrestlerMapMarkersPoolWidget>> OverridePoolForCategory; // 0x0320 (size: 0x50)
    class UImage* MapZoneImage;                                                       // 0x0370 (size: 0x8)
    class UCanvasPanel* MapZoneCanvas;                                                // 0x0378 (size: 0x8)
    class UCanvasPanel* MapPoolsCanvas;                                               // 0x0380 (size: 0x8)
    TMap<class FGameplayTag, class UWrestlerMapMarkersPoolWidget*> GTCategoryAndPool; // 0x0388 (size: 0x50)
    class AWrestlerMapZone* MapZoneActor;                                             // 0x03E8 (size: 0x8)
    class UWrestlerMapDataAsset* MapDataAsset;                                        // 0x03F0 (size: 0x8)

}; // Size: 0x400

class UWrestlerBaseOptionWidget : public UHeraCommonUIBaseWidget
{
    FText Label;                                                                      // 0x0330 (size: 0x18)
    FText Description;                                                                // 0x0348 (size: 0x18)

}; // Size: 0x360

class UWrestlerBaseWidget : public UHeraBaseWidget
{

    void ToggleVisibility(bool bInStatus);
}; // Size: 0x2C8

class UWrestlerBehaviorTreeComponent : public UBehaviorTreeComponent
{
    TSoftObjectPtr<UBehaviorTree> BehaviorTree;                                       // 0x0290 (size: 0x28)

    void StartBehaviorTree(TSoftObjectPtr<UBehaviorTree> InAsset, bool bInSingleRun);
}; // Size: 0x2B8

class UWrestlerBloodResonanceComponent : public UActorComponent
{
    FGameplayTag SanguineTag;                                                         // 0x00A4 (size: 0x8)
    FGameplayTag CholericTag;                                                         // 0x00AC (size: 0x8)
    FGameplayTag MelancholicTag;                                                      // 0x00B4 (size: 0x8)

}; // Size: 0xC0

class UWrestlerBloodResonanceEventDataAsset : public UHeraDataAsset
{
    float MinTimeToStartSpawning;                                                     // 0x0030 (size: 0x4)
    float MinTimeBetweenSpawns;                                                       // 0x0034 (size: 0x4)
    float MinSpawnDistance;                                                           // 0x0038 (size: 0x4)
    float MaxSpawnDistance;                                                           // 0x003C (size: 0x4)
    int32 GlobalMaxNumEventsAtOnce;                                                   // 0x0040 (size: 0x4)
    TMap<EWrestlerGrantedPointsType, int32> MaxNumOfEachTypeToSpawn;                  // 0x0048 (size: 0x50)
    TArray<FWrestlerBloodResonanceEventData> SpawnableEvents;                         // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UWrestlerBloodResonanceWaypoint : public UWrestlerWaypointIndicator
{
    class UImage* WaypointImage;                                                      // 0x02F0 (size: 0x8)
    float ThreshDistanceToForceShowIcon;                                              // 0x02F8 (size: 0x4)
    TMap<class FGameplayTag, class FWrestlerBloodResonanceWaypointIcon> WaypointsDisplayData; // 0x0300 (size: 0x50)

}; // Size: 0x358

class UWrestlerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UpdateAssetImportDataSourcePath(class UAssetImportData* InAssetImportData, FString InNewPath, int32 InIndex);
    void ToggleActiveQuestWaypointPath(const class UObject* WorldContextObject, bool bEnable);
    void SetBlockOnSlow(const bool Enabled);
    void ReplacePawn(class AController* InPlayerController, TSubclassOf<class APawn> InPawnClass);
    void ReimportAnimations(TArray<class UAnimSequence*> InAnimationSequences);
    void RealTimeDelay(const class UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    void MarkActorDirty(class AActor* InActorToMark);
    bool IsEditor();
    bool IsActorOfClass(const class AActor* Target, const TSoftClassPtr<AActor>& ActorType);
    class UWrestlerXPComponent* GetXPComponent(const class UObject* WorldContextObject);
    bool GetTransformForSequenceBinding(class ULevelSequence* InSequence, const FName& InBindingName, FTransform& OutTransform);
    float GetRealDeltaTime();
    class UAssetImportData* GetAnimAssetImportData(class UAnimSequence* InAnimationSequence);
    void AddXP(const class UObject* WorldContextObject, int32 InXPToAdd);
    bool AddPointsForRegisteredEvent(const class UObject* WorldContextObject, const FGameplayTag& InEventTag, bool bInOverridePooling);
    bool AddPointsForCustomEvent(const class UObject* WorldContextObject, const FWrestlerGrantedPointsData& InEventData, bool bInOverridePooling);
    void AddAP(const class UObject* WorldContextObject, int32 InAPToAdd);
}; // Size: 0x28

class UWrestlerBoundActionButton : public UCommonBoundActionButton
{
    TSubclassOf<class UCommonButtonStyle> KeyboardStyle;                              // 0x1598 (size: 0x8)
    TSubclassOf<class UCommonButtonStyle> GamepadStyle;                               // 0x15A0 (size: 0x8)

}; // Size: 0x15B0

class UWrestlerBrightnessSliderWidget : public UWrestlerBaseOptionWidget
{
    class USlider* SettingSlider;                                                     // 0x0368 (size: 0x8)

    void SetUIDisplayGammaController();
    void SetUIDisplayGamma(float InValue);
}; // Size: 0x370

class UWrestlerCameraComponent : public UCameraComponent
{
    bool bHeadTracking;                                                               // 0x0A40 (size: 0x1)
    FName TrackedSocket;                                                              // 0x0A44 (size: 0x8)

}; // Size: 0xA50

class UWrestlerCameraModifier : public UCameraModifier
{
    bool bAlphaOutBeforeRemoval;                                                      // 0x0048 (size: 0x1)
    float ViewPitchMin;                                                               // 0x004C (size: 0x4)
    float ViewPitchMax;                                                               // 0x0050 (size: 0x4)
    float ViewYawMin;                                                                 // 0x0054 (size: 0x4)
    float ViewYawMax;                                                                 // 0x0058 (size: 0x4)
    float ViewRollMin;                                                                // 0x005C (size: 0x4)
    float ViewRollMax;                                                                // 0x0060 (size: 0x4)
    bool bUseAngleLimit;                                                              // 0x0064 (size: 0x1)
    float AngleLimit;                                                                 // 0x0068 (size: 0x4)

    void SetRelativeLimitRotation(FRotator InRelativeLimitRotation);
}; // Size: 0xA0

class UWrestlerCameraModifier_Highlight : public UWrestlerCameraModifier
{
    class UMaterialInterface* PostProcessMaterial;                                    // 0x00A0 (size: 0x8)
    FName HighlightMaterialParameterName;                                             // 0x00A8 (size: 0x8)
    float HighlightsFadeSpeed;                                                        // 0x00B0 (size: 0x4)
    bool bRemoveOnFadeOut;                                                            // 0x00B4 (size: 0x1)
    class UMaterialInstanceDynamic* PostProcessMID;                                   // 0x00B8 (size: 0x8)

    bool IsFadeOutFinished();
    bool IsFadeInFinished();
    bool IsFadeFinished();
    void FadeOutHighlights();
    void FadeInHighlights();
}; // Size: 0xC8

class UWrestlerCameraShakeAttributeSet : public UAttributeSet
{
    FGameplayAttributeData Scale;                                                     // 0x0030 (size: 0x10)
    FGameplayAttributeData Duration;                                                  // 0x0040 (size: 0x10)
    FGameplayAttributeData EndScale;                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

class UWrestlerCentralContainerWidget : public UWrestlerBaseWidget
{
    class UWrestlerCentralNotificationWidget* QuestNotificationWidget;                // 0x02C8 (size: 0x8)
    class UWrestlerCentralNotificationWidget* MilestoneNotificationWidget;            // 0x02D0 (size: 0x8)
    class UOverlay* ContainerPanel;                                                   // 0x02D8 (size: 0x8)

}; // Size: 0x2E8

class UWrestlerCentralNotificationWidget : public UWrestlerBaseWidget
{
    class UOverlay* NotificationWidgetOverlay;                                        // 0x02C8 (size: 0x8)
    bool bIsShowing;                                                                  // 0x02D0 (size: 0x1)
    bool bHasExpired;                                                                 // 0x02D1 (size: 0x1)
    FWrestlerNotificationData NotificationData;                                       // 0x02F0 (size: 0x58)
    class UTextBlock* NotificationBigText;                                            // 0x0348 (size: 0x8)
    class UTextBlock* NotificationSmallText;                                          // 0x0350 (size: 0x8)

    void UpdateNotificationWidget();
    void ShowNotification();
    void OnNotificationAvailabilityChange();
    void InitializeInputComponent();
}; // Size: 0x358

class UWrestlerChangeVisibilityCollisionTask : public UHeraAutomataTask
{
    TArray<FWrestlerChangeVisibilityCollisionInfo> ChangeInfo;                        // 0x0088 (size: 0x10)

}; // Size: 0x98

class UWrestlerCharacterCostumeDataAsset : public UHeraDataAsset
{
    FWrestlerOutfitData PlayerFem;                                                    // 0x0030 (size: 0xA0)
    FWrestlerOutfitData PlayerMasc;                                                   // 0x00D0 (size: 0xA0)
    FText CostumeName;                                                                // 0x0170 (size: 0x18)
    FText CostumeDescription;                                                         // 0x0188 (size: 0x18)
    FText UnlockAbilityName;                                                          // 0x01A0 (size: 0x18)
    FText CostumeUnlockDescription;                                                   // 0x01B8 (size: 0x18)
    FGameplayTag CostumeID;                                                           // 0x01D0 (size: 0x8)
    class UAkSwitchValue* AudioSwitch;                                                // 0x01D8 (size: 0x8)
    class UAkSwitchValue* FeetAudioSwitch;                                            // 0x01E0 (size: 0x8)

    void UnlockCostume();
    void SetCostumeViewed();
    bool IsCostumeViewed();
    bool IsCostumeUnlocked();
    FWrestlerOutfitData GetCurrentOutfitData(EHeraPlayerVariant InPlayerVariant);
}; // Size: 0x1E8

class UWrestlerCharacterCostumeMenu : public UWrestlerRPGMenuTabWidget
{
    class UScrollBox* CostumePanel;                                                   // 0x0490 (size: 0x8)
    class UUniformGridPanel* HairGridPanel;                                           // 0x0498 (size: 0x8)
    class UUniformGridPanel* MakeUpGridPanel;                                         // 0x04A0 (size: 0x8)
    class UUniformGridPanel* PiercingGridPanel;                                       // 0x04A8 (size: 0x8)
    class UUniformGridPanel* EyesGridPanel;                                           // 0x04B0 (size: 0x8)
    bool bSwapPerformed;                                                              // 0x04B8 (size: 0x1)
    class UWrestlerCharacterHairCollection* HairCollectionDataAsset;                  // 0x04C0 (size: 0x8)
    class UWrestlerCharacterMakeUpCollection* MakeUpCollectionDataAsset;              // 0x04C8 (size: 0x8)
    class UWrestlerCharacterPiercingCollection* PiercingCollectionDataAsset;          // 0x04D0 (size: 0x8)
    class UWrestlerCharacterEyesCollection* EyesCollectionDataAsset;                  // 0x04D8 (size: 0x8)

    void UpdatePreview();
    void UpdateButtons();
    void SwapRowPositions(const int32& InClanValue);
    class UWrestlerCharacterCostumisationButton* GetMakeUpButtonWithTag(FGameplayTag InMakeUpID);
    class UWrestlerCharacterCostumisationButton* GetHairButtonWithTag(FGameplayTag InHairID);
    class UWrestlerCharacterCostumisationButton* GetEyesButtonWithTag(FGameplayTag InEyesID);
    class UWrestlerCharacterCostumisationButton* GetEquippedPiercingButton();
    class UWrestlerCharacterCostumisationButton* GetEquippedMakeUpButton();
    class UWrestlerCharacterCostumisationButton* GetEquippedHairButton();
    class UWrestlerCharacterCostumisationButton* GetEquippedEyesButton();
    class UWrestlerCharacterCostumisationButton* GetEquippedCostumeButton();
    class UWrestlerCharacterCostumisationButton* GetCostumeButtonWithTag(FGameplayTag InCostumeID);
    class UWrestlerCharacterCostumisationButton* GePiercingButtonWithTag(FGameplayTag InPiercingID);
}; // Size: 0x4E0

class UWrestlerCharacterCostumesCollection : public UHeraDataAsset
{
    TMap<class FGameplayTag, class TSoftObjectPtr<UWrestlerCharacterCostumeDataAsset>> Costumes; // 0x0030 (size: 0x50)

    class UWrestlerCharacterCostumeDataAsset* GetCostumeFromID(const FGameplayTag& InID);
}; // Size: 0x80

class UWrestlerCharacterCostumisationButton : public UHeraButtonBase
{
    EPlayerCustomButtonType CustomButtonType;                                         // 0x13E0 (size: 0x1)
    bool bIsCostumeButton;                                                            // 0x13E1 (size: 0x1)
    EPlayerClan Clan;                                                                 // 0x13E2 (size: 0x1)
    FWrestlerCharacterCostumisationButtonOnCostumeChangedCallback OnCostumeChangedCallback; // 0x13E8 (size: 0x10)
    void OnCostumeChanged(class UWrestlerCharacterCostumisationButton* Button);
    FWrestlerCharacterCostumisationButtonOnCostumeChangeStartedCallBack OnCostumeChangeStartedCallBack; // 0x13F8 (size: 0x10)
    void OnCostumeChangeStarted(class UWrestlerCharacterCostumisationButton* Button);
    class UHeraDataAsset* CharacterItemDataAsset;                                     // 0x1408 (size: 0x8)
    class UWrestlerCharacterCostumeDataAsset* CostumeDataAsset;                       // 0x1410 (size: 0x8)
    class UImage* ButtonIcon;                                                         // 0x1418 (size: 0x8)
    class UImage* ButtonIcon_Locked;                                                  // 0x1420 (size: 0x8)
    class UImage* ButtonIcon_LockedContainer;                                         // 0x1428 (size: 0x8)
    class UImage* EquipIcon;                                                          // 0x1430 (size: 0x8)
    class UScaleBox* IconScaleBox;                                                    // 0x1438 (size: 0x8)
    class UImage* CostumeNotViewedIcon;                                               // 0x1440 (size: 0x8)

    void UpdateButtonVisuals();
    void SetCustomButtonType(EPlayerCustomButtonType InButtonType);
    void SetCharacterItemDataAsset(class UHeraDataAsset* InItemDataAsset);
    void SetButtonIconTexture(class UTexture2D* InTexture);
    void OnCostumeChangeStarted(class UWrestlerCharacterCostumisationButton* InButton);
    void OnCostumeChanged(class UWrestlerCharacterCostumisationButton* InButton);
    bool IsPiercingEquipped();
    bool IsMakeUpEquipped();
    bool IsHairEquipped();
    bool IsEyesEquipped();
    bool IsCostumeEquipped();
    bool IsButtonUnlock();
    EPlayerCustomButtonType GetCustomButtonType();
    FWrestlerOutfitData GetCurrentOutfitVariant();
    class UHeraDataAsset* GetCharacterItemDataAsset();
    EPlayerCustomisationDLC GetAssetDLC();
}; // Size: 0x1450

class UWrestlerCharacterEyesCollection : public UHeraDataAsset
{
    TArray<TSoftObjectPtr<UWrestlerCharacterEyesDataAsset>> EyesArray;                // 0x0030 (size: 0x10)

    TSoftObjectPtr<UWrestlerCharacterEyesDataAsset> GetEyesFromID(const FGameplayTag& InID);
    TArray<TSoftObjectPtr<UWrestlerCharacterEyesDataAsset>> GetEyesArray();
}; // Size: 0x40

class UWrestlerCharacterEyesDataAsset : public UHeraDataAsset
{
    FGameplayTag EyesID;                                                              // 0x0030 (size: 0x8)
    TSoftObjectPtr<UTexture2D> EyesButtonTexture;                                     // 0x0038 (size: 0x28)
    TSoftObjectPtr<UMaterialInstance> EyesMaterial;                                   // 0x0060 (size: 0x28)
    EPlayerCustomisationDLC BelongsToDLC;                                             // 0x0088 (size: 0x1)

    TSoftObjectPtr<UMaterialInstance> GetEyesTexture();
}; // Size: 0x90

class UWrestlerCharacterFloorControlComponent : public UActorComponent
{
    FWrestlerCharacterFloorControlComponentOnLevelStreamedOut OnLevelStreamedOut;     // 0x00A0 (size: 0x10)
    void OnLevelStreamSignature();
    FWrestlerCharacterFloorControlComponentOnLevelStreamedIn OnLevelStreamedIn;       // 0x00B0 (size: 0x10)
    void OnLevelStreamSignature();
    TWeakObjectPtr<class ULevelStreaming> CurrentStreamingLevel;                      // 0x00C0 (size: 0x8)

    void OnCurrentFloorLevelUnloaded();
    void OnCurrentFloorLevelLoaded();
}; // Size: 0xD0

class UWrestlerCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UnlockAllClanAbilities(const class UObject* WorldContextObject);
    void ToggleUVGlow(class UObject* WorldContextObject, class UPrimitiveComponent* MeshComponent, const bool bGlowEnabled, FName ParameterName);
    void SetDebugMessageOnHUD(class UWorld* InWorld, FString InDebugMessage);
    void SetCharacterScalarParameterOnMaterial(class ACharacter* InCharacter, TMap<FName, float> InScalarParameters);
    void SetCharacterOverlayMaterial(class ACharacter* InCharacter, class UMaterialInterface* InNewOverlayMaterial);
    void SetBloodRecharge(const class UObject* InWorldContextObject, bool InBloodRecharge);
    void RadialPhysicsImpulse(class UObject* WorldContextObject, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<class AActor*> InActorsToIgnore, FVector InOrigin, float InRadius, FVector InDirection, FVector InTorque, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bFromOrigin, float InStrength, TEnumAsByte<ERadialImpulseFalloff> InFalloff);
    void K2_SpawnEnemyCharacters(const TMap<class TSoftObjectPtr<AWrestlerAISpawner>, class FName>& InSpawnCharacters, EWrestlerOutputPins& OutPins);
    void K2_SpawnCharacters(const TMap<class TSoftObjectPtr<AWrestlerAISpawner>, class TSoftClassPtr<AWrestlerAICharacter>>& InSpawnCharacters, EWrestlerOutputPins& OutPins);
    bool K2_IsActorPossessed(class AActor* InActor, EWrestlerOutputPins& OutPins);
    bool K2_IsActorDead(class AActor* InActor, EWrestlerOutputPins& OutPins);
    void K2_GetSpawnedEnemies(class UObject* WorldContextObject, TArray<class AWrestlerEnemyCharacter*>& OutEnemyCharacters, EWrestlerOutputPins& OutPins);
    void K2_GetPlayerControllerFromActor(class AActor* InActor, class APlayerController*& OutPlayerController, EWrestlerOutputPins& OutPins);
    void K2_GetPlayerCharacterFromActor(class AActor* InActor, class AWrestlerCharacter*& OutPlayerCharacter, EWrestlerOutputPins& OutPins);
    void K2_GetEnemyControllerFromActor(class AActor* InActor, class AWrestlerEnemyController*& OutEnemyController, EWrestlerOutputPins& OutPins);
    void K2_GetEnemyCharacterFromActor(class AActor* InActor, class AWrestlerEnemyCharacter*& OutEnemyCharacter, EWrestlerOutputPins& OutPins);
    void K2_GetCharacterIsOnScreen(class UObject* InWorldContextObject, class APawn* InPawn, EWrestlerOutputPins& OutPins);
    void K2_CharacterAttacked(class APawn* InCharacterAttacked, class APawn* InCharacterAttacking);
    void K2_AddOrRemoveSpawnedEnemy(class UObject* InWorldContextObject, class ACharacter* InCharacter, bool bInAdd);
    class UWrestlerRangedWeaponInstance* GetRangedWeaponInstanceUnchecked(class AActor* InActor);
    class UWrestlerRangedWeaponInstance* GetRangedWeaponInstance(class AActor* InActor, EWrestlerOutputPins& OutPins);
    bool GetBloodRecharge(const class UObject* InWorldContextObject);
    void AttachWeapon(class USceneComponent* InWeapon, class USceneComponent* InAttachTo, const FTransform& InNewTransformLocation, FName InSocketName);
}; // Size: 0x28

class UWrestlerCharacterHairCollection : public UHeraDataAsset
{
    TArray<TSoftObjectPtr<UWrestlerCharacterHairDataAsset>> HairArray;                // 0x0030 (size: 0x10)

    TSoftObjectPtr<UWrestlerCharacterHairDataAsset> GetHairFromID(const FGameplayTag& InID);
    TArray<TSoftObjectPtr<UWrestlerCharacterHairDataAsset>> GetHairArray();
}; // Size: 0x40

class UWrestlerCharacterHairDataAsset : public UHeraDataAsset
{
    FGameplayTag HairID;                                                              // 0x0030 (size: 0x8)
    TSoftObjectPtr<UTexture2D> HairButtonTexture;                                     // 0x0038 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> FemmeHairMesh;                                      // 0x0060 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> MascHairMesh;                                       // 0x0088 (size: 0x28)
    TSoftObjectPtr<UMaterialInstance> HairColour;                                     // 0x00B0 (size: 0x28)
    TSoftObjectPtr<UMaterialInstance> MascHairColour;                                 // 0x00D8 (size: 0x28)
    FVector CapVector;                                                                // 0x0100 (size: 0x18)
    bool IsOverrideHair;                                                              // 0x0118 (size: 0x1)
    EPlayerCustomisationDLC BelongsToDLC;                                             // 0x0119 (size: 0x1)

    TSoftObjectPtr<USkeletalMesh> GetHairVariant(EHeraPlayerVariant InVariant);
    TSoftObjectPtr<UMaterialInstance> GetHairMaterial(EHeraPlayerVariant InVariant);
    FVector GetCapVector();
    EPlayerHairAnimType GetAnimationType();
}; // Size: 0x120

class UWrestlerCharacterMakeUpCollection : public UHeraDataAsset
{
    TArray<TSoftObjectPtr<UWrestlerCharacterMakeUpDataAsset>> MakeUpArray;            // 0x0030 (size: 0x10)

    TSoftObjectPtr<UWrestlerCharacterMakeUpDataAsset> GetMakeUpFromID(const FGameplayTag& InID);
    TArray<TSoftObjectPtr<UWrestlerCharacterMakeUpDataAsset>> GetMakeUpArray();
}; // Size: 0x40

class UWrestlerCharacterMakeUpDataAsset : public UHeraDataAsset
{
    FGameplayTag MakeUpID;                                                            // 0x0030 (size: 0x8)
    TSoftObjectPtr<UTexture2D> MakeUpButtonTexture;                                   // 0x0038 (size: 0x28)
    TSoftObjectPtr<UMaterialInstance> FemmeMakeUpMaterial;                            // 0x0060 (size: 0x28)
    TSoftObjectPtr<UMaterialInstance> MascMakeUpCapMaterial;                          // 0x0088 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> MakeUpMesh;                                         // 0x00B0 (size: 0x28)
    EPlayerCustomisationDLC BelongsToDLC;                                             // 0x00D8 (size: 0x1)

    TSoftObjectPtr<UMaterialInstance> GetMakeUpVariant(EHeraPlayerVariant InVariant);
    TSoftObjectPtr<USkeletalMesh> GetMakeUpMesh();
}; // Size: 0xE0

class UWrestlerCharacterPiercingCollection : public UHeraDataAsset
{
    TArray<TSoftObjectPtr<UWrestlerCharacterPiercingDataAsset>> PiercingArray;        // 0x0030 (size: 0x10)

    TSoftObjectPtr<UWrestlerCharacterPiercingDataAsset> GetPiercingFromID(const FGameplayTag& InID);
    TArray<TSoftObjectPtr<UWrestlerCharacterPiercingDataAsset>> GetPiercingArray();
}; // Size: 0x40

class UWrestlerCharacterPiercingDataAsset : public UHeraDataAsset
{
    FGameplayTag PiercingID;                                                          // 0x0030 (size: 0x8)
    TSoftObjectPtr<UTexture2D> PiercingButtonTexture;                                 // 0x0038 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> PiercingMesh;                                       // 0x0060 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> MascPiercingMesh;                                   // 0x0088 (size: 0x28)
    EPlayerCustomisationDLC BelongsToDLC;                                             // 0x00B0 (size: 0x1)

    TSoftObjectPtr<USkeletalMesh> GetPiercingVariant(EHeraPlayerVariant InVariant);
}; // Size: 0xB8

class UWrestlerCharacterSelectionMenu : public UWrestlerMenu
{
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0300 (size: 0x8)
    class UHeraDialogueAudioController* AudioController;                              // 0x0308 (size: 0x8)
    class UStory* CharacterStory;                                                     // 0x0310 (size: 0x8)
    class UCommonTextBlock* SubtitlesText;                                            // 0x0320 (size: 0x8)
    class UCommonTextBlock* SubtitlesCharacterName;                                   // 0x0328 (size: 0x8)
    class UVerticalBox* SubtitlesBox;                                                 // 0x0330 (size: 0x8)

    void StopDialogue();
    void PlayDialogue(EHeraPlayerVariantOverride InPlayerVariant, float InPlaybackDelay);
    void OnDialogueAudioFinished(class UAkGameObject* InAudioObject);
}; // Size: 0x338

class UWrestlerCharacterSnowComponent : public USceneComponent
{
    class UStaticMeshComponent* DistantSnowMesh;                                      // 0x02A8 (size: 0x8)
    class UNiagaraComponent* SnowVolume;                                              // 0x02B0 (size: 0x8)
    bool bResetOnActivation;                                                          // 0x02B8 (size: 0x1)
    bool bWorldPartitionOnly;                                                         // 0x02B9 (size: 0x1)
    EWrestlerCharacterSnowState State;                                                // 0x02BA (size: 0x1)
    bool bSnowingSuppressed;                                                          // 0x02BB (size: 0x1)

    void SetState(EWrestlerCharacterSnowState InState);
    void SetSnowingSuppressed(bool bInSnowingSuppressed);
    void OnPlayerClanChanged(class UWrestlerPlayerClan* InPlayerClan);
    bool IsSnowingSuppressed();
    bool IsActivated();
    EWrestlerCharacterSnowState GetState();
}; // Size: 0x2C0

class UWrestlerCheatManager : public UCheatManager
{
    TSubclassOf<class AActor> SmartObjectActorTemplate;                               // 0x0088 (size: 0x8)
    class UHeraPropertyBool* ClanTrainerProperty;                                     // 0x0098 (size: 0x8)
    class UHeraPropertyBool* MetLouProperty;                                          // 0x00A0 (size: 0x8)
    class UHeraPropertyStateTrackingList* BakerTurnedProperty;                        // 0x00A8 (size: 0x8)

    void WrestlerUnlockClanTrainers();
    void WrestlerUnlockClanPerk(FString ClanName);
    void WrestlerUnlockAchievement(FString AchievementID);
    void WrestlerUIShowHUDElements(bool bInStatus);
    void WrestlerUIOpenTrainingMenu(int32 InClan);
    void WrestlerTraversalSetJumpHeight(float InJumpHeight);
    void WrestlerTraversalNew();
    void WrestlerTraversalDebugType(ETraversalDebugRenderMethod traversalDebugType);
    void WrestlerSystemNotification();
    void WrestlerSetStoryState_BakerTurned();
    void WrestlerSetAttributeWalkSpeed(float InNewWalkSpeed);
    void WrestlerSetAttributeSprintSpeed(float InNewSprintSpeed);
    void WrestlerSetAttributeSlideSpeed(float InNewSlideMinSpeed);
    void WrestlerSetAttributeNoticeability(float InNewNoticeabilityValue);
    void WrestlerSetAttributeMaxHealth(float InNewMaxHealth);
    void WrestlerSetAttributeMaxBlood(float InNewMaxBlood);
    void WrestlerSetAttributeHealthRegenValue(float InNewHealthRegenValue);
    void WrestlerSetAttributeHealthRegenRate(float InNewHealthRegenRate);
    void WrestlerSetAttributeHealthFragility(float InNewHealthFragilityValue);
    void WrestlerSetAttributeHealth(float InNewHealth);
    void WrestlerSetAttributeDamage(float InNewDamage);
    void WrestlerSetAttributeCrouchSpeed(float InNewCrouchSpeed);
    void WrestlerSetAttributeBlood(float InNewBlood);
    void WrestlerSetAttributeAttackPower(float InNewAttackPower);
    void WrestlerSetAttribute(FString InAttributeName, float InValue);
    void WrestlerSaveGameplaySettings();
    void WrestlerSaveAutosave();
    void WrestlerSave(FString InSaveSlot);
    void WrestlerRestartMusic();
    void WrestlerResetAllAchievements();
    void WrestlerPrintAttributes();
    void WrestlerPlayerToggleSnow();
    void WrestlerPlayerSetNarrativeMode(bool bInEnabled);
    void WrestlerPlayerSetDifficulty(FString InDifficultyName);
    void WrestlerPlayerSetClan(FString ClanName);
    void WrestlerPlayerRemoveTag(FString InGameplayTag);
    void WrestlerPlayerInvertYAxis();
    void WrestlerPlayerAddTag(FString InGameplayTag);
    void WrestlerMassTeleportToType(const int32 InEntityType);
    void WrestlerMassForceEnemyAI(int32 MaxEntitiesToConvert);
    void WrestlerMassEntityTeleportPlayerTo(const int32 InEntityIndex, const int32 InEntitySerialNumber, const float InDistanceFromEntity);
    void WrestlerMassAISetMassEntityExclusionZone(const uint8 InTag, const float InSpeedOverride, const bool InSetPedestrians, const bool InSetPolice);
    void WrestlerMassAISetBloodResonanceType(int32 MassEntityIdx, int32 MassEntitySerialNo, EWrestlerGrantedPointsType BloodType, bool bActivate);
    void WrestlerMassAIRequestGameplayAbility(int32 MassEntityIdx, int32 MassEntitySerialNo, FName AbilityName);
    void WrestlerMassAIPlaceSmartObject();
    void WrestlerMassAIDialogueRequest(const int32 InEntityIndex, const int32 InEntitySerialNumber, const FName InPromptName);
    void WrestlerMasqueradeSetUpdateFreeze(bool bFreeze);
    void WrestlerMasqueradeSetState(EWrestlerMasqueradeState InNewState);
    void WrestlerMasqueradeSetEnabled(bool bEnabled);
    void WrestlerLoadSave(FString InSaveSlot);
    void WrestlerLoadCheckpoint(FName InCheckpointName);
    void WrestlerLoadAutosave();
    void WrestlerHalloweenIsUnlocked(bool bInUnlocked);
    void WrestlerFillAttributeBlood();
    void WrestlerEnemiesSpawnAI(FString AIName, int32 Number);
    void WrestlerEnemiesKillAll(FName TeamName);
    void WrestlerEnemiesDumpModularDetails();
    void WrestlerDumpPendingObjectives();
    void WrestlerDialogueSkipping();
    void WrestlerCostumesUnlockAll();
    void WrestlerConvertEnemiesToMassAI(int32 MaxEnemiesToConvert);
    void WrestlerCameraThirdPerson();
    void WrestlerCameraSecondaryViewpoint();
    void WrestlerAIStopTasks();
    void WrestlerAIDebugToken();
    void WrestlerAIDebugTasks(bool bIsActive);
    void WrestlerAIDebugPatrol();
    void WrestlerAIDebugInterestingPoints();
    void WrestlerAIDebugFear();
    void WrestlerAIDebug();
    void WrestlerAddSanguinePoints(int32 InNewPoints);
    void WrestlerAddMelancholicPoints(int32 InNewPoints);
    void WrestlerAddExperiencePoints(int32 InNewPoints);
    void WrestlerAddCholericPoints(int32 InNewPoints);
    void WrestlerAddAbilityPoints(int32 InNewPoints);
    void WrestlerAbilitiesUnlockAllClan();
    void WrestlerAbilitiesUnlockAll();
    void WrestlerAbilitiesSetAbilityTier(FString AbilityName, uint8 tier);
    void WrestlerAbilitiesPrintActive();
    void WrestlerAbilitiesPrint();
    void WrestlerAbilitiesDisableCost(bool bIsDisabled);
    void ToggleLoadingScreenFade(float InFadeDuration);
    void Silent();
    void ShowTestCaption();
    void ShowDialogueReaction();
    void SetNewLoadingScreen();
    void Ninja();
    void Invisible();
    void DemiGod();
    void Death();
}; // Size: 0xB0

class UWrestlerClanPerkUsageEvaluator : public UObject
{
    TMap<EWrestlerClanAbilityType, float> LastBloodValue;                             // 0x0028 (size: 0x50)
    EWrestlerClanAbilityType LastAbilityTypeUsed;                                     // 0x0078 (size: 0x1)
    class AWrestlerCharacter* PlayerCharacter;                                        // 0x0080 (size: 0x8)

    EWrestlerClanAbilityType K2_GetLastClanAbilityTypeUsed(const class UObject* InWorldContextObject);
    bool HasClanPerk(const class UObject* InWorldContextObject, const FGameplayTag& InClanPerkTag);
    void HandleStrikeAbilityBloodChanged(float InCurrentValue, float InMaxValue);
    void HandleRelocateAbilityBloodChanged(float CurrentValue, float MaxValue);
    void HandleMaxBloodChanged(FGameplayAttribute InAffectedAttribute, float NewMax);
    void HandleMasteryAbilityBloodChanged(float CurrentValue, float MaxValue);
    void HandleAffectAbilityBloodChanged(float CurrentValue, float MaxValue);
}; // Size: 0x88

class UWrestlerClanSelectionLayout : public UHeraActivatableWidget
{
    FDataTableRowHandle ConfirmClanInputActionData;                                   // 0x0450 (size: 0x10)
    FDataTableRowHandle PreviewInputActionData;                                       // 0x0468 (size: 0x10)

    void ToggleInputBindings(bool bAddBindings);
    void PreviewClan();
    void ConfirmClan();
}; // Size: 0x480

class UWrestlerClanTrainerAbilityWidget : public UWrestlerAbilityNodeWidget
{
    FWrestlerClanTrainerAbilityWidgetOnAbilityUnlockStartedEvent OnAbilityUnlockStartedEvent; // 0x0388 (size: 0x10)
    void WrestlerAbilityUnlockStarted();
    TArray<FTrainingCost> MissingCostTypes;                                           // 0x03A0 (size: 0x10)

    void OnAbilityUnlockStarted();
    void LockInteraction(bool bInLock);
    bool IsLockInteraction();
    TArray<FTrainingCost> GetAbilityCosts();
    bool CanAffordAbility();
}; // Size: 0x3B8

class UWrestlerClanTrainerConversationSubsystem : public UTickableWorldSubsystem
{
    TArray<class UHeraPropertyBool*> ConversationStartProperty;                       // 0x0068 (size: 0x10)
    TMap<class EPlayerClan, class UDataTable*> AbilitiesDataTablePerClan;             // 0x0078 (size: 0x50)
    class AHeraDialogueRig* LastInteractedDialogueRig;                                // 0x00C8 (size: 0x8)

    void OnAbilityAcquired(class UWrestlerAbilityDefinition* InAbilityAcquired);
}; // Size: 0xD8

class UWrestlerClanTrainerMenuWidget : public UWrestlerAbilityMenuWidget
{
    TArray<class UWrestlerClanTrainerAbilityWidget*> TrainerAbilities;                // 0x04B0 (size: 0x10)

    void UpdateTrainerAbilities();
    void PopulateTrainerAbilities(int32 InClanValue);
    class UWrestlerClanTrainerAbilityWidget* GetFocusedAbility();
}; // Size: 0x4C0

class UWrestlerCodexData : public UHeraDataAsset
{
    TArray<class UHeraDialogueInfo*> CodexInkData;                                    // 0x0030 (size: 0x10)
    TArray<class UHeraDialogueInfo*> CodexInkData_Malkavian;                          // 0x0040 (size: 0x10)
    class UCodexAssetMap* CodexAssetMap;                                              // 0x0050 (size: 0x8)
    TArray<class UHeraPropertyStateTrackingList*> CodexTrackers;                      // 0x0058 (size: 0x10)

}; // Size: 0x68

class UWrestlerCodexRPGMenuTabWidget : public UWrestlerRPGMenuTabWidget
{
    FDataTableRowHandle ShortInputActionData;                                         // 0x0490 (size: 0x10)

    void UnregisterScrollRecipient(const class UWidget* InAnalogScrollRecipient);
    void SortItems();
    void RegisterScrollRecipient(const class UWidget* InAnalogScrollRecipient);
    void ReceiveCodexShowItem(FString Item);
    void OnCodexChanged();
    void ClearCodexDisplay();
}; // Size: 0x4A8

class UWrestlerCodexSubsystem : public UGameInstanceSubsystem
{
    FWrestlerCodex MainCodex;                                                         // 0x0030 (size: 0x58)
    FWrestlerCodex MalkavianCodex;                                                    // 0x0088 (size: 0x58)
    TArray<FName> Trackers;                                                           // 0x00E0 (size: 0x10)

    void Update();
    void UnlockFlag(FString InCodexFlag);
    bool Tick(float DeltaSeconds);
    void ShowItem(FString InCodexItemID, bool bIsMalkavian);
    class UCodexItem* GetDLCCodexRoot();
    class UCodexItem* GetCodexRoot();
    class UCodexAssetMap* GetAssetMap();
}; // Size: 0x148

class UWrestlerCombatTargetComponent : public UActorComponent
{
    bool bUseControllerRotationForLookAt;                                             // 0x00A0 (size: 0x1)
    bool AllowManualTargeting;                                                        // 0x00A1 (size: 0x1)
    float LookAtPitchOffset;                                                          // 0x00A4 (size: 0x4)
    float MaxAngle;                                                                   // 0x00A8 (size: 0x4)
    float MaxDistance;                                                                // 0x00AC (size: 0x4)
    class AActor* Target;                                                             // 0x00B0 (size: 0x8)

    void UpdatePlayerControllerLook(float InDeltaTime, const FVector& LookRate, float& OutYawInput, float& OutPitchInput);
    void SwitchTarget(const bool Right);
    void SetMaxDistance(float NewMaxDistance);
    void SetMaxAngle(float NewMaxAngle);
    bool IsTargeting();
    class AActor* GetTarget();
    class AActor* GetSoftLockTarget();
    FRotator GetPlayerLookAt();
    void EngageTargeting();
    void DisengageTargeting();
}; // Size: 0xB8

class UWrestlerComboFinished : public UHeraAutomataAutocompleteState
{
    bool bSuccess;                                                                    // 0x0078 (size: 0x1)
    EWrestlerEnemyType EnemyType;                                                     // 0x0079 (size: 0x1)

}; // Size: 0x80

class UWrestlerCommenceEnemyAbility : public UBTTaskNode
{
    class UWrestlerControlCue* ControlCue;                                            // 0x0070 (size: 0x8)
    EWrestlerEnemyType EnemyType;                                                     // 0x0078 (size: 0x1)
    bool bBlockingState;                                                              // 0x0079 (size: 0x1)

}; // Size: 0x80

class UWrestlerCommonButtonBase : public UCommonButtonBase
{
    uint8 bOverrideButtonText;                                                        // 0x1580 (size: 0x1)
    FText ButtonText;                                                                 // 0x1588 (size: 0x18)

    void UpdateButtonText(const FText& InText);
    void UpdateButtonStyle();
    void SetButtonText(const FText& InText);
}; // Size: 0x15A0

class UWrestlerCommonUIActionRouterBase : public UCommonUIActionRouterBase
{

    void SetWrestlerCommonAnalogCursorState(class UWrestlerCommonUIActionRouterBase* commonUIActionRouterBaseInstance, ECommonAnalogCursorState State);
    ECommonAnalogCursorState GetWrestlerCommonAnalogCursorState(class UWrestlerCommonUIActionRouterBase* commonUIActionRouterBaseInstance);
}; // Size: 0x170

class UWrestlerCompassWidget : public UWrestlerWaypointWidgetsContainer
{
    class UImage* CompassImage;                                                       // 0x0360 (size: 0x8)
    class UMaterialInstanceDynamic* CompassMID;                                       // 0x0368 (size: 0x8)

}; // Size: 0x370

class UWrestlerComponentTransformAndVelocityToActorTranslator : public UMassTranslator
{
}; // Size: 0x380

class UWrestlerConfigDA_InheritanceTest : public UWrestlerConfigDataAsset_Test
{
    FString NewProperty;                                                              // 0x0058 (size: 0x10)

}; // Size: 0x68

class UWrestlerConfigDataAsset : public UPrimaryDataAsset
{
}; // Size: 0x30

class UWrestlerConfigDataAsset_EnemyStats : public UWrestlerConfigDataAsset
{
    float MaxStun;                                                                    // 0x0030 (size: 0x4)
    float MaxHealth;                                                                  // 0x0034 (size: 0x4)
    float MaxBlood;                                                                   // 0x0038 (size: 0x4)
    float AttackPower;                                                                // 0x003C (size: 0x4)
    float StunThreshold;                                                              // 0x0040 (size: 0x4)
    float StaggerDuration;                                                            // 0x0044 (size: 0x4)
    FWrestlerRangedRotateConfig RangedRotationSettings;                               // 0x0048 (size: 0x28)
    float Aggressiveness;                                                             // 0x0070 (size: 0x4)
    float Noticeability;                                                              // 0x0074 (size: 0x4)
    TMap<FGameplayTag, float> DamageByTag;                                            // 0x0078 (size: 0x50)

}; // Size: 0xC8

class UWrestlerConfigDataAsset_Test : public UWrestlerConfigDataAsset
{
    float TestFloat;                                                                  // 0x0030 (size: 0x4)
    int32 TestInt;                                                                    // 0x0034 (size: 0x4)
    FString TestString;                                                               // 0x0038 (size: 0x10)
    TArray<FString> TestStringArray;                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

class UWrestlerConfirmPromptWidget : public UHeraActivatableWidget
{
    TMap<class EWrestlerConfirmationType, class FWrestlerConfirmationPromptData> ConfirmationData; // 0x0450 (size: 0x50)
    class UHeraButtonBase* YesButton;                                                 // 0x04A0 (size: 0x8)
    class UHeraButtonBase* NoButton;                                                  // 0x04A8 (size: 0x8)
    class UHeraButtonBase* OkayButton;                                                // 0x04B0 (size: 0x8)
    class UCommonTextBlock* ConfirmationPromptTitle;                                  // 0x04B8 (size: 0x8)
    class UCommonTextBlock* ConfirmationPromptText;                                   // 0x04C0 (size: 0x8)
    class UCommonTextBlock* ConfirmationPromptSecondLineText;                         // 0x04C8 (size: 0x8)

    void RequestCostumConfirmation(FWrestlerConfirmationPromptData InData);
    void RequestConfirmation(const EWrestlerConfirmationType InConfirmationType);
}; // Size: 0x4D0

class UWrestlerConsumablesHUDSlotWidget : public UHeraCommonUIBaseWidget
{
    FSlateBrush ConsumableIconBrush;                                                  // 0x0330 (size: 0xD0)
    class UImage* ConsumableImage;                                                    // 0x0400 (size: 0x8)
    class UTextBlock* ConsumableQuantityText;                                         // 0x0408 (size: 0x8)
    EConsumableType ConsumableType;                                                   // 0x0410 (size: 0x1)
    class UHeraPropertyInt* ConsumableProperty;                                       // 0x0418 (size: 0x8)
    FGameplayTag ConsumablesGATag;                                                    // 0x0420 (size: 0x8)

    void SetQuantityText();
    void SetConsumableImage();
    void PlayFailedAnimation();
    void PlayConsumableAnimation(float InDuration);
}; // Size: 0x440

class UWrestlerConsumablesHUDWidget : public UHeraCommonUIBaseWidget
{
    class UOverlay* ConsumablesPanel;                                                 // 0x0330 (size: 0x8)

    void UpdateConsumableCount(EConsumableType InConsumableType);
}; // Size: 0x338

class UWrestlerControlComponent : public UHeraAutomataControlComponent
{
    class UWrestlerControlGraph* CombatControlGraph;                                  // 0x01F0 (size: 0x8)
    TArray<class UWrestlerControlGraph*> ControlGraphs;                               // 0x01F8 (size: 0x10)
    class UWrestlerControlInputSetup* InputSetup;                                     // 0x0208 (size: 0x8)

}; // Size: 0x218

class UWrestlerControlCue : public UHeraAutomataObjective
{
}; // Size: 0x40

class UWrestlerControlGraph : public UHeraAutomata
{
}; // Size: 0xB0

class UWrestlerControlInputSetup : public UHeraConfigurationAsset
{
    float DashThreshold;                                                              // 0x0030 (size: 0x4)
    float DashRightArc;                                                               // 0x0034 (size: 0x4)
    float DashForwardArc;                                                             // 0x0038 (size: 0x4)
    TArray<FWrestlerControlInputCue> InputCues;                                       // 0x0040 (size: 0x10)

}; // Size: 0x50

class UWrestlerCreditsLineWidget : public UWrestlerBaseWidget
{
    FText CreditText1;                                                                // 0x02C8 (size: 0x18)
    FText CreditText2;                                                                // 0x02E0 (size: 0x18)
    EWrestlerCreditType CreditType;                                                   // 0x02F8 (size: 0x1)
    class UImage* CreditLogo;                                                         // 0x0300 (size: 0x8)
    float LogoDesiredHeight;                                                          // 0x0308 (size: 0x4)
    FSlateBrush IconBrush;                                                            // 0x0320 (size: 0xD0)

    void SetImageWidget();
}; // Size: 0x3F0

class UWrestlerCreditsMenu : public UWrestlerMenu
{
    class UScrollBox* CreditLinesContainer;                                           // 0x0300 (size: 0x8)
    class UHeraBaseWidget* ButtonBack;                                                // 0x0308 (size: 0x8)
    class UDataTable* CreditsData;                                                    // 0x0310 (size: 0x8)
    class UDataTable* CreditsIconSet;                                                 // 0x0318 (size: 0x8)
    TSubclassOf<class UWrestlerCreditsLineWidget> SetupWidgetClass;                   // 0x0320 (size: 0x8)
    TArray<class UWrestlerCreditsLineWidget*> Widgets;                                // 0x0328 (size: 0x10)
    float ScrollDurationInSeconds;                                                    // 0x0338 (size: 0x4)
    float ScrollDurationInSecondsNormal;                                              // 0x033C (size: 0x4)
    float ScrollDurationInSecondsFast;                                                // 0x0340 (size: 0x4)
    bool bIsEndgameCredits;                                                           // 0x0344 (size: 0x1)

    void ReceiveOnCreditsCompleted();
}; // Size: 0x380

class UWrestlerCrosshairReactComponent : public UActorComponent
{
    float ReactionDistance;                                                           // 0x00A0 (size: 0x4)
    float MinReactionDistance;                                                        // 0x00A4 (size: 0x4)
    bool CrosshairShouldReact;                                                        // 0x00A8 (size: 0x1)
    class UWrestlerInteractionPointComponent* InteractionPointComponent;              // 0x00B0 (size: 0x8)

    bool ShouldReact();
    void SetReactionDistance(const float InNewMinDistance, const float InNewMaxDistance);
    FVector GetReactLocation();
    float GetReactionSqrDistance();
    float GetReactionDistance();
    float GetMinReactionSqrDistance();
    float GetMinReactionDistance();
    void DeactivateShouldReact();
    void ActivateShouldReact();
}; // Size: 0xB8

class UWrestlerCrosshairWidget : public UWrestlerBaseWidget
{
    float MinStrength;                                                                // 0x02C8 (size: 0x4)
    float MaxDistanctStrength;                                                        // 0x02CC (size: 0x4)
    float MaxDotStrength;                                                             // 0x02D0 (size: 0x4)
    float OOSStrengthReduction;                                                       // 0x02D4 (size: 0x4)
    float MinDotStartValue;                                                           // 0x02D8 (size: 0x4)
    float VisibilityTraceTickInterval;                                                // 0x02DC (size: 0x4)
    float MaxStrengthToBeginVisibilityTrace;                                          // 0x02E0 (size: 0x4)
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x02E4 (size: 0x1)
    float OutHitMinDistanceFromTarget;                                                // 0x02E8 (size: 0x4)
    class AActor* NearestActor;                                                       // 0x02F0 (size: 0x8)
    class AActor* NearestDotActor;                                                    // 0x02F8 (size: 0x8)

    void UpdateReactTargets(const TArray<class AActor*>& OutFromActors);
    void BP_OnCrosshairStrengthUpdated(float Strength, float DeltaTime);
}; // Size: 0x308

class UWrestlerCrowdSettings : public UWrestlerSettingsBase
{
    TSoftObjectPtr<UWrestlerAIAwarenessConfig> AwarenessConfig;                       // 0x0048 (size: 0x28)
    float PedestrianFearEmissionRange;                                                // 0x0070 (size: 0x4)
    float DeadBodiesFearEmissionRange;                                                // 0x0074 (size: 0x4)

    class UWrestlerCrowdSettings* Get(class UObject* InWorldContextObject);
}; // Size: 0x78

class UWrestlerCrowdSpawnerComponent : public USceneComponent
{
    class UBoxComponent* SpawnerVolumeComp;                                           // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* CubeComp;                                             // 0x02A8 (size: 0x8)
    class UStaticMesh* canvasMesh;                                                    // 0x02B0 (size: 0x8)
    class UMaterialInstanceDynamic* BrushMat;                                         // 0x02B8 (size: 0x8)
    class UMaterialInstanceDynamic* GridBrushMat;                                     // 0x02C0 (size: 0x8)
    class UTextureRenderTarget2D* TexRenderTarget;                                    // 0x02C8 (size: 0x8)
    class UMaterialInterface* BrushMatParent;                                         // 0x02D0 (size: 0x8)
    class UMaterialInterface* GridBrushMatParent;                                     // 0x02D8 (size: 0x8)
    class UMaterialInterface* CanvasMat;                                              // 0x02E0 (size: 0x8)
    TArray<class AActor*> SpawnedUnitsPool;                                           // 0x02E8 (size: 0x10)
    float jitter;                                                                     // 0x02F8 (size: 0x4)
    TArray<class UBoxComponent*> GridsList;                                           // 0x0300 (size: 0x10)
    TMap<int32, float> GridColorMap;                                                  // 0x0310 (size: 0x50)
    TMap<int32, float> GridColorMapBatch;                                             // 0x0360 (size: 0x50)
    float BrushSizeF;                                                                 // 0x03B0 (size: 0x4)
    float BrushIntensity;                                                             // 0x03B4 (size: 0x4)
    float MinBrushIntensity;                                                          // 0x03B8 (size: 0x4)
    float MaxBrushIntensity;                                                          // 0x03BC (size: 0x4)
    class UTexture2D* BrushTex;                                                       // 0x03C0 (size: 0x8)
    TSubclassOf<class AActor> SpawnedUnitClass;                                       // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* CursorComponent;                                      // 0x03D0 (size: 0x8)
    int32 CurrentGridCount;                                                           // 0x03D8 (size: 0x4)
    bool bIsButtonPressedLastFrame;                                                   // 0x03DC (size: 0x1)
    TArray<FLinearColor> GradientColors;                                              // 0x04A0 (size: 0x10)
    TSubclassOf<class ACharacter> CharacterBP;                                        // 0x04B0 (size: 0x8)
    FName SpawnedCharacterName;                                                       // 0x04B8 (size: 0x8)
    class UWrestlerModularCharacterData* ModularDataPool;                             // 0x04C0 (size: 0x8)
    float Radius;                                                                     // 0x04C8 (size: 0x4)
    TMap<UWrestlerModularCharacterProfile*, float> ProfileFrequencyMap;               // 0x04D0 (size: 0x50)
    TArray<class UWrestlerModularCharacterProfile*> ProfileList;                      // 0x0520 (size: 0x10)
    int32 NPCCount;                                                                   // 0x0530 (size: 0x4)
    class UAnimationAsset* DefaultAnim;                                               // 0x0538 (size: 0x8)
    TArray<class ACharacter*> NPCPool;                                                // 0x0548 (size: 0x10)

    void UpdatePainting(class UBoxComponent* Volume, class UStaticMeshComponent* canvasMesh);
    void UpdateCursor(const FVector Position);
    void UpdateCanvasScale(class UBoxComponent* Volume, class UStaticMeshComponent* canvasMesh);
    void SpawnByGrids();
    void ShrinkGridArea(int32& MinX, int32& MaxX, int32& MinY, int32& MaxY);
    void SetGridsEnabled(bool InEnabled);
    void SetBrushGradientColor(const float Value);
    void PaintGrids();
    void PaintGrid(const float brushSize, const FVector2D DrawLocation, const float BrushIntensity);
    bool IsButtonPressedInEditor();
    void InitCursor(class UStaticMeshComponent* Cursor, class UStaticMeshComponent* Canvas);
    FVector2D HitLocationToCanvas(const FVector HitPosition, const FVector volumePosition, const FVector BoxExtent);
    void GetGridInformation(float& MinX, float& MinY, float& Width, float& Height);
    FVector2D GetGridIndexByPosition(const FVector Position);
    FLinearColor GetColorFromBrushIntensity(float Intensity);
    void GenerateRandomWorldPositionFromGridIndex(const int32 Index, FVector& Position);
    void DrawBrushOnCanvas(class UTexture2D* brushTexture, float brushSize, FVector2D DrawLocation);
    void DivideCanvasToGrids(const int32 gridCount);
    FVector CursorToHitLocation(const FVector2D cursorPos);
    void CreateCanvas(class UStaticMeshComponent* canvasMesh);
    void ConstructComponents();
    void ConstructAListOfIndicesToColor(const int32 MinX, const int32 MaxX, const int32 MinY, const int32 MaxY, TArray<int32>& listToColor);
    void ColorGridsByBrushPosition(const FVector& Position, const float Radius, const float Intensity);
    void CalculateEdgesForBrushPosition(const FVector Position, const float brushRadius, int32& MinX, int32& MaxX, int32& MinY, int32& MaxY);
}; // Size: 0x570

class UWrestlerCrowdVisualizationFragmentInitializer : public UMassObserverProcessor
{
}; // Size: 0x610

class UWrestlerCustomDepthSubsystem : public UWorldSubsystem
{
    TMap<class UPrimitiveComponent*, class FWrestlerCustomDepthPrimitiveEntry> CustomDepthUsers; // 0x0030 (size: 0x50)

    void RemoveRenderCustomDepth(class UPrimitiveComponent* InPrimitiveComponent, EWrestlerCustomDepthUser InCaller);
    void AddRenderCustomDepth(class UPrimitiveComponent* InPrimitiveComponent, EWrestlerCustomDepthUser InCaller, const int32 InCustomDepthValue);
}; // Size: 0x80

class UWrestlerCutsceneMusicSettings : public UWrestlerSettingsBase
{
    TSoftObjectPtr<UHeraPropertyGameplayTag> CutsceneMusicTagProperty;                // 0x0048 (size: 0x28)

}; // Size: 0x70

class UWrestlerDamageApplicator : public UObject
{

    bool K2_ApplyDamage(class UObject* WorldContextObject, class AActor* Target, float Amount, FApplyDamageParams Params);
}; // Size: 0x28

class UWrestlerDamageExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UWrestlerDamageExecutionNoDeath : public UWrestlerDamageExecution
{
}; // Size: 0x40

class UWrestlerDataAsset_AimAssistWithTargetingConfig : public UHeraDataAsset
{
    FAimAssistTargetSettingsStruct AimAssistTargetSettings;                           // 0x0030 (size: 0xC0)

}; // Size: 0xF0

class UWrestlerDataAsset_DashConfig : public UHeraDataAsset
{
    float OrbitAngle;                                                                 // 0x0030 (size: 0x4)
    float OrbitDuration;                                                              // 0x0034 (size: 0x4)
    float ForwardStrength;                                                            // 0x0038 (size: 0x4)
    float ForwardDuration;                                                            // 0x003C (size: 0x4)
    float BackwardStrength;                                                           // 0x0040 (size: 0x4)
    float BackwardDuration;                                                           // 0x0044 (size: 0x4)
    float LeftStrength;                                                               // 0x0048 (size: 0x4)
    float LeftDuration;                                                               // 0x004C (size: 0x4)
    float RightStrength;                                                              // 0x0050 (size: 0x4)
    float RightDuration;                                                              // 0x0054 (size: 0x4)

}; // Size: 0x58

class UWrestlerDataAsset_HeightenedSensesClue : public UHeraDataAsset
{
    bool bIsInfiniteRadius;                                                           // 0x0030 (size: 0x1)
    float MinVisibleRadius;                                                           // 0x0034 (size: 0x4)
    float MaxVisibleRadius;                                                           // 0x0038 (size: 0x4)

}; // Size: 0x40

class UWrestlerDataAsset_LightningStrike_LevelConfig : public UHeraDataAsset
{
    TArray<FLightningStrikeTierConfig> FLightningStrikeTierConfigItems;               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UWrestlerDataAsset_ModularEnemies : public UPrimaryDataAsset
{
    TMap<class FName, class FEnemyToSpawn> Enemies;                                   // 0x0030 (size: 0x50)

}; // Size: 0x80

class UWrestlerDataAsset_ModularEnemyTasks : public UHeraDataAsset
{
    TMap<class FName, class FWrestlerTaskCollection> EnemyTasks;                      // 0x0030 (size: 0x50)
    TMap<class FName, class FName> TaskOverrides;                                     // 0x0080 (size: 0x50)

    void UnregisterTaskOverrideForAgent(class AActor* InParticipantActor, TEnumAsByte<EEndPlayReason::Type> InEndPlayReason);
}; // Size: 0xD0

class UWrestlerDataAsset_PlayableCharacters : public UHeraDataAsset
{
    TMap<class FGameplayTag, class TSoftClassPtr<UWrestlerPlayerTypeDefinition>> PlayableCharacters; // 0x0030 (size: 0x50)

}; // Size: 0x80

class UWrestlerDataAsset_PlayerSpeedOverride : public UWrestlerConfigDataAsset
{
    float Duration;                                                                   // 0x0030 (size: 0x4)
    float MovementSpeed;                                                              // 0x0034 (size: 0x4)
    float SprintSpeed;                                                                // 0x0038 (size: 0x4)

}; // Size: 0x40

class UWrestlerDataAsset_Punch_Config : public UHeraDataAsset
{
    bool bComboVarietyActive;                                                         // 0x0030 (size: 0x1)

}; // Size: 0x38

class UWrestlerDataAsset_Throwable : public UHeraDataAsset
{
    float Damage;                                                                     // 0x0030 (size: 0x4)
    float StaggerMultiplier;                                                          // 0x0034 (size: 0x4)
    float StraightThrowDistance;                                                      // 0x0038 (size: 0x4)
    float AudioStimulusRange;                                                         // 0x003C (size: 0x4)
    class UNiagaraSystem* SmashFX;                                                    // 0x0040 (size: 0x8)

}; // Size: 0x48

class UWrestlerDeadBodyIdentifier : public UObject
{
}; // Size: 0x30

class UWrestlerDeadBodyManager : public UWorldSubsystem
{
    TMap<class AWrestlerDeadBody*, class FWrestlerDeadBodyInvestigators> ActiveBodies; // 0x0030 (size: 0x50)

    void RemoveDeadBody(class AActor* InBody);
    bool RegisterSeenBody(class AActor* InActor, class AWrestlerDeadBody* InBody, bool InMayInvestigate);
    void Death(class AActor* InActor);
    bool CanInvestigateBody(const class AActor* InActor, class AWrestlerDeadBody* InBody);
}; // Size: 0x80

class UWrestlerDebugKeysConfigDataAsset : public UWrestlerConfigDataAsset
{
}; // Size: 0x30

class UWrestlerDebugSettings : public UDeveloperSettingsBackedByCVars
{
    TSoftClassPtr<UUserWidget> CheatMenuWidget;                                       // 0x0038 (size: 0x28)
    TSoftClassPtr<UUserWidget> PropertyWidget;                                        // 0x0060 (size: 0x28)

    TSoftClassPtr<UUserWidget> GetPropertyWidget();
    TSoftClassPtr<UUserWidget> GetCheatMenuWidget();
}; // Size: 0x88

class UWrestlerDefaultAbilities : public UHeraDataAsset
{
    TArray<TSoftClassPtr<UWrestlerGameplayAbility>> SoftDefaultAbilities;             // 0x0030 (size: 0x10)
    TSet<TSubclassOf<UWrestlerGameplayAbility>> DefaultGameplayAbilities;             // 0x0040 (size: 0x50)
    bool bShouldPopulateAbilityEventMap;                                              // 0x0090 (size: 0x1)
    TMap<class FGameplayTag, class TSoftClassPtr<UGameplayAbility>> DefaultAbilityEventMap; // 0x0098 (size: 0x50)

}; // Size: 0xE8

class UWrestlerDepleteBloodAutomataTask : public UHeraAutomataTask
{
}; // Size: 0x88

class UWrestlerDespawnEnemyAutomataTask : public UHeraAutomataTask
{
    TArray<FName> DespawnTagList;                                                     // 0x0088 (size: 0x10)

}; // Size: 0x98

class UWrestlerDialogueAbilitylData : public UHeraDataAsset
{
    class UHeraMissionObjective* Objective;                                           // 0x0030 (size: 0x8)
    class UHeraDialogueInfo* Story;                                                   // 0x0038 (size: 0x8)
    class UHeraPropertyBool* IsAbilityResultSuccess;                                  // 0x0040 (size: 0x8)
    FString JumpToKnot;                                                               // 0x0048 (size: 0x10)

}; // Size: 0x58

class UWrestlerDialoguePreviewSettings : public UWrestlerSettingsBase
{
    TSoftObjectPtr<UHeraMissionObjective> DebugRigInteractionObjective;               // 0x0048 (size: 0x28)
    TSoftObjectPtr<UHeraMission> OverrideDialoguePreviewMission;                      // 0x0070 (size: 0x28)

}; // Size: 0x98

class UWrestlerDialogueReactionWidget : public UHeraCommonUIBaseWidget
{
    float NotificationTimer;                                                          // 0x0330 (size: 0x4)
    class UTextBlock* TextReaction;                                                   // 0x0338 (size: 0x8)
    float ShowTime;                                                                   // 0x0340 (size: 0x4)

    void OnShow(EHeraDialogueReactionClass InReactionType);
    void OnHide();
    bool IsWidgetShowing();
}; // Size: 0x350

class UWrestlerEnemyAISettings : public UWrestlerSettingsBase
{
    TMap<class FName, class TSoftObjectPtr<UWrestlerEnemyCombatConfigDataAsset>> EnemyCombatConfigClasses; // 0x0048 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerRangedAttackConfig>> RangedAttackConfigClasses; // 0x0098 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerTokenConfigData>> TokenConfigClasses; // 0x00E8 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerStateTreeConfig>> StateTreeConfigClasses; // 0x0138 (size: 0x50)
    TSubclassOf<class UWrestlerBaseWidget> TokenDebugWidget;                          // 0x0188 (size: 0x8)
    TMap<class FName, class TSoftObjectPtr<UWrestlerDataAsset_ModularEnemyTasks>> EnemyTasks; // 0x0190 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerTaskConfig>> TaskConfig;          // 0x01E0 (size: 0x50)
    TSoftClassPtr<UUserWidget> TaskDebugWidget;                                       // 0x0230 (size: 0x28)
    TMap<class FName, class TSoftObjectPtr<UWrestlerEnemyTeamAttitudeConfig>> EnemyTeamAttitudeConfigClasses; // 0x0258 (size: 0x50)
    TMap<class FName, class UWrestlerEnemyCombatConfigDataAsset*> EnemyCombatConfigInstances; // 0x02A8 (size: 0x50)
    TMap<class FName, class UWrestlerRangedAttackConfig*> RangedAttackConfigInstances; // 0x02F8 (size: 0x50)
    TMap<class FName, class UWrestlerTokenConfigData*> TokenConfigInstances;          // 0x0348 (size: 0x50)
    TMap<class FName, class UWrestlerStateTreeConfig*> StateTreeConfigInstances;      // 0x0398 (size: 0x50)
    TMap<class FName, class UWrestlerDataAsset_ModularEnemyTasks*> EnemyTasksInstances; // 0x03E8 (size: 0x50)
    TMap<class FName, class UWrestlerTaskConfig*> TaskConfigInstances;                // 0x0438 (size: 0x50)
    TMap<class FName, class UWrestlerEnemyTeamAttitudeConfig*> EnemyTeamAttitudeConfigInstances; // 0x0488 (size: 0x50)

    TSubclassOf<class UWrestlerBaseWidget> GetTokenDebugWidget();
    class UWrestlerTokenConfigData* GetTokenConfig(const FName& InKey);
    TSubclassOf<class UUserWidget> GetTaskDebugWidget();
    class UWrestlerTaskConfig* GetTaskConfig(const FName& InKey);
    class UWrestlerStateTreeConfig* GetStateTreeConfig(const FName& InKey);
    class UWrestlerRangedAttackConfig* GetRangedAttackConfigAsset();
    class UWrestlerEnemyTeamAttitudeConfig* GetEnemyTeamAttitudeConfig();
    class UWrestlerDataAsset_ModularEnemyTasks* GetEnemyTasks(const FName& InKey);
    class UWrestlerEnemyCombatConfigDataAsset* GetEnemyCombatConfigAsset(const FName& InKey);
    class UWrestlerEnemyAISettings* Get(class UObject* InWorldContextObject);
}; // Size: 0x4D8

class UWrestlerEnemyAlertnessWidget : public UWrestlerBaseWidget
{
    bool bIsAvailable;                                                                // 0x02C8 (size: 0x1)
    TWeakObjectPtr<class AWrestlerEnemyCharacter> Enemy;                              // 0x02CC (size: 0x8)
    float CombatTimeBeforeFade;                                                       // 0x02D4 (size: 0x4)
    float FadeRate;                                                                   // 0x02D8 (size: 0x4)
    class UCanvasPanel* AwarenessCanvas;                                              // 0x02E0 (size: 0x8)

    void UpdateAwareness(const class AAIController* InOwningCharacterController, float InNewValue);
    void SetEnemy(class AWrestlerEnemyCharacter* InEnemy);
    bool GetIsDetected();
    bool GetIsAware();
    float GetDetectionProportion();
    float GetAwarnessProportion();
    void FadeWidget(FGameplayTag InCombatTag);
    void CleanUp(class AActor* InDeadActor);
}; // Size: 0x2F8

class UWrestlerEnemyAlertnessWidgetComponent : public UWrestlerEnemyUIWidgetComponent
{
    float CombatTimeBeforeFade;                                                       // 0x0808 (size: 0x4)
    float FadeRate;                                                                   // 0x080C (size: 0x4)

}; // Size: 0x810

class UWrestlerEnemyAssembler : public UObject
{
}; // Size: 0x28

class UWrestlerEnemyAudioController : public UObject
{
    TMap<class AWrestlerEnemyCharacter*, class FWrestlerTrackedEnemyProperties> TrackedEnemies; // 0x0030 (size: 0x50)
    TArray<class AWrestlerEnemyCharacter*> CurrentEnemiesInRange;                     // 0x0080 (size: 0x10)
    FWrestlerMusicSting OnKillStingLastKill;                                          // 0x0090 (size: 0x10)
    FWrestlerMusicSting OnKillStingActiveCombat;                                      // 0x00A0 (size: 0x10)
    FWrestlerMusicSting OnKillStingDetected;                                          // 0x00B0 (size: 0x10)
    FWrestlerMusicSting OnKillStingInFeedRange;                                       // 0x00C0 (size: 0x10)
    FWrestlerMusicSting OnKillStingInAwarenessRange;                                  // 0x00D0 (size: 0x10)
    FWrestlerMusicSting OnKillStingOutOfRange;                                        // 0x00E0 (size: 0x10)
    FWrestlerMusicSting OnPlayerUseAbilitySting;                                      // 0x00F0 (size: 0x10)
    FWrestlerMusicSting OnPlayerReceiveDamageSting;                                   // 0x0100 (size: 0x10)
    FWrestlerMusicSting OnPlayerDealDamageSting;                                      // 0x0110 (size: 0x10)
    FWrestlerMusicSting OnPlayerSeenSting;                                            // 0x0120 (size: 0x10)
    FWrestlerMusicSting OnPlayerSensedSting;                                          // 0x0130 (size: 0x10)
    class UHeraPropertyInt* GameplayTypeProperty;                                     // 0x0140 (size: 0x8)
    class UHeraPropertyInt* NumTrackedEnemiesProperty;                                // 0x0148 (size: 0x8)
    class UHeraPropertyBool* IsFeedingProperty;                                       // 0x0150 (size: 0x8)
    class UAkRtpc* ThreatFactorRTPC;                                                  // 0x0158 (size: 0x8)
    class UAkRtpc* ProximityFactorRTPC;                                               // 0x0160 (size: 0x8)
    class UAkRtpc* EnemyStateTransitionRTPC;                                          // 0x0168 (size: 0x8)
    class UAkRtpc* NumEnemiesUnawareRTPC;                                             // 0x0170 (size: 0x8)
    class UAkRtpc* NumEnemiesAwareRTPC;                                               // 0x0178 (size: 0x8)
    class UAkRtpc* NumEnemiesInCombatRTPC;                                            // 0x0180 (size: 0x8)
    class UAkAudioEvent* OnEnemyStateChangeEvent;                                     // 0x0188 (size: 0x8)
    class UAkAudioEvent* OnEnemyTrackedStart;                                         // 0x0190 (size: 0x8)
    class UAkAudioEvent* OnEnemyTrackedEnd;                                           // 0x0198 (size: 0x8)

    void OnPlayerUseAbility(bool bInAbilityActive);
    void OnPlayerReceiveHitDamage();
    void OnPlayerHealthChanged(float InCurrentHealth, float InMaxHealth);
    void OnPlayerDealMeleeDamage();
    void OnPlayerBloodChanged(float InCurrentBlood, float InMaxBlood);
    void OnLastEnemyKilled(class AWrestlerEnemyCharacter* InEnemy);
    void OnEnemyStartDetecting(class AWrestlerEnemyCharacter* InEnemy);
    void OnEnemyKilled(class AWrestlerEnemyCharacter* InEnemy);
    void OnEnemyDetectedPlayer(class AWrestlerEnemyCharacter* InEnemy);
}; // Size: 0x228

class UWrestlerEnemyAudioControllerDebugSettings : public UWrestlerSettingsBase
{
    bool bDisplayOnScreenDebug;                                                       // 0x0048 (size: 0x1)

}; // Size: 0x50

class UWrestlerEnemyAudioControllerSettings : public UWrestlerSettingsBase
{
    float AwarenessRange;                                                             // 0x0048 (size: 0x4)
    float CombatAwarenessRange;                                                       // 0x004C (size: 0x4)
    TSoftObjectPtr<UHeraPropertyInt> GameplayTypeProperty;                            // 0x0050 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> NumTrackedEnemiesProperty;                       // 0x0078 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> IsFeedingProperty;                              // 0x00A0 (size: 0x28)
    float RefreshRate;                                                                // 0x00C8 (size: 0x4)
    float MaxThreatFactor;                                                            // 0x00CC (size: 0x4)
    float MinimumCombatTimeSecs;                                                      // 0x00D0 (size: 0x4)
    float MinimumCombatEndingTimeSecs;                                                // 0x00D4 (size: 0x4)
    TSoftObjectPtr<UAkRtpc> ThreatFactorRTPC;                                         // 0x00D8 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> ProximityFactorRTPC;                                      // 0x0100 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> NumEnemiesUnawareRTPC;                                    // 0x0128 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> NumEnemiesAwareRTPC;                                      // 0x0150 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> NumEnemiesInCombatRTPC;                                   // 0x0178 (size: 0x28)
    float EnemyAttackPowerWeighting;                                                  // 0x01A0 (size: 0x4)
    float EnemyMaxHealthWeighting;                                                    // 0x01A4 (size: 0x4)
    float EnemyProximityWeighting;                                                    // 0x01A8 (size: 0x4)
    float PlayerBloodWeighting;                                                       // 0x01AC (size: 0x4)
    float PlayerBloodThreatThreshold;                                                 // 0x01B0 (size: 0x4)
    float PlayerHealthWeighting;                                                      // 0x01B4 (size: 0x4)
    float PlayerHealthThreatThreshold;                                                // 0x01B8 (size: 0x4)
    TArray<float> ThreatFactorCurve;                                                  // 0x01C0 (size: 0x10)
    TSoftObjectPtr<UAkAudioEvent> OnKillStingLastKill;                                // 0x01D0 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnKillStingActiveCombat;                            // 0x01F8 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnKillStingDetected;                                // 0x0220 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnKillStingInFeedRange;                             // 0x0248 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnKillStingInAwarenessRange;                        // 0x0270 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnKillStingOutOfRange;                              // 0x0298 (size: 0x28)
    float OnKillStingCooldownTime;                                                    // 0x02C0 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> OnPlayerUseAbilitySting;                            // 0x02C8 (size: 0x28)
    float OnPlayerUseAbilityStingCooldownTime;                                        // 0x02F0 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> OnPlayerReceiveDamageSting;                         // 0x02F8 (size: 0x28)
    float OnPlayerReceiveDamageStingCooldownTime;                                     // 0x0320 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> OnPlayerDealDamageSting;                            // 0x0328 (size: 0x28)
    float OnPlayerDealDamageStingCooldownTime;                                        // 0x0350 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> OnPlayerSeenSting;                                  // 0x0358 (size: 0x28)
    float OnPlayerSeenStingCooldownTime;                                              // 0x0380 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> OnPlayerSensedSting;                                // 0x0388 (size: 0x28)
    float OnPlayerSensedStingCooldownTime;                                            // 0x03B0 (size: 0x4)
    TSoftObjectPtr<UAkSwitchValue> HiddenEnemySwitch;                                 // 0x03B8 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnEnemyStateChangeEvent;                            // 0x03E0 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnEnemyTrackedStart;                                // 0x0408 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> OnEnemyTrackedEnd;                                  // 0x0430 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> EnemyStateTransitionRTPC;                                 // 0x0458 (size: 0x28)

}; // Size: 0x480

class UWrestlerEnemyCombatConfigDataAsset : public UWrestlerConfigDataAsset
{
    FWrestlerEnemyBehaviours DefaultEnemyBehaviours;                                  // 0x0030 (size: 0x50)
    TMap<class FName, class FWrestlerEnemyBehaviours> EnemyCombatBehaviours;          // 0x0080 (size: 0x50)
    TMap<TEnumAsByte<EWrestlerEnemySubTeam>, uint8> BaseSubTeams;                     // 0x00D0 (size: 0x50)

}; // Size: 0x120

class UWrestlerEnemyCombatDataAsset : public UHeraDataAsset
{
    class UWrestlerControlGraph* CombatControlGraph;                                  // 0x0030 (size: 0x8)
    class UWrestlerControlGraph* AltCombatControlGraph;                               // 0x0038 (size: 0x8)
    class UWrestlerControlGraph* AltLeftRightCombatControlGraph;                      // 0x0040 (size: 0x8)
    class UWrestlerControlGraph* ActiveControlGraph;                                  // 0x0048 (size: 0x8)
    bool bIsAltCombatActive;                                                          // 0x0050 (size: 0x1)
    bool bIsLeftRightCombatInputActive;                                               // 0x0051 (size: 0x1)
    bool bAutoLockOn;                                                                 // 0x0052 (size: 0x1)

}; // Size: 0x58

class UWrestlerEnemyConfigDataAsset : public UHeraDataAsset
{
    TSoftClassPtr<UUserWidget> UIWidgetClass;                                         // 0x0030 (size: 0x28)
    TSoftClassPtr<UUserWidget> UIWidgetClassAlertness;                                // 0x0058 (size: 0x28)
    TSoftClassPtr<AWrestlerPatrolRoute> PatrolRouteClass;                             // 0x0080 (size: 0x28)
    TSoftClassPtr<AWrestlerPathPoint> PatrolPointClass;                               // 0x00A8 (size: 0x28)

}; // Size: 0xD0

class UWrestlerEnemyDebugWidget : public UWrestlerBaseWidget
{
    class UTextBlock* StateName;                                                      // 0x02C8 (size: 0x8)
    class UTextBlock* AwarenessMin;                                                   // 0x02D0 (size: 0x8)
    class UTextBlock* AwarenessMax;                                                   // 0x02D8 (size: 0x8)
    class UTextBlock* AwarenessAbsoluteValue;                                         // 0x02E0 (size: 0x8)
    class UProgressBar* AwarenessProgressBar;                                         // 0x02E8 (size: 0x8)

}; // Size: 0x2F0

class UWrestlerEnemyDefendZoneComponent : public UActorComponent
{
    TArray<class AWrestlerDefendZone*> DefendZones;                                   // 0x00A0 (size: 0x10)

    bool IsPointInOwnedZone(FVector Point, float ExtentMultiplier, bool IncludeHysteresis);
    bool HasDefendZones();
    TArray<class AWrestlerDefendZone*> GetDefendZones();
}; // Size: 0xB0

class UWrestlerEnemyFunctionLibrary : public UWrestlerBlueprintFunctionLibrary
{

    void WrestlerUnFreezeCharacter(class AActor* InActor);
    void WrestlerReportSightEvent_PredictedLocation(class UObject* InWorldContextObject, FVector InEventLocation, FVector InPredictedLocation, class AActor* InInstigator, float InMaxRange, FGameplayTag InTag);
    void WrestlerReportSightEvent(class UObject* InWorldContextObject, FVector InEventLocation, class AActor* InInstigator, float InMaxRange, FGameplayTag InTag);
    void WrestlerReportNoiseEvent(class UObject* InWorldContextObject, FVector InNoiseLocation, float InLoudness, class AActor* InInstigator, float InMaxRange, FGameplayTag InTag);
    void WrestlerFreezeCharacter(class AActor* InActor, bool bIsHiddenInGame);
    void UnregisterTaskOverrideForAgent(const class AActor* InAgent);
    void UnregisterAllTaskOverrides(class UWorld* InWorld);
    void SpawnEnemyDeferred(const class UObject* InWorldContextObject, const TSoftObjectPtr<AWrestlerAISpawner> InSpawner, FWrestlerDeferredEnemySpawnParam InSpawnParams);
    void SetUseStunGlow(class AActor* Actor, const float InUseStunGlow, const FName& InParamName);
    void SetCharacterProfileMeshesTick(class AActor* InActor, bool CanTick, float TickInterval);
    void SetCharacterProfileMeshesDrawDistance(class AActor* InActor, float MaxDrawDistance);
    void SetBloodResonanceType(class AActor* InActor, EWrestlerBloodResonanceType InBloodResonanceType);
    void RegisterTaskOverrideForAgent(class AActor* InAgent, FName InTaskData);
    void OptimizeCharacterProfileMeshes(class AActor* InActor, bool CanTick, float TickInterval, float MaxDrawDistance, bool CanCastShadows);
    class AWrestlerEnemyCharacter* K2_SpawnEnemy(class UObject* InWorldContextObject, const FTransform& InTransform, const TSubclassOf<class AWrestlerEnemyCharacter> InEnemyClass);
    EWrestlerGrantedPointsType GetXPBloodResonanceType(class AActor* InActor);
    EWrestlerBloodResonanceType GetBloodResonanceType(class AActor* InActor);
}; // Size: 0x28

class UWrestlerEnemyHealthStunWidgetComponent : public UWrestlerEnemyUIWidgetComponent
{
}; // Size: 0x7E0

class UWrestlerEnemyIndicatorWidget : public UWrestlerBaseWidget
{
    class UTexture2D* AttackImage;                                                    // 0x02C8 (size: 0x8)
    class UImage* IndicatorIcon;                                                      // 0x02D0 (size: 0x8)
    class UProgressBar* IndicatorFillBar;                                             // 0x02D8 (size: 0x8)

    void SetEnemyIndicatorState(TEnumAsByte<EWrestlerEnemyState> InNewEnemyState);
    void OnVisibilityChange(bool bNewVisibility);
}; // Size: 0x2F0

class UWrestlerEnemyMoveInputComponent : public UActorComponent
{
    class AWrestlerEnemyCharacter* OwningCharacter;                                   // 0x00A0 (size: 0x8)
    float SprintThreshold;                                                            // 0x00A8 (size: 0x4)
    float TurnBlockThreshold;                                                         // 0x00AC (size: 0x4)
    float WalkInterpolationSpeed;                                                     // 0x00B0 (size: 0x4)
    float StopSpeedThreshold;                                                         // 0x00B4 (size: 0x4)
    float StrategicBackoutStartDistance;                                              // 0x00B8 (size: 0x4)
    float RotationWithTurnSetSpeedThreshold;                                          // 0x00BC (size: 0x4)
    float MinSprintThreshold;                                                         // 0x00C0 (size: 0x4)
    float SprintHysteria;                                                             // 0x00C4 (size: 0x4)
    float MinDistanceFromPlayerToSprintFollow;                                        // 0x00C8 (size: 0x4)
    bool TurnSetDesired;                                                              // 0x00CC (size: 0x1)
    bool Strafing;                                                                    // 0x00CD (size: 0x1)
    float TurnSpeed;                                                                  // 0x00D0 (size: 0x4)
    float WalkAcceleration;                                                           // 0x00D4 (size: 0x4)
    float SprintAcceleration;                                                         // 0x00D8 (size: 0x4)
    FVector destination;                                                              // 0x00E0 (size: 0x18)
    FGameplayTagContainer FranticSpeciesTags;                                         // 0x00F8 (size: 0x20)
    FGameplayTagContainer MovementBlockedTags;                                        // 0x0118 (size: 0x20)
    FGameplayTagContainer RotationBlockedTags;                                        // 0x0138 (size: 0x20)
    FGameplayTag SprintTag;                                                           // 0x0158 (size: 0x8)
    FGameplayAttribute SprintSpeedAttribute;                                          // 0x0160 (size: 0x38)
    FGameplayAttribute WalkSpeedAttribute;                                            // 0x0198 (size: 0x38)
    FGameplayTag TurnSetMontageDefaultTag;                                            // 0x01D0 (size: 0x8)
    TMap<class FGameplayTag, class FGameplayTag> TurnSetMontageTagPerState;           // 0x01D8 (size: 0x50)
    class UAnimMontage* TurnSetMontageDefault;                                        // 0x0228 (size: 0x8)
    class UAnimMontage* TurnSetAnimMontage;                                           // 0x0258 (size: 0x8)

    bool ShouldBeSprinting();
    void OnOwnerStateTagsAdded(FGameplayTagContainer InStateTags);
    bool IsTurnBlocked();
    float GetSpeedMultiplier();
    float GetOwnerHorizontalVelocity();
    bool GetIsFrantic();
    FVector GetDestination();
    float GetDesiredTurnAngle();
    FVector GetDesiredFacingDirection();
    bool CanRotate();
}; // Size: 0x260

class UWrestlerEnemySequenceDataAsset : public UHeraDataAsset
{
    TMap<class FGameplayTag, class FEnemySequenceData> EnemySequences;                // 0x0030 (size: 0x50)

    bool GetEnemySequenceData(FGameplayTag InTag, FEnemySequenceData& OutEnemySequenceData);
}; // Size: 0x80

class UWrestlerEnemySightSetup : public UHeraDataAsset
{
    FWrestlerConeParams PrimaryCone;                                                  // 0x0030 (size: 0xA0)
    FWrestlerConeParams SecondaryCone;                                                // 0x00D0 (size: 0xA0)
    FWrestlerConeParams TertiaryCone;                                                 // 0x0170 (size: 0xA0)
    float CrouchingHostilityMultiplier;                                               // 0x0210 (size: 0x4)
    float SprintingHostilityMultiplier;                                               // 0x0214 (size: 0x4)
    float GlidingHostilityMultiplier;                                                 // 0x0218 (size: 0x4)
    float CrouchingPrimaryConeRangeMultiplier;                                        // 0x021C (size: 0x4)
    float SprintingPrimaryConeRangeMultiplier;                                        // 0x0220 (size: 0x4)
    float GlidingPrimaryConeRangeMultiplier;                                          // 0x0224 (size: 0x4)

}; // Size: 0x228

class UWrestlerEnemySquadManager : public UObject
{
    TMap<class FGameplayTag, class FEnemySquad> EnemySquads;                          // 0x0028 (size: 0x50)

    void HandleEnemyRemovedEvent(class AWrestlerEnemyCharacter* InEnemy);
}; // Size: 0x78

class UWrestlerEnemyStatsConfig : public UWrestlerConfigDataAsset
{
    TArray<TSoftClassPtr<UGameplayEffect>> EasyStatsEffects;                          // 0x0030 (size: 0x10)
    TArray<TSoftClassPtr<UGameplayEffect>> MediumStatsEffects;                        // 0x0040 (size: 0x10)
    TArray<TSoftClassPtr<UGameplayEffect>> HardStatsEffects;                          // 0x0050 (size: 0x10)
    float EasyStunDuration;                                                           // 0x0060 (size: 0x4)
    float MediumStunDuration;                                                         // 0x0064 (size: 0x4)
    float HardStunDuration;                                                           // 0x0068 (size: 0x4)

}; // Size: 0x70

class UWrestlerEnemySubsystem : public UWorldSubsystem
{
    FWrestlerEnemySubsystemOnEnemyStateTagsChanged OnEnemyStateTagsChanged;           // 0x0030 (size: 0x10)
    void WrestlerEnemyStateChangeEvent(class AWrestlerEnemyCharacter* Enemy, FGameplayTagContainer StateTags, bool bAdded);
    FWrestlerEnemySubsystemOnEnemySpawnedBySpawner OnEnemySpawnedBySpawner;           // 0x0040 (size: 0x10)
    void WrestlerEnemySpawnedBySpawnerEvent(class AWrestlerEnemyCharacter* Enemy, class AWrestlerAISpawner* Spawner);
    FWrestlerEnemySubsystemOnEnemySpawnedEvent OnEnemySpawnedEvent;                   // 0x0050 (size: 0x10)
    void WrestlerEnemyLifeEvent(class AWrestlerEnemyCharacter* Enemy);
    FWrestlerEnemySubsystemOnEnemyDeathEvent OnEnemyDeathEvent;                       // 0x0060 (size: 0x10)
    void WrestlerEnemyLifeEvent(class AWrestlerEnemyCharacter* Enemy);
    FWrestlerEnemySubsystemOnLastEnemyEvent OnLastEnemyEvent;                         // 0x0070 (size: 0x10)
    void WrestlerEnemyLifeEvent(class AWrestlerEnemyCharacter* Enemy);
    FWrestlerEnemySubsystemOnLastEnemyDeathEvent OnLastEnemyDeathEvent;               // 0x0080 (size: 0x10)
    void WrestlerEnemyLifeEvent(class AWrestlerEnemyCharacter* Enemy);
    FWrestlerEnemySubsystemOnEnemyCombatEvent OnEnemyCombatEvent;                     // 0x0090 (size: 0x10)
    void WrestlerEnemyLifeEvent(class AWrestlerEnemyCharacter* Enemy);
    FWrestlerEnemySubsystemOnEnemyDetectedPlayer OnEnemyDetectedPlayer;               // 0x00A0 (size: 0x10)
    void WrestlerEnemyLifeEvent(class AWrestlerEnemyCharacter* Enemy);
    FWrestlerEnemySubsystemOnEnemyStartDetectingPlayer OnEnemyStartDetectingPlayer;   // 0x00B0 (size: 0x10)
    void WrestlerEnemyLifeEvent(class AWrestlerEnemyCharacter* Enemy);
    class UWrestlerEnemySquadManager* EnemySquadManager;                              // 0x00C0 (size: 0x8)

    bool K2_IsEnemyInCombat(class AWrestlerEnemyCharacter* InEnemy);
    bool K2_IsEnemyDetectingPlayer(class AWrestlerEnemyCharacter* InEnemy);
    bool K2_IsEnemyAware(class AWrestlerEnemyCharacter* InEnemy);
    class AWrestlerEnemyCharacter* K2_GetSquadLeaderByTag(class UObject* WorldContextObject, const FGameplayTag& InSquadTag);
    class AWrestlerEnemyCharacter* K2_GetSquadLeader(const class AWrestlerEnemyCharacter* InEnemy);
    FEnemySquad K2_GetSquad(class UObject* WorldContextObject, const FGameplayTag& InSquadTag);
    int32 K2_GetNumberOfEnemiesInCombat(class UObject* WorldContextObject);
    int32 K2_GetNumberOfEnemiesDetectingPlayer(class UObject* WorldContextObject);
    int32 K2_GetNumberOfEnemiesAware(class UObject* WorldContextObject);
    int32 K2_GetNumberOfEnemiesAlive(class UObject* WorldContextObject);
    void K2_GetFollowersByTag(class UObject* WorldContextObject, const FGameplayTag& InSquadTag, TArray<class AWrestlerEnemyCharacter*>& OutFollowers);
    void K2_GetFollowers(const class AWrestlerEnemyCharacter* InEnemy, TArray<class AWrestlerEnemyCharacter*>& OutFollowers);
    void K2_GetAllMassCharactersActive(class UObject* WorldContextObject, TArray<class AWrestlerCharacterBase*>& OutMassCharacters);
    TArray<class AWrestlerEnemyCharacter*> K2_GetAllEnemiesInCombat(class UObject* WorldContextObject);
    TArray<class AWrestlerEnemyCharacter*> K2_GetAllEnemiesHasMatchingTag(class UObject* WorldContextObject, FGameplayTag InTag);
    TArray<class AWrestlerEnemyCharacter*> K2_GetAllEnemiesDetectingPlayer(class UObject* WorldContextObject);
    TArray<class AWrestlerEnemyCharacter*> K2_GetAllEnemiesAware(class UObject* WorldContextObject);
    TArray<class AWrestlerEnemyCharacter*> K2_GetAllEnemiesAlive(class UObject* WorldContextObject);
    void K2_GetAllAgents(class UObject* WorldContextObject, TArray<class AWrestlerCharacterBase*>& OutAllAgents);
    bool K2_AddSquadMember(class AWrestlerEnemyCharacter* InEnemy, const FGameplayTag& InSquadTag, bool bIsLeader);
    bool IsLeader(const class AWrestlerEnemyCharacter* InLeader);
    bool IsFollower(const class AWrestlerEnemyCharacter* InEnemy);
}; // Size: 0xC8

class UWrestlerEnemyTeamAttitudeConfig : public UHeraDataAsset
{
    TMap<class EWrestlerGameTeam, class FWrestlerTeamHostility> TeamAttitude;         // 0x0030 (size: 0x50)

}; // Size: 0x80

class UWrestlerEnemyTokenStealingController : public UWrestlerTokenStealingController
{
    float MaxDistance;                                                                // 0x0030 (size: 0x4)
    float MaxAngle;                                                                   // 0x0034 (size: 0x4)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0038 (size: 0x1)
    TMap<AActor*, float> Handicap;                                                    // 0x0040 (size: 0x50)
    float HandicapScore;                                                              // 0x0090 (size: 0x4)
    class UCurveFloat* CurveDistance;                                                 // 0x0098 (size: 0x8)
    class UCurveFloat* CurveAngle;                                                    // 0x00A0 (size: 0x8)

}; // Size: 0xA8

class UWrestlerEnemyTraversalComponent : public UActorComponent
{
    float MinJumpHeightThreshold;                                                     // 0x00A0 (size: 0x4)
    float MinClimbHeightThreshold;                                                    // 0x00A4 (size: 0x4)
    FGameplayTag ClimbingTag;                                                         // 0x00A8 (size: 0x8)
    FGameplayTag JumpTag;                                                             // 0x00B0 (size: 0x8)
    FGameplayTag ClimbDownTag;                                                        // 0x00B8 (size: 0x8)
    TArray<class AActor*> ClimbPoints;                                                // 0x00F0 (size: 0x10)

    void GetTraversalPoints(FVector& OutStartPoint, FVector& OutEndPoint);
}; // Size: 0x100

class UWrestlerEnemyTypeDefinition : public UObject
{
    TSoftObjectPtr<UAkSwitchValue> AudioSwitch;                                       // 0x0028 (size: 0x28)
    TSoftClassPtr<AWrestlerEnemyCharacter> EnemyCharacterBase;                        // 0x0050 (size: 0x28)
    TSoftClassPtr<AActor> DeadActor;                                                  // 0x0078 (size: 0x28)
    TArray<TSoftObjectPtr<UWrestlerModularCharacterProfile>> ModularCharacterProfiles; // 0x00A0 (size: 0x10)
    TSoftClassPtr<AWrestlerEnemyController> EnemyController;                          // 0x00B0 (size: 0x28)
    TSoftObjectPtr<UStateTree> StateTree;                                             // 0x00D8 (size: 0x28)
    TSoftObjectPtr<UWrestlerAISenseConfig> SenseConfig;                               // 0x0100 (size: 0x28)
    TMap<class FGameplayTag, class TSoftObjectPtr<UWrestlerAISenseConfig>> PerStateSenseConfig; // 0x0128 (size: 0x50)
    TSoftObjectPtr<UWrestlerAIAwarenessConfig> AwarenessConfig;                       // 0x0178 (size: 0x28)
    TMap<class FGameplayTag, class TSoftObjectPtr<UWrestlerAIAwarenessConfig>> PerStateAwarenessConfig; // 0x01A0 (size: 0x50)
    TSoftObjectPtr<UWrestlerFocusConfig> FocusConfig;                                 // 0x01F0 (size: 0x28)
    TSoftObjectPtr<UWrestlerDefaultAbilities> DefaultAbilities;                       // 0x0218 (size: 0x28)
    FGameplayTagContainer StartupTags;                                                // 0x0240 (size: 0x20)
    FGameplayTag FeedXPAwardTag;                                                      // 0x0260 (size: 0x8)
    EWrestlerGameTeam Team;                                                           // 0x0268 (size: 0x1)

}; // Size: 0x270

class UWrestlerEnemyUIWidgetComponent : public UWidgetComponent
{
    float DotProductThreshold;                                                        // 0x06E8 (size: 0x4)
    FVector2D DistanceRange;                                                          // 0x06F0 (size: 0x10)
    FVector2D DistanceMappingRange;                                                   // 0x0700 (size: 0x10)
    FVector2D HeightOffsetRange;                                                      // 0x0710 (size: 0x10)
    FVector2D ScaleMultiplierRange;                                                   // 0x0720 (size: 0x10)
    float DelayBeforeVisibilityTrace;                                                 // 0x0730 (size: 0x4)
    float DelayVariation;                                                             // 0x0734 (size: 0x4)
    float HeightOffset;                                                               // 0x0738 (size: 0x4)
    bool bUseLOSTrace;                                                                // 0x073C (size: 0x1)
    FName SocketToMapTransformTo;                                                     // 0x0740 (size: 0x8)
    class ACharacter* OwningCharacter;                                                // 0x0748 (size: 0x8)
    class UUserWidget* CurrentWidget;                                                 // 0x0750 (size: 0x8)

}; // Size: 0x7E0

class UWrestlerEntityAwarenessWidget : public UWrestlerBaseWidget
{
    class UProgressBar* AwarenessProgress;                                            // 0x02C8 (size: 0x8)
    class UImage* AwarenessBackground;                                                // 0x02D0 (size: 0x8)
    class UImage* AwarenessBorder;                                                    // 0x02D8 (size: 0x8)
    float SmoothAwarenessLerpSpeed;                                                   // 0x02E0 (size: 0x4)
    FWrestlerEntityAwarenessWidgetData InvestigateWidgetData;                         // 0x02F0 (size: 0x2B0)
    FWrestlerEntityAwarenessWidgetData CombatWidgetData;                              // 0x05A0 (size: 0x2B0)

}; // Size: 0x860

class UWrestlerEnvQueryContext_AllEnemyMoveTos : public UEnvQueryContext_BlueprintBase
{
}; // Size: 0x30

class UWrestlerEnvQueryContext_Mass : public UEnvQueryContext
{
}; // Size: 0x28

class UWrestlerEnvQueryContext_MassEntities : public UWrestlerEnvQueryContext_Mass
{
    FWrestlerEntityMassTagFilter FilterTags;                                          // 0x0028 (size: 0x30)
    FWrestlerEntityMassFragmentFilter FilterFragments;                                // 0x0058 (size: 0x30)
    bool bIgnoreQuerier;                                                              // 0x0088 (size: 0x1)

}; // Size: 0x330

class UWrestlerEnvQueryContext_MassLastKnownPosition : public UWrestlerEnvQueryContext_Mass
{
}; // Size: 0x28

class UWrestlerEnvQueryContext_MassQuerier : public UWrestlerEnvQueryContext_Mass
{
}; // Size: 0x28

class UWrestlerEnvQueryContext_MassSightTarget : public UEnvQueryContext
{
}; // Size: 0x28

class UWrestlerEnvQueryGenerator_Cone : public UEnvQueryGenerator_Cone
{
    bool bReverse;                                                                    // 0x0180 (size: 0x1)

}; // Size: 0x188

class UWrestlerEnvQueryItem_InfluenceMapNodes : public UEnvQueryItemType
{
}; // Size: 0x30

class UWrestlerEnvQueryTest_MassTrace : public UEnvQueryTest_Trace
{
    TArray<class TSubclassOf<UEnvQueryContext>> IgnoreActorsContexts;                 // 0x02E8 (size: 0x10)

}; // Size: 0x2F8

class UWrestlerEquipmentDefinition : public UObject
{
    TSubclassOf<class UWrestlerEquipmentInstance> InstanceType;                       // 0x0028 (size: 0x8)
    TArray<class UWrestlerWeaponAbilitySet*> AbilitySetsToGrant;                      // 0x0030 (size: 0x10)
    FWrestlerEquipmentActorToSpawn ActorToSpawn;                                      // 0x0040 (size: 0x80)
    class UAkSwitchValue* AudioSwitch;                                                // 0x00C0 (size: 0x8)

}; // Size: 0xD0

class UWrestlerEquipmentInstance : public UObject
{
    class UObject* Instigator;                                                        // 0x0028 (size: 0x8)
    class AActor* SpawnedActor;                                                       // 0x0030 (size: 0x8)

    class APawn* GetTypedPawn(TSubclassOf<class APawn> InPawnType);
    class AActor* GetSpawnedActor();
    class APawn* GetPawn();
    class UObject* GetInstigator();
}; // Size: 0x38

class UWrestlerEquipmentManagerComponent : public UActorComponent
{
    TSubclassOf<class UWrestlerEquipmentDefinition> WeaponDefiniton;                  // 0x00A0 (size: 0x8)
    FWrestlerEquipmentList EquipmentList;                                             // 0x00A8 (size: 0x18)
    class UWrestlerEquipmentInstance* EquippedItem;                                   // 0x00C0 (size: 0x8)

    void UnequipItem(class UWrestlerEquipmentInstance* InEquipmentInstance);
    void UnequipAllItems();
    class UWrestlerEquipmentInstance* GetFirstInstanceOfType(TSubclassOf<class UWrestlerEquipmentInstance> InInstanceType);
    TArray<class UWrestlerEquipmentInstance*> GetEquipmentInstancesOfType(TSubclassOf<class UWrestlerEquipmentInstance> InInstanceType);
    void GetAllEquppiedItems(TArray<class AActor*>& OutList);
    class UWrestlerEquipmentInstance* EquipItem(TSubclassOf<class UWrestlerEquipmentDefinition> InEquipmentDefinition);
}; // Size: 0xC8

class UWrestlerEquippedAbilityComponent : public UActorComponent
{
    FWrestlerEquippedAbilityComponentOnEquippedAbilityActiveEvent OnEquippedAbilityActiveEvent; // 0x00B8 (size: 0x10)
    void WrestlerCharacterEquippedAbilityActive(bool bEquippedAbilityActive);
    TSet<UWrestlerAbilityDefinition*> UnlockedAbilities;                              // 0x00C8 (size: 0x50)
    TMap<class EWrestlerClanAbilityType, class FWrestlerAbilityDataStruct> EquippedAbilities; // 0x0128 (size: 0x50)

    void WrestlerCharacterEquippedAbilityActive__DelegateSignature(bool bEquippedAbilityActive);
    bool HasEquippedAbilityOfType(EWrestlerClanAbilityType InType);
}; // Size: 0x178

class UWrestlerEquippedAbilityIndicator : public UWrestlerBaseWidget
{
    class UImage* EquippedAbilityImage;                                               // 0x02C8 (size: 0x8)

}; // Size: 0x2D8

class UWrestlerEquippedAbilityWidget : public UHeraCommonUIBaseWidget
{
    class UWrestlerPlayerClan* PlayerClan;                                            // 0x0330 (size: 0x8)
    int32 StrikeAbilityBloodValue;                                                    // 0x0338 (size: 0x4)
    int32 MaxStrikeAbilityBloodValue;                                                 // 0x033C (size: 0x4)
    int32 RelocateAbilityBloodValue;                                                  // 0x0340 (size: 0x4)
    int32 MaxRelocateAbilityBloodValue;                                               // 0x0344 (size: 0x4)
    int32 MasteryAbilityBloodValue;                                                   // 0x0348 (size: 0x4)
    int32 MaxMasteryAbilityBloodValue;                                                // 0x034C (size: 0x4)
    int32 AffectAbilityBloodValue;                                                    // 0x0350 (size: 0x4)
    int32 MaxAffectAbilityBloodValue;                                                 // 0x0354 (size: 0x4)

    void OnStrikeAbilityBloodChanged(float InCurrentValue, float InMaxValue);
    void OnRelocateAbilityBloodChanged(float InCurrentValue, float InMaxValue);
    void OnMaxValueChanged(FGameplayAttribute InAffectedAttribute, float InNewMax);
    void OnMasteryAbilityBloodChanged(float InCurrentValue, float InMaxValue);
    void OnAffectAbilityBloodChanged(float InCurrentValue, float InMaxValue);
    void OnAbilityEarned();
    void InitializeWidget();
}; // Size: 0x358

class UWrestlerFearEmitterComponent : public UActorComponent
{
    bool bShowDebug;                                                                  // 0x00A0 (size: 0x1)
    float FearMaxRange;                                                               // 0x00A4 (size: 0x4)
    float FearAnnotationRange;                                                        // 0x00A8 (size: 0x4)
    FRuntimeFloatCurve FearStrengthCurve;                                             // 0x00B0 (size: 0x88)
    bool Emitting;                                                                    // 0x0138 (size: 0x1)
    float EmissionTimer;                                                              // 0x013C (size: 0x4)
    float FearStrengthMultiplier;                                                     // 0x0140 (size: 0x4)
    class AActor* FearInstigator;                                                     // 0x0148 (size: 0x8)
    FName FearTypeTag;                                                                // 0x0150 (size: 0x8)

    void StartTimedEmission(const float InTime, const float InFearStrengthMultiplier, class AActor* InFearInstigator, const FName InTag);
    void SetIsEmitting(const bool InEmitting);
    bool IsEmitting();
    class AActor* GetInstigator();
    FName GetFearTypeTag();
    float GetFearStrength(const float InDistance);
    float GetFearMaxRange();
    FRuntimeFloatCurve GetFearCurve();
}; // Size: 0x160

class UWrestlerFilesRPGMenuTabWidget : public UWrestlerMenu
{
    TSubclassOf<class UWrestlerConfirmPromptWidget> ConfirmationPromptClass;          // 0x0300 (size: 0x8)
    class UWrestlerConfirmPromptWidget* ConfirmationPrompt;                           // 0x0308 (size: 0x8)

    void ShowConfirmationPrompt(const EWrestlerConfirmationType InConfirmationType);
    void RemoveConfirmationPrompt();
    void OnLoadOrSaveConfirmationReceived(const bool bWasAffirmative);
    void OnExitToMainMenuConfirmationReceived(const bool bWasAffirmative);
    void OnExitToDesktopConfirmationReceived(const bool bWasAffirmative);
    void OnConfirmedOnPrompt(class UHeraButtonBase* InConfirmButton);
    void OnCanceledOnPrompt(class UHeraButtonBase* InConfirmButton);
}; // Size: 0x318

class UWrestlerFindInterestingPointTask : public UBTTaskNode
{
    FBlackboardKeySelector BBKeyInterestingPointLocation;                             // 0x0070 (size: 0x28)
    class AAIController* OwnerController;                                             // 0x0098 (size: 0x8)
    class AWrestlerAICharacter* AICharacter;                                          // 0x00A0 (size: 0x8)
    float InterestingPointsRange;                                                     // 0x00A8 (size: 0x4)
    float InterestingPointsRangeStrengthMultiplier;                                   // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UWrestlerFindPatrolPointTask : public UBTTaskNode
{
    class AAIController* OwnerController;                                             // 0x0070 (size: 0x8)
    FBlackboardKeySelector BBKeyNextPatrolPoint;                                      // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UWrestlerFindRandomExitPointTask : public UBTTaskNode
{
    FBlackboardKeySelector BBKeyExitPointLocation;                                    // 0x0070 (size: 0x28)
    class AAIController* OwnerController;                                             // 0x0098 (size: 0x8)

}; // Size: 0xA0

class UWrestlerFocusConfig : public UHeraDataAsset
{
    TSubclassOf<class UAIFocusTypeBase> DefaultFocus;                                 // 0x0030 (size: 0x8)
    TMap<class FGameplayTag, class TSubclassOf<UAIFocusTypeBase>> StateMap;           // 0x0038 (size: 0x50)

}; // Size: 0x88

class UWrestlerGA_ScryTheSoul : public UWrestlerGameplayAbility
{
}; // Size: 0x668

class UWrestlerGameInstance : public UHeraGameInstance
{
    class UAkStateValue* LoadingStartedAudioState;                                    // 0x0258 (size: 0x8)
    class UWrestlerWorldPartitionManager* WorldPartitionManager;                      // 0x0270 (size: 0x8)

    void SetPlayerVariantNewGame(EHeraPlayerVariant InPlayerVariant);
    void SetPlayerVariantMenuOverride(EHeraPlayerVariantOverride InPlayerVariantMenuOverride);
    void OnUserInputDeviceChanged(const class UCommonUserInfo* InUserInfo, FInputDeviceId InInputDeviceId, bool bIsConnected);
    EHeraPlayerVariantOverride GetPlayerVariantMenuOverride();
}; // Size: 0x278

class UWrestlerGameSettingListEntrySetting_Discrete : public UGameSettingListEntrySetting_Discrete
{

    void OnValueChanged(int32 Index, const FText& Text);
}; // Size: 0x350

class UWrestlerGameSettingListEntrySetting_Scalar : public UGameSettingListEntry_Setting
{
    class UGameSettingValueScalar* ScalarSetting;                                     // 0x0328 (size: 0x8)
    class UPanelWidget* Panel_Value;                                                  // 0x0330 (size: 0x8)
    class USlider* Slider_SettingValue;                                               // 0x0338 (size: 0x8)
    class UCommonTextBlock* Text_SettingValue;                                        // 0x0340 (size: 0x8)

    void Refresh();
    void OnValueChanged(float InValue);
    void OnDefaultValueChanged(float InDefaultValue);
    bool IsEnabled();
    void HandleSliderValueChanged(float Value);
    void HandleSliderCaptureEnded();
}; // Size: 0x348

class UWrestlerGameSettingRegistry : public UGameSettingRegistry
{
    class UInputMappingContext* PlayerMappingContext;                                 // 0x00B0 (size: 0x8)
    class UControlsDisplayData* ControlsDisplayData;                                  // 0x00B8 (size: 0x8)
    class UGameSettingCollection* ControlsSettings;                                   // 0x00C0 (size: 0x8)
    class UGameSettingCollection* VideoSettings;                                      // 0x00C8 (size: 0x8)
    class UGameSettingCollection* AudioSettings;                                      // 0x00D0 (size: 0x8)
    class UGameSettingCollection* GameSettings;                                       // 0x00D8 (size: 0x8)
    class UGameSettingCollection* AccessibilitySettings;                              // 0x00E0 (size: 0x8)
    class UWrestlerUISettings* UISettings;                                            // 0x00E8 (size: 0x8)

    class UHeraUI* GetUI();
    class UWrestlerCodexSubsystem* GetCodexSubsystem();
}; // Size: 0x100

class UWrestlerGameViewportClient : public UCommonGameViewportClient
{
    TArray<FWrestlerDebugKeyToCvarIntToggles> DebugKeysToCvarsIntToggles;             // 0x03F0 (size: 0x10)

}; // Size: 0x400

class UWrestlerGameplayAbility : public UGameplayAbility
{
    class UHeraPropertyFloat* CoolDownProperty;                                       // 0x03B8 (size: 0x8)
    bool bForceHighMassLOD;                                                           // 0x03D0 (size: 0x1)
    float DistanceToMassAIToEndAbility;                                               // 0x03D4 (size: 0x4)
    bool bTerminateMassAnimations;                                                    // 0x03D8 (size: 0x1)
    bool AddGameplayAbilityTagToMassAI;                                               // 0x03D9 (size: 0x1)
    bool bSwapMassAIToDefaultAIOnActivate;                                            // 0x03DA (size: 0x1)
    bool bSwapEnemyBackToMassAIOnEndAbility;                                          // 0x03DB (size: 0x1)
    bool bActivateAbilityWhenSwapAI;                                                  // 0x03DC (size: 0x1)
    EWrestlerMassSwapBackBahaviour MassAIBehaviourOnSwapBack;                         // 0x03DD (size: 0x1)
    FName AbilityDataId;                                                              // 0x03E0 (size: 0x8)
    FGameplayTag MontageTag;                                                          // 0x03E8 (size: 0x8)
    TArray<class UAnimMontage*> MontageVariations;                                    // 0x03F0 (size: 0x10)
    class UAnimMontage* Montage;                                                      // 0x0400 (size: 0x8)
    TMap<class TSoftClassPtr<AWrestlerCharacterBase>, class UAnimMontage*> MontageSet; // 0x0408 (size: 0x50)
    uint8 EndAbilityOnMontageOutcome;                                                 // 0x0458 (size: 0x1)
    class UWrestlerControlCue* CancelControlCue;                                      // 0x0460 (size: 0x8)
    TMap<class FGameplayTag, class FWrestlerGameplayEffectContainer> EffectContainerMap; // 0x0468 (size: 0x50)
    FGameplayTagContainer CancelAbilitiesAtTheEndWithTag;                             // 0x04B8 (size: 0x20)
    FGameplayTagContainer StartAbilitiesWithTag;                                      // 0x04D8 (size: 0x20)
    FGameplayTagContainer StartAbilitiesAtTheEndWithTag;                              // 0x04F8 (size: 0x20)
    TSoftClassPtr<AGameplayAbilityTargetActor> PassiveTargetActorType;                // 0x0518 (size: 0x28)
    FGameplayTagContainer CancelledByAbilitiesWithTag;                                // 0x0540 (size: 0x20)
    bool bIsAlwaysPassive;                                                            // 0x0560 (size: 0x1)
    TArray<FGameplayAttribute> CancelAbilityOnAttributesLessOrEqualToZero;            // 0x0568 (size: 0x10)
    TArray<FGameplayAttribute> CancelAbilityOnAttributesDecreased;                    // 0x0578 (size: 0x10)
    class UWrestlerAbilityConfigDataAsset* WrestlerAbilityConfigDataAsset;            // 0x0630 (size: 0x8)
    int32 tier;                                                                       // 0x0638 (size: 0x4)
    int32 MinTier;                                                                    // 0x063C (size: 0x4)
    int32 MaxTier;                                                                    // 0x0640 (size: 0x4)
    bool bActivateAbilityOnGranted;                                                   // 0x0644 (size: 0x1)

    void WrestlerCancelAbilitiesWithTag(FGameplayTagContainer FGameplayTagContainer);
    void StartFearEmission(float InFearDuration, float InFearStrength);
    void SendGameplayEventToTargetData(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag EventTag, FGameplayEventData Payload);
    void RemoveTimeDilation();
    void OnCancelControlCue(float InElapsedTime);
    void OnAbilityMontageInterrupted(FGameplayTag EventTag, FGameplayEventData EventData);
    void OnAbilityMontageEventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    void OnAbilityMontageComplete(FGameplayTag EventTag, FGameplayEventData EventData);
    void OnAbilityMontageCancelled(FGameplayTag EventTag, FGameplayEventData EventData);
    void OnAbilityMontageBlendOut(FGameplayTag EventTag, FGameplayEventData EventData);
    void OnAbilityActivate(class UGameplayAbility* InActivatedAbility);
    FWrestlerGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const FWrestlerGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel);
    FWrestlerGameplayEffectContainerSpec MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel);
    void MakeAudioCueParamsFromHitArrayAndExecute(const TArray<FHitResult> HitResult, float Magnitude, FGameplayTag GameplayCueTag);
    FGameplayCueParameters MakeAudioCueParamsFromHit(const FHitResult& HitResult, float Magnitude);
    bool K2_CanEndAbility(const FGameplayAbilitySpecHandle InHandle, FGameplayAbilityActorInfo InActorInfo);
    bool HasPassiveTargetData();
    class AActor* GetTargetActor(const bool bGetSoftTarget);
    class UWrestlerRangedWeaponInstance* GetRangedWeaponInstance();
    FWrestlerPlayMontage GetPlayMontageFromSet(EWrestlerOutputPins& OutputPins, TMap<class TSubclassOf<AWrestlerCharacterBase>, class FWrestlerPlayMontage> InPlayMontageSet);
    FGameplayAbilityTargetDataHandle GetPassiveTargetData();
    class UAnimMontage* GetMontageFromSet(EWrestlerOutputPins& OutPins, TMap<class TSubclassOf<AWrestlerCharacterBase>, class UAnimMontage*> InOptionalMontageSet);
    class UAnimMontage* GetMontageByTag(const FGameplayTag& InAbilityTag);
    class UAnimMontage* GetMontage();
    class UWrestlerWeaponInstance* GetMeleeWeaponInstance();
    FName GetHandSocketName(bool bRightHand);
    FVector GetHandLocation(bool bRightHand);
    FName GetFootSocketName(bool bRightFoot);
    FVector GetFootLocation(bool bRightFoot);
    class AWrestlerCharacterBase* GetAvatarActorAsWrestlerCharacterBase();
    class ACharacter* GetAvatarActorAsCharacter();
    FPrimaryAssetId GetAbilityAssetId();
    class UAbilitiesData* GetAbilitiesData();
    void ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    void ExecuteGameplayCueForAllHits(const FGameplayAbilityTargetDataHandle& TargetData, float Magnitude, FGameplayTag GameplayCueTag);
    void DamageNonGASActorFromHitResults(const TArray<FHitResult>& InHitResults, const float InEnvironmentDamage, const TSubclassOf<class UDamageType> InDamageTypeClass);
    void DamageNonGASActor(const FHitResult& InHitResult, const float InEnvironmentDamage, const TSubclassOf<class UDamageType> InDamageTypeClass);
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* BP_PlayAbilityMontage(FName InTaskInstanceName, FGameplayTagContainer InEventTags, float InRate, FName InStartSection, bool bInStopWhenAbilityEnds, bool bInDoOnce, float InAnimRootMotionTranslationScale);
    void ApplyTimeDilation(float InTimeDilation, bool bInDoNotAffectOwner);
    FActiveGameplayEffectHandle ApplyGameplayEffectSpecByDataTag(TSubclassOf<class UGameplayEffect> InEffect, FGameplayTag InDataTag, float InAmount);
    void ApplyExecutionDamage(class AActor* InTargetActor, float InDamageAmount, bool bInShouldExecute, FGameplayTag InDeathBehaviourTag, bool bNoDeath);
    TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const FWrestlerGameplayEffectContainerSpec& ContainerSpec);
    TArray<FActiveGameplayEffectHandle> ApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel);
}; // Size: 0x668

class UWrestlerGameplayAbilityData : public UPrimaryDataAsset
{
    TArray<class UClass*> GameplayCues;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UWrestlerGameplayAbilityStatusChaos : public UWrestlerGameplayAbility
{

    bool IsAnyoneAwareOfMe();
    bool AmIAwareOfAnyone();
}; // Size: 0x668

class UWrestlerGameplayAbilitySystemSettings : public UHeraSettings
{
    TArray<TSoftObjectPtr<UWrestlerDefaultAbilities>> AbilitiesDataAssetsToPreLoad;   // 0x0038 (size: 0x10)
    FGameplayTag InDialogueTag;                                                       // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerGameplayAbility_ArachnesKiss : public UWrestlerGameplayAbility
{
    FGameplayTag EventTagTargetActivate;                                              // 0x0668 (size: 0x8)
    FGameplayTag EventTagInsectDeployment;                                            // 0x0670 (size: 0x8)
    FGameplayTag EventTagExplosionHit;                                                // 0x0678 (size: 0x8)
    FGameplayTag InfestationLoudness;                                                 // 0x0680 (size: 0x8)
    FGameplayTag ProximityTriggeringRadius;                                           // 0x0688 (size: 0x8)
    FGameplayTag ExplosionRadius;                                                     // 0x0690 (size: 0x8)
    FGameplayTag InsectDeploymentReactionTag;                                         // 0x0698 (size: 0x8)
    FWrestlerAbilityMoveTo MoveToData;                                                // 0x06A0 (size: 0x88)
    bool bUseTargetEyeLocationForLookAt;                                              // 0x0728 (size: 0x1)
    bool bUsePitchForLookAt;                                                          // 0x0729 (size: 0x1)
    float LookAtStrength;                                                             // 0x072C (size: 0x4)
    TSubclassOf<class AWrestlerArachnesKissTrigger> DeadBodyTriggerActorClass;        // 0x0730 (size: 0x8)
    FName DeadBodyTriggerAttachSocketName;                                            // 0x0738 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0740 (size: 0x8)

    void OnTargetDeath(class AActor* InDeadActor);
    void OnPlayerLanded(const FHitResult& InHit);
    void OnMoveToTargetFinished(bool bInDestinationReached, bool bInTimedOut, FVector InFinalTargetLocation);
    void OnMoveToTargetCancelled(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void BP_InitializeDeadBodyTriggerActor(class AWrestlerArachnesKissTrigger* InTriggerActor);
}; // Size: 0x780

class UWrestlerGameplayAbility_CauldronOfBlood : public UWrestlerGameplayAbility
{
    class UAnimMontage* MontageToPlay;                                                // 0x0670 (size: 0x8)
    FName StartSection;                                                               // 0x0678 (size: 0x8)
    FName LoopSection;                                                                // 0x0680 (size: 0x8)
    FGameplayTag DamagePerSecond;                                                     // 0x0688 (size: 0x8)
    class UWrestlerControlCue* CueToWaitFor;                                          // 0x0690 (size: 0x8)
    FGameplayTag TimeForActivation;                                                   // 0x0698 (size: 0x8)
    FGameplayTag Radius;                                                              // 0x06A0 (size: 0x8)
    FGameplayTag Threshold;                                                           // 0x06A8 (size: 0x8)
    FGameplayTag WeightDistance;                                                      // 0x06B0 (size: 0x8)
    FGameplayTag WeightAngle;                                                         // 0x06B8 (size: 0x8)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x06C0 (size: 0x1)
    TEnumAsByte<ECollisionChannel> IsReachableChannel;                                // 0x06C1 (size: 0x1)
    bool bShouldBeReachable;                                                          // 0x06C2 (size: 0x1)
    FGameplayTargetDataFilter Filter;                                                 // 0x06C8 (size: 0x20)
    FGameplayTag EventTagTargetStartBoiling;                                          // 0x06E8 (size: 0x8)
    FGameplayTag EventTagOwnerStartBoiling;                                           // 0x06F0 (size: 0x8)
    FGameplayTag EventTagTargetEndBoiling;                                            // 0x06F8 (size: 0x8)
    FGameplayTag EventTagTargetAbilityEnded;                                          // 0x0700 (size: 0x8)
    FGameplayTag EventTagOwnerAbilityEnded;                                           // 0x0708 (size: 0x8)
    FGameplayTag EventTagTargetExplosionTarget;                                       // 0x0710 (size: 0x8)
    FGameplayTag EventTagTargetExplosionOwner;                                        // 0x0718 (size: 0x8)
    FGameplayTag EventTagTargetAfterDelay;                                            // 0x0720 (size: 0x8)
    FGameplayTag EventTagOthersTargetsOnExplosion;                                    // 0x0728 (size: 0x8)
    FGameplayTag MontageToPlayToTargetDelay;                                          // 0x0730 (size: 0x8)
    class UAnimMontage* ExplosionMontageToPlay;                                       // 0x0738 (size: 0x8)
    FGameplayTagContainer MontageTagWaitingFor;                                       // 0x0740 (size: 0x20)
    FGameplayTag ExplosionMontageTagToPlayOnTarget;                                   // 0x0760 (size: 0x8)
    FName TargetExplosionSection;                                                     // 0x0768 (size: 0x8)
    FGameplayTag UltimateRadius;                                                      // 0x0770 (size: 0x8)
    class AActor* Target;                                                             // 0x0778 (size: 0x8)

    void OnHoldInputFailed();
    void OnExplosionStateCompleted();
    void OnBoilingStateCompleted();
}; // Size: 0x780

class UWrestlerGameplayAbility_EarthShock : public UWrestlerGameplayAbility
{
    FGameplayTagContainer AbilityMontageEventTags;                                    // 0x0668 (size: 0x20)
    FName AbilityMontageStartSectionName;                                             // 0x0688 (size: 0x8)
    FGameplayTag EventTagExecute;                                                     // 0x0690 (size: 0x8)
    FGameplayTag EventTagHit;                                                         // 0x0698 (size: 0x8)
    FGameplayTag EarthShockRadius;                                                    // 0x06A0 (size: 0x8)
    TMap<FGameplayTag, float> HitImpulseParams;                                       // 0x06A8 (size: 0x50)
    FGameplayTagContainer EventsToSendToTargets;                                      // 0x06F8 (size: 0x20)
    float FearEmissionDuration;                                                       // 0x0718 (size: 0x4)
    float FearEmissionStrength;                                                       // 0x071C (size: 0x4)

    void ExecuteEarthShock();
    void ApplyHitOnTarget(const FGameplayEventData& InEventData);
}; // Size: 0x730

class UWrestlerGameplayAbility_EnemyAttack : public UWrestlerGameplayAbility
{
}; // Size: 0x668

class UWrestlerGameplayAbility_EnemyAttackSelector : public UWrestlerGameplayAbility
{
    TArray<TSoftClassPtr<UWrestlerGameplayAbility>> AttackAbilities;                  // 0x0668 (size: 0x10)
    float RandomWeight;                                                               // 0x0678 (size: 0x4)
    TArray<TSoftClassPtr<UWrestlerGameplayAbility>> WeighedAttackAbilities;           // 0x0680 (size: 0x10)

}; // Size: 0x690

class UWrestlerGameplayAbility_EnemyAwarenessReaction : public UWrestlerGameplayAbility
{
}; // Size: 0x668

class UWrestlerGameplayAbility_EnemyClimb : public UWrestlerGameplayAbility
{
    FVector ClimbStartLocation;                                                       // 0x0668 (size: 0x18)
    class UAnimMontage* ClimbMontage;                                                 // 0x0680 (size: 0x8)
    class UAnimMontage* VaultMontage;                                                 // 0x0688 (size: 0x8)
    class ACharacter* OwningCharacter;                                                // 0x0690 (size: 0x8)
    FVector StartPosition;                                                            // 0x0698 (size: 0x18)
    FVector EndPosition;                                                              // 0x06B0 (size: 0x18)

    void StartWallClimb();
    void StartVault();
    void PerformWallClimbCheck();
    void MoveToWallClimbStart();
    void EndVault(FGameplayTag InEventTag, FGameplayEventData InEventData);
}; // Size: 0x6C8

class UWrestlerGameplayAbility_Feed : public UWrestlerGameplayAbility
{
    float JumpThreshold;                                                              // 0x0668 (size: 0x4)
    class UWrestlerMoveToDataAsset* MoveToData;                                       // 0x0670 (size: 0x8)
    class UWrestlerMoveToDataAsset* JumpMoveToData;                                   // 0x0678 (size: 0x8)
    FVector FeedTargetLocationWithOffset;                                             // 0x0680 (size: 0x18)
    class AActor* FeedTarget;                                                         // 0x0698 (size: 0x8)
    bool bRechargeBlood;                                                              // 0x06A0 (size: 0x1)

    bool ShouldJumpMoveTo();
    bool IsTargetInMoveToRange(class AActor* InTarget);
    bool IsTargetInJumpMoveToRange(class AActor* InTarget);
    FVector GetFeedTargetLocationWithOffset();
    bool CalculateTargetOffsetPosition(const float InMaxTraceRadius, const float InDesiredWallOffset, const float InMaxDisplacement, const float InTraceCapsuleRadius, const float InTraceCapsuleHalfHeight, const bool bInConsiderNavmesh, const bool bInDrawDebug);
}; // Size: 0x6A8

class UWrestlerGameplayAbility_FireInTheBlood : public UWrestlerGameplayAbility
{
    class UAnimMontage* MontageToPlay;                                                // 0x0668 (size: 0x8)
    FGameplayTagContainer MontageTagWaitingFor;                                       // 0x0670 (size: 0x20)
    FName StartSection;                                                               // 0x0690 (size: 0x8)
    FGameplayTag DecoratorEvent;                                                      // 0x0698 (size: 0x8)
    FName ObjectProfile;                                                              // 0x06A0 (size: 0x8)
    float Lifetime;                                                                   // 0x06A8 (size: 0x4)
    float EnlargeTime;                                                                // 0x06AC (size: 0x4)
    float Radius;                                                                     // 0x06B0 (size: 0x4)
    FGameplayTag EventTagTargetOverlappedActor;                                       // 0x06B4 (size: 0x8)
    FGameplayTag EventTagTargetOverlappedActorEndAbility;                             // 0x06BC (size: 0x8)
    TArray<class AActor*> OverlappedActors;                                           // 0x06C8 (size: 0x10)

    void OnOverlap(class AActor* OtherActor);
    void OnLifeTimeExpired();
    void OnDeployCompleted();
}; // Size: 0x6D8

class UWrestlerGameplayAbility_FistOfCaine : public UWrestlerGameplayAbility
{
    bool bNeedToHoldDownChargeButton;                                                 // 0x0668 (size: 0x1)
    class UWrestlerControlCue* ControlCueWaitFor;                                     // 0x0670 (size: 0x8)
    class UWrestlerControlCue* CancelChargeControlCue;                                // 0x0678 (size: 0x8)
    class UAnimMontage* UltimateAbilityMontage;                                       // 0x0680 (size: 0x8)
    FGameplayTag ChargeDurationToSuccess;                                             // 0x0688 (size: 0x8)
    FGameplayTag EventTagChargeEnded;                                                 // 0x0690 (size: 0x8)
    FGameplayTag EventTagLunge;                                                       // 0x0698 (size: 0x8)
    FGameplayTag EventTagLungeFinish;                                                 // 0x06A0 (size: 0x8)
    FGameplayTag EventTagHitTarget;                                                   // 0x06A8 (size: 0x8)
    FGameplayTag EventTagReplenishBloodUltimate;                                      // 0x06B0 (size: 0x8)
    FGameplayTag EventTagReplenishBloodActivate;                                      // 0x06B8 (size: 0x8)
    FGameplayTag AttackRange;                                                         // 0x06C0 (size: 0x8)
    FGameplayTag AttackDuration;                                                      // 0x06C8 (size: 0x8)
    FGameplayTag ImpulseTag;                                                          // 0x06D0 (size: 0x8)
    FGameplayTag UltimateHitReactionTag;                                              // 0x06D8 (size: 0x8)
    FGameplayTagContainer OwnerGameplayCuesWhenChargeSuccess;                         // 0x06E0 (size: 0x20)
    FGameplayTagContainer OwnerGameplayCuesWhenHit;                                   // 0x0700 (size: 0x20)
    float TargetingThresholdAngle;                                                    // 0x0720 (size: 0x4)
    float TargetingWeightDistance;                                                    // 0x0724 (size: 0x4)
    float TargetingWeightAngle;                                                       // 0x0728 (size: 0x4)
    FGameplayTargetDataFilter TargetingFilter;                                        // 0x0730 (size: 0x20)
    FGameplayTagContainer AbilityMontageEventTags;                                    // 0x0750 (size: 0x20)
    FGameplayTag AbilityMontageStartLungeEventTag;                                    // 0x0770 (size: 0x8)
    FGameplayTag AbilityMontageHitEventTag;                                           // 0x0778 (size: 0x8)
    FName ChargeMontageStartSectionName;                                              // 0x0780 (size: 0x8)
    FName AttackMontageStartSectionName;                                              // 0x0788 (size: 0x8)
    FWrestlerAbilityMoveTo MoveToData;                                                // 0x0790 (size: 0x88)
    TMap<FGameplayTag, float> HitImpulseParams;                                       // 0x0818 (size: 0x50)
    float HitFreezeDelay;                                                             // 0x0868 (size: 0x4)
    float HitFreezeTimeDilation;                                                      // 0x086C (size: 0x4)
    float HitFreezeDuration;                                                          // 0x0870 (size: 0x4)
    float FearEmissionDuration;                                                       // 0x0874 (size: 0x4)
    float FearEmissionStrength;                                                       // 0x0878 (size: 0x4)
    class AActor* AttackTarget;                                                       // 0x0880 (size: 0x8)
    TSet<AActor*> HitTargets;                                                         // 0x08C8 (size: 0x50)

    void StartLunge();
    void RestoreCollisionWithPawns();
    void RemoveCollisionWithPawns();
    void OnTargetingFinished(class AActor* InTarget);
    void OnLungeMoveToTargetFinished(bool bInDestinationReached, bool bInTimedOut, FVector InFinalTargetLocation);
    void OnLungeHit(FGameplayEventData InEventData);
    void OnLungeFinished();
    void OnChargeSuccess();
    void OnChargeFailed();
    void OnCancelChargeInput(float InWaitingTime);
}; // Size: 0x918

class UWrestlerGameplayAbility_HitTarget : public UWrestlerGameplayAbility
{
    class UWrestlerAbilityHitData* StrikeDamageData;                                  // 0x0668 (size: 0x8)
    bool bIsHitFreezeDisabled;                                                        // 0x0670 (size: 0x1)
    bool bIsHitAppliedFromBluePrint;                                                  // 0x0671 (size: 0x1)

    void HitTarget(const FGameplayTag& InEventTag, const FGameplayEventData& InEventData);
    void DoExecuteGameplayCueForAllHits(const FGameplayEventData& InEventData, const float InAudioMagnitude);
    void BP_OnHitTarget(const FGameplayTag& InEventTag, const FGameplayEventData& InEventData);
    void ApplyHit(const FGameplayTag& InEventTag, const FGameplayEventData& InEventData, const float InAudioMagnitude);
}; // Size: 0x678

class UWrestlerGameplayAbility_Hold : public UWrestlerGameplayAbility
{
    FWrestlerHoldAbilityTargetingUpdateData TargetingParameters;                      // 0x0668 (size: 0x1C)
    class UWrestlerAbilityTask_WaitTargetDataUsingActor* TargetingTask;               // 0x0690 (size: 0x8)
    TSubclassOf<class AWrestlerGameplayAbilityTargetActor_TelekinesisTrajectory> TargetActorClass; // 0x0698 (size: 0x8)
    TWeakObjectPtr<class AWrestlerGameplayAbilityTargetActor_TelekinesisTrajectory> TargetActor; // 0x06A0 (size: 0x8)

    void WakeHeldPhysicsBody(class AActor* InHeldActor);
    void StopTargeting();
    void StartTargeting();
    void OnValidTargetData(const FGameplayAbilityTargetDataHandle& Data);
    FGameplayAbilityTargetDataHandle MakeThrowTargetData();
}; // Size: 0x6C0

class UWrestlerGameplayAbility_LightningStrike : public UWrestlerGameplayAbility
{
    int32 TestAbilityLevel;                                                           // 0x0668 (size: 0x4)
    float FearDuration;                                                               // 0x066C (size: 0x4)
    float FearStrength;                                                               // 0x0670 (size: 0x4)
    class UWrestlerDataAsset_LightningStrike_LevelConfig* LevelConfig;                // 0x0678 (size: 0x8)
    FGameplayTag LeftStrikeTag;                                                       // 0x0680 (size: 0x8)
    FGameplayTag RightStrikeTag;                                                      // 0x0688 (size: 0x8)
    FGameplayTag LeftFlinchReactionEventTag;                                          // 0x0690 (size: 0x8)
    FGameplayTag RightFlinchReactionEventTag;                                         // 0x0698 (size: 0x8)
    FWrestlerAbilityMoveTo MoveToData;                                                // 0x06A0 (size: 0x88)
    FWrestlerAbilityMoveTo JumpToData;                                                // 0x0728 (size: 0x88)
    class UWrestlerTargetAssistDataAsset* TargetAssistData;                           // 0x07B0 (size: 0x8)
    class UWrestlerControlCue* TriggerReleaseCueToWaitFor;                            // 0x07B8 (size: 0x8)
    class UWrestlerControlCue* CancelCueToWaitFor;                                    // 0x07C0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> DamageEffect;                                  // 0x07C8 (size: 0x8)
    FGameplayTag DamageDataTag;                                                       // 0x07D0 (size: 0x8)
    FGameplayTag StunDataTag;                                                         // 0x07D8 (size: 0x8)
    TSubclassOf<class UGameplayEffect> DisableMoveEffect;                             // 0x07E0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> MasqueradeEffect;                              // 0x07E8 (size: 0x8)
    TSubclassOf<class UGameplayEffect> ChargeEffect;                                  // 0x07F0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> MoveToEffect;                                  // 0x07F8 (size: 0x8)
    FGameplayAttribute HealthAttribute;                                               // 0x0800 (size: 0x38)
    FGameplayAbilityTargetData TargetData;                                            // 0x0868 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0870 (size: 0x8)
    FGameplayAbilityTargetDataHandle TargetDataHandle;                                // 0x0878 (size: 0x28)
    class UWrestlerAbilityTask_TargetAssistAndConfirm* TargetAssistAndConfirm;        // 0x08A0 (size: 0x8)
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWait;        // 0x08A8 (size: 0x8)
    class UAbilityTask_WaitAttributeChange* HealthChangeTask;                         // 0x08B0 (size: 0x8)
    FActiveGameplayEffectHandle ChargeEffectHandle;                                   // 0x08B8 (size: 0x8)
    FActiveGameplayEffectHandle MoveToEffectHandle;                                   // 0x08C0 (size: 0x8)

    void OnTriggerRelease(float InElapsedTime);
    void OnTargetDataReady(FGameplayAbilityTargetDataHandle& InTargetDataHandle);
    void OnPlayerHealthChange();
    void OnMoveToTargetComplete(bool bReachedDestination, bool bHasTimedOut, FVector InTargetLocation);
    void OnMoveToTargetCancel(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void OnMontageEventReceived(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void OnMontageComplete(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void OnCancelCueProcess(float InElapsedTime);
    void OnAbilityCancelled();
    void DoEndAbility();
}; // Size: 0x8C8

class UWrestlerGameplayAbility_LightningStrike_Alt : public UWrestlerGameplayAbility
{
    int32 TestAbilityLevel;                                                           // 0x0668 (size: 0x4)
    class UWrestlerDataAsset_LightningStrike_LevelConfig* LevelConfig;                // 0x0670 (size: 0x8)
    FGameplayTag LeftStrikeTag;                                                       // 0x0678 (size: 0x8)
    FGameplayTag RightStrikeTag;                                                      // 0x0680 (size: 0x8)
    FGameplayTag LeftFlinchReactionEventTag;                                          // 0x0688 (size: 0x8)
    FGameplayTag RightFlinchReactionEventTag;                                         // 0x0690 (size: 0x8)
    FWrestlerAbilityMoveTo MoveToData;                                                // 0x0698 (size: 0x88)
    FWrestlerAbilityMoveTo JumpToData;                                                // 0x0720 (size: 0x88)
    class UWrestlerTargetAssistDataAsset* TargetAssistData;                           // 0x07A8 (size: 0x8)
    class UCurveFloat* CameraYawCurve;                                                // 0x07B0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> DamageEffect;                                  // 0x07B8 (size: 0x8)
    FGameplayTag DamageDataTag;                                                       // 0x07C0 (size: 0x8)
    FGameplayTag StunDataTag;                                                         // 0x07C8 (size: 0x8)
    TSubclassOf<class UGameplayEffect> DisableMoveEffect;                             // 0x07D0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> MasqueradeEffect;                              // 0x07D8 (size: 0x8)
    TSubclassOf<class UGameplayEffect> ChargeEffect;                                  // 0x07E0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> MoveToEffect;                                  // 0x07E8 (size: 0x8)
    FGameplayAttribute HealthAttribute;                                               // 0x07F0 (size: 0x38)
    FGameplayAbilityTargetData TargetData;                                            // 0x0860 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0868 (size: 0x8)
    FGameplayAbilityTargetDataHandle TargetDataHandle;                                // 0x0870 (size: 0x28)
    class UWrestlerAbilityTask_TargetLockOn* TargetLockOnTask;                        // 0x0898 (size: 0x8)
    class UWrestlerAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWait;        // 0x08A0 (size: 0x8)
    FActiveGameplayEffectHandle ChargeEffectHandle;                                   // 0x08A8 (size: 0x8)
    FActiveGameplayEffectHandle MoveToEffectHandle;                                   // 0x08B0 (size: 0x8)
    FTimerHandle TargetTimeoutHandle;                                                 // 0x08B8 (size: 0x8)
    class UWrestlerAbilityTask_AimAssist* AimAssistTask;                              // 0x08C0 (size: 0x8)

    void OnTargetTimeout();
    void OnTargetDataReady(FGameplayAbilityTargetDataHandle& InTargetDataHandle);
    void OnMoveToTargetComplete(bool bReachedDestination, bool bHasTimedOut, FVector InTargetLocation);
    void OnMoveToTargetCancel(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void OnMontageEventReceived(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void OnMontageComplete(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void DoEndAbility();
}; // Size: 0x8C8

class UWrestlerGameplayAbility_Mesmerize : public UWrestlerGameplayAbility
{
    class UWrestlerAbilityTargetActorData_SphereTrace* SphereTraceTargetData;         // 0x0668 (size: 0x8)
    class UWrestlerControlCue* TriggerPressCueToWaitFor;                              // 0x0670 (size: 0x8)
    class UWrestlerControlCue* TriggerReleaseCueToWaitFor;                            // 0x0678 (size: 0x8)
    class UWrestlerControlCue* SkillCancelCueToWaitFor;                               // 0x0680 (size: 0x8)
    TSubclassOf<class UGameplayEffect> EffectToApplyOnTarget;                         // 0x0688 (size: 0x8)
    FGameplayTag CueToApplyOnOwner;                                                   // 0x0690 (size: 0x8)
    class AActor* CurrentTargetActor;                                                 // 0x06F0 (size: 0x8)

    void OnTriggerRelease(float InWaitingTime);
    void OnTriggerPress(float InWaitingTime);
    void OnTranceCancel(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void OnTargetDataReady(const FGameplayAbilityTargetDataHandle& InData);
    void OnSkillCancel(float InWaitingTime);
}; // Size: 0x708

class UWrestlerGameplayAbility_Passive : public UWrestlerGameplayAbility
{
    TSubclassOf<class UGameplayEffect> PassiveEffect;                                 // 0x0668 (size: 0x8)
    bool bEndInstantly;                                                               // 0x0670 (size: 0x1)

    FActiveGameplayEffectHandle GetPassiveEffectHandle();
    float GetPassiveEffectDuration();
    void ApplyPassiveEffect();
}; // Size: 0x690

class UWrestlerGameplayAbility_PlayerPunch : public UWrestlerGameplayAbility
{
    FGameplayTag FistHitStartEventTag;                                                // 0x0668 (size: 0x8)
    FGameplayTag FistHitEndEventTag;                                                  // 0x0670 (size: 0x8)
    class AActor* PunchTarget;                                                        // 0x0678 (size: 0x8)
    FName LeftName;                                                                   // 0x0680 (size: 0x8)
    FName RightName;                                                                  // 0x0688 (size: 0x8)

    FHitResult TraceEnvironmentHit(float InForwardDistance, float InHeightOffset, float InRadius, TEnumAsByte<EDrawDebugTrace::Type> InDrawDebugType);
    TArray<FHitResult> TraceEnemyHits(float InForwardDistance, float InHeightOffset, float InTraceRadius, TEnumAsByte<EDrawDebugTrace::Type> InDrawDebugType);
    void OnFistHitStart(FGameplayEventData Payload);
    void OnFistHitEnd(FGameplayEventData Payload);
    TArray<FGameplayEventData> GetValidEventData(bool InbMultiHit, FHitResult InEnvironmentHitResult, TArray<FHitResult> InEnemyHitResults, FGameplayTag InHitTag, bool InbRightPunch, FName InTraceOriginSocketName, float InTraceDistance, bool bInDebugDraw);
    class AActor* GetPunchTarget();
    void AlignToTarget(float InTargetHeightOffset, float InAlphaStrength);
}; // Size: 0x690

class UWrestlerGameplayAbility_PsychicProjection : public UWrestlerGameplayAbility
{
    TArray<class AActor*> Targets;                                                    // 0x06A8 (size: 0x10)
    class UAnimMontage* MontageToPlay;                                                // 0x06B8 (size: 0x8)
    FGameplayTagContainer MontageTagWaitingFor;                                       // 0x06C0 (size: 0x20)
    FName StartSection;                                                               // 0x06E0 (size: 0x8)
    FGameplayTag GameplayCue;                                                         // 0x06E8 (size: 0x8)
    FName ObjectProfile;                                                              // 0x06F0 (size: 0x8)
    float Lifetime;                                                                   // 0x06F8 (size: 0x4)
    TSubclassOf<class UGameplayEffect> AttributeBase;                                 // 0x0700 (size: 0x8)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x0708 (size: 0x1)
    float Length;                                                                     // 0x070C (size: 0x4)
    FGameplayTargetDataFilter Filter;                                                 // 0x0710 (size: 0x20)
    TSubclassOf<class AGameplayAbilityWorldReticle> Reticle;                          // 0x0730 (size: 0x8)
    class UWrestlerControlCue* CueToWaitFor;                                          // 0x0738 (size: 0x8)
    float Radius;                                                                     // 0x0740 (size: 0x4)
    float Delay;                                                                      // 0x0744 (size: 0x4)
    TEnumAsByte<ECollisionChannel> AiQueryChannel;                                    // 0x0748 (size: 0x1)
    FGameplayTag EventTagTargetObtained;                                              // 0x074C (size: 0x8)
    FGameplayTag EventTagTargetEndAbility;                                            // 0x0754 (size: 0x8)

    void OnTargetObtained(FVector InTarget);
    void OnTargetingFailed();
    void OnLifeTimeExpired();
    void OnEnemyTargetsObtained(TArray<FHitResult>& OutTargets);
    void OnEnemyTargetingFailed();
    void OnDeployCompleted();
    void OnDecoySpawned(class AActor* Actor);
    void OnDecoyDied();
    void OnControlCueProcess(float WaitingTime);
}; // Size: 0x760

class UWrestlerGameplayAbility_RangedWeapon : public UWrestlerGameplayAbility
{

    void SpawnProjectile(const FRangedProjectileParams& InParams);
    class UWrestlerRangedWeaponInstance* GetWeaponInstance();
    FTransform GetWeaponAimTransform();
    int32 GetShotsPerBurst();
    float GetShotFireRate();
    int32 GetProjectilesPerShot();
    float GetProjectileSpeed();
    FRotator GetProjectileRotation(const FVector& TargetLocation);
    FVector GetMuzzleLocation();
    float GetMaxInaccuracyDegreeAngle(const FVector& TargetLocation);
    float GetMaxDistance();
    float GetDistanceToTarget(const FVector& TargetLocation);
    float GetDamagePerProjectile();
}; // Size: 0x668

class UWrestlerGameplayAbility_RapidReflexes : public UWrestlerGameplayAbility
{
    class UWrestlerAbilityTask_TimeDilation* WrestlerAbilityTask_TimeDilation;        // 0x0668 (size: 0x8)
    float TimeDilatation;                                                             // 0x0670 (size: 0x4)
    float Duration;                                                                   // 0x0674 (size: 0x4)
    float Radius;                                                                     // 0x0678 (size: 0x4)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x067C (size: 0x1)
    FWrestlerSelectByTagGameplayTargetDataFilter Filter;                              // 0x0680 (size: 0x40)
    FGameplayTag GameplayCueTag;                                                      // 0x06C0 (size: 0x8)

    void OnDurationExpired();
}; // Size: 0x6C8

class UWrestlerGameplayAbility_ReplenishBloodOnDamage : public UWrestlerGameplayAbility
{
    TSet<TSubclassOf<UGameplayEffect>> DamageEffectsToIgnore;                         // 0x0668 (size: 0x50)
    FGameplayTagContainer CancelAbilityWhenTagReceived;                               // 0x06B8 (size: 0x20)
    FGameplayTag EventTagOnDamage;                                                    // 0x06D8 (size: 0x8)

    void OnDamageApplied(float InDamage);
}; // Size: 0x730

class UWrestlerGameplayAbility_SoaringLeap : public UWrestlerGameplayAbility
{
    class UWAD_SoaringLeap_LevelConfig* TierConfigData;                               // 0x0698 (size: 0x8)
    FGameplayTag FallingTag;                                                          // 0x06A0 (size: 0x8)
    TSubclassOf<class AGameplayAbilityWorldReticle> ReticleClass;                     // 0x06A8 (size: 0x8)
    FCollisionProfileName TargetingCollisionProfile;                                  // 0x06B0 (size: 0x8)
    TSubclassOf<class UGameplayEffect> MasqueradeEffect;                              // 0x06B8 (size: 0x8)
    class UAbilityTask_ApplyRootMotionJumpForce* JumpTask;                            // 0x06C0 (size: 0x8)
    class UWrestlerAbilityTask_TargetLockOn* TargetLockOnTask;                        // 0x06C8 (size: 0x8)
    class UWrestlerAbilityTask_MoveToActor* MoveToTask;                               // 0x06D0 (size: 0x8)
    FGameplayAbilityTargetDataHandle TargetData;                                      // 0x06D8 (size: 0x28)
    FTimerHandle JumpTimerHandle;                                                     // 0x0700 (size: 0x8)
    FTimerHandle PhaseTimerHandle;                                                    // 0x0708 (size: 0x8)

    void WaitForLanding();
    void OnTargetingPhaseTimeout();
    void OnTargetDataReady(FGameplayAbilityTargetDataHandle& InTargetDataHandle);
    void OnMoveToFinished(bool bInDestinationReached, bool bInTimedOut, FVector InFinalTargetLocation);
    void OnMoveToCancelled(FGameplayTag InEventTag, FGameplayEventData InEventData);
    void OnLanded();
    void OnJumpPhaseFinished();
}; // Size: 0x710

class UWrestlerGameplayAbility_Telekinesis : public UWrestlerGameplayAbility
{
    float TargetingRange;                                                             // 0x0668 (size: 0x4)
    float TargetingMaxAngle;                                                          // 0x066C (size: 0x4)
    FName CameraSocketName;                                                           // 0x0670 (size: 0x8)
    TWeakObjectPtr<class AActor> Target;                                              // 0x0678 (size: 0x8)
    class UWrestlerAbilityTask_WaitTargetDataUsingActor* TargetingTask;               // 0x0680 (size: 0x8)
    TSubclassOf<class AWrestlerGameplayAbilityTargetActor_Telekinesis> TargetActorClass; // 0x0688 (size: 0x8)
    TWeakObjectPtr<class AWrestlerGameplayAbilityTargetActor_Telekinesis> TargetActor; // 0x0690 (size: 0x8)

    void StopTargeting();
    void StartTargeting();
    void OnValidData(const FGameplayAbilityTargetDataHandle& InData);
}; // Size: 0x698

class UWrestlerGameplayAbility_YsabellaStagePresence : public UWrestlerGameplayAbility
{

    void Return();
}; // Size: 0x668

class UWrestlerGameplayCueManager : public UGameplayCueManager
{
}; // Size: 0x2C0

class UWrestlerGameplayCueNotify_Static : public UGameplayCueNotify_Static
{

    void WhileActiveAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
    void OnRemoveAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
    void OnExecuteAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
    void OnActiveAudio(const class AWrestlerCharacterBase* Character, class UHeraAudioCharacterComponent* AudioComponent, const FGameplayCueParameters& Parameters);
    bool CueApplyImpulseToTarget(class AActor* InTarget, const FGameplayCueParameters& Parameters);
    void ApplyImpulseToTarget(class AActor* InActor, FGameplayCueParameters InGameplayCueParams, const float InBaseImpulseForce);
}; // Size: 0x40

class UWrestlerGameplayEffect : public UGameplayEffect
{
}; // Size: 0xA70

class UWrestlerGameplaySettings : public UWrestlerSettingsBase
{
    FGameplayTag InCombatTag;                                                         // 0x0048 (size: 0x8)
    TMap<class FName, class TSoftObjectPtr<UWrestlerPlayerMovementDataAsset>> PlayerMovementDefaults; // 0x0050 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerEnemyConfigDataAsset>> EnemyConfigs; // 0x00A0 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerDataAsset_ModularEnemies>> EnemiesToSpawn; // 0x00F0 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerRangedProjectilePoolConfig>> RangedProjectilePoolConfig; // 0x0140 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UWrestlerActorOcclusionConfig>> ActorOcclusionConfigs; // 0x0190 (size: 0x50)
    TMap<class TSoftClassPtr<AWrestlerCharacterBase>, class TSoftObjectPtr<UWrestlerDefaultAbilities>> DefaultAbilitiesConfig; // 0x01E0 (size: 0x50)
    TMap<class TSoftClassPtr<AWrestlerCharacterBase>, class TSoftObjectPtr<UWrestlerDefaultAbilities>> TestDefaultAbilitiesConfig; // 0x0230 (size: 0x50)
    TMap<class EPlayerClan, class TSoftObjectPtr<UWrestlerPlayerClan>> PlayerClans;   // 0x0280 (size: 0x50)
    TSoftClassPtr<AWrestlerCharacter> NewTraversalCharacter;                          // 0x02D0 (size: 0x28)
    TMap<class FName, class UWrestlerConfigDataAsset_Test*> TestAssetInstances;       // 0x02F8 (size: 0x50)
    TMap<class FName, class UWrestlerPlayerMovementDataAsset*> PlayerMovementDefaultsInstances; // 0x0348 (size: 0x50)
    TMap<class FName, class UWrestlerEnemyConfigDataAsset*> EnemyConfigInstances;     // 0x0398 (size: 0x50)
    TMap<class FName, class UWrestlerActorOcclusionConfig*> ActorOcclusionConfigInstances; // 0x03E8 (size: 0x50)
    TMap<class FName, class UWrestlerDataAsset_ModularEnemies*> EnemiesToSpawnInstances; // 0x0438 (size: 0x50)
    TMap<class FName, class UWrestlerRangedProjectilePoolConfig*> RangedProjectilePoolConfigInstances; // 0x0488 (size: 0x50)

    class UWrestlerRangedProjectilePoolConfig* GetRangedProjectilePoolConfig(const FName& InKey);
    class UWrestlerPlayerMovementDataAsset* GetPlayerMovementDefaults(const FName& InKey);
    TMap<class EPlayerClan, class TSoftObjectPtr<UWrestlerPlayerClan>> GetPlayerClans();
    TSubclassOf<class AWrestlerCharacter> GetNewTraversalCharacter();
    class UWrestlerDataAsset_ModularEnemies* GetModularEnemies(const FName& InKey);
    class UWrestlerEnemyConfigDataAsset* GetEnemyConfig(const FName& InKey);
    class UWrestlerDefaultAbilities* GetEnemyAbilitiesByName(const FName& InName);
    class UWrestlerDefaultAbilities* GetDefaultAbilities(const TSubclassOf<class AWrestlerCharacterBase>& InCharacter);
    class UWrestlerActorOcclusionConfig* GetActorOcclusionConfig(const FName& InName);
    class UWrestlerGameplaySettings* Get(const class UObject* InWorldContextObject);
}; // Size: 0x4D8

class UWrestlerGlobal : public UHeraGlobal
{

    bool WorldIsFullyLoaded(const class UObject* WorldContextObject);
    bool WantsDebugMemReportsToLog();
    bool WantsDebugMemReportsToFile();
    bool WantsDebugMemReports();
    void SetUseCheckpointJumping(bool bInUseCheckpointJumping);
    void SetPlayerStartActor(const FSoftObjectPath& InPlayerStartActor);
    void SetCinematicsEnabled(bool InIsEnabled);
    void SetAutoCheckpointCycleTestIndex(int32 InNewIndex);
    void ResetAutoCheckpointCycleTestRepeatsLeft();
    bool IsUsingCheckpointJumping();
    bool IsShowDebugInfo();
    bool IsRunningAutoCheckpointCycleTest();
    bool IsExperimentalAutomataEditorEnabled();
    bool IsDebug();
    bool IsCinematicsEnabled();
    FGameplayTag GetWorldMapTag(class UWorld* InWorld);
    FSoftObjectPath GetWorldFromMapTag(const FGameplayTag& InMapTag);
    class UWorld* GetWorldFromEngine();
    class UHeraPropertyStorage* GetPropertySystem();
    FSoftObjectPath GetPlayerStartActor();
    TMap<class FGameplayTag, class FWrestlerMapInfo> GetMaps();
    class UInkSubsystem* GetInk();
    class AHeraHUD* GetHUD();
    class UGameInstance* GetGameInstance();
    int32 GetAutoCheckpointCycleTestRepeatsLeft();
    int32 GetAutoCheckpointCycleTestIndex();
    FString GetAutoCheckpointCycleTestCheckpoints();
    void DecrementAutoCheckpointCycleTestRepeatsLeft();
}; // Size: 0x28

class UWrestlerGlobalData : public UObject
{
    bool bIsDebug;                                                                    // 0x0028 (size: 0x1)
    bool bWantsDebugMemReportsToLog;                                                  // 0x0029 (size: 0x1)
    bool bWantsDebugMemReportsToFile;                                                 // 0x002A (size: 0x1)
    bool bIsShowDebugInfo;                                                            // 0x002B (size: 0x1)
    bool bIsCinematicsEnabled;                                                        // 0x002C (size: 0x1)
    bool bUseCheckpointJumping;                                                       // 0x002D (size: 0x1)
    bool bIsExperimentalAutomataEditorEnabled;                                        // 0x002E (size: 0x1)
    FSoftObjectPath PlayerStartActor;                                                 // 0x0030 (size: 0x20)

}; // Size: 0x68

class UWrestlerGraphicsBlueprintFunctionLibrary : public UWrestlerAbilityFunctionLibrary
{

    void SetUpscalePaniniD(float InValue);
    bool QueryRuntimeVirtualTextureVolumesAtLocation(const FVector& InWorldLocation, FLinearColor& OutParams, const class UObject* InWorldContextObject);
}; // Size: 0x28

class UWrestlerHUDWidget : public UHeraHUDWidget
{
    TArray<class AActor*> CrosshairActors;                                            // 0x02C8 (size: 0x10)

    void UpdateCrosshair();
    void ToggleAllSlotsOn(bool bInStatus);
    bool StopVideo();
    void OnInputMethodChanged(ECommonInputType InCurrentInputType);
    bool IsVideoPlaying();
}; // Size: 0x2D8

class UWrestlerHealthRegenExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UWrestlerHeightenedSensesClueComponent : public UActorComponent
{
    FWrestlerHeightenedSensesClueComponentOnAlphaUpdated OnAlphaUpdated;              // 0x00A8 (size: 0x10)
    void WrestlerClueTrailUpdateEvent(float alpha);
    FWrestlerHeightenedSensesClueComponentOnVisionBegin OnVisionBegin;                // 0x00B8 (size: 0x10)
    void WrestlerClueTrailEvent();
    FWrestlerHeightenedSensesClueComponentOnNiagaraSystemAttached OnNiagaraSystemAttached; // 0x00C8 (size: 0x10)
    void WrestlerClueTrailParticleSystemEvent(class UNiagaraComponent* AttachedSystem);
    FWrestlerHeightenedSensesClueComponentOnVisionEnd OnVisionEnd;                    // 0x00D8 (size: 0x10)
    void WrestlerClueTrailEvent();
    TArray<class UMeshComponent*> MeshComponentsToHideInTheRealWorld;                 // 0x0110 (size: 0x10)
    TArray<class UMeshComponent*> MeshComponentsToHideInHeightenedSenses;             // 0x0120 (size: 0x10)
    TArray<class UMeshComponent*> MeshComponentsToHighlight;                          // 0x0130 (size: 0x10)
    TArray<class UPrimitiveComponent*> PrimitiveComponentsToIncludeInSceneCapture;    // 0x0140 (size: 0x10)
    FGameplayTagContainer HeightenedSensesTypeTag;                                    // 0x0150 (size: 0x20)
    EWrestlerGrantedPointsType BloodResonanceType;                                    // 0x0170 (size: 0x1)
    EWrestlerMassBloodResonanceState BloodResonanceState;                             // 0x0171 (size: 0x1)
    class UMaterialInstanceDynamic* OverlayMaterial;                                  // 0x0178 (size: 0x8)
    float DefaultFadeInDuration;                                                      // 0x0180 (size: 0x4)
    float DefaultFadeOutDuration;                                                     // 0x0184 (size: 0x4)
    bool bUseCustomDepth;                                                             // 0x0188 (size: 0x1)
    uint32 CustomDepthStencilValue;                                                   // 0x018C (size: 0x4)
    TSoftObjectPtr<UWrestlerDataAsset_HeightenedSensesClue> ClueDataAsset;            // 0x0190 (size: 0x28)

    void StartFadeToAlpha(float InFadeDuration, float InAlpha);
    void SetUpComponentVisibility(TArray<class UMeshComponent*> InMeshComponentsToHideInTheRealWorld, TArray<class UMeshComponent*> InMeshComponentsToHideInHeightenedSenses, TArray<class UMeshComponent*> InMeshComponentsToHighlightInHeightenedSenses, TArray<class UPrimitiveComponent*> InPrimitiveComponentsToIncludeInSceneCapture);
    void SetOverlayMaterial(class UMaterialInstanceDynamic* InDynamicMaterial);
    void SetHeightenedSensesTypeTag(FGameplayTag InTypeTag);
    bool GetHeightenedSensesVisibility();
    TArray<class UMeshComponent*> GetComponentsToHighlight();
    float GetAlpha();
}; // Size: 0x1B8

class UWrestlerHeightenedSensesSceneCaptureComponent : public USceneCaptureComponent2D
{
}; // Size: 0xB60

class UWrestlerHidePropsProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerHighlightSubsystem : public UTickableWorldSubsystem
{
    TMap<class EWrestlerHighlightType, class FWrestlerHighlightVFXData> HighlightedEntities; // 0x0040 (size: 0x50)
    TArray<class UObject*> RegisteredInterfaceUsers;                                  // 0x0090 (size: 0x10)

    void SetHighlightEffectActor(EWrestlerHighlightType InHighlightType, class AWrestlerHighlightVFXActor* InActor);
    void OnMissionTypeChanged(EWrestlerPlayerMissionType CurrentMissionType);
    bool IsHighlightTypeActive(EWrestlerHighlightType InHighlightType);
    void GetMassParticleActors(EWrestlerHighlightType InHighlightType, TArray<class AActor*>& OutParticleActors);
    class AWrestlerHighlightVFXActor* GetHighlightEffectsActor(EWrestlerHighlightType InHighlightType);
}; // Size: 0xA8

class UWrestlerHighlightableHUDWidget : public UWrestlerHUDWidget
{
    FWrestlerHighlightableHUDWidgetOnHighlightBegin OnHighlightBegin;                 // 0x02D8 (size: 0x10)
    void WrestlerHUDHighlightDelegate();
    FWrestlerHighlightableHUDWidgetOnHighlightEnd OnHighlightEnd;                     // 0x02E8 (size: 0x10)
    void WrestlerHUDHighlightDelegate();

}; // Size: 0x2F8

class UWrestlerHubNavigationSystem : public UNavigationSystemV1
{
}; // Size: 0x1590

class UWrestlerIndicatorWidget : public UWrestlerBaseWidget
{
    TSubclassOf<class UUserWidget> IndicatorWidgetClass;                              // 0x02C8 (size: 0x8)
    TMap<class EWrestlerIndicatorType, class FWrestlerIndicatorTypeData> IndicatorTypeData; // 0x02D0 (size: 0x50)
    bool bShouldShowIfEnemyUIIsNotVisible;                                            // 0x0320 (size: 0x1)
    class UCanvasPanel* IndicatorsContainer;                                          // 0x0328 (size: 0x8)
    TMap<class AWrestlerEnemyCharacter*, class FWrestlerIndicatorData> EnemyStateIndicatorsInUse; // 0x0330 (size: 0x50)
    TMap<class AWrestlerEnemyCharacter*, class FWrestlerIndicatorData> EnemyStateIndicatorsToAdd; // 0x0380 (size: 0x50)
    TSet<AWrestlerEnemyCharacter*> EnemyStateIndicatorsToRemove;                      // 0x03D0 (size: 0x50)
    TMap<class AWrestlerEnemyCharacter*, class FWrestlerIndicatorData> EnemyAttackIndicatorsInUse; // 0x0420 (size: 0x50)
    TMap<class AWrestlerEnemyCharacter*, class FWrestlerIndicatorData> EnemyAttackIndicatorsToAdd; // 0x0470 (size: 0x50)
    TSet<AWrestlerEnemyCharacter*> EnemyAttackIndicatorsToRemove;                     // 0x04C0 (size: 0x50)
    TArray<class UWrestlerEnemyIndicatorWidget*> AvailableEnemyIndicators;            // 0x0510 (size: 0x10)
    TSet<TEnumAsByte<EWrestlerEnemyState>> ValidVisibileStates;                       // 0x0520 (size: 0x50)

    void OnEnemyCharacterDead(class AActor* InDeadActor);
    void NotifyStateChange(class AWrestlerEnemyCharacter* InEnemy, TEnumAsByte<EWrestlerEnemyState> InEnemyState);
    void NotifyAttack(class AWrestlerEnemyCharacter* Enemy);
}; // Size: 0x570

class UWrestlerInputRemappingWidget : public UCommonActivatableWidget
{
    class UGameSettingListEntrySetting_Input* ActionButton;                           // 0x0410 (size: 0x8)
    class UInputKeySelector* KeySelector_Primary;                                     // 0x0418 (size: 0x8)
    class UInputKeySelector* KeySelector_Secondary;                                   // 0x0420 (size: 0x8)
    class UWrestlerActionWidget* ActionWidget_Primary;                                // 0x0428 (size: 0x8)
    class UWrestlerActionWidget* ActionWidget_Secondary;                              // 0x0430 (size: 0x8)
    TMap<class FKey, class UInputAction*> MappedKeys;                                 // 0x0438 (size: 0x50)
    class UControlsDisplayData* DisplayData;                                          // 0x0488 (size: 0x8)
    ECommonInputType CurrentInputType;                                                // 0x0490 (size: 0x1)
    class UInputMappingContext* MappingContext;                                       // 0x0498 (size: 0x8)

    bool UnmapKey(const FKey& InKey);
    void Reset();
    void RemapKey(const FKey& InNewKey, bool bPrimary);
    void PopulateMappedKeys();
    bool IsKeyAvailable(const FKey& InKey, bool bInPrimary);
    bool IsIconForKeyValid(const FKey& Key);
    void InitializeKeySelectorText();
    FInputMappingData GetInitialMappingForEntry();
    class UInputAction* GetDisplayedActionByKey(const FKey& InKey);
    class UInputAction* GetActionByKey(const FKey& Key);
}; // Size: 0x4A0

class UWrestlerInputSettings : public UDeveloperSettingsBackedByCVars
{
    FWrestlerControllerSetupControl ControllerConfiguration;                          // 0x0038 (size: 0x74)
    FCoreData CoreData;                                                               // 0x00B0 (size: 0x10)

    class UWrestlerInputSettings* Get();
}; // Size: 0xC0

class UWrestlerInteractionAnimDataAsset : public UHeraDataAsset
{
    TMap<class FGameplayTag, class FInteractionAnimData> InteractionAnims;            // 0x0030 (size: 0x50)

    bool GetInteractionAnimData(FGameplayTag InTag, FInteractionAnimData& OutInteractionAnimData);
}; // Size: 0x80

class UWrestlerInteractionComponent : public UActorComponent
{
    EWrestlerInteractionInputType InputType;                                          // 0x00A0 (size: 0x1)
    float HoldTime;                                                                   // 0x00A4 (size: 0x4)
    FText Context;                                                                    // 0x00A8 (size: 0x18)
    bool bShowDistantMarker;                                                          // 0x00C0 (size: 0x1)
    bool bRestrictAngle;                                                              // 0x00C1 (size: 0x1)
    float AngleRestriction;                                                           // 0x00C4 (size: 0x4)
    bool bRestrictDistance;                                                           // 0x00C8 (size: 0x1)
    float DistanceRestriction;                                                        // 0x00CC (size: 0x4)
    bool bPadlocked;                                                                  // 0x00D0 (size: 0x1)
    TSoftObjectPtr<AActor> PadlockEnemyDetector;                                      // 0x00D8 (size: 0x28)
    FGameplayTag InteractionPointTag;                                                 // 0x0100 (size: 0x8)
    FGameplayTag AnimationTag;                                                        // 0x0108 (size: 0x8)
    FWrestlerInteractionComponentOnActiveInteractionDelegate OnActiveInteractionDelegate; // 0x0110 (size: 0x10)
    void WrestlerInteractionDelegate(class AActor* InInteractingActor);
    FWrestlerInteractionComponentOnEnd OnEnd;                                         // 0x0120 (size: 0x10)
    void WrestlerInteractionDelegate(class AActor* InInteractingActor);
    FWrestlerInteractionComponentOnPassiveInteractionDelegate OnPassiveInteractionDelegate; // 0x0130 (size: 0x10)
    void WrestlerInteractionDelegate(class AActor* InInteractingActor);
    FWrestlerInteractionComponentEndPassiveInteractionDelegate EndPassiveInteractionDelegate; // 0x0140 (size: 0x10)
    void WrestlerInteractionDelegate(class AActor* InInteractingActor);
    FWrestlerInteractionComponentOnInteractionEvent OnInteractionEvent;               // 0x0150 (size: 0x10)
    void WrestlerInteractionEventDelegate(class AActor* InInteractingActor, const FGameplayTag& InEventTag);
    FWrestlerInteractionComponentOnInteractionPadlockLocked OnInteractionPadlockLocked; // 0x0160 (size: 0x10)
    void WrestlerInteractionPadlockDelegate();
    FWrestlerInteractionComponentOnInteractionPadlockUnlocked OnInteractionPadlockUnlocked; // 0x0170 (size: 0x10)
    void WrestlerInteractionPadlockDelegate();
    TWeakObjectPtr<class UWrestlerInteractionPointComponent> InteractionPointComponent; // 0x0180 (size: 0x8)
    TMap<TWeakObjectPtr<AActor>, uint32> EnemyOverlapCounters;                        // 0x0188 (size: 0x50)

    void StartInteract(class AActor* InInteractingActor);
    void SetHidden(bool bInHidden);
    void SetBlocked(bool bInBlocked, FText InBlockContext);
    void ReceiveOnPassiveInteraction(class AActor* InInteractingActor);
    void ReceiveOnActiveInteraction(class AActor* InInteractingActor);
    void ReceiveEndPassiveInteraction(class AActor* InInteractingActor);
    void ReceiveEnd(class AActor* InInteractingActor);
    void PlayInteractionAnim(class AActor* InInteractingActor);
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void InteractionEvent(class AActor* InInteractingActor, const FGameplayTag& InEventTag);
    bool GetTransform(FTransform& OutTransform);
    FText GetInteractionContext();
    void EndInteract(class AActor* InInteractingActor);
    bool CanSee(class AActor* InInteractingActor);
    bool CanInteract(class AActor* InInteractingActor);
}; // Size: 0x1F8

class UWrestlerInteractionPointComponent : public USceneComponent
{
    FGameplayTag InteractionPointTag;                                                 // 0x02A0 (size: 0x8)

}; // Size: 0x2B0

class UWrestlerInteractionWidget : public UWrestlerBaseWidget
{

    void OnTargetUpdated(FWrestlerInteractionTarget InTarget, bool bInIsPrimaryTarget);
    void OnInteract();
    void OnHide();
}; // Size: 0x2C8

class UWrestlerInteractionWidgetComponent : public UWidgetComponent
{
    FVector2D ScaleDistanceRange;                                                     // 0x06E8 (size: 0x10)
    FVector2D ScaleMultiplierRange;                                                   // 0x06F8 (size: 0x10)
    FVector2D OpacityDistanceRange;                                                   // 0x0708 (size: 0x10)
    FVector2D OpacityMultiplierRange;                                                 // 0x0718 (size: 0x10)
    class AActor* OwningTarget;                                                       // 0x0728 (size: 0x8)
    class UUserWidget* CurrentWidget;                                                 // 0x0730 (size: 0x8)

}; // Size: 0x750

class UWrestlerInvestigateManager : public UWorldSubsystem
{

    bool IsInvestigatingStimulus(class AActor* InActor, const FAIStimulus& InStimulus);
    void Death(class AActor* InActor);
    void CompletedInvestigation(class AActor* InActor);
    void BindActorDelegates(class AActor* InActor);
    void AddActor(class AActor* InActor, const FAIStimulus& InStimulus);
}; // Size: 0xD0

class UWrestlerLanguageSelectorWidget : public UWrestlerMultipleOptionWidget
{
    class UHorizontalBox* Box;                                                        // 0x0380 (size: 0x8)
    FSlateFontInfo LanguageTextFont;                                                  // 0x0388 (size: 0x58)

    FString GetCurrentLanguageByIndex(int32 InIndex);
    void GenerateLanguageTextBlocks();
    void ClearLanguageTextBlocks();
}; // Size: 0x3E0

class UWrestlerLastBreathHealthAttributeSet : public UAttributeSet
{
    FGameplayAttributeData LastBreath;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

class UWrestlerLightActorComponent : public USceneComponent
{
    FWrestlerLightActorComponentOnEnabledChanged OnEnabledChanged;                    // 0x02A0 (size: 0x10)
    void WrestlerLightActorComponentEnabledChanged(class UWrestlerLightActorComponent* LightComponent, bool bIsEnabled);
    bool bEnabled;                                                                    // 0x02B0 (size: 0x1)
    bool bEnabledAffectsEmissive;                                                     // 0x02B1 (size: 0x1)
    FWrestlerLightActorComponentLightParameters OverridenLightParameters;             // 0x02B4 (size: 0x24)
    FWrestlerLightActorComponentEmissiveParameters OverridenEmissiveParameters;       // 0x02D8 (size: 0x18)
    FWrestlerLightActorComponentFlickerParameters FlickerParameters;                  // 0x02F0 (size: 0x20)
    FName EmissiveIntensityMaterialParameterName;                                     // 0x0310 (size: 0x8)
    FName EmissiveColourMaterialParameterName;                                        // 0x0318 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> EmissiveMIDs;                             // 0x0320 (size: 0x10)

    void SetOverrideMaxDrawDistance(bool bInOverrideMaxDrawDistance);
    void SetOverrideMaxDistanceFadeRange(bool bInOverrideMaxDistanceFadeRange);
    void SetOverrideIntensityUnits(bool bInOverrideIntensityUnits);
    void SetOverrideIntensity(bool bInOverrideIntensity);
    void SetOverrideEmissiveIntensity(bool bInOverrideEmissiveIntensity);
    void SetOverrideEmissiveColour(bool bInOverrideEmissiveColour);
    void SetOverrideColour(bool bInOverrideColour);
    void SetOverrideCastVolumetricShadows(bool bInOverrideCastVolumetricShadows);
    void SetOverrideCastShadows(bool bInOverrideCastShadows);
    void SetMaxDrawDistance(float InMaxDrawDistance);
    void SetMaxDistanceFadeRange(float InMaxDistanceFadeRange);
    void SetIntensity(float InIntensity);
    void SetFlickerSpeed(float InSpeed);
    void SetFlickerIntensityMultiplier(float InMultiplier);
    void SetFlickerEnabled(bool bInState);
    void SetFlickerCurveOffset(float InOffset);
    void SetFlickerCurve(class UCurveFloat* InCurve);
    void SetEnabledAffectsEmissive(bool bInAffectsEmissive);
    void SetEnabled(bool bInEnabled);
    void SetEmissiveIntensity(float InEmissiveIntensity);
    void SetEmissiveColour(FLinearColor InEmissiveColour);
    void SetColour(FLinearColor InColour);
    void SetCastVolumetricShadows(bool bInCastVolumetricShadows);
    void SetCastShadows(bool bInCastShadows);
    bool GetOverrideMaxDrawDistance();
    bool GetOverrideMaxDistanceFadeRange();
    bool GetOverrideIntensityUnits();
    bool GetOverrideIntensity();
    bool GetOverrideEmissiveIntensity();
    bool GetOverrideEmissiveColour();
    bool GetOverrideColour();
    bool GetOverrideCastVolumetricShadows();
    bool GetOverrideCastShadows();
    float GetMaxDrawDistance();
    float GetMaxDistanceFadeRange();
    TArray<class ULightComponent*> GetLightComponents();
    ELightUnits GetIntensityUnits();
    float GetIntensity();
    float GetFlickerSpeed();
    float GetFlickerIntensityMultiplier();
    bool GetFlickerEnabled();
    float GetFlickerCurveOffset();
    class UCurveFloat* GetFlickerCurve();
    bool GetEnabledAffectsEmissive();
    bool GetEnabled();
    FName GetEmissiveIntensityMaterialParameterName();
    float GetEmissiveIntensity();
    FName GetEmissiveColourMaterialParameterName();
    FLinearColor GetEmissiveColour();
    FLinearColor GetColour();
    bool GetCastVolumetricShadows();
    bool GetCastShadows();
}; // Size: 0x390

class UWrestlerLoadingScreenWidget : public UCommonLoadingScreenWidget
{
    class UTextBlock* LoadingTipsText;                                                // 0x02C8 (size: 0x8)
    class ULoadingTipsDataTable* LoadingTipsDataTable;                                // 0x02D0 (size: 0x8)

    TArray<FText> GetTipsArrayForTag(FGameplayTag InInfoTag);
}; // Size: 0x2D8

class UWrestlerLocalPlayer : public ULocalPlayer
{
    class UWrestlerSettingsShared* SharedSettings;                                    // 0x02B0 (size: 0x8)
    class UInputMappingContext* InputMappingContext;                                  // 0x02E8 (size: 0x8)

    class UWrestlerSettingsShared* GetSharedSettings();
    class UWrestlerSettingsLocal* GetLocalSettings();
}; // Size: 0x2F0

class UWrestlerLookAtComponent : public UActorComponent
{
    class UHeraMissionActorComponent* MissionActorComponent;                          // 0x00A0 (size: 0x8)
    float Timer;                                                                      // 0x00A8 (size: 0x4)
    float TimeToDecay;                                                                // 0x00AC (size: 0x4)
    float TriggerTime;                                                                // 0x00B0 (size: 0x4)
    class UHeraMissionObjective* ObjectiveToTrigger;                                  // 0x00B8 (size: 0x8)
    float ObjectiveTickInterval;                                                      // 0x00C0 (size: 0x4)
    class UHeraPropertyBool* LookAtProperty;                                          // 0x00C8 (size: 0x8)
    float MaxRange;                                                                   // 0x00D0 (size: 0x4)
    bool IsEnabled;                                                                   // 0x00D4 (size: 0x1)
    bool DisableOnActivation;                                                         // 0x00D5 (size: 0x1)

    void TriggerLookAt(float InDeltaTime, class AWrestlerCharacterBase* InPlayer);
    void SetEnabled(bool InEnabled);
    void LookAt(float InDeltaTime, class AWrestlerCharacterBase* InPlayer);
    bool CanLookAt(class AWrestlerCharacterBase* InPlayer, FHitResult& InHitResult);
}; // Size: 0xE8

class UWrestlerMainMenu : public UWrestlerMenu
{
    FWrestlerMainMenuOnSuccess OnSuccess;                                             // 0x0300 (size: 0x10)
    void EntitlementCheckResult();
    FWrestlerMainMenuOnFailure OnFailure;                                             // 0x0310 (size: 0x10)
    void EntitlementCheckResult();
    class UUserWidget* TestButton;                                                    // 0x0320 (size: 0x8)
    class UOverlay* TestButtonOverlay;                                                // 0x0328 (size: 0x8)

}; // Size: 0x330

class UWrestlerMapActiveQuestWidget : public UWrestlerQuestObjectiveWidget
{
    TArray<class UWrestlerQuestObjectiveWidget*> ObjectivesWidgetArray;               // 0x0308 (size: 0x10)
    class UTextBlock* QuestTitleText;                                                 // 0x0318 (size: 0x8)
    class UListView* ObjectivesListView;                                              // 0x0320 (size: 0x8)

}; // Size: 0x328

class UWrestlerMapButtonWidget : public UWrestlerBaseWidget
{
    class UButton* ButtonBody;                                                        // 0x02E8 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x02F0 (size: 0x8)

    void OnMapButtonEnabled();
    void OnMapButtonDisabled();
    void OnButtonPressed();
    void OnButtonClicked();
}; // Size: 0x2F8

class UWrestlerMapCategoryFilterWidget : public UWrestlerBaseWidget
{

    void ToggleButtonVisibilityForCategory(class UWidget* InCategoryWidget, bool bInEnable);
    void OnRightArrowPressed();
    void OnMapCategoryFilterChangedClicked(FGameplayTag InCategoryGT, bool bInEnable);
    void OnLeftArrowPressed();
}; // Size: 0x2D8

class UWrestlerMapDataAsset : public UHeraDataAsset
{
    TMap<class FGameplayTag, class FWrestlerMapData> MapData;                         // 0x0030 (size: 0x50)
    TMap<class FGameplayTag, class FWrestlerMapUIImagesData> LevelTagAndImages;       // 0x0080 (size: 0x50)
    class UTexture2D* DefaultMapZoneImage;                                            // 0x00D0 (size: 0x8)
    int32 MaxWaypointsOnMap;                                                          // 0x00D8 (size: 0x4)

}; // Size: 0xE0

class UWrestlerMapMarkerWidget : public UWrestlerBaseWidget
{
    FWrestlerUIMarkerInfo MarkerData;                                                 // 0x02D8 (size: 0x158)
    FTransform WaypointPosition;                                                      // 0x0430 (size: 0x60)
    class UCanvasPanel* MapMarkerCanvas;                                              // 0x0490 (size: 0x8)
    class UImage* MarkerIconToShow;                                                   // 0x0498 (size: 0x8)
    class UImage* RadialAreaImage;                                                    // 0x04A0 (size: 0x8)
    class UButton* ButtonBody;                                                        // 0x04A8 (size: 0x8)
    bool IsSelected;                                                                  // 0x04B0 (size: 0x1)
    bool IsOverideWaypointLogic;                                                      // 0x04B1 (size: 0x1)
    class UCommonTextBlock* MarkerOnMapText;                                          // 0x04B8 (size: 0x8)
    class UStory* DialogueStory;                                                      // 0x04C0 (size: 0x8)

    void OnMarkerUnselected();
    void OnMarkerUnHover();
    void OnMarkerSelected();
    void OnMarkerRefresh();
    void OnMarkerHovered();
    void OnMarkerClicked();
    void OnMapMarkerEnabled();
}; // Size: 0x500

class UWrestlerMapMarkersPoolWidget : public UWrestlerBaseWidget
{
    TSubclassOf<class UWrestlerMapMarkerWidget> MapMarkerClass;                       // 0x02C8 (size: 0x8)
    TMap<class UWrestlerMapMarkerWidget*, class AActor*> MapMarkerAndReference;       // 0x02D0 (size: 0x50)
    TMap<class UWrestlerMapMarkerWidget*, class FTransform> MapMarkerAndTransform;    // 0x0320 (size: 0x50)
    TArray<class UWrestlerMapMarkerWidget*> PoolMarkersArray;                         // 0x0370 (size: 0x10)
    class UCanvasPanel* MapPoolCanvas;                                                // 0x0398 (size: 0x8)
    class UUserWidget* MapReference;                                                  // 0x03A0 (size: 0x8)

}; // Size: 0x498

class UWrestlerMapMasqueradeWidget : public UWrestlerBaseWidget
{
    TArray<FWrestlerMasqueradeData> MasqueradeLevelData;                              // 0x02C8 (size: 0x10)
    class UImage* MasqueradeIcon;                                                     // 0x02D8 (size: 0x8)
    class UTextBlock* MasqueradeLevelText;                                            // 0x02E0 (size: 0x8)

}; // Size: 0x2E8

class UWrestlerMapScreenWidget : public UWrestlerRPGMenuTabWidget
{
    class UWrestlerMapDataAsset* MapDataAsset;                                        // 0x0490 (size: 0x8)
    class UHeraPropertyBool* MapAvailabilityProperty;                                 // 0x0498 (size: 0x8)
    FDataTableRowHandle ToggleIconLegendInputActionData;                              // 0x04A0 (size: 0x10)
    FDataTableRowHandle PlaceWaypointActionData;                                      // 0x04B0 (size: 0x10)
    FDataTableRowHandle MapIconLeftArrowActionData;                                   // 0x04C0 (size: 0x10)
    FDataTableRowHandle MapIconRightArrowActionData;                                  // 0x04D0 (size: 0x10)
    class UWrestlerMapsContainerWidget* MapsContainerWidget;                          // 0x04E0 (size: 0x8)
    class UWrestlerMapMasqueradeWidget* MapMasqueradeWidget;                          // 0x04E8 (size: 0x8)
    class UWrestlerMapCategoryFilterWidget* IconLegendWidget;                         // 0x04F0 (size: 0x8)
    class UWrestlerMapActiveQuestWidget* ActiveQuestWidget;                           // 0x04F8 (size: 0x8)

    void OnMapUnavailable();
    void OnMapAvailable();
    void OnIconVisibilityChanged(bool bNewVisibility);
    void OnIconFilterStateChanged(bool bIsCurrentlyActive);
}; // Size: 0x518

class UWrestlerMapSettings : public UDeveloperSettings
{
    FVector HubExtent;                                                                // 0x0038 (size: 0x18)
    FString ZoneShapeDataLayerName;                                                   // 0x0050 (size: 0x10)

}; // Size: 0x60

class UWrestlerMapsContainerWidget : public UWrestlerRPGMenuNavigableWidget
{
    class UWrestlerWorldMapWidget* WorldMapWidget;                                    // 0x06F8 (size: 0x8)
    class UWrestlerPlayerCursorWidget* PlayerCursorWidget;                            // 0x0700 (size: 0x8)
    class UWidget* HoverMarkerDialogueWidget;                                         // 0x0708 (size: 0x8)
    class UCommonTextBlock* HoverMarkerDialogueCharName;                              // 0x0710 (size: 0x8)
    class UCommonTextBlock* HoverMarkerDialogueSubs;                                  // 0x0718 (size: 0x8)
    bool bStopDialogueOnUnHover;                                                      // 0x0720 (size: 0x1)
    class UAkAudioEvent* DialogueAudioPlayEvent;                                      // 0x0728 (size: 0x8)
    class UAkAudioEvent* DialogueAudioStopEvent;                                      // 0x0730 (size: 0x8)
    class UWrestlerMapDataAsset* MapDataAsset;                                        // 0x0738 (size: 0x8)
    class UWrestlerQuestProgressComponent* QuestProgressComponent;                    // 0x0740 (size: 0x8)
    class UHeraDialogueAudioController* AudioController;                              // 0x0748 (size: 0x8)
    class UUserWidget* PlayingDialogueMarker;                                         // 0x0750 (size: 0x8)

    void TogglePoolVisibility(const FGameplayTag& InCategoryGT, bool bInIsVisible);
}; // Size: 0x768

class UWrestlerMarkerDescriptionWidget : public UWrestlerBaseWidget
{
    class UTextBlock* MarkerTitle;                                                    // 0x02C8 (size: 0x8)
    class UCommonRichTextBlock* MarkerDescription;                                    // 0x02D0 (size: 0x8)
    class UImage* TextDividerImage;                                                   // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

class UWrestlerMasqueradePoolWidget : public UWrestlerActiveQuestPoolWidget
{
}; // Size: 0x558

class UWrestlerMasqueradeSettings : public UWrestlerSettingsBase
{
    bool bEnableOnlyInWorldPartitionedWorlds;                                         // 0x0048 (size: 0x1)
    TSoftObjectPtr<UDataTable> PlayertActionsDataTable;                               // 0x0050 (size: 0x28)
    FGameplayTagContainer IgnoreActionTags;                                           // 0x0078 (size: 0x20)
    FGameplayTagContainer PlayerNoActionTags;                                         // 0x0098 (size: 0x20)
    uint8 MaxNumberOfWitnesses;                                                       // 0x00B8 (size: 0x1)
    uint8 MaxNumberOfAlertedPolice;                                                   // 0x00B9 (size: 0x1)
    uint8 MaxEnemyAINum;                                                              // 0x00BA (size: 0x1)
    float DelayForNewWitness;                                                         // 0x00BC (size: 0x4)
    float DelayForMasqueradeBreachSequence;                                           // 0x00C0 (size: 0x4)
    FGameplayTag InvestigateDeadBodyTag;                                              // 0x00C4 (size: 0x8)
    FGameplayTag TrespassingTag;                                                      // 0x00CC (size: 0x8)
    FGameplayTag PedestrianKilledEventTag;                                            // 0x00D4 (size: 0x8)
    FGameplayTag PoliceKilledEventTag;                                                // 0x00DC (size: 0x8)
    FGameplayTagContainer PlayerInvisibleTags;                                        // 0x00E8 (size: 0x20)
    FGameplayTagContainer PlayerInvisibleNoneTags;                                    // 0x0108 (size: 0x20)
    float TimeToLoseInterestInPlayerAction;                                           // 0x0128 (size: 0x4)
    float TimeToIgnoreDeadBody;                                                       // 0x012C (size: 0x4)
    float TimeToDespawnDeadBody;                                                      // 0x0130 (size: 0x4)
    float DistanceToDespawnDeadBody;                                                  // 0x0134 (size: 0x4)
    TMap<class EWrestlerMasqueradeState, class FWrestlerMasqueradeScoreData> MasqueradeScoreData; // 0x0138 (size: 0x50)
    float SightEQSQueryPrecision;                                                     // 0x0188 (size: 0x4)
    float SightEQSQueryLifetime;                                                      // 0x018C (size: 0x4)
    TSoftClassPtr<AWrestlerMassEntityIndicator> WitnessIndicator;                     // 0x0190 (size: 0x28)
    TSoftObjectPtr<UEnvQuery> SightEQSQuery;                                          // 0x01B8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> MasqueradeProperty;                              // 0x01E0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> MasqueradeScoreProperty;                       // 0x0208 (size: 0x28)
    TArray<FName> CommonCrowdContextualAnimNames;                                     // 0x0230 (size: 0x10)
    FWrestlerMasqueradeGroupingParameters GroupingParams;                             // 0x0240 (size: 0xA8)
    FWrestlerMasqueradeProperties Properties;                                         // 0x02E8 (size: 0xF0)
    FWrestlerMasqueradeDialogueParameters DialogueParams;                             // 0x03D8 (size: 0x90)
    FWrestlerMassConversationParameters MassConversationParams;                       // 0x0468 (size: 0x2B0)
    FWrestlerMassConversationCameraParameters MassConversationCameraParams;           // 0x0718 (size: 0x38)
    FWrestlerClanTrainerConversationParameters ClainTrainerConversationParams;        // 0x0750 (size: 0x70)
    FWrestlerBloodResonanceParameters BloodResonanceParams;                           // 0x07C0 (size: 0x78)
    FWrestlerBloodResonanceEventParameters BloodResonanceEventParams;                 // 0x0838 (size: 0x1C)
    FWrestlerMasqueradeWallaParameters WallaParams;                                   // 0x0858 (size: 0x18)

    TArray<FString> GetContextualAnimOptions();
}; // Size: 0x870

class UWrestlerMasqueradeSubsystem : public UTickableWorldSubsystem
{
    FWrestlerMasqueradeSubsystemOnMasqueradeStateChanged OnMasqueradeStateChanged;    // 0x0040 (size: 0x10)
    void WrestlerMasqueradeStateChanged(EWrestlerMasqueradeState PrevState, EWrestlerMasqueradeState NewState);
    FWrestlerMasqueradeSubsystemOnMasqueradeScoreChangedEvent OnMasqueradeScoreChangedEvent; // 0x0050 (size: 0x10)
    void WrestlerMasqueradeScoreChanged(float PrevScore, float NewScore);
    FWrestlerMasqueradeSubsystemOnAnyEntityAwareOfPlayerChanged OnAnyEntityAwareOfPlayerChanged; // 0x0060 (size: 0x10)
    void WrestlerEntityAwareChanged(bool bAware);
    TSet<FWrestlerViolentActionWitnessData> ViolentActionWitnesses;                   // 0x0078 (size: 0x50)
    TMap<class UClass*, class FWrestlerIndicatorList> IndicatorsPool;                 // 0x00C8 (size: 0x50)
    class UHeraPropertyInt* MasqueradeProperty;                                       // 0x0118 (size: 0x8)
    class UHeraPropertyFloat* MasqueradeScoreProperty;                                // 0x0120 (size: 0x8)
    class UHeraPropertyBool* IsMassVisibleProperty;                                   // 0x01D8 (size: 0x8)
    class UHeraPropertyInt* ExclusionZoneMaskProperty;                                // 0x01E0 (size: 0x8)
    class UHeraPropertyFloat* ExclusionZoneSpeedOverrideProperty;                     // 0x01E8 (size: 0x8)
    class UHeraPropertyBool* ExclusionZoneSetPedestriansProperty;                     // 0x01F0 (size: 0x8)
    class UHeraPropertyBool* ExclusionZoneSetPoliceProperty;                          // 0x01F8 (size: 0x8)
    class UHeraPropertyBool* IsMasqueradeEnabledProperty;                             // 0x0200 (size: 0x8)
    TSet<AWrestlerTrespassingVolume*> PlayerTrespassingVolumes;                       // 0x0308 (size: 0x50)
    class UDataTable* PlayerActionsDataTable;                                         // 0x0358 (size: 0x8)
    class UEnvQuery* SightEQSQuery;                                                   // 0x0360 (size: 0x8)
    TMap<UClass*, int32> SpawnedEntityActorsNum;                                      // 0x04D8 (size: 0x50)

    void TriggerMasqueradeEvent(const FGameplayTag& InEventTag);
    void SetMassEntitiesVisibility(const bool InIsVisible);
    void SetMasqueradeEnabled(bool bEnabled, bool bResetMasqueradeScore);
    void SetGroupingParameters(const FWrestlerMasqueradeGroupingParameters& InGroupingParams);
    void SetGroupingEnabled(const bool InIsEnabled);
    void SetExclusionZoneInfo(const FZoneGraphTagMask InMask, const float InSpeedOverride, const bool InSetPedestrians, const bool InSetPolice);
    void OnMissionTypeChanged(EWrestlerPlayerMissionType CurrentMissionType);
    void OnMassSpawnerFinished();
    bool IsPlayerTrespassing();
    bool IsAnyEntityAwareOfPlayer();
    bool GetWallaQueryData(int32 InID, FWrestlerMassWallaQueryData& OutData);
    FWrestlerMassWallaData GetWallaData();
    float GetRemainingTimeToEnterForfeitState();
    FWrestlerMassActors GetMassVisibleActors();
    int32 GetMassBloodResonanceCount();
    EWrestlerMasqueradeState GetMasqueradeStateForScore(const float InScore);
    EWrestlerMasqueradeState GetMasqueradeState();
    float GetDurationForForfeitState();
    FGameplayTag GetCurrentPlayerAction();
    void ForceMasqueradeState(EWrestlerMasqueradeState InNewState);
}; // Size: 0x550

class UWrestlerMasqueradeWidget : public UWrestlerBaseWidget
{
    class UImage* UpheldProgressBarMaterial;                                          // 0x02C8 (size: 0x8)
    class UImage* CautionProgressBarMaterial;                                         // 0x02D0 (size: 0x8)
    class UImage* EngagedProgressBarMaterial;                                         // 0x02D8 (size: 0x8)
    class UImage* EyeIcon;                                                            // 0x02E0 (size: 0x8)
    class UOverlay* MaskPanel;                                                        // 0x02E8 (size: 0x8)
    class UOverlay* ProgressBarPanel;                                                 // 0x02F0 (size: 0x8)
    FWrestlerMasqueradeWidgetMasqueradeStartedEvent MasqueradeStartedEvent;           // 0x02F8 (size: 0x10)
    void MasqueradeStarted();
    float MasqueradeScoreBarUpdateSpeed;                                              // 0x0308 (size: 0x4)
    float MinCautionProgressValue;                                                    // 0x030C (size: 0x4)
    float MinEngagedProgressValue;                                                    // 0x0310 (size: 0x4)

    void UpdateEye(bool bIsPlayerDetected);
    void UpdateElementVisibility(EWrestlerMasqueradeElement InElement, bool InShow);
    void ShowHideAllElements(bool InShow);
    void OnWidgetVisibilityChanged(ESlateVisibility InVisibility);
    void OnMasqueradeScoreChanged(float PrevScore, float NewScore);
    void OnEnemyDetectedPlayer(class AWrestlerEnemyCharacter* InEnemy);
    void OnAnyEntityAwareOfPlayerChanged(bool bAware);
    void MasqueradeStarted();
    bool IsPartitionedWorld();
}; // Size: 0x320

class UWrestlerMassAIFunctionLibrary : public UWrestlerBlueprintFunctionLibrary
{

    bool ValidateEntityConfig(const class UObject* InWorldContextObject, class UMassEntityConfigAsset* InConfig);
    void UseActorTransformForMass(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InEntityHandle, bool bEnabled);
    void SignalMassEntity(const class AActor* InMassActor);
    void SetMassMovementEnabled(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InMassHandle, bool bEnabled);
    void SetMassBloodResonanceType(const class AActor* InActor, const FGameplayTag InResonanceTag, EWrestlerGrantedPointsType InResonanceType, EWrestlerMassBloodResonanceState InState);
    void RestrictBloodResonanceAssignment(const class UObject* InWorldContextObject, const FGameplayTagContainer& InBloodResonanceTags);
    void ReportMassNoiseEvent(const class UObject* InWorldContextObject, const FVector& InNoiseLocation, float InRadius, EWrestlerMassHearInvestigationType InvestigationType);
    void RemoveRestrictedBloodResonanceAssignment(const class UObject* InWorldContextObject, const FGameplayTagContainer& InBloodResonanceTags);
    void RemoveGameplayTagFromMassEntity(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InMassHandle, EWrestlerMassGameplayTags InTagToRemove, bool bSignalTagChanged);
    void RemoveGameplayTagFromMassAI(const class AActor* InActor, EWrestlerMassGameplayTags InTagToRemove, bool bSignalTagChanged);
    void PurgeBloodResonanceAssignments(const class UObject* InWorldContextObject);
    bool MassHasGameplayTag(const class AActor* InActor, EWrestlerMassGameplayTags InTag);
    bool MassEntityHasGameplayTag(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InMassHandle, EWrestlerMassGameplayTags InTag);
    void MakeMassEntityScared(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InMassHandle, const FVector& InScareLocation, class AActor* InScareInstigator, bool bCanScarePolice);
    void MakeMassAIScared(const class UObject* InWorldContextObject, const class AActor* InMassAIActor, const FVector& InScareLocation, class AActor* InScareInstigator, bool bCanScarePolice);
    void MakeMassAIFearSource(const class UObject* InWorldContextObject, const FVector& InFearLocation, float InFearRadius, EWrestlerPoliceFearReaction InPoliceReactionType, class AActor* InFearInstigator);
    bool IsUnconscious(const class AActor* InActor);
    bool IsScared(const class AActor* InActor);
    bool IsPolice(const class AActor* InActor);
    bool IsAnyEntityUsingPairedSO(const class UObject* InWorldContextObject);
    bool IsAnyEntityTurnedOff(const class UObject* InWorldContextObject);
    bool HasMassTag(const class AActor* InActor, const FInstancedStruct& InTag);
    bool HasMassFragment(const class AActor* InActor, const FInstancedStruct& InFragment);
    int32 GetTaggedWhereIsWallyPedestriansCount(const class UObject* InWorldContextObject);
    int32 GetNumEntitiesMoving(const class UObject* InWorldContextObject, const float InMinSpeed, const int32 InMinStoppedCount);
    FPoseSnapshot GetMassSnapshotPose(const class AActor* EnemyAIActor);
    bool GetMassEntityTransform(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InEntityHandle, FTransform& OutTransform);
    bool GetMassEntityHandle(const class AActor* InActor, FWrestlerMassEntityHandle_BP& OutEntityHandle);
    bool GetMassEntityActor(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InEntityHandle, class AActor*& OutActor);
    EWrestlerGrantedPointsType GetMassBloodResonanceType(const class AActor* InActor);
    EWrestlerMassBloodResonanceState GetMassBloodResonanceState(const class AActor* InActor);
    void ForceMassEntityHighLOD(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InMassHandle, bool bForceHighLODEnabled);
    void EnableBloodResonanceEventsForType(const class UObject* InWorldContextObject, bool bEnabled, EWrestlerGrantedPointsType InType);
    void EnableBloodResonanceEvents(const class UObject* InWorldContextObject, bool bEnabled);
    bool DoesAnyEntityHaveBloodResonance(const class UObject* InWorldContextObject);
    void DisableBloodResonanceEventsForType(const class UObject* InWorldContextObject, EWrestlerGrantedPointsType InType);
    void DisableBloodResonanceEvents(const class UObject* InWorldContextObject);
    bool ConvertMassEntityToEnemyAI(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InMassHandle, FConvertMassEntityToEnemyAIInSpawnedDelegate InSpawnedDelegate, bool bConvertBackManually, bool bChangeTeam, EWrestlerGameTeam InNewTeam, class AActor* InInitialTarget);
    bool ConvertMassAIToEnemyAI(const class AActor* InMassAIActor, FConvertMassAIToEnemyAIInSpawnedDelegate InSpawnedDelegate, bool bConvertBackManually, bool bChangeTeam, EWrestlerGameTeam InNewTeam, class AActor* InInitialTarget);
    void ConvertEnemyAIToMassAI(const class AActor* EnemyAIActor, EWrestlerMassSwapBackBahaviour MassAIBehaviour);
    void ClearBloodResonanceEvents(const class UObject* InWorldContextObject);
    void ClearBloodResonanceAssignments(const class UObject* InWorldContextObject);
    bool AreMassEntitiesSame(const FWrestlerMassEntityHandle_BP& InEntityHandle1, const FWrestlerMassEntityHandle_BP& InEntityHandle2);
    void AddRestrictedBloodResonanceAssignment(const class UObject* InWorldContextObject, const FGameplayTagContainer& InBloodResonanceTags);
    void AddGameplayTagToMassEntity(const class UObject* InWorldContextObject, const FWrestlerMassEntityHandle_BP& InMassHandle, EWrestlerMassGameplayTags InTagToAdd, bool bSignalTagChanged);
    void AddGameplayTagToMassAI(const class AActor* InActor, EWrestlerMassGameplayTags InTagToAdd, bool bSignalTagChanged);
}; // Size: 0x28

class UWrestlerMassAISmartObjectBlueprintUtils : public UBlueprintFunctionLibrary
{

    class AActor* SpawnSmartObjectActor(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorTemplate, const FTransform& Transform);
}; // Size: 0x28

class UWrestlerMassActorProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassActorSignificanceProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x370

class UWrestlerMassAgentAvoidanceSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UWrestlerMassAgentBloodResonanceSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UWrestlerMassAgentFeetLocationSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UWrestlerMassAnimDebugSystem : public UTickableWorldSubsystem
{
}; // Size: 0x40

class UWrestlerMassAnimationProcessor : public UWrestlerMassProcessorBase
{
    float MoveThreshold;                                                              // 0x0600 (size: 0x4)
    int32 IdleAnimationStateIndex;                                                    // 0x0604 (size: 0x4)
    int32 WalkAnimationStateIndex;                                                    // 0x0608 (size: 0x4)

}; // Size: 0x610

class UWrestlerMassAnimationProcessor_GameThread : public UWrestlerMassProcessorBase
{
    float EnemyAIPoseSnapshotBlendSpeed;                                              // 0x0600 (size: 0x4)

}; // Size: 0x610

class UWrestlerMassAnimationSubsystem : public UWorldSubsystem
{
}; // Size: 0x80

class UWrestlerMassApproachingPairTrait : public UMassEntityTraitBase
{
    FWrestlerMassEntityPairedEntityData Data;                                         // 0x0028 (size: 0xC0)

}; // Size: 0xE8

class UWrestlerMassArchetypesSubsystem : public UWorldSubsystem
{
}; // Size: 0x88

class UWrestlerMassAwarenessTrait : public UMassEntityTraitBase
{
    float MaxAwareness;                                                               // 0x0028 (size: 0x4)
    TSoftObjectPtr<UWrestlerAIAwarenessConfig> AwarenessConfig;                       // 0x0030 (size: 0x28)

}; // Size: 0x58

class UWrestlerMassBloodResonanceEventGeneratorProcessor : public UWrestlerMassProcessorBase
{
    bool bReuseExistingEntities;                                                      // 0x0600 (size: 0x1)
    TMap<class FString, class TSoftObjectPtr<UWrestlerBloodResonanceEventDataAsset>> EventDataAssetPerMap; // 0x0608 (size: 0x50)
    float MinDelayToUseSmartObjectAgain;                                              // 0x0658 (size: 0x4)

}; // Size: 0x6B0

class UWrestlerMassBloodResonanceEventSpawnerProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassBloodResonanceEventSpawnerSubsystem : public UWorldSubsystem
{
    TSoftObjectPtr<UWrestlerBloodResonanceEventDataAsset> EventDataAsset;             // 0x0128 (size: 0x28)
    class UWrestlerBloodResonanceEventDataAsset* CachedEventDataAsset;                // 0x0150 (size: 0x8)

}; // Size: 0x158

class UWrestlerMassBloodResonanceProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x380

class UWrestlerMassBloodResonanceProcessor_GameThread : public UWrestlerMassProcessorBase
{
}; // Size: 0x380

class UWrestlerMassBloodResonanceSmartObjectBehaviorDefinition : public UWrestlerMassUseSOBehaviorDefinition
{
    FGameplayTag GrantedPointsType;                                                   // 0x00F0 (size: 0x8)
    float TimeToGrantAfterActivation;                                                 // 0x00F8 (size: 0x4)
    float TimeToActivateBehaviourAfterActivation;                                     // 0x00FC (size: 0x4)
    bool bActivateUsingTalkInteraction;                                               // 0x0100 (size: 0x1)
    bool bActivateUsingLOS;                                                           // 0x0101 (size: 0x1)
    float ActivationLOSDistance;                                                      // 0x0104 (size: 0x4)

}; // Size: 0x108

class UWrestlerMassCanRemovePlayerActionsObserverProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassCharacterMovementToActorTranslator : public UMassTranslator
{
}; // Size: 0x380

class UWrestlerMassCharacterOrientationTranslator : public UMassTranslator
{
}; // Size: 0x380

class UWrestlerMassContextualAnimationData : public UDataAsset
{
    TMap<class FName, class FWrestlerContextualAnimations> MasqueradeAnimsMap;        // 0x0030 (size: 0x50)
    TMap<class FName, class FWrestlerContextualAnimations> SmartObjectsAnimsMap;      // 0x0080 (size: 0x50)
    TMap<class FName, class FWrestlerContextualAnimationsPerGender> MasqueradeAnimsPerGenderMap; // 0x00D0 (size: 0x50)
    TMap<class FName, class FWrestlerContextualAnimationsPerGender> SmartObjectsAnimsPerGenderMap; // 0x0120 (size: 0x50)

}; // Size: 0x170

class UWrestlerMassConversationSubsystem : public UTickableWorldSubsystem
{
    class AWrestlerDialogueRig* MassConversationActor;                                // 0x0040 (size: 0x8)
    class AActor* MassEntityActor;                                                    // 0x0058 (size: 0x8)
    class UHeraDialogueInfo* MassDialogueInfo;                                        // 0x0088 (size: 0x8)
    class UHeraDialogueInfo* MassAmbientInfo;                                         // 0x0090 (size: 0x8)
    class UHeraPropertyBool* MassConversationStartProperty;                           // 0x00A0 (size: 0x8)
    class UHeraPropertyBool* MassConversationFlirtProperty;                           // 0x00A8 (size: 0x8)
    class UHeraPropertyBool* MassConversationFightProperty;                           // 0x00B0 (size: 0x8)
    class UHeraPropertyBool* MassConversationFearProperty;                            // 0x00B8 (size: 0x8)
    class UHeraPropertyBool* MassConversationBREventProperty;                         // 0x00C0 (size: 0x8)
    class UHeraPropertyBool* MassConversationWallyProperty;                           // 0x00C8 (size: 0x8)
    class UHeraPropertyInt* MassConversationMarkedWallyNumberForNixProperty;          // 0x00D0 (size: 0x8)
    class UHeraPropertyInt* MassConversationMarkedWallyNumberForLouProperty;          // 0x00D8 (size: 0x8)
    TMap<class UHeraPropertyBool*, class TSoftObjectPtr<UWrestlerAbilityDefinition>> MassConversationHasAbilityProperties; // 0x00E0 (size: 0x50)
    TArray<class UHeraPropertyBool*> CostumeProperties;                               // 0x0130 (size: 0x10)
    class ACameraActor* LastCamera;                                                   // 0x0180 (size: 0x8)
    TArray<class AHeraDialogueCameraActor*> Cameras;                                  // 0x01B0 (size: 0x10)
    TMap<class AHeraDialogueCameraActor*, class FWrestlerMassConversationCameraTrace> CameraTraces; // 0x01C0 (size: 0x50)

    void SetMassConversationDialogRig(class AWrestlerDialogueRig* InActor);
}; // Size: 0x230

class UWrestlerMassCrowdAnimInstance : public UHeraDialogueAnimInstance
{
    bool bInCombat;                                                                   // 0x03A0 (size: 0x1)
    bool bIsMugger;                                                                   // 0x03A1 (size: 0x1)
    bool bIsIdle;                                                                     // 0x03A2 (size: 0x1)
    float MoveSpeed;                                                                  // 0x03A4 (size: 0x4)
    float MoveDirection;                                                              // 0x03A8 (size: 0x4)
    FPoseSnapshot EnemyAIPoseSnapshot;                                                // 0x03B0 (size: 0x38)
    float EnemyAIPoseSnapshotBlendAlpha;                                              // 0x03E8 (size: 0x4)
    FVector LookAtLocationOverride;                                                   // 0x03F0 (size: 0x18)
    bool LookAtLocationOverrideValid;                                                 // 0x0408 (size: 0x1)
    bool bLookingAtPlayer;                                                            // 0x0409 (size: 0x1)
    FVector2D LookAtLocationBlendSpaceInput;                                          // 0x0410 (size: 0x10)
    float LocomotionStartTime;                                                        // 0x0420 (size: 0x4)
    class UAnimSequence* CurrentIdleAnim;                                             // 0x0428 (size: 0x8)
    class UBlendSpace* CurrentLocomotionBlendspace;                                   // 0x0430 (size: 0x8)

    bool ShouldStandForConversation();
    FName GetLocomotionMachineName();
}; // Size: 0x440

class UWrestlerMassCrowdRepresentation : public UMassCrowdRepresentationActorManagement
{
}; // Size: 0x28

class UWrestlerMassDeadBodiesSubsystem : public UTickableWorldSubsystem
{
    TMap<class AActor*, class FWrestlerMassDeadBodyData> DeadBodiesData;              // 0x0040 (size: 0x50)

}; // Size: 0xB8

class UWrestlerMassDeadBodyObserveProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassDeadBodyWitnessProcessor : public UWrestlerMassProcessorBase
{
    float TimeUntilStopDetectsPlayerAsKiller;                                         // 0x00B8 (size: 0x4)

}; // Size: 0x360

class UWrestlerMassDeathTrait : public UMassEntityTraitBase
{
    FWrestlerMassDeathFragment Data;                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UWrestlerMassDensityProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x370

class UWrestlerMassDestroyActorProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassDialogueBlueprintUtils : public UBlueprintFunctionLibrary
{

    bool MassAIDialogueRequest(const class UObject* InWorldContextObject, const int32 InEntityIndex, const int32 InEntitySerialNumber, const FGameplayTag InPrompt);
    int32 MassAIDialogueGetRegisteredRequests();
    void MassAIDialogueClearRegisteredRequests();
}; // Size: 0x28

class UWrestlerMassDialogueProcessor : public UWrestlerMassProcessorBase
{
    class UHeraDialogueInfo* DefaultPromptInfo;                                       // 0x0658 (size: 0x8)

}; // Size: 0x660

class UWrestlerMassDialogueTrait : public UMassEntityTraitBase
{
    FWrestlerDialogueFragment DialogueData;                                           // 0x0028 (size: 0x40)

}; // Size: 0x68

class UWrestlerMassDisableFragmentRemovedProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassEntityChangedSignalProcessor : public UMassProcessor
{
    TArray<FInstancedStruct> ObserveTags;                                             // 0x00B8 (size: 0x10)
    TArray<FInstancedStruct> ObserveFragments;                                        // 0x00C8 (size: 0x10)

}; // Size: 0x380

class UWrestlerMassEntityPersistentDataTrait : public UMassEntityTraitBase
{
    FWrestlerMassEntityPersistentData Data;                                           // 0x0028 (size: 0x20)

}; // Size: 0x48

class UWrestlerMassEntityQuadTreeProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassEntityQuadTreeSubSystem : public UTickableWorldSubsystem
{
    FVector2D WorldBoundsMin;                                                         // 0x0040 (size: 0x10)
    FVector2D WorldBoundsMax;                                                         // 0x0050 (size: 0x10)
    float MinQuadTreeNodeSize;                                                        // 0x0060 (size: 0x4)

}; // Size: 0x70

class UWrestlerMassEntitySharedDataTrait : public UMassEntityTraitBase
{
    FWrestlerMassEntitySharedData SharedData;                                         // 0x0028 (size: 0x28)

}; // Size: 0x50

class UWrestlerMassEnvQueryGenerator_SightPositions : public UEnvQueryGenerator
{
}; // Size: 0x50

class UWrestlerMassFearProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x600

class UWrestlerMassFearSourceSubsystem : public UTickableWorldSubsystem
{
}; // Size: 0x88

class UWrestlerMassFeetLocationTranslator : public UMassTranslator
{
}; // Size: 0x380

class UWrestlerMassFindApproachingPairsProcessor : public UWrestlerMassProcessorBase
{
    double SearchAroundPlayerExtent;                                                  // 0x0608 (size: 0x8)
    bool bPreferSideBySidePairings;                                                   // 0x0610 (size: 0x1)
    float ConsiderDirectlyAheadOffset;                                                // 0x0614 (size: 0x4)

}; // Size: 0x620

class UWrestlerMassGameplayTagsSubsystem : public UWorldSubsystem
{
}; // Size: 0x88

class UWrestlerMassGameplayTagsTrait : public UMassEntityTraitBase
{
    TArray<EWrestlerMassGameplayTags> InitialTags;                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

class UWrestlerMassGetIntoPositionAnimationProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassGetIntoPositionAnimationProcessor_Turning : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassGetIntoPositionAnimationTrait : public UMassEntityTraitBase
{
    FWrestlerMassGetIntoPositionAnimationData AnimationData;                          // 0x0028 (size: 0x18)

}; // Size: 0x40

class UWrestlerMassHearingSubsystem : public UWorldSubsystem
{
}; // Size: 0x68

class UWrestlerMassHighlightProcessor : public UWrestlerMassProcessorBase
{
    float DistanceToHighlightWithinPoliceRange;                                       // 0x0600 (size: 0x4)

}; // Size: 0x610

class UWrestlerMassHighlightSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UWrestlerMassHighlightTranslator : public UMassTranslator
{
    float UpdateRate;                                                                 // 0x0380 (size: 0x4)
    TSoftClassPtr<AWrestlerHighlightVFXActor> PoliceHighlightVFXActorClass;           // 0x0388 (size: 0x28)
    TSubclassOf<class AWrestlerHighlightVFXActor> LoadedPoliceHighlightVFXActorClass; // 0x03B0 (size: 0x8)

}; // Size: 0x3C0

class UWrestlerMassIgnoreActorCollisionTagAdded : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassIgnoreActorCollisionTagRemoved : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassLODForceProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0xDE0

class UWrestlerMassLookAtPassingEntityProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassMapBoundariesProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x600

class UWrestlerMassModularCharacterGroup : public UHeraDataAsset
{
    TArray<FWrestlerMassModularCharacterArchetypeGroup> CharacterGroups;              // 0x0030 (size: 0x10)
    TSet<UWrestlerMassModularCharacterProfile*> GeneratedProfiles;                    // 0x0040 (size: 0x50)

}; // Size: 0x90

class UWrestlerMassModularCharacterProfile : public UWrestlerModularCharacterProfile
{
}; // Size: 0x2F0

class UWrestlerMassMovementSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UWrestlerMassMovementTrait : public UMassEntityTraitBase
{
    FWrestlerMassMovementSpeedParameters MovementSpeeds;                              // 0x0028 (size: 0x8)
    FMassMovementParameters Movement;                                                 // 0x0030 (size: 0x28)

}; // Size: 0x58

class UWrestlerMassMovingAvoidanceProcessor : public UMassMovingAvoidanceProcessor
{
}; // Size: 0x620

class UWrestlerMassNoiseHearingProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x600

class UWrestlerMassObserverRegistry : public UObject
{
}; // Size: 0x1E8

class UWrestlerMassPairedSmartObjectGeneratorProcessor : public UWrestlerMassProcessorBase
{
    TMap<class EWrestlerPedestrianType, class FWrestlerPedestrianInteractionSOEntry> FirstPedType; // 0x0360 (size: 0x50)

}; // Size: 0x3B0

class UWrestlerMassPairedSmartObjectSpawnerProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassPathHeightAdjustProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x490

class UWrestlerMassPlayerActionsProcessor : public UWrestlerMassProcessorBase
{
    class UWrestlerMasqueradeSettings* MasqueradeSettings;                            // 0x00B8 (size: 0x8)
    float CallBackupRange;                                                            // 0x00C0 (size: 0x4)

}; // Size: 0xE60

class UWrestlerMassPoliceHarassmentProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x610

class UWrestlerMassPoliceTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UWrestlerMassProcessorBase : public UMassProcessor
{
}; // Size: 0xB8

class UWrestlerMassQueuedSmartObjectIntalizer : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassReservedSmartObjectTrait : public UMassEntityTraitBase
{
    float MinTimeBetweenPairedSmartObjectSpawns;                                      // 0x0028 (size: 0x4)

}; // Size: 0x30

class UWrestlerMassResetEntityProcessor : public UWrestlerMassProcessorBase
{
    float RespawnMinimumDistanceFromPlayer;                                           // 0x0360 (size: 0x4)
    float RespawnMaximumDistanceFromPlayer;                                           // 0x0364 (size: 0x4)
    float LaneIterationGap;                                                           // 0x0368 (size: 0x4)

}; // Size: 0x370

class UWrestlerMassRuntimeUseSOBehaviorDefinition : public UWrestlerMassUseSOBehaviorDefinition
{
}; // Size: 0xF0

class UWrestlerMassSOPropDataAsset : public UHeraDataAsset
{
    FName AttachBoneOrSocketName;                                                     // 0x0030 (size: 0x8)
    FVector AttachLocationOffset;                                                     // 0x0038 (size: 0x18)
    FRotator AttachRotationOffset;                                                    // 0x0050 (size: 0x18)
    bool bCanDrop;                                                                    // 0x0068 (size: 0x1)
    TSoftObjectPtr<UStaticMesh> PropMesh;                                             // 0x0070 (size: 0x28)
    TSoftClassPtr<AActor> PropActorOverride;                                          // 0x0098 (size: 0x28)

}; // Size: 0xC8

class UWrestlerMassSOPropsSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UWrestlerMassScaredProcessor : public UWrestlerMassProcessorBase
{
    float TimeToStopBeScared;                                                         // 0x0360 (size: 0x4)
    float MinDistanceToStopBeScared;                                                  // 0x0364 (size: 0x4)

}; // Size: 0x370

class UWrestlerMassScaredTagAddedProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassScaredTagRemovedProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassSightProcessor : public UWrestlerMassProcessorBase
{
    TMap<class FMassEntityHandle, class FWrestlerMassQueuedTraceContainer> QueuedTraces; // 0x03B0 (size: 0x50)

}; // Size: 0x410

class UWrestlerMassSightProcessor_AIPlayerAwareness : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassSightProcessor_Awareness : public UWrestlerMassSightProcessor_Entity
{
    float MaxAwareness;                                                               // 0x0430 (size: 0x4)
    TSoftObjectPtr<UWrestlerAIAwarenessConfig> SoftAwarenessConfig;                   // 0x0438 (size: 0x28)
    class UWrestlerAIAwarenessConfig* AwarenessConfig;                                // 0x0460 (size: 0x8)

}; // Size: 0x470

class UWrestlerMassSightProcessor_Crimes : public UWrestlerMassSightProcessor_Awareness
{
}; // Size: 0xAB0

class UWrestlerMassSightProcessor_DeadBodies : public UWrestlerMassSightProcessor_Awareness
{
    TArray<class UObject*> DeadBodies;                                                // 0x0470 (size: 0x10)

}; // Size: 0x480

class UWrestlerMassSightProcessor_Enemies : public UWrestlerMassSightProcessor_Awareness
{
    TArray<class AWrestlerEnemyCharacter*> AttackingEnemies;                          // 0x09B0 (size: 0x10)

}; // Size: 0xAC0

class UWrestlerMassSightProcessor_EntitiesVisibility : public UWrestlerMassSightProcessor_Player
{
    float PredictionTime;                                                             // 0x0690 (size: 0x4)
    TEnumAsByte<EMassLOD::Type> MinimumLODToProcess;                                  // 0x0694 (size: 0x1)

}; // Size: 0x980

class UWrestlerMassSightProcessor_Entity : public UWrestlerMassSightProcessor
{
    float AlwaysSeeDistance;                                                          // 0x0408 (size: 0x4)
    float MaxEntitySightDistance;                                                     // 0x040C (size: 0x4)
    float MaxEntityVerticalSightDistance;                                             // 0x0410 (size: 0x4)
    float MaxEntitySightAngle;                                                        // 0x0414 (size: 0x4)
    float MaxEntityVerticalSightAngle;                                                // 0x0418 (size: 0x4)
    class UWrestlerMasqueradeSettings* MasqueradeSettings;                            // 0x0428 (size: 0x8)

}; // Size: 0x430

class UWrestlerMassSightProcessor_Player : public UWrestlerMassSightProcessor
{
}; // Size: 0x690

class UWrestlerMassSightProcessor_PlayerAwareness : public UWrestlerMassSightProcessor_Awareness
{
    class AWrestlerCharacterBase* PlayerCharacter;                                    // 0x0478 (size: 0x8)

}; // Size: 0x4C0

class UWrestlerMassSightProcessor_ScaredEntities : public UWrestlerMassSightProcessor_Awareness
{
    float MinDelayTimeToNoticeScaredEntity;                                           // 0x0470 (size: 0x4)
    float MinAngleToMoveOutOfTheWay;                                                  // 0x0474 (size: 0x4)
    float MinDistanceToMoveOutOfTheWay;                                               // 0x0478 (size: 0x4)

}; // Size: 0xA70

class UWrestlerMassSightProcessor_UnconsciousEntities : public UWrestlerMassSightProcessor_Awareness
{
}; // Size: 0x720

class UWrestlerMassSightProcessor_UpdateLastKnownPosition : public UWrestlerMassSightProcessor_Entity
{
    float MaxDistanceToUpdateWithoutSightCheck;                                       // 0x0430 (size: 0x4)

}; // Size: 0x440

class UWrestlerMassSimulationLODProcessor : public UMassSimulationLODProcessor
{
}; // Size: 0xDE0

class UWrestlerMassSmartObjectCandidatesFinderProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x600

class UWrestlerMassSmartObjectEntityLinkProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassSmartObjectProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassSmartObjectQueueTrait : public UMassEntityTraitBase
{
    TMap<class FGameplayTag, class FGameplayTagContainer> TransitionableSOs;          // 0x0028 (size: 0x50)
    bool bChooseRandomInitalTag;                                                      // 0x0078 (size: 0x1)
    FGameplayTag InitialUsableSOTag;                                                  // 0x007C (size: 0x8)

}; // Size: 0x88

class UWrestlerMassSmartObjectResetProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassSmartObjectSpawnerSubsystem : public UTickableWorldSubsystem
{
    TMap<uint32, AActor*> SpawnedSmartObjects;                                        // 0x0068 (size: 0x50)

}; // Size: 0x108

class UWrestlerMassSmoothOrientationProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x600

class UWrestlerMassSmoothOrientationTrait : public UMassEntityTraitBase
{
    FWrestlerSmoothOrientationFragment Orientation;                                   // 0x0028 (size: 0x20)

}; // Size: 0x48

class UWrestlerMassSpawnLocationAndGenderProcessor : public UMassSpawnLocationProcessor
{
}; // Size: 0x360

class UWrestlerMassStateTreeProcessor : public UMassStateTreeProcessor
{
}; // Size: 0x430

class UWrestlerMassStatsTrait : public UMassEntityTraitBase
{
    float MaxHealth;                                                                  // 0x0028 (size: 0x4)

}; // Size: 0x30

class UWrestlerMassSteeringProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassSwapAIFragmentAddedProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassSwapAIFragmentRemovedProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerMassTimedNiagaraEffect : public UAnimNotifyState_TimedNiagaraEffect
{
}; // Size: 0x78

class UWrestlerMassTransformAndVelocitySyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UWrestlerMassTurnOffProcessor : public UWrestlerMassProcessorBase
{
    float ZoneGraphSearchRange;                                                       // 0x0360 (size: 0x4)

}; // Size: 0x370

class UWrestlerMassUpdateFleeingVolumesProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x600

class UWrestlerMassUpdatePlayerEntityProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x360

class UWrestlerMassUpdateTurnOffVolumesProcessor : public UWrestlerMassProcessorBase
{
}; // Size: 0x8A0

class UWrestlerMassUseGameplayAbilityProcessor : public UWrestlerMassProcessorBase
{
    float CooldownTimeForRelinquishingActor;                                          // 0x00B8 (size: 0x4)
    float VeryLongRunningTime;                                                        // 0x00BC (size: 0x4)
    TMap<class FName, class TSoftClassPtr<UGameplayAbility>> AbilityMapByName;        // 0x00C0 (size: 0x50)
    TMap<class FGameplayTag, class TSoftClassPtr<UGameplayAbility>> AbilityMapByTag;  // 0x0110 (size: 0x50)
    FGameplayTagContainer BannedAbilityTags;                                          // 0x0160 (size: 0x20)
    TSoftObjectPtr<UWrestlerDefaultAbilities> DefaultAbilities;                       // 0x0180 (size: 0x28)

}; // Size: 0x6F0

class UWrestlerMassUseGameplayAbilityTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UWrestlerMassUseSOBehaviorDefinition : public USmartObjectMassBehaviorDefinition
{
    FName ContextualAnimationName;                                                    // 0x0030 (size: 0x8)
    bool bSyncSmartObjectAnimations;                                                  // 0x0038 (size: 0x1)
    float MinPlayAnimationDelay;                                                      // 0x003C (size: 0x4)
    float MaxPlayAnimationDelay;                                                      // 0x0040 (size: 0x4)
    TArray<EWrestlerPedestrianType> AllowedPedestrianTypes;                           // 0x0048 (size: 0x10)
    TArray<EWrestlerGenderType> AllowedGenderTypes;                                   // 0x0058 (size: 0x10)
    bool bOverrideAnimMontagePlayTime;                                                // 0x0068 (size: 0x1)
    bool bUseRandomUseTime;                                                           // 0x0069 (size: 0x1)
    float MinUseTime;                                                                 // 0x006C (size: 0x4)
    float MaxUseTime;                                                                 // 0x0070 (size: 0x4)
    uint32 AllowedPedestrianTypesBitMask;                                             // 0x0074 (size: 0x4)
    uint32 AllowedGenderTypesBitMask;                                                 // 0x0078 (size: 0x4)
    float InteractionCooldown;                                                        // 0x007C (size: 0x4)
    float ChanceOfBeingUsed;                                                          // 0x0080 (size: 0x4)
    FGameplayTag DialoguePromptSOSpawn;                                               // 0x0084 (size: 0x8)
    FGameplayTag DialoguePromptBREventSpawn;                                          // 0x008C (size: 0x8)
    FGameplayTag DialoguePromptSOClaim;                                               // 0x0094 (size: 0x8)
    FGameplayTag DialoguePromptSOUse;                                                 // 0x009C (size: 0x8)
    FGameplayTag DialoguePromptBREventActivated;                                      // 0x00A4 (size: 0x8)
    FGameplayTag DialoguePromptBREventActivateLoop;                                   // 0x00AC (size: 0x8)
    bool bIsConversationAllowed;                                                      // 0x00B4 (size: 0x1)
    bool bIsIdleDialogueAllowed;                                                      // 0x00B5 (size: 0x1)
    bool bShouldStandForConversation;                                                 // 0x00B6 (size: 0x1)
    bool bBloodResonanceAllowed;                                                      // 0x00B7 (size: 0x1)
    TArray<class UWrestlerMassSOPropDataAsset*> PropsToSpawn;                         // 0x00B8 (size: 0x10)
    bool bOverrideEntityAlwaysSeeDistance;                                            // 0x00C8 (size: 0x1)
    float AlwaysSeeDistance;                                                          // 0x00CC (size: 0x4)
    bool bOverrideEntityMaxSightDistance;                                             // 0x00D0 (size: 0x1)
    float MaxSightDistance;                                                           // 0x00D4 (size: 0x4)
    bool bOverrideEntityMaxSightAngle;                                                // 0x00D8 (size: 0x1)
    float MaxSightAngle;                                                              // 0x00DC (size: 0x4)
    bool bOverrideEntityActionNoticeability;                                          // 0x00E0 (size: 0x1)
    float ActionNoticeability;                                                        // 0x00E4 (size: 0x4)
    bool bIsCrimeSO;                                                                  // 0x00E8 (size: 0x1)
    bool bIsMugger;                                                                   // 0x00E9 (size: 0x1)

}; // Size: 0xF0

class UWrestlerMassVisualizationProcessor : public UMassCrowdVisualizationProcessor
{
}; // Size: 0x360

class UWrestlerMassVolumeSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{
    TSoftObjectPtr<ATriggerBox> Volume;                                               // 0x0030 (size: 0x28)
    float GapBetweenPoints;                                                           // 0x0058 (size: 0x4)

}; // Size: 0x60

class UWrestlerMassZoneGraphNavigationTrait : public UMassZoneGraphNavigationTrait
{
    FWrestlerMassZoneGraphNavigationParameters AdditionalNavigationParameters;        // 0x0038 (size: 0x30)

}; // Size: 0x68

class UWrestlerMassZoneGraphPathFollowProcessor : public UMassZoneGraphPathFollowProcessor
{
}; // Size: 0x370

class UWrestlerMeleeWeaponInstance : public UWrestlerWeaponInstance
{
}; // Size: 0xA0

class UWrestlerMenu : public UHeraMenu
{
    EWrestlerMenu MenuID;                                                             // 0x02F8 (size: 0x1)

    void ResetCanSkipCutscene();
    void LoadFromSlot(FString InSlotName);
    EWrestlerMenu GetMenuID();
}; // Size: 0x300

class UWrestlerMeshMergeFunctionLibrary : public UWrestlerBlueprintFunctionLibrary
{

    class USkeletalMesh* MergeMeshes(const FSkeletalMeshMergeParams& Params);
}; // Size: 0x28

class UWrestlerMinimapWidget : public UHeraBaseWidget
{
    class UWrestlerMapDataAsset* MapDataAsset;                                        // 0x02C8 (size: 0x8)
    bool bShouldPlayerIconAlwaysFaceUp;                                               // 0x02D0 (size: 0x1)
    float MapInitialScale;                                                            // 0x02D4 (size: 0x4)
    class UWrestlerWorldMapWidget* WorldMapWidget;                                    // 0x02D8 (size: 0x8)
    class UCanvasPanel* MinimapRotationCanvas;                                        // 0x02E0 (size: 0x8)
    class ACharacter* PlayerCharacterReference;                                       // 0x02E8 (size: 0x8)

    void ForcePoolUpdate(FString Tag, class UObject* Object);
    void EnableMinimap();
}; // Size: 0x360

class UWrestlerMissionControlComponent : public UHeraMissionControlComponent
{
}; // Size: 0x280

class UWrestlerMissionSubSystem : public UHeraMissionSubSystem
{
}; // Size: 0x90

class UWrestlerModularAIData : public UDataAsset
{
    TSubclassOf<class AWrestlerModularAIWeapon> Weapon;                               // 0x0030 (size: 0x8)
    FName WeaponSocket;                                                               // 0x0038 (size: 0x8)
    TArray<class UBehaviorTree*> Behaviours;                                          // 0x0040 (size: 0x10)

}; // Size: 0x50

class UWrestlerModularCharacter : public UActorComponent
{
    class UWrestlerModularCharacterData* DataPool;                                    // 0x00A0 (size: 0x8)
    bool bForceMeshesMerge;                                                           // 0x00A8 (size: 0x1)
    bool bKeepSkeletalMeshesPooled;                                                   // 0x00A9 (size: 0x1)
    TArray<class USkeletalMeshComponent*> SkeletalMeshComponents;                     // 0x0150 (size: 0x10)

    void Setup(const class UWrestlerModularCharacterProfile* InProfile);
    void PrintModularCharacterInfo();
    TArray<class USkeletalMeshComponent*> GetSkeletalMeshComponents();
    void AssembleCharacterFromProfiles(TArray<class UWrestlerModularCharacterProfile*> InModularCharacterProfiles, class USkeletalMeshComponent* InSkeletalMesh, class UPhysicsAsset* InPhysicsAsset);
}; // Size: 0x160

class UWrestlerModularCharacterData : public UDataAsset
{
    TArray<class USkeletalMesh*> ChestMeshes;                                         // 0x0030 (size: 0x10)
    TArray<class USkeletalMesh*> LegMeshes;                                           // 0x0040 (size: 0x10)
    TArray<class USkeletalMesh*> HairMeshes;                                          // 0x0050 (size: 0x10)
    TArray<class USkeletalMesh*> HatMeshes;                                           // 0x0060 (size: 0x10)
    TArray<class USkeletalMesh*> ScarfMeshes;                                         // 0x0070 (size: 0x10)
    TArray<class USkeletalMesh*> GlovesMeshes;                                        // 0x0080 (size: 0x10)
    TArray<class USkeletalMesh*> HeadMeshes;                                          // 0x0090 (size: 0x10)
    TArray<class USkeletalMesh*> ShoesMeshes;                                         // 0x00A0 (size: 0x10)
    TArray<class UMaterialInstance*> MI_FemaleArms;                                   // 0x00B0 (size: 0x10)
    TArray<class UMaterialInstance*> MI_FemaleBody;                                   // 0x00C0 (size: 0x10)
    TArray<class UMaterialInstance*> MI_Female_SkintoneVariations;                    // 0x00D0 (size: 0x10)
    TArray<class UMaterialInstance*> MI_TopInners;                                    // 0x00E0 (size: 0x10)
    TArray<class UMaterialInstance*> MI_TopOuters;                                    // 0x00F0 (size: 0x10)
    TArray<class UMaterialInstance*> MI_TopExtras;                                    // 0x0100 (size: 0x10)

}; // Size: 0x110

class UWrestlerModularCharacterProfile : public UDataAsset
{
    FSkinTone SkinToneProperties;                                                     // 0x0030 (size: 0x38)
    TMap<class FName, class FWrestlerMeshSlotData> SlotDataMap;                       // 0x0068 (size: 0x50)
    FWrestlerMeshSlotData Hat;                                                        // 0x00B8 (size: 0x40)
    FWrestlerMeshSlotData Hair;                                                       // 0x00F8 (size: 0x40)
    FWrestlerMeshSlotData Head;                                                       // 0x0138 (size: 0x40)
    FWrestlerMeshSlotData Scarf;                                                      // 0x0178 (size: 0x40)
    FWrestlerMeshSlotData Gloves;                                                     // 0x01B8 (size: 0x40)
    FWrestlerMeshSlotData Chest;                                                      // 0x01F8 (size: 0x40)
    FWrestlerMeshSlotData Legs;                                                       // 0x0238 (size: 0x40)
    FWrestlerMeshSlotData Shoes;                                                      // 0x0278 (size: 0x40)
    EWrestlerGenderType Gender;                                                       // 0x02B8 (size: 0x1)
    EWrestlerPedestrianType Type;                                                     // 0x02B9 (size: 0x1)
    class UAkSwitchValue* TypeAudioSwitch;                                            // 0x02C0 (size: 0x8)
    bool bMergeIntoSingleSkeletalMesh;                                                // 0x02C8 (size: 0x1)
    class UHeraDialogueInfo* ConversationDialogueInfo;                                // 0x02D0 (size: 0x8)
    class UHeraDialogueInfo* ConversationAmbientInfo;                                 // 0x02D8 (size: 0x8)
    class UHeraDialogueInfo* PromptDialogueInfo;                                      // 0x02E0 (size: 0x8)

}; // Size: 0x2F0

class UWrestlerModularCharacterProfiles : public UDataAsset
{
    TMap<class EWrestlerGenderType, class FWrestlerConversationDialogues> ConversationDialogue; // 0x0030 (size: 0x50)
    TMap<class EWrestlerGenderType, class FWrestlerPromptDialogues> PromptDialogueInfos; // 0x0080 (size: 0x50)
    bool bCanBeAssignedBloodResonance;                                                // 0x00D0 (size: 0x1)
    FGameplayTagContainer BloodResonanceTypesAssignable;                              // 0x00D8 (size: 0x20)
    FGameplayTag BloodResonanceTag;                                                   // 0x00F8 (size: 0x8)
    TArray<TSoftObjectPtr<UWrestlerModularCharacterProfile>> Entries;                 // 0x0100 (size: 0x10)
    TMap<class EWrestlerGenderType, class FWrestleAnimationsContainer> Animations;    // 0x0110 (size: 0x50)
    class UAnimToTextureDataAsset* AnimToTextureData;                                 // 0x0160 (size: 0x8)
    bool bCanRemoveActivatedBloodResonance;                                           // 0x0168 (size: 0x1)

}; // Size: 0x170

class UWrestlerMoveToDataAsset : public UHeraDataAsset
{
    FVector TargetLocationOffset;                                                     // 0x0030 (size: 0x18)
    float MaximumHeightOffset;                                                        // 0x0048 (size: 0x4)
    float Duration;                                                                   // 0x004C (size: 0x4)
    float MaxRange;                                                                   // 0x0050 (size: 0x4)
    float MinRange;                                                                   // 0x0054 (size: 0x4)
    class UCurveFloat* MaxHorizontalRangeCurve;                                       // 0x0058 (size: 0x8)
    bool bSetNewMovementMode;                                                         // 0x0060 (size: 0x1)
    TEnumAsByte<EMovementMode> MovementMode;                                          // 0x0061 (size: 0x1)
    bool bRestrictSpeedToExpected;                                                    // 0x0062 (size: 0x1)
    class UCurveVector* PathOffsetCurve;                                              // 0x0068 (size: 0x8)
    ERootMotionFinishVelocityMode VelocityOnFinishMode;                               // 0x0070 (size: 0x1)
    FVector SetVelocityOnFinish;                                                      // 0x0078 (size: 0x18)
    float ClampVelocityOnFinish;                                                      // 0x0090 (size: 0x4)
    bool bIgnoreDodge;                                                                // 0x0094 (size: 0x1)

    float GetMaxRange(const class AActor* SourceActor, const class AActor* TargetActor);
    FWrestlerAbilityMoveTo CreateMoveToData(class AActor* SourceActor, class AActor* TargetActor);
}; // Size: 0x98

class UWrestlerMovementComponent : public UCharacterMovementComponent
{
    FWrestlerMovementComponentOnGlideBegin OnGlideBegin;                              // 0x0F48 (size: 0x1)
    void OnGlideBeginSignature();
    FWrestlerMovementComponentOnGlideEnd OnGlideEnd;                                  // 0x0F49 (size: 0x1)
    void OnGlideEndSignature();
    FWrestlerMovementComponentOnGliding OnGliding;                                    // 0x0F4A (size: 0x1)
    void OnGlidingSignature();
    FTimerHandle CoyoteTimerHandle;                                                   // 0x0F50 (size: 0x8)
    FVector NavWalkingRootMotionProjectionExtent;                                     // 0x1010 (size: 0x18)
    float MinSprintInput;                                                             // 0x102C (size: 0x4)
    float MinSprintInputDot;                                                          // 0x1030 (size: 0x4)
    float RotationDeltaYawThreshold;                                                  // 0x1034 (size: 0x4)
    float CoyoteTime;                                                                 // 0x1038 (size: 0x4)
    bool bIgnoreGlideAcceleration;                                                    // 0x105D (size: 0x1)

    bool TestUnCrouch();
    void SetForceAllowCrouch(bool bInForceAllowCrouch);
    float GetMoveIncline();
    float GetMaxSprintSpeed();
    bool GetIsCounterClockwiseRotation();
    bool GetIsClockwiseRotation();
    void BP_UpdateCharacterStateBeforeMovement(float DeltaSeconds);
    float BP_SlideAlongSurface(const FVector& InDelta, float InTime, const FVector& InNormal, FHitResult InHit, bool bInHandleImpact);
}; // Size: 0x1060

class UWrestlerMovementSetData : public UDataAsset
{
    TMap<class FGameplayTag, class FWrestlerMovementSetInfo> Sets;                    // 0x0030 (size: 0x50)
    float SprintSpeed;                                                                // 0x0080 (size: 0x4)
    float SprintAcceleration;                                                         // 0x0084 (size: 0x4)

    bool GetMovementSetByTag(const FGameplayTag Tag, FWrestlerMovementSetInfo& MovementSetInfo);
}; // Size: 0x88

class UWrestlerMultipleEndingsConfig : public UHeraDataAsset
{
    TMap<class FString, class TSoftObjectPtr<UMediaSource>> VideoClips;               // 0x0030 (size: 0x50)

    TMap<class FString, class TSoftObjectPtr<UMediaSource>> GetVideoClips();
}; // Size: 0x80

class UWrestlerMultipleOptionWidget : public UWrestlerBaseOptionWidget
{
    FWrestlerMultipleOptionWidgetOnSettingChangedCallback OnSettingChangedCallback;   // 0x0360 (size: 0x10)
    void BUIMultipleOptionSettingSignature(int32 Index);
    class UHeraPropertyBase* SettingProperty;                                         // 0x0370 (size: 0x8)
    class UWidgetSwitcher* SettingsSwitcher;                                          // 0x0378 (size: 0x8)

    void IncreaseWidgetIndex();
    void DecreaseWidgetIndex();
}; // Size: 0x380

class UWrestlerMusicTagMovieSceneSection : public UMovieSceneSection
{
    FGameplayTag MusicTag;                                                            // 0x00F0 (size: 0x8)
    class UAkStateValue* CutsceneState;                                               // 0x00F8 (size: 0x8)

}; // Size: 0x100

class UWrestlerMusicTagMovieSceneTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UWrestlerNavArea_Alleyway : public UNavArea
{
}; // Size: 0x48

class UWrestlerNavArea_NoMassCharacters : public UNavArea
{
}; // Size: 0x48

class UWrestlerNavInvokerComponent : public UNavigationInvokerComponent
{
    bool bShouldKickOffNavBuild;                                                      // 0x00B0 (size: 0x1)

}; // Size: 0xC0

class UWrestlerNavLinkFunctionsLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UWrestlerNavigableWidgetDataAsset : public UHeraDataAsset
{
    FWrestlerNavigableWidgetData NavigableWidgetParams;                               // 0x0030 (size: 0x198)

}; // Size: 0x1C8

class UWrestlerNavigationFilter_Alleyway : public UNavigationQueryFilter
{
}; // Size: 0x48

class UWrestlerNavigationFilter_PrioritiseAlleyways : public UNavigationQueryFilter
{
}; // Size: 0x48

class UWrestlerNominateAutosaveToNamedSaveSlot : public UHeraAutomataTask
{
    TSoftObjectPtr<UWrestlerQuestData> QuestData;                                     // 0x0088 (size: 0x28)
    FString QuestObjective;                                                           // 0x00B0 (size: 0x10)
    class UHeraMissionObjective* TaskCompleteObjective;                               // 0x00C0 (size: 0x8)
    class UWrestlerQuestData* LoadedQuestData;                                        // 0x00C8 (size: 0x8)
    FGuid TaskGUID;                                                                   // 0x00D0 (size: 0x10)

    TArray<FString> GetQuestObjectives();
}; // Size: 0xE0

class UWrestlerNotePopupWidget : public UHeraActivatableWidget
{
    ECommonInputType CurrentInputType;                                                // 0x0450 (size: 0x1)
    class UCommonTextBlock* NoteText;                                                 // 0x0458 (size: 0x8)

    void OnInputChanged(ECommonInputType InCurrentInputType);
    void ClosePopup();
}; // Size: 0x460

class UWrestlerNotificationSubsystem : public UTickableWorldSubsystem
{

    void UpdateSideNotificationContainer();
    void UpdateCentralNotificationWidget();
    void SendToNotificationStack(const FWrestlerNotificationData& InNotification);
    void OpenRPGMenuFromNotification(const EWrestlerRPGMenuTabID& InTab);
}; // Size: 0xE0

class UWrestlerObjectsTaggingSubsystem : public UWorldSubsystem
{

    void UnbindEventsFromTag(const class UObject* WorldContextObject, FString Tag, const FWrestlerTagDelegates& InEvents);
    void UnbindEventsFromGameplayTag(const class UObject* WorldContextObject, const FGameplayTag& Tag, const FWrestlerTagDelegates& InEvents);
    void UnbindAllEventsFromTag(const class UObject* WorldContextObject, FString Tag, class UObject* EventsOwner);
    void UnbindAllEventsFromGameplayTag(const class UObject* WorldContextObject, const FGameplayTag& Tag, class UObject* EventsOwner);
    void TransferAllTags(const class UObject* WorldContextObject, class UObject* FromObject, class UObject* ToObject);
    void RemoveTagFromObject(const class UObject* WorldContextObject, class UObject* ObjectToTag, FString Tag);
    void RemoveGameplayTagFromObject(const class UObject* WorldContextObject, class UObject* ObjectToTag, const FGameplayTag& Tag);
    void RemoveAllTagsFromObject(const class UObject* WorldContextObject, class UObject* FromObject);
    bool ObjectHasTag(const class UObject* WorldContextObject, class UObject* ObjectToQuery, const FGameplayTag& Tag);
    void GetObjectsWithTag(const class UObject* WorldContextObject, FString Tag, TArray<class UObject*>& OutObjects, bool bIncludeSubTags);
    void GetObjectsWithGameplayTag(const class UObject* WorldContextObject, const FGameplayTag& Tag, TArray<class UObject*>& OutObjects, bool bIncludeSubTags);
    void GetEntityTransformsWithGameplayTag(const class UObject* WorldContextObject, const FGameplayTag& Tag, TArray<FTransform>& OutTransforms, bool bIncludeSubTags);
    TArray<FString> GetAllTagsForObject(const class UObject* WorldContextObject, class UObject* InObject);
    void GetActorsWithTag(const class UObject* WorldContextObject, FString Tag, TArray<class AActor*>& OutActors, bool bIncludeSubTags);
    void BindEventsToTag(const class UObject* WorldContextObject, FString Tag, const FWrestlerTagDelegates& InEvents);
    void BindEventsToGameplayTag(const class UObject* WorldContextObject, const FGameplayTag& Tag, const FWrestlerTagDelegates& InEvents);
    void AddTagToObject(const class UObject* WorldContextObject, class UObject* ObjectToTag, FString Tag);
    void AddGameplayTagToObject(const class UObject* WorldContextObject, class UObject* ObjectToTag, const FGameplayTag& Tag);
}; // Size: 0x160

class UWrestlerOnHasRepresentationTagRemoved : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerOnOffLODTagRemovedProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerOptObjectivesPoolWidget : public UWrestlerActiveQuestPoolWidget
{
}; // Size: 0x558

class UWrestlerPDXLogin : public UWrestlerMenu
{

    void StartAnalytics();
    bool ShouldShowPDXLoginScreen();
    void ResolveAccountLinkState();
    FName GetLauncherName();
    void BlockStreaming(bool bInBlock);
}; // Size: 0x300

class UWrestlerPairAnimEventObject : public UObject
{
    class AActor* Instigator;                                                         // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerPassiveAbilitySlotWidget : public UHeraCommonUIBaseWidget
{
    class UImage* PassiveAbilityImage;                                                // 0x0330 (size: 0x8)
    TArray<FGameplayTag> PassiveAbilityTags;                                          // 0x0338 (size: 0x10)
    FGameplayTag CurrentActiveTag;                                                    // 0x0348 (size: 0x8)

    void UpdatePassiveAbilitySlot();
    void PlayCooldownAnimation(float InDuration);
    class UWrestlerPlayerClan* GetPlayerClan();
}; // Size: 0x358

class UWrestlerPassiveTargetingComponent : public UActorComponent
{
    TMap<class TSubclassOf<AGameplayAbilityTargetActor>, class UWrestlerPassiveTargetingInstance*> PassiveTargetingInstances; // 0x00A0 (size: 0x50)
    TSubclassOf<class AGameplayAbilityTargetActor> EquippedTargetActorType;           // 0x00F0 (size: 0x8)
    class UWrestlerAbilitySystemComponent* AbilitySystemComponent;                    // 0x00F8 (size: 0x8)
    FName CameraSocketName;                                                           // 0x0100 (size: 0x8)

    bool HasTargetData(const TSubclassOf<class AGameplayAbilityTargetActor> InTargetActorType);
    FGameplayAbilityTargetDataHandle GetTargetData(const TSubclassOf<class AGameplayAbilityTargetActor> InTargetActorType);
}; // Size: 0x110

class UWrestlerPassiveTargetingInstance : public UObject
{
    class UWrestlerGameplayAbility* AbilityInstance;                                  // 0x0028 (size: 0x8)
    class AGameplayAbilityTargetActor* TargetActor;                                   // 0x0030 (size: 0x8)
    class USkeletalMeshSocket* AttachmentSocket;                                      // 0x0038 (size: 0x8)
    class USkeletalMeshComponent* SkeletonComponent;                                  // 0x0040 (size: 0x8)

    void OnValidData(const FGameplayAbilityTargetDataHandle& InValidData);
}; // Size: 0x70

class UWrestlerPerPlatformSettings : public UPlatformSettings
{
    FString DefaultDeviceProfileSuffix;                                               // 0x0040 (size: 0x10)
    TArray<FWrestlerQualityDeviceProfileVariant> UserFacingDeviceProfileOptions;      // 0x0050 (size: 0x10)
    bool bSupportsGranularVideoQualitySettings;                                       // 0x0060 (size: 0x1)
    bool bSupportsAutomaticVideoQualityBenchmark;                                     // 0x0061 (size: 0x1)
    EWrestlerFramePacingMode FramePacingMode;                                         // 0x0062 (size: 0x1)

}; // Size: 0x68

class UWrestlerPerformanceAnalyserSettings : public UHeraSettings
{
    float TestDuration;                                                               // 0x0038 (size: 0x4)
    float DesiredFrameRate;                                                           // 0x003C (size: 0x4)
    float FrameRateDuration;                                                          // 0x0040 (size: 0x4)
    float MaxWaitTime;                                                                // 0x0044 (size: 0x4)
    TArray<FWrestlerPerformanceCameraInfo> PerformanceCameraEntries;                  // 0x0048 (size: 0x10)

}; // Size: 0x58

class UWrestlerPersistenceComponentBreakable : public UHeraPersistenceComponentBool
{
}; // Size: 0xA0

class UWrestlerPersistenceComponentItemState : public UHeraPersistenceComponentInt
{
    FWrestlerPersistenceComponentItemStateOnItemStateChanged OnItemStateChanged;      // 0x00A0 (size: 0x10)
    void WrestlerItemStateDelegate(EItemState InItemState);

    void SetItemState(EItemState InValue);
}; // Size: 0xB0

class UWrestlerPersistentAbilityTagComponent : public UHeraPersistenceComponentBase
{
    FGameplayTagContainer TrackedTags;                                                // 0x00A0 (size: 0x20)
    TMap<class FGameplayTag, class UHeraMissionObjective*> GameplayEventObjectives;   // 0x00C0 (size: 0x50)

}; // Size: 0x110

class UWrestlerPlatformActivitySubsystem : public UGameInstanceSubsystem
{

    void StartActivity(FString ActivityId, FString EndActivityId);
    void ResumeActivity(FString ActivityId);
    void ResetAllActiveActivities();
    FString GetPreviousActivityID();
    FString GetCurrentActivityID();
    void EndActivity(FString ActivityId, const bool bSuccess);
    void ActivityAvailabilityChange(FString ActivityId, bool bEnabled);
}; // Size: 0xE0

class UWrestlerPlatformEmulationSettings : public UDeveloperSettingsBackedByCVars
{
    FGameplayTagContainer AdditionalPlatformTraitsToEnable;                           // 0x0038 (size: 0x20)
    FGameplayTagContainer AdditionalPlatformTraitsToSuppress;                         // 0x0058 (size: 0x20)
    FName PretendPlatform;                                                            // 0x0078 (size: 0x8)
    FName PretendBaseDeviceProfile;                                                   // 0x0080 (size: 0x8)
    bool bApplyFrameRateSettingsInPIE;                                                // 0x0088 (size: 0x1)
    bool bApplyFrontEndPerformanceOptionsInPIE;                                       // 0x0089 (size: 0x1)
    bool bApplyDeviceProfilesInPIE;                                                   // 0x008A (size: 0x1)

    TArray<FName> GetKnownPlatformIds();
    TArray<FName> GetKnownDeviceProfiles();
}; // Size: 0x90

class UWrestlerPlatformSettings : public UDeveloperSettingsBackedByCVars
{
    FPerPlatformSettings PerPlatformSettings;                                         // 0x0038 (size: 0x10)
    TArray<int32> DesktopFrameRateLimits;                                             // 0x0048 (size: 0x10)
    TSoftObjectPtr<UHeraPropertyFloat> OverallVolume;                                 // 0x0058 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> DialogueVolume;                                // 0x0080 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> MusicVolume;                                   // 0x00A8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> AllSoundFXVolume;                              // 0x00D0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> AmbientSoundFXVolume;                          // 0x00F8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> UISoundFXVolume;                               // 0x0120 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> DynamicRange;                                    // 0x0148 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> DialogueBoost;                                   // 0x0170 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> PanningRule;                                     // 0x0198 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> MonoAudio;                                      // 0x01C0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> AudioBalance;                                  // 0x01E8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> HighFrequencyCutoff;                             // 0x0210 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> LowFrequencyCutoff;                              // 0x0238 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> VibrationAmount;                               // 0x0260 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> PlayerDifficultyProperty;                        // 0x0288 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> SubtitlesOn;                                    // 0x02B0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> SubtitlesSize;                                   // 0x02D8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> SubtitlesBackgroundAlpha;                      // 0x0300 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> CloseCaptionOn;                                 // 0x0328 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> CloseCaptionSizeProperty;                        // 0x0350 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> CloseCaptionAlpha;                             // 0x0378 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyFloat> CameraMovementReductionProperty;               // 0x03A0 (size: 0x28)

}; // Size: 0x3C8

class UWrestlerPlaySequenceAutomataTask : public UHeraPlaySequenceAutomataTask
{
    EWrestlerCutsceneType CutsceneType;                                               // 0x0130 (size: 0x1)
    FGameplayTagContainer AbilitiesToCancel;                                          // 0x0138 (size: 0x20)
    FCharacterSequenceData PlayerSequenceData;                                        // 0x0160 (size: 0x80)

}; // Size: 0x1E0

class UWrestlerPlayerActionAssetMap : public UHeraDataAsset
{
    TMap<class FString, class TSoftObjectPtr<UInputAction>> ActionsMapAsset;          // 0x0030 (size: 0x50)

}; // Size: 0x80

class UWrestlerPlayerCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsPlayerCharacterOfClan(const class UObject* InWorldContextObject, EPlayerClan InClan);
    bool IsPlayerCharacterMalkavian(const class UObject* InWorldContextObject);
    void GetPlayerFootstepNoiseReportRangeAndVolume(const class AWrestlerCharacterBase* InCharacter, float& OutRange, float& OutVolume, const class UObject* InWorldContextObject);
    class AWrestlerPlayerStateInGame* GetPlayerCharacterStateInGameChecked(const class UObject* InWorldContextObject);
    class AWrestlerPlayerStateInGame* GetPlayerCharacterStateInGame(const class UObject* InWorldContextObject);
    class AWrestlerCharacter* GetPlayerCharacterChecked(const class UObject* InWorldContextObject);
    class AWrestlerCharacter* GetPlayerCharacter(const class UObject* InWorldContextObject);
}; // Size: 0x28

class UWrestlerPlayerCharacterSettings : public UWrestlerSettingsBase
{
    TSoftObjectPtr<UWrestlerDataAsset_PlayableCharacters> PlayableCharacters;         // 0x0048 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyGameplayTag> PlayerCharacterProperty;                 // 0x0070 (size: 0x28)
    TSoftObjectPtr<UWrestlerPlayerNoiseReportDataAsset> NoiseReportDataAsset;         // 0x0098 (size: 0x28)
    TSoftObjectPtr<UWrestlerPlayerDifficulty> PlayerDifficultyDataAsset;              // 0x00C0 (size: 0x28)
    class UWrestlerDataAsset_PlayableCharacters* PlayableCharactersInstance;          // 0x00E8 (size: 0x8)
    TSet<FGameplayAttribute> PlayerAttributesToSerialise;                             // 0x00F0 (size: 0x50)
    float MinimumPlayerHealth;                                                        // 0x0140 (size: 0x4)

    class UWrestlerPlayerDifficulty* GetPlayerDifficultyDataAsset();
    TSoftObjectPtr<UHeraPropertyGameplayTag> GetPlayerCharacterProperty();
    TSet<FGameplayAttribute> GetPlayerAttributesToSerialise();
    class UWrestlerDataAsset_PlayableCharacters* GetPlayableCharacters();
    class UWrestlerPlayerNoiseReportDataAsset* GetNoiseReportDataAsset();
    float GetMinimumPlayerHealth();
    class UWrestlerPlayerCharacterSettings* Get(class UObject* InWorldContextObject);
}; // Size: 0x148

class UWrestlerPlayerCharacterSettingsPerUser : public UWrestlerSettingsBase
{

    bool IsPlayableCharacterOverridden();
}; // Size: 0x48

class UWrestlerPlayerClan : public UHeraDataAsset
{
    EPlayerClan EnumValue;                                                            // 0x0030 (size: 0x1)
    FText Name;                                                                       // 0x0038 (size: 0x18)
    FText PassiveDescription;                                                         // 0x0050 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0068 (size: 0x8)
    class UDataTable* ClanAbilities;                                                  // 0x0070 (size: 0x8)
    TSubclassOf<class UWrestlerGameplayAbility_Passive> PassiveAbility;               // 0x0078 (size: 0x8)
    TSubclassOf<class UWrestlerGameplayEffect> Attributes;                            // 0x0080 (size: 0x8)
    bool bAbilitiesInNarrativeMode;                                                   // 0x0088 (size: 0x1)

}; // Size: 0x90

class UWrestlerPlayerCursorWidget : public UWrestlerBaseWidget
{
    class UWrestlerMarkerDescriptionWidget* MarkerDescription;                        // 0x02C8 (size: 0x8)

}; // Size: 0x2D8

class UWrestlerPlayerDifficulty : public UHeraDataAsset
{
    TSoftObjectPtr<UHeraPropertyInt> PlayerDifficulty;                                // 0x0030 (size: 0x28)
    TMap<class EWrestlerPlayerDifficulty, class FDifficulty> Difficulty;              // 0x0058 (size: 0x50)

    void SetDifficulty(EWrestlerPlayerDifficulty InDifficulty);
    EWrestlerPlayerDifficulty GetDifficulty();
}; // Size: 0xA8

class UWrestlerPlayerMovementDataAsset : public UHeraDataAsset
{
    float JumpSpeed;                                                                  // 0x0030 (size: 0x4)
    float GravityScale;                                                               // 0x0034 (size: 0x4)
    float MaxAcceleration;                                                            // 0x0038 (size: 0x4)
    float BrakingFriction;                                                            // 0x003C (size: 0x4)
    float AirControl;                                                                 // 0x0040 (size: 0x4)
    bool bCanCrouch;                                                                  // 0x0044 (size: 0x1)
    bool bCanJump;                                                                    // 0x0045 (size: 0x1)
    float HeavyFallSpeedThreshold;                                                    // 0x0048 (size: 0x4)
    float MaxHeightForFloorCast;                                                      // 0x004C (size: 0x4)

}; // Size: 0x50

class UWrestlerPlayerNoiseReportDataAsset : public UHeraDataAsset
{
    float NoiseRangeWalking;                                                          // 0x0030 (size: 0x4)
    float NoiseRangeSprinting;                                                        // 0x0034 (size: 0x4)
    float NoiseRangeStealth;                                                          // 0x0038 (size: 0x4)
    float NoiseVolumeWalking;                                                         // 0x003C (size: 0x4)
    float NoiseVolumeSprinting;                                                       // 0x0040 (size: 0x4)
    float NoiseVolumeStealth;                                                         // 0x0044 (size: 0x4)
    float FeedNoiseRange;                                                             // 0x0048 (size: 0x4)
    float FeedNoiseVolume;                                                            // 0x004C (size: 0x4)

}; // Size: 0x50

class UWrestlerPlayerSetup : public UHeraConfigurationAsset
{
    FWrestlerPawnParms Setup;                                                         // 0x0030 (size: 0x30)

}; // Size: 0x60

class UWrestlerPlayerTypeDefinition : public UObject
{
    FGameplayTag CharacterTag;                                                        // 0x0028 (size: 0x8)
    TSoftClassPtr<AWrestlerCharacter> CharacterClass;                                 // 0x0030 (size: 0x28)
    TSoftObjectPtr<UWrestlerDefaultAbilities> DefaultAbilities;                       // 0x0058 (size: 0x28)

}; // Size: 0x80

class UWrestlerPointOfInterestWaypoint : public UWrestlerWaypointIndicator
{
    TSoftObjectPtr<UImage> WaypointImage;                                             // 0x02F0 (size: 0x28)
    TMap<class FGameplayTag, class TSoftObjectPtr<UTexture2D>> WaypointsDisplayData;  // 0x0318 (size: 0x50)

}; // Size: 0x368

class UWrestlerPropControlComponet : public UActorComponent
{
    FWrestlerPropControlComponetOnLevelStreamedOut OnLevelStreamedOut;                // 0x00A0 (size: 0x10)
    void OnLevelStreamSignature();
    FWrestlerPropControlComponetOnLevelStreamedIn OnLevelStreamedIn;                  // 0x00B0 (size: 0x10)
    void OnLevelStreamSignature();
    FWrestlerPropControlComponetOnLevelChanged OnLevelChanged;                        // 0x00C0 (size: 0x10)
    void OnLevelChangedSignature(bool IsPersistantLevel);
    float FloorLineTraceDistance;                                                     // 0x00D0 (size: 0x4)
    bool DebugLineTrace;                                                              // 0x00D4 (size: 0x1)
    class UMeshComponent* TargetMesh;                                                 // 0x00E8 (size: 0x8)
    TWeakObjectPtr<class ULevelStreaming> CurrentStreamingLevel;                      // 0x00F0 (size: 0x8)

    void OnStreamingLevelUnload();
    void OnStreamingLevelLoad();
    void OnComponentSleep(class UPrimitiveComponent* SleepingComponent, FName BoneName);
}; // Size: 0xF8

class UWrestlerPropertyLibrary : public UWrestlerAbilityFunctionLibrary
{

    TMap<FString, float> GetAllPublicFloatProperties(class UObject* Object);
}; // Size: 0x28

class UWrestlerPropsRemovedProcessor : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerQuestButtonWidget : public UWrestlerBaseWidget
{
    bool bCanInteractWhenMasqueradeBroken;                                            // 0x02C8 (size: 0x1)
    class UButton* ButtonBody;                                                        // 0x02F0 (size: 0x8)
    bool bWasMasqueradeBroken;                                                        // 0x02F8 (size: 0x1)

    void ToggleQuestIconVisibility(bool bInMakeVisible);
    void ToggleMasqueradeMode(bool bNewMasqueradeMode);
    void SetButtonTitle(const FText& InQuesTitle);
    void OnButtonInteraction();
    void OnButtonFocus();
    class UButton* GetButtonBody();
}; // Size: 0x300

class UWrestlerQuestContainerWidget : public UWrestlerBaseWidget
{
    int32 InitialPoolSize;                                                            // 0x02C8 (size: 0x4)
    TSubclassOf<class UWrestlerQuestButtonWidget> QuestButtonClass;                   // 0x02D0 (size: 0x8)
    bool bStartWithDeployedScrollIfHasActiveQuest;                                    // 0x02D8 (size: 0x1)
    bool bShowIconOnQuestButtons;                                                     // 0x02D9 (size: 0x1)
    bool bHaveInteractableButtons;                                                    // 0x02DA (size: 0x1)
    bool bContainsMasqueradeQuest;                                                    // 0x02DB (size: 0x1)
    bool bHideQuestsIfMasqueradeIsBroken;                                             // 0x02DC (size: 0x1)
    class UVerticalBox* QuestVBox;                                                    // 0x02E0 (size: 0x8)
    TMap<class UWrestlerQuestButtonWidget*, class FGameplayTag> QuestButtonsAndGT;    // 0x02E8 (size: 0x50)
    TArray<class UWrestlerQuestButtonWidget*> QuestButtonsPool;                       // 0x0338 (size: 0x10)
    class UWrestlerQuestScreenWidget* QuestScreenReference;                           // 0x0348 (size: 0x8)
    class UWidget* ActiveQuestWidget;                                                 // 0x0350 (size: 0x8)
    int32 StackCount;                                                                 // 0x0358 (size: 0x4)
    bool bIsScrollDeployed;                                                           // 0x035C (size: 0x1)
    bool bHasActiveQuest;                                                             // 0x035D (size: 0x1)
    bool bIsMasqueradeBroken;                                                         // 0x035E (size: 0x1)
    class UButton* ButtonBody;                                                        // 0x0360 (size: 0x8)
    FMargin QuestButtonPadding;                                                       // 0x0368 (size: 0x10)

    void UpdateContainerVisuals();
    void OnQuestButtonInteraction(class UWrestlerQuestButtonWidget* InInteractedQuestButton);
    void OnQuestButtonFocused(class UWrestlerQuestButtonWidget* InFocusedQuestButton);
    void OnMasqueradeBroken();
    class UWidget* GetLastValidQuestButton();
    class UButton* GetButtonBody();
}; // Size: 0x380

class UWrestlerQuestData : public UHeraDataAsset
{
    FGameplayTag QuestTag;                                                            // 0x0030 (size: 0x8)
    FText QuestTitle;                                                                 // 0x0038 (size: 0x18)
    TMap<class FString, class FText> QuestDescriptions;                               // 0x0050 (size: 0x50)
    TSoftObjectPtr<UTexture2D> QuestIcon;                                             // 0x00A0 (size: 0x28)
    class UHeraDialogueInfo* QuestInkData;                                            // 0x00C8 (size: 0x8)
    class UHeraPropertyStateTrackingList* ListVariable;                               // 0x00D0 (size: 0x8)
    TMap<class FString, class FWrestlerQuestObjective> QuestObjectives;               // 0x00D8 (size: 0x50)
    bool bRecursiveDataLayerActivation;                                               // 0x0128 (size: 0x1)
    TArray<TSoftObjectPtr<UDataLayerAsset>> GameplayDataLayers;                       // 0x0130 (size: 0x10)
    class UHeraPropertyString* CurrentObjectiveVariable;                              // 0x0140 (size: 0x8)

    TArray<FString> GetQuestObjectivesList();
}; // Size: 0x148

class UWrestlerQuestEntryWidget : public UWrestlerBaseWidget
{
    class UTextBlock* QuestNameText;                                                  // 0x02C8 (size: 0x8)
    class UTextBlock* QuestCurrentDescription;                                        // 0x02D0 (size: 0x8)
    class UScrollBox* ObjectivesSB;                                                   // 0x02D8 (size: 0x8)
    FMargin QuestEntryPadding;                                                        // 0x02E0 (size: 0x10)
    int32 InitialPoolSize;                                                            // 0x02F0 (size: 0x4)
    TSubclassOf<class UWrestlerQuestObjectiveWidget> QuestObjectiveWidgetClass;       // 0x02F8 (size: 0x8)
    bool bShowOptionalObjectives;                                                     // 0x0300 (size: 0x1)
    bool bShowLastDescription;                                                        // 0x0301 (size: 0x1)
    TArray<class UWrestlerQuestObjectiveWidget*> QuestOptionsPool;                    // 0x0308 (size: 0x10)

}; // Size: 0x320

class UWrestlerQuestMapMarkerWidget : public UWrestlerMapMarkerWidget
{
}; // Size: 0x510

class UWrestlerQuestMarkersPoolWidget : public UWrestlerMapMarkersPoolWidget
{
    TMap<class UObject*, class FGameplayTag> ObjectWithQuestTag;                      // 0x0498 (size: 0x50)
    TMap<class FGameplayTag, class UWrestlerMapMarkerWidget*> TagAndMarker;           // 0x04E8 (size: 0x50)

}; // Size: 0x538

class UWrestlerQuestObjectiveWidget : public UWrestlerBaseWidget
{
    int32 InitialPoolSize;                                                            // 0x02C8 (size: 0x4)
    TSubclassOf<class UWrestlerBaseWidget> OptionalTextClass;                         // 0x02D0 (size: 0x8)
    FMargin OptionalQuestEntryPadding;                                                // 0x02D8 (size: 0x10)
    class UVerticalBox* OptionalObjectivesVB;                                         // 0x02E8 (size: 0x8)
    TArray<class UWrestlerBaseWidget*> OptionalObjectivesPool;                        // 0x02F0 (size: 0x10)

    void SetObjectiveData(const FText& InObjectiveText, const TArray<FText>& InOptionalObjectiveTexts);
}; // Size: 0x308

class UWrestlerQuestProgressComponent : public UActorComponent
{
    TSubclassOf<class UHeraBaseWidget> QuestProgressWidgetClass;                      // 0x00A0 (size: 0x8)
    FName QuestProgressWidgetSlotName;                                                // 0x00A8 (size: 0x8)
    class UHeraPropertyGameplayTag* ActiveQuestTagProperty;                           // 0x00B0 (size: 0x8)
    FWrestlerQuestProgressComponentOnNewActiveQuestSetDelegate OnNewActiveQuestSetDelegate; // 0x00E8 (size: 0x10)
    void WrestlerOnNewActiveQuestSetDelegate(FGameplayTag ActivatedQuest);
    TArray<FWrestlerOpenQuestData> OpenQuestsData;                                    // 0x0198 (size: 0x10)
    TMap<class FGameplayTag, class AWrestlerWaypointSplineActor*> RegisteredPathForQuest; // 0x01B8 (size: 0x50)

    void WrestlerOnNewActiveQuestSetDelegate__DelegateSignature(FGameplayTag ActivatedQuest);
    void SetWaypointForCurrentObjective(class UObject* InActorToTag);
    void SetQuestObjectives(FGameplayTag InQuestTag, const TArray<FString>& InObjectives);
    void SetObjectiveTimerFailed(bool bInFailed);
    void SetNewActiveQuest(FGameplayTag InNewActiveQuestGT);
    void SetCurrentObjectiveForQuest(FGameplayTag InQuestTag, FString InObjective);
    void ResetTransientData();
    void RemoveQuestObjectives(FGameplayTag InQuestTag, const TArray<FString>& InObjectives);
    bool OpenNewQuestWithInitialObjective(class UWrestlerQuestData* InNewQuest, FString InInitialObjective, const TArray<FString>& InAdditionalQuestObjectives, bool bSetAsActiveQuest);
    bool OpenNewQuest(class UWrestlerQuestData* InNewQuest, const TArray<FString>& InAdditionalQuestObjectives, bool bSetAsActiveQuest);
    void OnWaypointAdded(FString InTag, class UObject* InObject);
    void OnMasqueradeLevelChange(int32 InNewMasqueradeLevel);
    void MarkQuestComplete(class UWrestlerQuestData* Quest, class UWrestlerQuestData* InNewActiveQuest);
    bool HasValidActiveQuest();
    TArray<FGameplayTag> GetOpenQuestTags();
    bool GetObjectiveTimerFailed();
    TArray<FGameplayTag> GetCompletedQuestTags();
    FGameplayTag GetActiveQuestTag();
    void EnableTimer(class UHeraPropertyFloat* InTimer, FText InTextToShow);
    void EnableObjectiveCounter(class UHeraPropertyInt* InPropertyToTrack, FText InTextToDisplay, int32 InTotalCount);
    void DisableTimer();
    void DisableCounter();
    void ClearActiveQuest();
    void AddQuestObjectives(FGameplayTag InQuestTag, const TArray<FString>& InObjectives);
}; // Size: 0x210

class UWrestlerQuestProgressWidget : public UWrestlerBaseWidget
{
    class UTextBlock* QuestTitleText;                                                 // 0x02C8 (size: 0x8)
    class UCommonRichTextBlock* QuestDescriptionText;                                 // 0x02D0 (size: 0x8)
    class UCommonRichTextBlock* QuestDescriptionOptionalText;                         // 0x02D8 (size: 0x8)
    class UTextBlock* QuestCounterText;                                               // 0x02E0 (size: 0x8)
    class UTextBlock* QuestTimerText;                                                 // 0x02E8 (size: 0x8)
    bool bRemoveCounter;                                                              // 0x02F0 (size: 0x1)
    bool bRemoveTimer;                                                                // 0x02F1 (size: 0x1)
    bool bUseLegacyQuestData;                                                         // 0x02F2 (size: 0x1)
    bool bUseLegacyQuestDataIfNoActiveQuest;                                          // 0x02F3 (size: 0x1)
    class UHeraPropertyInt* CounterPropertyToTrack;                                   // 0x03A0 (size: 0x8)
    class UHeraPropertyFloat* TimerPropertyToTrack;                                   // 0x03C8 (size: 0x8)

    void OnNewQuestAnim();
    void OnNewObjectiveAnim();
    void OnNewActiveQuestSet(FGameplayTag InNewActiveQuestTag);
    void OnCompleteQuestAnim();
    void OnCompleteObjectiveAnim();
    void FinishProcessingQuestUpdate();
}; // Size: 0x3F0

class UWrestlerQuestScreenWidget : public UWrestlerRPGMenuTabWidget
{
    FDataTableRowHandle ShowFocusedQuestInputActionData;                              // 0x0490 (size: 0x10)
    class UWrestlerQuestContainerWidget* MainQuestContainer;                          // 0x04A0 (size: 0x8)
    class UWrestlerQuestContainerWidget* SideQuestContainer;                          // 0x04A8 (size: 0x8)
    class UWrestlerQuestContainerWidget* CompletedQuestContainer;                     // 0x04B0 (size: 0x8)
    class UWrestlerQuestEntryWidget* SelectedQuestEntry;                              // 0x04B8 (size: 0x8)
    class UWrestlerQuestButtonWidget* CurrentlyFocusedButton;                         // 0x04C0 (size: 0x8)
    class UWrestlerQuestContainerWidget* CurrentlyInspectedContainer;                 // 0x04C8 (size: 0x8)
    class UScrollBox* QuestsScrollBox;                                                // 0x04D0 (size: 0x8)
    bool bWasMasqueradeBroken;                                                        // 0x04D8 (size: 0x1)
    bool bIsMapScreenAvailable;                                                       // 0x04D9 (size: 0x1)
    TMap<class FGameplayTag, class FWrestlerOpenQuestData> OpenQuestsData;            // 0x04E0 (size: 0x50)
    class UWrestlerQuestContainerWidget* ContainerWithActiveQuest;                    // 0x0530 (size: 0x8)
    class UWidget* CurrentlyFocusedQuestButton;                                       // 0x0550 (size: 0x8)

    void ShowFocusedQuestonMap();
    void OnQuestSelected(class UWrestlerQuestContainerWidget* InQuestContainer, const FGameplayTag& InQuestGT);
    void OnQuestFocused(const FGameplayTag& InQuestGT, const class UWrestlerQuestContainerWidget* InQuestContainer);
}; // Size: 0x560

class UWrestlerRPGLayout : public UHeraActivatableWidget
{
    FDataTableRowHandle IncreaseInputActionData;                                      // 0x0470 (size: 0x10)
    FDataTableRowHandle DecreaseInputActionData;                                      // 0x0488 (size: 0x10)
    FDataTableRowHandle PIEBackInputActionData;                                       // 0x04A0 (size: 0x10)
    FDataTableRowHandle AltBackInputActionData;                                       // 0x04B8 (size: 0x10)

    void UnregisterBackAction();
    void RegisterBackAction();
    void BP_OnIncreaseTabIndex();
    void BP_OnDecreaseTabIndex();
}; // Size: 0x4D0

class UWrestlerRPGMenu : public UWrestlerMenu
{
    TArray<FWrestlerRPGMenuTabData> RPGMenuData;                                      // 0x0300 (size: 0x10)
    TSubclassOf<class UHeraButtonBase> TabButtonClass;                                // 0x0310 (size: 0x8)
    class UWrestlerRPGMenuSelectorWidget* TabSelector;                                // 0x0318 (size: 0x8)
    class UWrestlerRPGMenuContainerWidget* TabContainer;                              // 0x0320 (size: 0x8)
    EWrestlerRPGMenuTabID EditorTabFocus;                                             // 0x0328 (size: 0x1)
    bool bHasPopupOpen;                                                               // 0x0329 (size: 0x1)
    class UWidget* FocusTargetButton;                                                 // 0x0330 (size: 0x8)
    TMap<EWrestlerRPGMenuTabID, int32> TabIDAndIndex;                                 // 0x0338 (size: 0x50)

    void UpdateTabsVisibility();
    void SetTabAvailable(const EWrestlerRPGMenuTabID& InTabID, bool InState);
    void OpenTabByID(const EWrestlerRPGMenuTabID& InTabID);
    void OpenFirstTab();
    void OnWidgetIndexChanged(int32 OldIndex, int32 NewIndex);
    void OnCategoryButtonPressed(class UHeraButtonBase* InWidget);
    void IncreaseWidgetIndex();
    class UWrestlerRPGMenuTabWidget* GetTabByID(const EWrestlerRPGMenuTabID& InTabID);
    void DecreaseWidgetIndex();
    void ConfirmTabSwitching();
}; // Size: 0x3A0

class UWrestlerRPGMenuButton : public UWrestlerBaseWidget
{
    class UWidgetSwitcher* ButtonSwitcher;                                            // 0x02C8 (size: 0x8)
    class UWidget* TabWidget;                                                         // 0x02D0 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x02D8 (size: 0x8)
    class UButton* ButtonBody;                                                        // 0x02E0 (size: 0x8)
    FString Label;                                                                    // 0x02E8 (size: 0x10)
    FSlateColor HighlightColour;                                                      // 0x02F8 (size: 0x14)
    FButtonStyle HighlightStyle;                                                      // 0x0310 (size: 0x3F0)
    FSlateColor NormalColour;                                                         // 0x0700 (size: 0x14)
    FButtonStyle NormalStyle;                                                         // 0x0720 (size: 0x3F0)

    void UnselectWidget();
    void SwitchWidget();
    void SelectWidget();
}; // Size: 0xB10

class UWrestlerRPGMenuContainerWidget : public UWrestlerBaseWidget
{
    class UWidgetSwitcher* MenuSwitcher;                                              // 0x02C8 (size: 0x8)
    TMap<int32, UWrestlerRPGMenuTabWidget*> IndexAndTabReference;                     // 0x02D0 (size: 0x50)

    int32 GetActiveWidgetIndex();
    class UWrestlerRPGMenuTabWidget* GetActiveWidget();
}; // Size: 0x320

class UWrestlerRPGMenuNavigableWidget : public UWrestlerBaseWidget
{
    class UWrestlerNavigableWidgetDataAsset* NavigableWidgetDataAsset;                // 0x02C8 (size: 0x8)
    FWrestlerNavigableWidgetData DefaultNavigableWidgetParams;                        // 0x02D0 (size: 0x198)
    bool bDebugMouseMovement;                                                         // 0x0468 (size: 0x1)
    bool bHasCustomSnap;                                                              // 0x0469 (size: 0x1)
    class UCanvasPanel* TranslationContainer;                                         // 0x0470 (size: 0x8)
    class UCanvasPanel* ScaleContainer;                                               // 0x0478 (size: 0x8)
    class UCanvasPanel* CursorContainer;                                              // 0x0480 (size: 0x8)
    class UCanvasPanel* ContainerToMove;                                              // 0x0488 (size: 0x8)
    TArray<class UUserWidget*> AllInteractableMarkers;                                // 0x0490 (size: 0x10)
    class UUserWidget* ClosestMarker;                                                 // 0x04A0 (size: 0x8)
    class UUserWidget* HoveredMarker;                                                 // 0x04A8 (size: 0x8)
    float RTPCZoomValue;                                                              // 0x04B0 (size: 0x4)
    float RTPCMovementValue;                                                          // 0x04B4 (size: 0x4)

    void SnapToDesiredMarker(class UUserWidget* InMarker);
    void SnapToClosestMarker();
    void OnZoomValueChanged(bool bIsZoomingIn);
    void OnZoomStopped();
    void OnRTPCZoomValueChange();
    void OnRTPCMovementValueChange();
    void OnNewMarkerFound();
    void OnMovementValueChanged();
    void OnMovementStopped();
    void OnMarkerLost();
    void OnCursorMovement();
    void InitializeNavigableWidget(const FVector2D& InNewInitialLocation);
    void DeactivateNavigableWidget();
    void AddNewInteractableMarkers(const TArray<class UUserWidget*>& InNewInteractableMarkersList);
    void ActivateNavigableWidget();
}; // Size: 0x6F8

class UWrestlerRPGMenuSelectorWidget : public UWrestlerBaseWidget
{
    class UHeraButtonBase* LeftAction;                                                // 0x02C8 (size: 0x8)
    class UHeraButtonBase* RightAction;                                               // 0x02D0 (size: 0x8)
    FMargin MarginPerElementInButtonTab;                                              // 0x02D8 (size: 0x10)
    class UScrollBox* ButtonBox;                                                      // 0x02E8 (size: 0x8)
    TMap<int32, UHeraButtonBase*> IndexAndTabButtonReference;                         // 0x02F0 (size: 0x50)

    int32 GetTabIndex(class UHeraButtonBase* InWidget);
    class UHeraButtonBase* GetTabButton(int32 InIndex);
}; // Size: 0x340

class UWrestlerRPGMenuSettingsTabWidget : public UWrestlerRPGMenuTabWidget
{
    class UWrestlerSettingScreen* SettingScreen;                                      // 0x0490 (size: 0x8)

}; // Size: 0x498

class UWrestlerRPGMenuTabButtonWidget : public UCommonButtonBase
{
    class UCommonTextBlock* TabButtonLabel;                                           // 0x1580 (size: 0x8)

    void ReceiveOnSynchronizeProperties();
    void OnRPGButtonTabEnabled();
    void OnRPGButtonTabDisabled();
}; // Size: 0x1590

class UWrestlerRPGMenuTabWidget : public UCommonActivatableWidget
{
    FWrestlerRPGMenuTabWidgetConfirmationEnded ConfirmationEnded;                     // 0x0410 (size: 0x10)
    void WrestlerRpgMenuTabOnConfirmationEnded();
    class UWidgetSwitcher* TapSwitcher;                                               // 0x0420 (size: 0x8)
    class UScrollBox* ButtonScrollBox;                                                // 0x0428 (size: 0x8)
    class UHeraButtonBase* CurrentSelectedButton;                                     // 0x0430 (size: 0x8)
    class UCommonActivatableWidget* CurrentActiveTab;                                 // 0x0438 (size: 0x8)
    FDataTableRowHandle SubLayoutIncreaseInputActionData;                             // 0x0440 (size: 0x10)
    FDataTableRowHandle SubLayoutDecreaseInputActionData;                             // 0x0458 (size: 0x10)
    FDataTableRowHandle BackInputActionData;                                          // 0x0470 (size: 0x10)
    bool bRequiresConfirmationOnSwitching;                                            // 0x0484 (size: 0x1)

    void ShowTabSwitchConfirmation();
    bool ShouldShowNotificationIcon();
    void ResetCanSkipCutscene(FGameplayTag InMenuTag);
    void ReceiveOnSynchronizeProperties();
    void OnWidgetIndexChanged(int32 OldIndex, int32 NewIndex);
    void OnTabButtonPressed(class UHeraButtonBase* InWidget);
    bool IsRequiringConfirmationOnSwitching();
    void IncreaseSubtabIndex();
    class UWrestlerRPGMenu* GetRPGMenu();
    void DecreaseSubtabIndex();
    void ConfirmTabSwitching();
}; // Size: 0x490

class UWrestlerRadialDamageExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UWrestlerRadialMenu : public UPanelWidget
{
    bool bUseFixedAspectRatio;                                                        // 0x0198 (size: 0x1)
    float InitialRotation;                                                            // 0x019C (size: 0x4)
    float RingRadius;                                                                 // 0x01A0 (size: 0x4)
    float CoreRadius;                                                                 // 0x01A4 (size: 0x4)
    float ChildrenOffset;                                                             // 0x01A8 (size: 0x4)
    float ChildrenSizeScale;                                                          // 0x01AC (size: 0x4)
    TArray<FRadialMenuMeterialParamData> RadialMenuMaterialParams;                    // 0x01B0 (size: 0x10)
    float SelectBrushAngle;                                                           // 0x01C0 (size: 0x4)
    FSlateBrush RadialMenuBrush;                                                      // 0x01D0 (size: 0xD0)
    FSlateBrush SelectBrush;                                                          // 0x02A0 (size: 0xD0)
    FWrestlerRadialMenuOnActiveSlotChangedEvent OnActiveSlotChangedEvent;             // 0x0370 (size: 0x10)
    void OnRadialMenuActiveChanged();
    FWrestlerRadialMenuRadialMenuBrushDelegate RadialMenuBrushDelegate;               // 0x0380 (size: 0x10)
    FSlateBrush GetSlateBrush();
    FWrestlerRadialMenuSelectBrushDelegate SelectBrushDelegate;                       // 0x0390 (size: 0x10)
    FSlateBrush GetSlateBrush();
    FLinearColor ColorAndOpacity;                                                     // 0x03A0 (size: 0x10)
    FWrestlerRadialMenuColorAndOpacityDelegate ColorAndOpacityDelegate;               // 0x03B0 (size: 0x10)
    FLinearColor GetLinearColor();

}; // Size: 0x400

class UWrestlerRadialMenuSlot : public UPanelSlot
{
    FVector2D SlotSizeScale;                                                          // 0x0038 (size: 0x10)

}; // Size: 0x80

class UWrestlerRangedAttackConfig : public UWrestlerConfigDataAsset
{
    float AimOffset;                                                                  // 0x0030 (size: 0x4)
    float MissingOffset;                                                              // 0x0034 (size: 0x4)
    float WaitTimeBeforeMeleeAttack;                                                  // 0x0038 (size: 0x4)
    float DistanceThresholdToTurnMelee;                                               // 0x003C (size: 0x4)
    TMap<class FName, class FWrestlerRangedAttackEQSSettings> EnemyRangedAttackEQSParams; // 0x0040 (size: 0x50)
    float DefaultRangedGapCloseMinDistance;                                           // 0x0090 (size: 0x4)
    float DefaultRangedGapCloseMaxDistance;                                           // 0x0094 (size: 0x4)
    float TimeBeforeStartFire;                                                        // 0x0098 (size: 0x4)
    float TimeBeforeFiring;                                                           // 0x009C (size: 0x4)
    float GlintMaxLifetime;                                                           // 0x00A0 (size: 0x4)
    float GlintIntensity;                                                             // 0x00A4 (size: 0x4)
    float MinTimeBeforeRangedAttacks;                                                 // 0x00A8 (size: 0x4)
    float MaxTimeBeforeRangedAttacks;                                                 // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UWrestlerRangedProjectilePoolConfig : public UHeraDataAsset
{
    int32 InitialPoolSize;                                                            // 0x0030 (size: 0x4)
    ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;                     // 0x0034 (size: 0x1)
    TArray<TSoftClassPtr<AWrestlerRangedProjectile>> ProjectileTypes;                 // 0x0038 (size: 0x10)

}; // Size: 0x48

class UWrestlerRangedProjectilePoolSubsystem : public UWorldSubsystem
{
    TMap<class TSubclassOf<AWrestlerRangedProjectile>, class FRangedProjectilePool> ProjectileTypePool; // 0x0030 (size: 0x50)
    TArray<class AWrestlerRangedProjectile*> Projectiles;                             // 0x0080 (size: 0x10)
    ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;                     // 0x0091 (size: 0x1)

    class AWrestlerRangedProjectile* SpawnRangedProjectile(const class UObject* InWorldContextObject, const FRangedProjectileParams& InParams);
}; // Size: 0x98

class UWrestlerRangedWeaponInstance : public UWrestlerWeaponInstance
{
    float MaxDistanceBeforeRangedPositioning;                                         // 0x00A0 (size: 0x4)
    float MinDistanceBeforeMeleeAttack;                                               // 0x00A4 (size: 0x4)
    float MinRangedDistance;                                                          // 0x00A8 (size: 0x4)
    float MaxRangedDistance;                                                          // 0x00AC (size: 0x4)
    float TimeSinceRangedReposition;                                                  // 0x00B0 (size: 0x4)
    float TimeBeforeAim;                                                              // 0x00B4 (size: 0x4)
    TSubclassOf<class AWrestlerRangedProjectile> ProjectileClass;                     // 0x00B8 (size: 0x8)
    int32 MaxAmmo;                                                                    // 0x00C0 (size: 0x4)
    int32 ShotsPerBurst;                                                              // 0x00C4 (size: 0x4)
    float ShotFireRate;                                                               // 0x00C8 (size: 0x4)
    int32 ProjectilesPerShot;                                                         // 0x00CC (size: 0x4)
    float PerfectAccuracyPerProjectile;                                               // 0x00D0 (size: 0x4)
    float ProjectileSpeed;                                                            // 0x00D4 (size: 0x4)
    FGameplayTag DamageTag;                                                           // 0x00D8 (size: 0x8)
    float DamagePerProjectile;                                                        // 0x00E0 (size: 0x4)
    EWeaponInaccuracyConfigType InaccuracyType;                                       // 0x00E4 (size: 0x1)
    float MaxInaccuracyInDegrees;                                                     // 0x00E8 (size: 0x4)
    FRuntimeFloatCurve MaxInaccuracyPerDistance;                                      // 0x00F0 (size: 0x88)
    float SpreadExponent;                                                             // 0x0178 (size: 0x4)
    float MaxDamageRange;                                                             // 0x017C (size: 0x4)
    float AimDuration;                                                                // 0x0180 (size: 0x4)
    float TelegraphDuration;                                                          // 0x0184 (size: 0x4)
    float TelegraphVisualDuration;                                                    // 0x0188 (size: 0x4)
    float GlintIntensity;                                                             // 0x018C (size: 0x4)
    float TelegraphHUDEndDuration;                                                    // 0x0190 (size: 0x4)
    float PreEmptiveReloadTimer;                                                      // 0x0194 (size: 0x4)
    float MeleeAttackCooldownDuration;                                                // 0x0198 (size: 0x4)
    class UAkAudioEvent* AudioRangedWeaponFire;                                       // 0x01A0 (size: 0x8)
    class UAkAudioEvent* AudioRangedWeaponTail;                                       // 0x01A8 (size: 0x8)
    class UAkAudioEvent* AudioRangedWeaponFlyby;                                      // 0x01B0 (size: 0x8)
    class UAkAudioEvent* AudioRangedWeaponImpact;                                     // 0x01B8 (size: 0x8)
    class UAkAudioEvent* AudioRangedWeaponReload;                                     // 0x01C0 (size: 0x8)
    class UAkAudioEvent* AudioRangedWeaponMelee;                                      // 0x01C8 (size: 0x8)
    class UAkAudioEvent* AudioRangedWeaponAim;                                        // 0x01D0 (size: 0x8)
    FRotator AimRotation;                                                             // 0x01D8 (size: 0x18)

    void SetAimRotation(const FRotator& InAimRotation);
    void KickOffPreEmptiveReloadTimer();
    FTransform GetWeaponAimTransform();
    float GetTelegraphVisualDuration();
    float GetTelegraphHUDEndDuration();
    float GetTelegraphDuration();
    TSubclassOf<class AWrestlerRangedProjectile> GetProjectileClass();
    FVector GetMuzzleLocation();
    float GetGlintIntensity();
    bool GetEarlyReload();
    class UAkAudioEvent* GetAudioRangedWeaponTail();
    class UAkAudioEvent* GetAudioRangedWeaponReload();
    class UAkAudioEvent* GetAudioRangedWeaponMelee();
    class UAkAudioEvent* GetAudioRangedWeaponImpact();
    class UAkAudioEvent* GetAudioRangedWeaponFlyby();
    class UAkAudioEvent* GetAudioRangedWeaponFire();
    class UAkAudioEvent* GetAudioRangedWeaponAim();
    FRotator GetAimRotation();
    float GetAimDuration();
}; // Size: 0x200

class UWrestlerRefillBloodAutomataTask : public UHeraAutomataTask
{
    EWrestlerClanAbilityType AbilityType;                                             // 0x0088 (size: 0x1)

    void FillBloodToMax();
    bool CheckForMaxBloodPoints();
}; // Size: 0x90

class UWrestlerRouteFollowingComponent : public UActorComponent
{
    class AWrestlerBaseRoute* Route;                                                  // 0x00A0 (size: 0x8)

    void SetRoute(class AWrestlerBaseRoute* InRoute);
    class AWrestlerBaseRoute* GetRoute();
    class AWrestlerBasePathPoint* GetNextPathPoint();
    class AWrestlerBasePathPoint* GetCurrentPathPoint();
    class AWrestlerBasePathPoint* GetClosestPathPoint(FVector InLocation);
}; // Size: 0xB0

class UWrestlerSaveGameBase : public USaveGame
{
    int32 UserIndex;                                                                  // 0x0028 (size: 0x4)
    FString SaveSlotName;                                                             // 0x0030 (size: 0x10)
    FDateTime DateTimeStamp;                                                          // 0x0040 (size: 0x8)
    FString BuildVersion;                                                             // 0x0048 (size: 0x10)
    FText SaveGameTitle;                                                              // 0x0058 (size: 0x18)
    FText SaveGameDescription;                                                        // 0x0070 (size: 0x18)

}; // Size: 0x88

class UWrestlerSaveGameDummy : public UWrestlerSaveGameBase
{
}; // Size: 0x88

class UWrestlerSaveGameDummyToo : public UWrestlerSaveGameBase
{
}; // Size: 0x88

class UWrestlerSaveGameMetadata : public UWrestlerSaveGameBase
{
    FString LastLoadedSaveSlot;                                                       // 0x0088 (size: 0x10)
    TSet<FWrestlerMetadataData> MetaData;                                             // 0x0098 (size: 0x50)

}; // Size: 0xE8

class UWrestlerSaveGameV1 : public UWrestlerSaveGameBase
{
    FHeraAutomataSave AutomataData;                                                   // 0x0088 (size: 0x20)
    FHeraPropertyStorageData PropertyStorageData;                                     // 0x00A8 (size: 0x1E0)
    FWrestlerPlaythroughSaveData PlaythroughData;                                     // 0x0288 (size: 0x70)
    FWrestlerPlayerSaveData PlayerData;                                               // 0x02F8 (size: 0x98)
    FWrestlerLevelSaveData LevelData;                                                 // 0x0390 (size: 0x80)
    FWrestlerQuestProgressData QuestProgressData;                                     // 0x0410 (size: 0x58)
    FWrestlerObjectTagSaveData ObjectTaggingData;                                     // 0x0468 (size: 0x50)
    FWrestlerDialogueSaveDataV1 DialogueData;                                         // 0x04B8 (size: 0x50)
    FWrestlerUISaveData UIData;                                                       // 0x0508 (size: 0xA0)
    FWrestlerActorVisibilities ActorVisibilities;                                     // 0x05A8 (size: 0x50)

}; // Size: 0x5F8

class UWrestlerSaveGameV2 : public UWrestlerSaveGameBase
{
    FHeraAutomataSave AutomataData;                                                   // 0x0088 (size: 0x20)
    FHeraPropertyStorageData PropertyStorageData;                                     // 0x00A8 (size: 0x1E0)
    FWrestlerPlaythroughSaveData PlaythroughData;                                     // 0x0288 (size: 0x70)
    FWrestlerPlayerSaveData PlayerData;                                               // 0x02F8 (size: 0x98)
    FWrestlerLevelSaveData LevelData;                                                 // 0x0390 (size: 0x80)
    FWrestlerQuestProgressData QuestProgressData;                                     // 0x0410 (size: 0x58)
    FWrestlerObjectTagSaveData ObjectTaggingData;                                     // 0x0468 (size: 0x50)
    FWrestlerDialogueSaveDataV2 DialogueData;                                         // 0x04B8 (size: 0x50)
    FWrestlerUISaveData UIData;                                                       // 0x0508 (size: 0xA0)
    FWrestlerActorVisibilities ActorVisibilities;                                     // 0x05A8 (size: 0x50)

}; // Size: 0x5F8

class UWrestlerSavePerPlatformSettings : public UPlatformSettings
{
    int32 MaxSaveSize;                                                                // 0x0040 (size: 0x4)
    int32 TotalSaveSizeLimit;                                                         // 0x0044 (size: 0x4)
    FFilePath SaveGameIconPath;                                                       // 0x0048 (size: 0x10)

}; // Size: 0x58

class UWrestlerSaveSettingsGlobal : public UDeveloperSettings
{
    TSoftClassPtr<UWrestlerSaveGameBase> CurrentSaveGameClass;                        // 0x0038 (size: 0x28)
    FPerPlatformSettings PerPlatformSettings;                                         // 0x0060 (size: 0x10)

}; // Size: 0x70

class UWrestlerSaveSlotContainerWidget : public UHeraActivatableWidget
{
    TSubclassOf<class UWrestlerSaveSlotWidget> SaveSlotWidgetClass;                   // 0x0450 (size: 0x8)
    class UWrestlerSavedDataPromptWidget* SavedDataPrompt;                            // 0x0458 (size: 0x8)
    FWrestlerSaveSlotContainerWidgetOnConfirmationPromptRequired OnConfirmationPromptRequired; // 0x0460 (size: 0x10)
    void WrestlerOnConfirmationPromptRequested(EWrestlerConfirmationType ConfirmationType, FString SaveSlotName);
    class UScrollBox* ScrollBox;                                                      // 0x0470 (size: 0x8)
    class UWrestlerSaveSlotWidget* CurrentlyFocusedSlot;                              // 0x0478 (size: 0x8)
    FDataTableRowHandle DeleteInputActionData;                                        // 0x0480 (size: 0x10)
    FDataTableRowHandle ConfirmActionData;                                            // 0x0490 (size: 0x10)
    FWrestlerSaveSlotContainerWidgetOnSlotsEmptyEvent OnSlotsEmptyEvent;              // 0x04A0 (size: 0x10)
    void WrestlerSaveSlotsEvent();
    TArray<class UWrestlerSaveSlotWidget*> SaveSlots;                                 // 0x04C0 (size: 0x10)
    TMap<class UWrestlerSaveSlotWidget*, class FWrestlerSaveSlotPromptData> SaveSlotAndPromptData; // 0x04D0 (size: 0x50)

    void SetContainerMode(EWrestlerLoadSaveMode InNewMode);
    void OnSaveSlotWidgetMarkedForDeletion();
    void OnSaveSlotWidgetFocused(class UWrestlerSaveSlotWidget* InFocusedSlot);
    void OnSaveSlotWidgetClicked(class UWrestlerSaveSlotWidget* InClickedSlot);
    void OnSaveSlotWidgetActionRequired();
    void OnSaveSlotFocused(class UWrestlerSaveSlotWidget* InSaveSlotWidget);
    void OnSaveSlotClicked(class UWrestlerSaveSlotWidget* InSaveSlotWidget);
    void OnOverwriteSaveButtonPressed();
    void OnLoadSaveButtonPressed();
    void OnDeleteSaveButtonPressed();
    void OnConfirmedPrompt();
    bool OnCanceledPrompt();
    void LoadLastCheckpoint();
    EWrestlerLoadSaveMode GetContainerMode();
    void GatherSaveSlotsData();
    void FillScrollBar();
    void EnableSaveSlotContainer();
    void DisableSaveSlotContainer();
    void CallPopMenu();
}; // Size: 0x528

class UWrestlerSaveSlotWidget : public UHeraCommonUIBaseWidget
{
    FText AutoSaveLabel;                                                              // 0x0330 (size: 0x18)
    FWrestlerSaveSlotWidgetOnSaveSlotFocused OnSaveSlotFocused;                       // 0x0348 (size: 0x10)
    void WrestlerOnSaveSlotFocused(class UWrestlerSaveSlotWidget* InSaveSlotWidget);
    class UButton* Button;                                                            // 0x0368 (size: 0x8)
    class UTextBlock* TimestampText;                                                  // 0x0370 (size: 0x8)
    class UTextBlock* QuestName;                                                      // 0x0378 (size: 0x8)
    class UTextBlock* QuestDescription;                                               // 0x0380 (size: 0x8)
    class UTextBlock* SaveType;                                                       // 0x0388 (size: 0x8)

    void SetClanIcon(EPlayerClan InClan);
    void CallOnClick();
}; // Size: 0x3F0

class UWrestlerSaveSubsystem : public UGameInstanceSubsystem
{
    FWrestlerSaveSubsystemOnPreSave OnPreSave;                                        // 0x0060 (size: 0x10)
    void WrestlerOnPreSave();
    FWrestlerSaveSubsystemOnPostSave OnPostSave;                                      // 0x0070 (size: 0x10)
    void WrestlerOnPostSave(bool bInSuccess);

    void WrestlerOnPreSave__DelegateSignature();
    void WrestlerOnPostSave__DelegateSignature(bool bInSuccess);
    void SaveGameInMemory(EWrestlerSaveScope InSaveScope);
    void SaveGameAsync(FString InSaveSlot, EWrestlerSaveScope InSaveScope);
    void SaveGame(FString InSaveSlot, EWrestlerSaveScope InSaveScope);
    void SaveAutosaveAsync(EWrestlerSaveScope InSaveScope);
    void SaveAutosave(EWrestlerSaveScope InSaveScope);
    bool PlayerOwnsClanDlc();
    void NewGame(class UCommonLoadingScreenPreset* InLoadingScreenPreset);
    bool LoadGameIsPermitted(FString InSaveSlot);
    void LoadGameAsync(FString InSaveSlot);
    void LoadGame(FString InSaveSlot);
    void LoadAutosaveAsync();
    void LoadAutosave();
    bool IsSaveLoaded();
    bool IsSaveInProgress();
    bool IsLastLoadedSaveNameValid();
    bool HasAnySave();
    TArray<FString> GetSaveNames();
    TSet<FWrestlerMetadataData> GetSaveGamesMetadata();
    FString GetLastLoadedSaveSlot();
    bool DoesSaveExist(FString InSaveSlot);
    bool DoesAutosaveExist();
}; // Size: 0xA0

class UWrestlerSavedDataPromptWidget : public UWrestlerBaseWidget
{
    class UTexture2D* DefaulAreatTexture;                                             // 0x02C8 (size: 0x8)
    class UHeraButtonBase* OverwriteSaveButton;                                       // 0x02D0 (size: 0x8)
    class UHeraButtonBase* DeleteSaveButton;                                          // 0x02D8 (size: 0x8)
    class UHeraButtonBase* LoadSaveButton;                                            // 0x02E0 (size: 0x8)
    class UTextBlock* CurrentQuestNameText;                                           // 0x02E8 (size: 0x8)
    class UTextBlock* QuestDescriptionText;                                           // 0x02F0 (size: 0x8)
    class UTextBlock* LocationNameText;                                               // 0x02F8 (size: 0x8)
    class UTextBlock* PlayTimeText;                                                   // 0x0300 (size: 0x8)
    class UImage* AreaImage;                                                          // 0x0308 (size: 0x8)

    void ToggleDataPromptButtonsVisibility(EWrestlerSavedDataPromptMode InPromptMode);
}; // Size: 0x310

class UWrestlerSeamlessTransitionHelper : public USemalessTransitionHandler
{
}; // Size: 0x28

class UWrestlerSearchManager : public UTickableWorldSubsystem
{
    TArray<FWrestlerSearchTeam> SearchTeams;                                          // 0x0040 (size: 0x10)
    class UWrestlerStateTreeConfig* ConfigData;                                       // 0x0050 (size: 0x8)

    void SetAssignedSearchSpot(class AActor* InActor, FVector InSearchSpot);
    void RemoveActor(class AActor* InActor);
    bool IsTeamCaptain(class AActor* InActor);
    int32 GetNumSearchesLeft(class AActor* InActor);
    FVector GetAssignedSearchSpot(class AActor* InActor);
    void Death(class AActor* InActor);
    void CompletedSearch(class AActor* InActor);
    void BindActorDelegates(class AActor* InActor);
    void AddActor(class AActor* InActor);
}; // Size: 0x58

class UWrestlerSearchRouteManager : public UWorldSubsystem
{
    TMap<class AActor*, class FPrevAssignedSearchRoutes> ActiveActors;                // 0x0030 (size: 0x50)

    class AWrestlerSearchRoute* StartSearchRoute(class AActor* InActor, float InSearchRadius);
    void RemoveDeadActor(class AActor* InActor);
    bool HasRouteAssigned(class AActor* InActor);
    void FinishSearchRoute(class AActor* InActor);
    void ExitSearchState(class AActor* InActor);
    void BindActorDelegates(class AActor* InActor);
}; // Size: 0x80

class UWrestlerSequenceBlendAnimInstance : public UWrestlerAnimInstance
{

    void SequenceStarted();
    void SequenceEnded();
    void SequenceDataChanged(FCharacterSequenceData InNewValue);
    void SequenceBlendedOut();
}; // Size: 0x380

class UWrestlerSequenceBlendComponent : public UActorComponent
{
    FWrestlerSequenceBlendComponentOnSequenceBindingChanged OnSequenceBindingChanged; // 0x00A0 (size: 0x10)
    void WrestlerSequenceBindingEvent(bool IsBound);
    FWrestlerSequenceBlendComponentOnSequenceStarted OnSequenceStarted;               // 0x00B0 (size: 0x10)
    void WrestlerSequenceBlendEvent();
    FWrestlerSequenceBlendComponentOnSequenceEnded OnSequenceEnded;                   // 0x00C0 (size: 0x10)
    void WrestlerSequenceBlendEvent();
    FWrestlerSequenceBlendComponentOnSequenceDataChanged OnSequenceDataChanged;       // 0x00D0 (size: 0x10)
    void WrestlerSequenceBlendDataChanged(FCharacterSequenceData NewValue);

}; // Size: 0x170

class UWrestlerSequenceDataAsset : public UHeraDataAsset
{
    TMap<class FName, class FSequenceContainer> EnemyNameSequenceMap;                 // 0x0030 (size: 0x50)

    class ULevelSequence* GetSequenceForMassEntity(class AActor* InActor);
    class ULevelSequence* GetSequenceByEnemyName(FName InEnemyName);
}; // Size: 0x80

class UWrestlerSetEnemyRoutesAutomataTask : public UHeraAutomataTask
{
    TMap<class TSoftObjectPtr<AWrestlerAISpawner>, class TSoftObjectPtr<AWrestlerPatrolRoute>> EnemyRoutes; // 0x0088 (size: 0x50)

}; // Size: 0xD8

class UWrestlerSetQuestStatusAutomataTask : public UHeraAutomataTask
{
    class UWrestlerQuestData* QuestData;                                              // 0x0088 (size: 0x8)
    bool bOverrideInitialObjective;                                                   // 0x0090 (size: 0x1)
    FString OverrideInitialObjective;                                                 // 0x0098 (size: 0x10)
    TSet<FString> AdditionalObjectives;                                               // 0x00A8 (size: 0x50)

    TArray<FString> GetQuestObjectives();
}; // Size: 0xF8

class UWrestlerSetRechargeBloodAutomataTask : public UHeraAutomataTask
{
    bool bRechargeBlood;                                                              // 0x0088 (size: 0x1)

}; // Size: 0x90

class UWrestlerSettingAction_SafeZoneEditor : public UGameSettingAction
{
    class UWrestlerSettingValueScalarDynamic_SafeZoneValue* SafeZoneValueSetting;     // 0x01D8 (size: 0x8)

}; // Size: 0x1E0

class UWrestlerSettingScreen : public UGameSettingScreen
{
    FWrestlerSettingScreenSettingsConfirmationHandled SettingsConfirmationHandled;    // 0x0480 (size: 0x10)
    void WrestlerSettingsScreenSettingsConfirmationHandled(bool bConfirm);
    FWrestlerSettingScreenSettingsRestoreConfirmationHandled SettingsRestoreConfirmationHandled; // 0x0490 (size: 0x10)
    void WrestlerSettingsScreenSettingsConfirmationHandled(bool bConfirm);
    class UInputMappingContext* PlayerMappingContext;                                 // 0x04A0 (size: 0x8)
    class UControlsDisplayData* ControlsDisplayData;                                  // 0x04A8 (size: 0x8)
    FDataTableRowHandle BackInputActionData;                                          // 0x04B0 (size: 0x10)
    FDataTableRowHandle ApplyInputActionData;                                         // 0x04C0 (size: 0x10)
    FDataTableRowHandle CancelChangesInputActionData;                                 // 0x04D0 (size: 0x10)
    FDataTableRowHandle RestoreInputActionData;                                       // 0x04E0 (size: 0x10)
    FDataTableRowHandle EnterInputActionData;                                         // 0x04F0 (size: 0x10)
    FDataTableRowHandle ScrollInputNavigationtActionData;                             // 0x0500 (size: 0x10)
    FName SettingCollectionName;                                                      // 0x0550 (size: 0x8)

    void ShowSettingsConfirmationPopup();
    void ShowRestoreToDefaultPopup();
    void ResolveSelectedWidgetSetting(class UUserWidget* Widget);
    void RegisterTab(FName InSettingDevName);
    void RefreshAllInputEntries();
    void HandleSettingsResotreConfirmation();
    void HandleSettingsConfirmationPopup();
    void HandleSettingConfirmationHandled(bool bConfirm);
    void HandleRestoreSettingConfirmationHandled(bool bConfirm);
    FName GetSettingCollectionName();
}; // Size: 0x560

class UWrestlerSettingValueDiscrete_OverallQuality : public UGameSettingValueDiscrete
{
}; // Size: 0x1A8

class UWrestlerSettingValueDiscrete_Resolution : public UGameSettingValueDiscreteDynamic
{
}; // Size: 0x238

class UWrestlerSettingValueScalarDynamic_SafeZoneValue : public UGameSettingValueScalarDynamic
{
}; // Size: 0x250

class UWrestlerSettingsBase : public UDeveloperSettings
{
    FWrestlerManagedConfigAssets ManagedConfigAssets;                                 // 0x0038 (size: 0x10)

}; // Size: 0x48

class UWrestlerSettingsLocal : public UGameUserSettings
{
    float FrameRateLimit_InMenu;                                                      // 0x0148 (size: 0x4)
    float FrameRateLimit_WhenBackgrounded;                                            // 0x014C (size: 0x4)
    FString DesiredUserChosenDeviceProfileSuffix;                                     // 0x0150 (size: 0x10)
    FString CurrentAppliedDeviceProfileOverrideSuffix;                                // 0x0160 (size: 0x10)
    FString UserChosenDeviceProfileSuffix;                                            // 0x0170 (size: 0x10)
    int32 NvidiaReflexMode;                                                           // 0x0180 (size: 0x4)
    bool bNvidiaFrameWarp;                                                            // 0x0184 (size: 0x1)
    bool bNvidiaDLSSEnabled;                                                          // 0x0185 (size: 0x1)
    int32 NvidiaDLSSMode;                                                             // 0x0188 (size: 0x4)
    int32 NvidiaDLSSFrameGenerationMode;                                              // 0x018C (size: 0x4)
    bool bAMDFSREnabled;                                                              // 0x0190 (size: 0x1)
    int32 AMDFSRQuality;                                                              // 0x0194 (size: 0x4)
    bool bAMDFSRFrameGenerationEnabled;                                               // 0x0198 (size: 0x1)
    bool bIsEulaLocalDisplayed;                                                       // 0x0199 (size: 0x1)

    bool ShouldRunAutoBenchmarkAtStartup();
    void SetNvidiaReflexMode(int32 InMode);
    void SetNvidiaFrameWarp(bool bEnabled);
    void SetNvidiaDLSSMode(int32 InMode);
    void SetNvidiaDLSSFrameGenerationMode(int32 InMode);
    void SetNvidiaDLSSEnabled(bool bInEnabled);
    void SetIsEulaLocalDisplayed(bool bInDisplayed);
    void SetFrameRateLimit_WhenBackgrounded(float InNewLimitFPS);
    void SetFrameRateLimit_InMenu(float InNewLimitFPS);
    void SetFrameRateLimit_Always(float InNewLimitFPS);
    void SetDesiredDeviceProfileQualitySuffix(FString InDesiredSuffix);
    void SetAMDFSRQuality(int32 InQuality);
    void SetAMDFSRFrameGenerationEnabled(bool bInEnabled);
    void SetAMDFSREnabled(bool bInEnabled);
    void RunAutoBenchmark(bool bSaveImmediately);
    bool IsNvidiaReflexEnabled();
    bool IsNvidiaDLSSFrameGenerationEnabled();
    bool IsNvidiaDLSSEnabled();
    bool IsAMDFSRFrameGenerationEnabled();
    bool IsAMDFSREnabled();
    int32 GetNvidiaReflexMode();
    bool GetNvidiaFrameWarp();
    int32 GetNvidiaDLSSMode();
    int32 GetNvidiaDLSSFrameGenerationMode();
    bool GetIsEulaLocalDisplayed();
    float GetFrameRateLimit_WhenBackgrounded();
    float GetFrameRateLimit_InMenu();
    float GetFrameRateLimit_Always();
    FString GetDesiredDeviceProfileQualitySuffix();
    int32 GetAMDFSRQuality();
    class UWrestlerSettingsLocal* Get();
    bool CanRunAutoBenchmark();
}; // Size: 0x220

class UWrestlerSettingsShared : public ULocalPlayerSaveGame
{
    TArray<class UGameSettingValueDiscrete_Input*> CachedInputSettings;               // 0x0070 (size: 0x10)
    FString UserChosenDeviceProfileSuffix;                                            // 0x0080 (size: 0x10)
    float DisplayGamma;                                                               // 0x0090 (size: 0x4)
    float SafeZoneScale;                                                              // 0x0094 (size: 0x4)
    bool bForceFeedbackEnabled;                                                       // 0x0098 (size: 0x1)
    float GamepadMoveStickDeadZone;                                                   // 0x009C (size: 0x4)
    float GamepadLookStickDeadZone;                                                   // 0x00A0 (size: 0x4)
    bool bTriggerHapticsEnabled;                                                      // 0x00A4 (size: 0x1)
    bool bTriggerPullUsesHapticThreshold;                                             // 0x00A5 (size: 0x1)
    uint8 TriggerHapticStrength;                                                      // 0x00A6 (size: 0x1)
    uint8 TriggerHapticStartPosition;                                                 // 0x00A7 (size: 0x1)
    EWrestlerAllowBackgroundAudioSetting AllowAudioInBackground;                      // 0x00A8 (size: 0x1)
    double LookSensitivity;                                                           // 0x00B0 (size: 0x8)
    double TargetingMultiplier;                                                       // 0x00B8 (size: 0x8)
    bool bInvertVerticalAxis;                                                         // 0x00C0 (size: 0x1)
    bool bInvertHorizontalAxis;                                                       // 0x00C1 (size: 0x1)
    float OverallVolume;                                                              // 0x00C4 (size: 0x4)
    class UHeraPropertyFloat* OverallVolumeProperty;                                  // 0x00C8 (size: 0x8)
    float DialogueVolume;                                                             // 0x00D0 (size: 0x4)
    class UHeraPropertyFloat* DialogueVolumeProperty;                                 // 0x00D8 (size: 0x8)
    float MusicVolume;                                                                // 0x00E0 (size: 0x4)
    class UHeraPropertyFloat* MusicVolumeProperty;                                    // 0x00E8 (size: 0x8)
    float AllSoundFXVolume;                                                           // 0x00F0 (size: 0x4)
    class UHeraPropertyFloat* AllSoundFXVolumeProperty;                               // 0x00F8 (size: 0x8)
    float AmbientSoundFXVolume;                                                       // 0x0100 (size: 0x4)
    class UHeraPropertyFloat* AmbientSoundFXVolumeProperty;                           // 0x0108 (size: 0x8)
    float UISoundFXVolume;                                                            // 0x0110 (size: 0x4)
    class UHeraPropertyFloat* UISoundFXVolumeProperty;                                // 0x0118 (size: 0x8)
    int32 DynamicRange;                                                               // 0x0120 (size: 0x4)
    class UHeraPropertyInt* DynamicRangeProperty;                                     // 0x0128 (size: 0x8)
    int32 DialogueBoost;                                                              // 0x0130 (size: 0x4)
    class UHeraPropertyInt* DialogueBoostProperty;                                    // 0x0138 (size: 0x8)
    int32 PanningRule;                                                                // 0x0140 (size: 0x4)
    class UHeraPropertyInt* PanningRuleProperty;                                      // 0x0148 (size: 0x8)
    bool bMonoAudio;                                                                  // 0x0150 (size: 0x1)
    class UHeraPropertyBool* MonoAudioProperty;                                       // 0x0158 (size: 0x8)
    float AudioBalance;                                                               // 0x0160 (size: 0x4)
    class UHeraPropertyFloat* AudioBalanceProperty;                                   // 0x0168 (size: 0x8)
    float VibrationAmount;                                                            // 0x0170 (size: 0x4)
    class UHeraPropertyFloat* VibrationAmountProperty;                                // 0x0178 (size: 0x8)
    int32 HighFrequencyCutoff;                                                        // 0x0180 (size: 0x4)
    class UHeraPropertyInt* HighFrequencyCutoffProperty;                              // 0x0188 (size: 0x8)
    int32 LowFrequencyCutoff;                                                         // 0x0190 (size: 0x4)
    class UHeraPropertyInt* LowFrequencyCutoffProperty;                               // 0x0198 (size: 0x8)
    FName ControllerPlatform;                                                         // 0x01A0 (size: 0x8)
    class UHeraPropertyInt* PlayerDifficultyProperty;                                 // 0x01A8 (size: 0x8)
    int32 PlayerDifficulty;                                                           // 0x01B0 (size: 0x4)
    bool bInvertYAxis;                                                                // 0x01B5 (size: 0x1)
    float ControllerSensitivity;                                                      // 0x01B8 (size: 0x4)
    float VerticalSensitivityMultiplier;                                              // 0x01BC (size: 0x4)
    bool SubtitlesOn;                                                                 // 0x01C0 (size: 0x1)
    float CameraMovementReduction;                                                    // 0x01C4 (size: 0x4)
    class UHeraPropertyBool* SubtitlesOnProperty;                                     // 0x01C8 (size: 0x8)
    int32 SubtitlesSize;                                                              // 0x01D0 (size: 0x4)
    class UHeraPropertyInt* SubtitlesSizeProperty;                                    // 0x01D8 (size: 0x8)
    float SubtitlesBackgroundAlpha;                                                   // 0x01E0 (size: 0x4)
    class UHeraPropertyFloat* SubtitlesBackgroundAlphaProperty;                       // 0x01E8 (size: 0x8)
    bool CloseCaptionsOn;                                                             // 0x01F0 (size: 0x1)
    class UHeraPropertyBool* CloseCaptionOnProperty;                                  // 0x01F8 (size: 0x8)
    int32 CloseCaptionSize;                                                           // 0x0200 (size: 0x4)
    class UHeraPropertyInt* CloseCaptionSizeProperty;                                 // 0x0208 (size: 0x8)
    float CloseCaptionBackgroundAlpha;                                                // 0x0210 (size: 0x4)
    class UHeraPropertyFloat* CloseCaptionBackgroundAlphaProperty;                    // 0x0218 (size: 0x8)
    class UHeraPropertyFloat* CameraMovementReductionProperty;                        // 0x0220 (size: 0x8)
    TArray<FInputMappingData> InitialInputMappingData;                                // 0x0228 (size: 0x10)
    TArray<FInputMappingData> InputMappingData;                                       // 0x0238 (size: 0x10)
    TArray<FWrestlerSpecialInput> InputSpecialMappingData;                            // 0x0248 (size: 0x10)
    FString Language;                                                                 // 0x0258 (size: 0x10)
    FString PendingCulture;                                                           // 0x0268 (size: 0x10)
    bool bPauseInBackground;                                                          // 0x0279 (size: 0x1)
    bool bFirstBoot;                                                                  // 0x027B (size: 0x1)

    void SetVibrationAmount(float InVibrationAmount);
    void SetVerticalMultiplierSensitivity(float InNewValue);
    void SetUISoundFXVolume(float InVolume);
    void SetTriggerPullUsesHapticThreshold(const bool InNewValue);
    void SetTriggerHapticStrength(const uint8 InNewValue);
    void SetTriggerHapticStartPosition(const uint8 InNewValue);
    void SetTriggerHapticsEnabled(const bool InNewValue);
    void SetToDefaults();
    void SetTargetingMultiplier(double InNewValue);
    void SetSubtitlesSize(int32 InSubtitlesSize);
    void SetSubtitlesBackgroundAlpha(float InSubtitlesBackgroundAlpha);
    void SetSubtitles(bool InSubtitlesOn);
    void SetSafeZone(float InValue);
    void SetPauseInBackground(bool bInEnabled);
    void SetPanningRule(int32 InPanningRule);
    void SetOverallVolume(float InVolume);
    void SetOptionalTelemetry(bool bInEnabled);
    void SetMusicVolume(float InVolume);
    void SetLowFrequencyCutoff(int32 InLowFrequencyCutoff);
    void SetLookSensitivity(double InNewValue);
    void SetLanguage(FString NewLanguage);
    void SetIsMonoAudio(bool InMonoAudio);
    void SetInvertYAxis(bool bInEnabled);
    void SetInvertVerticalAxis(bool bInNewValue);
    void SetInvertHorizontalAxis(bool bInNewValue);
    void SetHighFrequencyCutoff(int32 InHighFrequencyCutoff);
    void SetGamepadMoveStickDeadZone(const float InNewValue);
    void SetGamepadLookStickDeadZone(const float InNewValue);
    void SetForceFeedbackEnabled(const bool bInNewValue);
    void SetDynamicRange(int32 InDynamicRange);
    void SetDisplayGamma(float InGamma);
    void SetDifficulty(int32 InDifficulty);
    void SetDialogueVolume(float InVolume);
    void SetDialogueBoost(int32 InDialogueBoost);
    void SetControllerPlatform(const FName InControllerPlatform);
    void SetControllerLookSensitivity(float InNewValue);
    void SetCameraMovementReduction(float InReductionAmount);
    void SetAudioBalance(float InAudioBalance);
    void SetAmbientSoundFXVolume(float InVolume);
    void SetAllSoundFXVolume(float InVolume);
    void SetAllowAudioInBackgroundSetting(EWrestlerAllowBackgroundAudioSetting InNewValue);
    void SaveSettings();
    void MarkFirstBootChecked();
    bool IsSafeZoneSet();
    bool IsFirstBoot();
    float GetVibrationAmount();
    float GetVerticalMultiplierSensitivity();
    float GetUISoundFXVolume();
    bool GetTriggerPullUsesHapticThreshold();
    uint8 GetTriggerHapticStrength();
    uint8 GetTriggerHapticStartPosition();
    bool GetTriggerHapticsEnabled();
    double GetTargetingMultiplier();
    int32 GetSubtitlesSize();
    float GetSubtitlesBackgroundAlpha();
    bool GetSubtitles();
    float GetSafeZone();
    bool GetPauseInBackground();
    int32 GetPanningRule();
    float GetOverallVolume();
    bool GetOptionalTelemetry();
    float GetMusicVolume();
    int32 GetLowFrequencyCutoff();
    double GetLookSensitivity();
    FString GetLanguage();
    bool GetIsMonoAudio();
    bool GetInvertYAxis();
    bool GetInvertVerticalAxis();
    bool GetInvertHorizontalAxis();
    int32 GetHighFrequencyCutoff();
    float GetGamepadMoveStickDeadZone();
    float GetGamepadLookStickDeadZone();
    bool GetForceFeedbackEnabled();
    int32 GetDynamicRange();
    float GetDisplayGamma();
    int32 GetDifficulty();
    float GetDialogueVolume();
    int32 GetDialogueBoost();
    FName GetControllerPlatform();
    float GetControllerLookSensitivity();
    float GetCameraMovementReduction();
    float GetAudioBalance();
    float GetAmbientSoundFXVolume();
    float GetAllSoundFXVolume();
    EWrestlerAllowBackgroundAudioSetting GetAllowAudioInBackgroundSetting();
    void ApplySettings();
}; // Size: 0x288

class UWrestlerShowFlagsSubsystem : public UEngineSubsystem
{
}; // Size: 0x90

class UWrestlerShowMasqueradeHUDTask : public UHeraAutomataTask
{
    bool bShow;                                                                       // 0x0088 (size: 0x1)
    bool bAllElements;                                                                // 0x0089 (size: 0x1)
    EWrestlerMasqueradeElement MasqueradeElement;                                     // 0x008A (size: 0x1)

}; // Size: 0x90

class UWrestlerSideContainerWidget : public UHeraCommonUIBaseWidget
{
    class UVerticalBox* MessageContainer;                                             // 0x0330 (size: 0x8)
    FWrestlerNotificationData DialogueCodexNotificationData;                          // 0x0350 (size: 0x58)
    bool bCanShortcutToMenu;                                                          // 0x03A8 (size: 0x1)
    class UWrestlerPlayerActionAssetMap* PlayerActionAssetMap;                        // 0x03B0 (size: 0x8)
    class UInputMappingContext* PlayerMappingContext;                                 // 0x03B8 (size: 0x8)
    TArray<class UWrestlerSideNotificationWidget*> AvailableWidgets;                  // 0x03C0 (size: 0x10)

    void UpdateContainerAvailability();
    void OnNotificationAvailable();
    void CloseCurrentNotificationWidget();
}; // Size: 0x3D0

class UWrestlerSideNotificationWidget : public UHeraCommonUIBaseWidget
{
    class UOverlay* NotificationWidgetOverlay;                                        // 0x0330 (size: 0x8)
    bool bIsShowing;                                                                  // 0x0338 (size: 0x1)
    bool bHasExpired;                                                                 // 0x0339 (size: 0x1)
    float TimeElapsed;                                                                // 0x033C (size: 0x4)
    FWrestlerNotificationData NotificationData;                                       // 0x0358 (size: 0x58)
    class UCommonRichTextBlock* NotificationBigText;                                  // 0x03B0 (size: 0x8)
    class UCommonRichTextBlock* NotificationSmallText;                                // 0x03B8 (size: 0x8)
    class UImage* NotificationIcon;                                                   // 0x03C0 (size: 0x8)
    EWrestlerRPGMenuTabID NotificationType;                                           // 0x03C8 (size: 0x1)
    float NotificationTimer;                                                          // 0x03CC (size: 0x4)
    FString NotificationSmallTextWithIcon;                                            // 0x03D0 (size: 0x10)

    void UpdateAvailableNotificationWidget();
    void ShowSideNotification();
    bool ShouldShowXPFill();
    void SetSmallTextIconText();
    void SetSmallText();
    void SetNotificationImage(class UTexture2D* InTexture);
    bool HasShortcutTab();
    class UWrestlerSideContainerWidget* GetContainer();
    void CloseSideNotification();
}; // Size: 0x3E0

class UWrestlerSignificanceSettings : public UDeveloperSettings
{
    float TimeOffScreenToBeConsideredOffScreenSignificance;                           // 0x0038 (size: 0x4)
    TMap<class FName, class FWrestlerSignificanceBucketContainer> SignificanceBuckets; // 0x0040 (size: 0x50)

}; // Size: 0x90

class UWrestlerSkillTreeNode : public UHeraDataAsset
{
    FSkillNode NodeData;                                                              // 0x0030 (size: 0x30)
    TArray<class UWrestlerSkillTreeNode*> ChildrenNodes;                              // 0x0060 (size: 0x10)

}; // Size: 0x70

class UWrestlerSkillTreeNodeWidget : public UWrestlerBaseWidget
{
    class UTextBlock* BloodPoints_Txt;                                                // 0x02C8 (size: 0x8)
    class UWrestlerSkillTreeNode* SkillNodeData;                                      // 0x02D0 (size: 0x8)
    class UImage* IMG_Node;                                                           // 0x02D8 (size: 0x8)
    class UTextBlock* NodeName_Txt;                                                   // 0x02E0 (size: 0x8)
    class UTextBlock* NodeDescription_Txt;                                            // 0x02E8 (size: 0x8)
    class UButton* Node_Btn;                                                          // 0x02F0 (size: 0x8)
    class UWrestlerSkillTreeNode* SkillNode;                                          // 0x02F8 (size: 0x8)
    ENodeStatus NodeStatus;                                                           // 0x0300 (size: 0x1)
    TArray<class UWrestlerSkillTreeNodeWidget*> ChildrenWidgets;                      // 0x0308 (size: 0x10)

    void SetNodeText(FText InNodeTxt);
    void SetNodeImg(class UTexture2D* InTexture);
    void SetNodeDescription(FText InNodeDescription);
    void SetNodeBloodPoints(int32 InBloodPoints);
    void OnNodeBtnClicked();
    FVector2D GetNodeLocation();
}; // Size: 0x318

class UWrestlerSkillTreeWidget : public UWrestlerBaseWidget
{
    class UWrestlerSkillTreeNode* RootNode;                                           // 0x02C8 (size: 0x8)
    TSubclassOf<class UWrestlerSkillTreeNodeWidget> NodeWidget;                       // 0x02D0 (size: 0x8)
    TArray<class UWrestlerSkillTreeNodeWidget*> NodeWidgets;                          // 0x02D8 (size: 0x10)

    void SetupWidgetNodesNavigation();
    void GenerateSkillNodeWidgets();
}; // Size: 0x2E8

class UWrestlerSliderWidget : public UWrestlerBaseOptionWidget
{
    class USlider* SettingSlider;                                                     // 0x0360 (size: 0x8)
    class UHeraPropertyFloat* SliderValue;                                            // 0x0368 (size: 0x8)

    void SetValue(float InValue);
    float GetValue();
}; // Size: 0x370

class UWrestlerSmartObjectComponent : public USmartObjectComponent
{
    bool bReservedSmartObject;                                                        // 0x02F0 (size: 0x1)
    bool bSpawnEntityAtSmartObject;                                                   // 0x0321 (size: 0x1)
    float TimeToReserveSOAfterSpawning;                                               // 0x0324 (size: 0x4)
    TArray<FTransform> CachedSlotUseTransforms;                                       // 0x0330 (size: 0x10)
    TArray<TSoftObjectPtr<UMassEntityConfigAsset>> EntityConfigsPerSlot;              // 0x0340 (size: 0x10)
    TSoftObjectPtr<UMassEntityConfigAsset> EntityConfig;                              // 0x0350 (size: 0x28)
    TSoftObjectPtr<UMassEntityConfigAsset> EntityConfigSlot2;                         // 0x0378 (size: 0x28)
    FGameplayTag SOTag;                                                               // 0x03A0 (size: 0x8)
    bool bMustMatchTagToUse;                                                          // 0x03A8 (size: 0x1)
    bool bAutoDestroyOnceUsed;                                                        // 0x03A9 (size: 0x1)

    void OnSmartObjectStopBeingUsed();
    void OnSmartObjectStartBeingUsed();
}; // Size: 0x3C0

class UWrestlerSmartObjectDefinition : public USmartObjectDefinition
{
    TArray<class UWrestlerSmartObjectUseLocationComponent*> SlotUseTransforms;        // 0x00E0 (size: 0x10)
    FGameplayTag BloodResonanceEventLocationTag;                                      // 0x00F0 (size: 0x8)
    bool bBloodResonanceEvent;                                                        // 0x00F8 (size: 0x1)

}; // Size: 0x100

class UWrestlerSmartObjectUseLocationComponent : public USceneComponent
{
}; // Size: 0x2B0

class UWrestlerSmartObjectUserDataTrait : public UMassEntityTraitBase
{
    FWrestlerSmartObjectUserData Data;                                                // 0x0028 (size: 0x60)

}; // Size: 0x88

class UWrestlerSpawnEnemyAutomataTask : public UHeraAutomataTask
{
    TArray<TSoftObjectPtr<AWrestlerAISpawner>> SpawnList;                             // 0x0088 (size: 0x10)
    class UHeraMissionObjective* TaskCompleteObjective;                               // 0x0098 (size: 0x8)
    FGameplayTagContainer TagsToApply;                                                // 0x00A0 (size: 0x20)

    void OnEnemySpawned(FWrestlerAISpawnerData InSpawnData, const class AWrestlerAISpawner* InAISpawner);
}; // Size: 0xC8

class UWrestlerSpawnEnemyTypesAutomataTask : public UHeraAutomataTask
{
    TMap<class TSoftObjectPtr<AWrestlerAISpawner>, class FName> SpawnEnemyCharacters; // 0x0088 (size: 0x50)

}; // Size: 0xD8

class UWrestlerSplineProgressComponent : public UActorComponent
{
    float TrackingDistance;                                                           // 0x00A0 (size: 0x4)
    float MinDistForPeriodicTracking;                                                 // 0x00A4 (size: 0x4)
    float MaxDistForPeriodicTracking;                                                 // 0x00A8 (size: 0x4)
    float MaxTestingPeriod;                                                           // 0x00AC (size: 0x4)
    float MinTestingPeriod;                                                           // 0x00B0 (size: 0x4)
    float Leading;                                                                    // 0x00B4 (size: 0x4)
    class AActor* TrackedActor;                                                       // 0x00B8 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x00C0 (size: 0x8)

    void SetProgressNormalised(float InProgress);
    void SetProgress(float InProgress);
    void ResetProgress();
    float GetProgressNormalised();
    float GetProgress();
    FVector GetFurthestLocation();
    FVector GetClosestLocationOnSpline();
    void Enable();
    void Disable();
    void BeginTrackingActor(class AActor* InActor);
}; // Size: 0x108

class UWrestlerStartMenu : public UWrestlerMenu
{
    bool bIsFading;                                                                   // 0x0300 (size: 0x1)

    void OnUserInitialized(const class UCommonUserInfo* InUserInfo, bool bInSuccess, FText InError, ECommonUserPrivilege InRequestedPrivilege, ECommonUserOnlineContext InOnlineContext);
    void OnFadeStarted();
}; // Size: 0x308

class UWrestlerStateFunctionLibrary : public UWrestlerBlueprintFunctionLibrary
{

    bool SendStateTreeEventToActor(const FStateTreeEvent& InStateTreeEvent, class AActor* InActor);
    bool PawnHasStateTag(const class APawn* InPawn, const FGameplayTag& InTag);
    bool AIHasStateTag(const class AAIController* InController, const FGameplayTag& InTag);
}; // Size: 0x28

class UWrestlerStateTreeComponent : public UStateTreeComponent
{
    TSoftObjectPtr<UStateTree> StateTree;                                             // 0x0148 (size: 0x28)
    FWrestlerStateTreeComponentOnStateTagsAdded OnStateTagsAdded;                     // 0x0170 (size: 0x10)
    void WrestlerStateTreeTagsAddedDelegate(FGameplayTagContainer TagsAdded);

    void SetStateTreeAsset(TSoftObjectPtr<UStateTree> InAsset);
}; // Size: 0x1D0

class UWrestlerStateTreeConditionAwarenessThreshold : public UStateTreeConditionBlueprintBase
{
    float Threshold;                                                                  // 0x0048 (size: 0x4)

}; // Size: 0x50

class UWrestlerStateTreeConditionCanInvestigateBody : public UStateTreeConditionBlueprintBase
{
    FGameplayTag DeadBodyTag;                                                         // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerStateTreeConditionCanReactToSeenBody : public UStateTreeConditionBlueprintBase
{
    FGameplayTag DeadBodyTag;                                                         // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerStateTreeConditionEnemyType : public UStateTreeConditionBlueprintBase
{
    FName TypeName;                                                                   // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerStateTreeConditionHearingThreshold : public UStateTreeConditionBlueprintBase
{
    float Threshold;                                                                  // 0x0048 (size: 0x4)

}; // Size: 0x50

class UWrestlerStateTreeConditionName : public UStateTreeConditionBlueprintBase
{
    FName Left;                                                                       // 0x0048 (size: 0x8)
    FName Right;                                                                      // 0x0050 (size: 0x8)

}; // Size: 0x58

class UWrestlerStateTreeConditionOwnerHasTag : public UStateTreeConditionBlueprintBase
{
    bool bInvert;                                                                     // 0x0048 (size: 0x1)
    FGameplayTag HasExactTag;                                                         // 0x004C (size: 0x8)

}; // Size: 0x58

class UWrestlerStateTreeConditionTokenState : public UStateTreeConditionBlueprintBase
{
    class UWrestlerToken* HeldToken;                                                  // 0x0048 (size: 0x8)
    EWrestlerTokenState TokenState;                                                   // 0x0050 (size: 0x1)
    bool bInverseCondition;                                                           // 0x0051 (size: 0x1)

}; // Size: 0x58

class UWrestlerStateTreeConfig : public UWrestlerConfigDataAsset
{
    int32 MaxSearchesPerTeam;                                                         // 0x0030 (size: 0x4)
    int32 MaxMembersPerTeam;                                                          // 0x0034 (size: 0x4)
    float RangeForHostileSearch;                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

class UWrestlerStateTreeDefaultBehaviorDataAsset : public UPrimaryDataAsset
{
    TMap<class FGameplayTag, class FEvaluatorDefaultBehaviorStruct> StateDefaultBehaviours; // 0x0030 (size: 0x50)

}; // Size: 0x80

class UWrestlerStateTreeEvaluatorAwareness : public UStateTreeEvaluatorBlueprintBase
{
    FName OnLostSightOfPlayerEventTagName;                                            // 0x0048 (size: 0x8)
    FName OnInstantAlertTriggeredEventTagName;                                        // 0x0050 (size: 0x8)
    FName OnPlayerVanishedTagName;                                                    // 0x0058 (size: 0x8)
    bool bDetected;                                                                   // 0x0060 (size: 0x1)
    bool bAware;                                                                      // 0x0061 (size: 0x1)
    float BlockPropagationDuration;                                                   // 0x0064 (size: 0x4)
    class APawn* Owner;                                                               // 0x0088 (size: 0x8)

    void SetBlockPropagation(class AWrestlerCharacterBase* Character, bool bInShouldBlock);
    void OnStartDetectingCallback();
    void OnPlayerVanishedCallback(class APawn* InPlayerCharacter);
    void OnNotDetectingCallback();
    void OnNotAwareCallback();
    void OnLostSightOfPlayerCallback();
    void OnBecomeAwareCallback();
    void DetectionReset(class AWrestlerCharacterBase* Character);
}; // Size: 0x90

class UWrestlerStateTreeEvaluatorDefaultBehavior : public UStateTreeEvaluatorBlueprintBase
{
    class UWrestlerStateTreeDefaultBehaviorDataAsset* StateDefaultBehaviours;         // 0x0048 (size: 0x8)
    TMap<class FGameplayTag, class UBehaviorTree*> CurrentDefaultBehaviors;           // 0x0058 (size: 0x50)
    class AWrestlerCharacterBase* OwnerCharacter;                                     // 0x00A8 (size: 0x8)

    void OnTagChanged(FGameplayTag InGameplayTag, int32 InNewCount);
}; // Size: 0xB0

class UWrestlerStateTreeEvaluatorHeldToken : public UStateTreeEvaluatorBlueprintBase
{
    class UWrestlerToken* HeldToken;                                                  // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerStateTreeEvaluatorLastKnownPosition : public UStateTreeEvaluatorBlueprintBase
{
    FVector LastKnownPosition;                                                        // 0x0048 (size: 0x18)

}; // Size: 0x60

class UWrestlerStateTreeEvaluatorMovementSettings : public UStateTreeEvaluatorBlueprintBase
{
    class UWrestlerMovementSetData* MovementSetData;                                  // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerStateTreeEvaluatorPlayerVisibility : public UStateTreeEvaluatorBlueprintBase
{
    bool bPlayerVisible;                                                              // 0x0048 (size: 0x1)
    float TimeSinceLastSawPlayer;                                                     // 0x004C (size: 0x4)
    bool bLostSightOfPlayer;                                                          // 0x0050 (size: 0x1)

}; // Size: 0x58

class UWrestlerStateTreeEvaluatorRanged : public UStateTreeEvaluatorBlueprintBase
{
    bool IsRanged;                                                                    // 0x0048 (size: 0x1)

}; // Size: 0x50

class UWrestlerStateTreeEvaluatorSensedTags : public UStateTreeEvaluatorBlueprintBase
{
    FGameplayTagContainer VisibleTags;                                                // 0x0048 (size: 0x20)
    FGameplayTagContainer AudibleTags;                                                // 0x0068 (size: 0x20)
    float SenseAge;                                                                   // 0x0088 (size: 0x4)

}; // Size: 0x90

class UWrestlerStateTreeTaskBase : public UStateTreeTaskBlueprintBase
{
}; // Size: 0x48

class UWrestlerStateTreeTaskReturnToken : public UStateTreeTaskBlueprintBase
{
    FName BlackboardKey;                                                              // 0x0048 (size: 0x8)

}; // Size: 0x50

class UWrestlerStateTreeTaskSetupMovementPatrol : public UStateTreeTaskBlueprintBase
{
}; // Size: 0x60

class UWrestlerStateTreeTaskSetupSearchTeam : public UStateTreeTaskBlueprintBase
{
    class UWrestlerSearchManager* SearchManager;                                      // 0x0048 (size: 0x8)
    FVector LastKnownPosition;                                                        // 0x0050 (size: 0x18)

}; // Size: 0x68

class UWrestlerStateTreeTaskWithTokens : public UWrestlerStateTreeTaskBase
{
    EWrestlerStateTreeToken EnterStateToken;                                          // 0x0048 (size: 0x1)
    EWrestlerStateTreeToken ExitStateToken;                                           // 0x0049 (size: 0x1)
    EWrestlerGameplayTokenType RequestedTokenType;                                    // 0x004A (size: 0x1)
    class UWrestlerTokenSinkComponent* TokenSink;                                     // 0x0050 (size: 0x8)
    class UWrestlerTokenManager* TokenManager;                                        // 0x0058 (size: 0x8)

}; // Size: 0x60

class UWrestlerStateTreeTask_BehaviourTaskSlot : public UWrestlerStateTreeTaskBase
{
    FGameplayTag DefaultBehaviorTag;                                                  // 0x0048 (size: 0x8)
    TMap<class FGameplayTag, class UBehaviorTree*> CurrentDefaultBehaviors;           // 0x0050 (size: 0x50)
    class AWrestlerCharacterBase* Owner;                                              // 0x00A0 (size: 0x8)
    class UWrestlerTaskDistributor* TaskDistributor;                                  // 0x00A8 (size: 0x8)
    class UWrestlerTask* AgentTask;                                                   // 0x00B0 (size: 0x8)

    void HandleTaskDistribute(class AActor* InAgent, class UWrestlerTask* InTask);
    void HandleTaskComplete(FWrestlerTaskExecutionResult Result);
}; // Size: 0xB8

class UWrestlerStateTreeTask_ConEnemyToMassAI : public UWrestlerStateTreeTaskBase
{
    float ConvertDelay;                                                               // 0x0054 (size: 0x4)
    FGameplayTagContainer EnemyAIActorTagsToIgnore;                                   // 0x0058 (size: 0x20)

}; // Size: 0x78

class UWrestlerStateTreeTask_EndInvestigation : public UWrestlerStateTreeTaskBase
{
}; // Size: 0x48

class UWrestlerStateTreeTask_Reaction : public UWrestlerStateTreeTaskBase
{
    FGameplayTag Montage;                                                             // 0x0048 (size: 0x8)
    FGameplayTag Bark;                                                                // 0x0050 (size: 0x8)

}; // Size: 0x68

class UWrestlerStateTreeTask_ReleaseSearchRoute : public UWrestlerStateTreeTaskBase
{
}; // Size: 0x48

class UWrestlerStateTreeTask_RequestToken : public UWrestlerStateTreeTaskBase
{
    EWrestlerGameplayTokenType TokenType;                                             // 0x0048 (size: 0x1)

}; // Size: 0x50

class UWrestlerStateTreeTask_ReturnToken : public UWrestlerStateTreeTaskBase
{
}; // Size: 0x48

class UWrestlerStateTreeTask_RunBehaviorTree : public UWrestlerStateTreeTaskBase
{
    TSoftObjectPtr<UBehaviorTree> BehaviorTree;                                       // 0x0048 (size: 0x28)
    bool bSingleRun;                                                                  // 0x0070 (size: 0x1)
    FGameplayTag BehaviorTag;                                                         // 0x0074 (size: 0x8)

}; // Size: 0x80

class UWrestlerStateTreeTask_SetFocus : public UWrestlerStateTreeTaskBase
{
    FVector FocusLocation;                                                            // 0x0048 (size: 0x18)
    class AAIController* AIController;                                                // 0x0060 (size: 0x8)

}; // Size: 0x68

class UWrestlerStateTreeTask_SetMovementSettings : public UWrestlerStateTreeTaskBase
{
    class UWrestlerMovementSetData* SetData;                                          // 0x0048 (size: 0x8)
    FGameplayTag GameplayTag;                                                         // 0x0050 (size: 0x8)

}; // Size: 0x70

class UWrestlerStateTreeTask_SetRotateToTarget : public UWrestlerStateTreeTaskBase
{
}; // Size: 0x48

class UWrestlerStateTreeTask_SetSpeed : public UWrestlerStateTreeTaskBase
{
    float Speed;                                                                      // 0x0048 (size: 0x4)

}; // Size: 0x50

class UWrestlerStateTreeTask_UseAbility : public UWrestlerStateTreeTaskBase
{
    FGameplayTag AbilityTag;                                                          // 0x0048 (size: 0x8)
    class AActor* Target;                                                             // 0x0050 (size: 0x8)

}; // Size: 0x60

class UWrestlerStunDamageExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UWrestlerStunRegenExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UWrestlerSuppressBarksGameplayEffectComponent : public UGameplayEffectComponent
{
    FGameplayTagContainer SuppressedBarkTags;                                         // 0x0028 (size: 0x20)

}; // Size: 0x48

class UWrestlerSwapAIUpdateProcessor : public UMassProcessor
{
    float TimeToSwapBackForNoAwareAI;                                                 // 0x0600 (size: 0x4)

}; // Size: 0x610

class UWrestlerSystemNotificationMenu : public UWrestlerMenu
{
    class UCommonTextBlock* Title;                                                    // 0x0300 (size: 0x8)
    class UCommonTextBlock* Message;                                                  // 0x0308 (size: 0x8)
    class UHeraButtonBase* ConfirmButton;                                             // 0x0310 (size: 0x8)
    class UHeraButtonBase* CancelButton;                                              // 0x0318 (size: 0x8)
    FWrestlerSystemNotificationMenuOnConfirmCallback OnConfirmCallback;               // 0x0320 (size: 0x10)
    void OnNotificationButtonPressed();
    FWrestlerSystemNotificationMenuOnCancelCallback OnCancelCallback;                 // 0x0330 (size: 0x10)
    void OnNotificationButtonPressed();

    void OnConfirmButtonPressed(class UHeraButtonBase* InButtonPressed);
    void OnCancelButtonPressed(class UHeraButtonBase* InButtonPressed);
    void CloseNotification();
}; // Size: 0x348

class UWrestlerTKSettings : public UWrestlerSettingsBase
{
    float ThrowSpeed;                                                                 // 0x0048 (size: 0x4)
    float MaxThrowTime;                                                               // 0x004C (size: 0x4)

    class UWrestlerTKSettings* Get(class UObject* InWorldContextObject);
}; // Size: 0x50

class UWrestlerTagsFragmentAdded : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerTagsFragmentRemoved : public UMassObserverProcessor
{
}; // Size: 0x370

class UWrestlerTargetAssistDataAsset : public UHeraDataAsset
{
    float DistanceThreshold;                                                          // 0x0030 (size: 0x4)
    float AngleThreshold;                                                             // 0x0034 (size: 0x4)
    float WeightDistance;                                                             // 0x0038 (size: 0x4)
    float WeightAngle;                                                                // 0x003C (size: 0x4)
    TEnumAsByte<ECollisionChannel> QueryChannel;                                      // 0x0040 (size: 0x1)
    TEnumAsByte<ECollisionChannel> IsReachableChannel;                                // 0x0041 (size: 0x1)
    bool bShouldBeReachable;                                                          // 0x0042 (size: 0x1)
    FGameplayTargetDataFilter Filter;                                                 // 0x0048 (size: 0x20)
    TSoftClassPtr<AActor> Reticle;                                                    // 0x0068 (size: 0x28)

}; // Size: 0x90

class UWrestlerTargetMotionTracker : public UActorComponent
{
    float MoveToTargetDistance;                                                       // 0x00A0 (size: 0x4)
    float MoveAlongTargetForwardDistance;                                             // 0x00A4 (size: 0x4)
    float AxisExponent;                                                               // 0x00A8 (size: 0x4)
    float ForwardMultiplier;                                                          // 0x00AC (size: 0x4)
    float BackwardMultiplier;                                                         // 0x00B0 (size: 0x4)

    void TrackTarget(class AActor* InTarget, float InMoveSpeed, float InRotationRate, FVector& OutLocation, FRotator& OutRotation);
}; // Size: 0xB8

class UWrestlerTargetType : public UObject
{

    void GetTargets(class AWrestlerCharacter* TargetingCharacter, class AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<class AActor*>& OutActors, TArray<FGameplayAbilityTargetDataHandle>& OutTargetData);
}; // Size: 0x28

class UWrestlerTargetType_UseEventData : public UWrestlerTargetType
{
}; // Size: 0x28

class UWrestlerTargetType_UseOwner : public UWrestlerTargetType
{
}; // Size: 0x28

class UWrestlerTask : public UObject
{
    FWrestlerTaskOnComplete OnComplete;                                               // 0x0028 (size: 0x10)
    void WrestlerTaskCompletedSigniture(FWrestlerTaskExecutionResult Result);
    FGameplayTag TypeTag;                                                             // 0x0038 (size: 0x8)
    FGameplayTag TaskTag;                                                             // 0x0040 (size: 0x8)
    class AActor* TaskOwner;                                                          // 0x0048 (size: 0x8)
    class UWrestlerTaskStrategy* ExecutableStrategy;                                  // 0x0050 (size: 0x8)
    EWrestlerTaskStatus TaskStatus;                                                   // 0x0058 (size: 0x1)
    float TaskCooldownSeconds;                                                        // 0x005C (size: 0x4)
    bool bIsCooldownForAllAgents;                                                     // 0x0060 (size: 0x1)

}; // Size: 0x68

class UWrestlerTaskBoard : public UObject
{
    TArray<class UWrestlerTask*> Tasks;                                               // 0x0028 (size: 0x10)
    class UWrestlerTask* ActiveTask;                                                  // 0x0038 (size: 0x8)
    int32 NextTaskIndex;                                                              // 0x0040 (size: 0x4)
    class UWrestlerTaskDistributor* TaskDistributor;                                  // 0x0048 (size: 0x8)
    class UWorld* WorldContext;                                                       // 0x0050 (size: 0x8)
    bool bIsPaused;                                                                   // 0x0058 (size: 0x1)

    void DoNextTask();
}; // Size: 0x80

class UWrestlerTaskBoardData : public UHeraDataAsset
{
    TArray<FWrestlerTaskBoardConfig> TaskBoardConfigs;                                // 0x0030 (size: 0x10)

}; // Size: 0x40

class UWrestlerTaskConfig : public UHeraDataAsset
{
    FGameplayTagContainer IgnoreTaskAgentsHasTags;                                    // 0x0030 (size: 0x20)
    FGameplayTag DefaultTaskBoardDataTag;                                             // 0x0050 (size: 0x8)
    TMap<class FGameplayTag, class FWrestlerTaskBoardPerDifficulty> TaskBoardSettings; // 0x0058 (size: 0x50)
    TMap<class FGameplayTag, class FGameplayTagContainer> ParentTaskStateTags;        // 0x00A8 (size: 0x50)

}; // Size: 0x118

class UWrestlerTaskCooldownManager : public UObject
{
    TMap<class TWeakObjectPtr<AActor>, class FGameplayTagContainer> AgentTasksInCooldown; // 0x0028 (size: 0x50)
    TArray<FGameplayTag> TasksInCooldownForAllAgents;                                 // 0x0078 (size: 0x10)

}; // Size: 0x88

class UWrestlerTaskData : public UHeraDataAsset
{
    FGameplayTag TaskTag;                                                             // 0x0030 (size: 0x8)
    float CooldownSeconds;                                                            // 0x0038 (size: 0x4)
    bool bIsCooldownForAllAgents;                                                     // 0x003C (size: 0x1)

}; // Size: 0x40

class UWrestlerTaskData_AbilitySequence : public UWrestlerTaskData_Behaviour
{
    TArray<FWrestlerAbilitySequenceTaskData> AbilitySequence;                         // 0x0078 (size: 0x10)

}; // Size: 0x88

class UWrestlerTaskData_Behaviour : public UWrestlerTaskData
{
    TArray<class UWrestlerTaskScore*> TaskScores;                                     // 0x0040 (size: 0x10)
    TSoftObjectPtr<UBehaviorTree> BehaviourTree;                                      // 0x0050 (size: 0x28)

}; // Size: 0x78

class UWrestlerTaskDebugMediator : public UObject
{
    FDebugTaskTypeEnemyTaskScores DebugTaskEnemyData;                                 // 0x0028 (size: 0x70)
    bool bDebugActive;                                                                // 0x0098 (size: 0x1)

}; // Size: 0xA0

class UWrestlerTaskDebugWidget : public UWrestlerBaseWidget
{
    FString EnemyDebugName;                                                           // 0x02C8 (size: 0x10)
    FString TaskTag;                                                                  // 0x02D8 (size: 0x10)
    FString Score;                                                                    // 0x02E8 (size: 0x10)

}; // Size: 0x2F8

class UWrestlerTaskDebugWidgetComponent : public UWrestlerEnemyUIWidgetComponent
{
}; // Size: 0x7E0

class UWrestlerTaskDispenser : public UObject
{
    TArray<class UWrestlerTask*> Tasks;                                               // 0x0028 (size: 0x10)
    class UWrestlerTaskDistributor* TaskDistributor;                                  // 0x0038 (size: 0x8)

    void HandleTaskComplete(FWrestlerTaskExecutionResult Result);
}; // Size: 0x40

class UWrestlerTaskDistributor : public UObject
{
    FWrestlerTaskDistributorOnTaskAssigned OnTaskAssigned;                            // 0x0028 (size: 0x10)
    void WrestlerTaskDistributeSigniture(class AActor* Agent, class UWrestlerTask* Task);
    class UWrestlerTaskConfig* TaskConfig;                                            // 0x0038 (size: 0x8)
    TMap<class AActor*, class UWrestlerTask*> AssignedTasks;                          // 0x0040 (size: 0x50)
    class UWrestlerTaskFilter* TaskFilter;                                            // 0x0090 (size: 0x8)

    void WrestlerTaskDistributeSigniture__DelegateSignature(class AActor* Agent, class UWrestlerTask* Task);
    void HandleEnemyRemoved(class AWrestlerEnemyCharacter* InCharacter);
}; // Size: 0x98

class UWrestlerTaskFilter : public UObject
{
}; // Size: 0x30

class UWrestlerTaskScore : public UObject
{
    float Weight;                                                                     // 0x0028 (size: 0x4)
    bool bIsAbsoluteRequirement;                                                      // 0x002C (size: 0x1)
    bool bInvertScore;                                                                // 0x002D (size: 0x1)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
    FName GetDebugName();
}; // Size: 0x30

class UWrestlerTaskScore_AgentActionTag : public UWrestlerTaskScore
{
    FGameplayTag TagToCheck;                                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

class UWrestlerTaskScore_AgentHealth : public UWrestlerTaskScore
{
}; // Size: 0x30

class UWrestlerTaskScore_Aggression : public UWrestlerTaskScore
{
}; // Size: 0x30

class UWrestlerTaskScore_AngleFromTarget : public UWrestlerTaskScore
{
    float MaxAngleFromTarget;                                                         // 0x0030 (size: 0x4)
    bool bShouldDistanceCheck;                                                        // 0x0034 (size: 0x1)
    float MaxDistance;                                                                // 0x0038 (size: 0x4)

}; // Size: 0x40

class UWrestlerTaskScore_DistanceFromTarget : public UWrestlerTaskScore
{
    float MinDistance;                                                                // 0x0030 (size: 0x4)
    float IdealDistance;                                                              // 0x0034 (size: 0x4)
    float MaxDistance;                                                                // 0x0038 (size: 0x4)

}; // Size: 0x40

class UWrestlerTaskScore_Random : public UWrestlerTaskScore
{
}; // Size: 0x30

class UWrestlerTaskScore_TargetActionTag : public UWrestlerTaskScore
{
    FGameplayTag TagToCheck;                                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

class UWrestlerTaskScore_TargetHealth : public UWrestlerTaskScore
{
}; // Size: 0x30

class UWrestlerTaskScore_TargetSpeed : public UWrestlerTaskScore
{
    float MinSpeed;                                                                   // 0x0030 (size: 0x4)

}; // Size: 0x38

class UWrestlerTaskSource : public UWorldSubsystem
{
    FName ConfigDataName;                                                             // 0x0030 (size: 0x8)
    class UWrestlerTaskDistributor* TaskDistributor;                                  // 0x0038 (size: 0x8)
    TArray<class UWrestlerTaskBoard*> TaskBoards;                                     // 0x0040 (size: 0x10)
    class UWrestlerTaskCooldownManager* TaskCooldownManager;                          // 0x0050 (size: 0x8)
    class UWrestlerTaskDebugMediator* TaskDebugManager;                               // 0x0058 (size: 0x8)
    class UWrestlerTaskDispenser* TaskDispenser;                                      // 0x0060 (size: 0x8)
    class UWrestlerTaskConfig* TaskConfig;                                            // 0x0068 (size: 0x8)

    bool SetTaskBoardByTag(class UWorld* World, FGameplayTag InTaskBoardTag);
    void SetPaused(bool bIsPaused);
    class UWrestlerTaskDistributor* GetTaskDistributor(class UWorld* InWorld);
    class UWrestlerTaskDispenser* GetTaskDispenser(class UWorld* InWorld);
    class UWrestlerTaskDebugMediator* GetTaskDebugManager();
    class UWrestlerTaskCooldownManager* GetTaskCooldownManager();
}; // Size: 0x70

class UWrestlerTaskStrategy : public UObject
{
    FName EnemyTasksSettingsKey;                                                      // 0x0028 (size: 0x8)
    class UWrestlerTask* AgentTask;                                                   // 0x0030 (size: 0x8)

}; // Size: 0x38

class UWrestlerTaskStrategy_AbilitySequence : public UWrestlerTaskStrategy
{
    TArray<class UWrestlerGameplayAbility*> AbilitySequence;                          // 0x0038 (size: 0x10)
    class UAbilitySystemComponent* AbilitySystemComponent;                            // 0x0048 (size: 0x8)
    class UWrestlerGameplayAbility* CurrentActiveAbility;                             // 0x0050 (size: 0x8)

}; // Size: 0x60

class UWrestlerTaskStrategy_Behaviour : public UWrestlerTaskStrategy
{
}; // Size: 0x38

class UWrestlerTeleportTask : public UHeraAutomataTask
{
    EWrestlerTeleportTaskMode TeleportMode;                                           // 0x0088 (size: 0x1)
    TSoftObjectPtr<AActor> ActorToTeleport;                                           // 0x0090 (size: 0x28)
    TSoftObjectPtr<ATargetPoint> Target;                                              // 0x00B8 (size: 0x28)
    bool bWaitForStreamingToComplete;                                                 // 0x00E0 (size: 0x1)
    FGameplayTagContainer AbilitiesToCancelDuringTeleport;                            // 0x00E8 (size: 0x20)
    class UHeraMissionObjective* TaskCompleteObjective;                               // 0x0108 (size: 0x8)

}; // Size: 0x110

class UWrestlerTimeManagerSubsystem : public UWorldSubsystem
{
    TArray<FWrestlerTimeDilationData> TimeDilations;                                  // 0x0038 (size: 0x10)

    void SetTimeDilation(class UObject* Instigator, const FWrestlerTimeDilator& Handle, float TimeDilation);
    void RemoveTimeDilation(class UObject* Instigator, const FWrestlerTimeDilator& Handle);
    void RemoveAllTimeDilation(class UObject* Instigator);
    float GetCurrentTimeDilation(class UObject* Instigator);
    void CreateTimeDilation(class UObject* Instigator, FWrestlerTimeDilator& Handle, const FWrestlerTimeDilationConfig& Config);
}; // Size: 0x50

class UWrestlerTimedWithTagsStateTreeTask : public UWrestlerWithTagsStateTreeTask
{
    float Duration;                                                                   // 0x0068 (size: 0x4)
    FName CurrentStateName;                                                           // 0x006C (size: 0x8)
    float PassedTime;                                                                 // 0x0074 (size: 0x4)

}; // Size: 0x78

class UWrestlerToken : public UObject
{
    class AActor* CurrentHolder;                                                      // 0x0050 (size: 0x8)
    EWrestlerTokenState TokenState;                                                   // 0x0058 (size: 0x1)

    EWrestlerTokenState GetTokenState();
    class AActor* GetHolder();
}; // Size: 0x60

class UWrestlerTokenConfigData : public UWrestlerConfigDataAsset
{
    TMap<class EWrestlerGameplayTokenType, class FWrestlerTokenTypeConfig> TypeToConfig; // 0x0030 (size: 0x50)

}; // Size: 0x80

class UWrestlerTokenManager : public UObject
{
    TMap<class EWrestlerGameplayTokenType, class FWrestlerTokenContainer> Tokens;     // 0x0028 (size: 0x50)
    TMap<class EWrestlerGameplayTokenType, class UWrestlerTokenStealingController*> TokenStealingControllers; // 0x0078 (size: 0x50)

    int32 TotalTokensInUse();
    int32 TotalFreeTokensStats();
    int32 TokensQueuedByTypeStats(EWrestlerGameplayTokenType InTokenType);
    int32 TokensCooldownByTypeStats(EWrestlerGameplayTokenType InTokenType);
    int32 TokensActiveByTypeStats(EWrestlerGameplayTokenType InTokenType);
    void ReturnToken(EWrestlerGameplayTokenType InTokenType, class UWrestlerToken* InReturnToken, bool bInDeath);
    TMap<AActor*, float> GetActorsScore(EWrestlerGameplayTokenType InTokenType);
    TMap<AActor*, float> GetActorsHandicap(EWrestlerGameplayTokenType InTokenType);
    int32 FreeTokensByTypeStats(EWrestlerGameplayTokenType InTokenType);
    FString EnemiesQueuedByTypeStats(EWrestlerGameplayTokenType InTokenType);
    FString EnemiesCooldownByTypeStats(EWrestlerGameplayTokenType InTokenType);
    FString EnemiesActiveByTypeStats(EWrestlerGameplayTokenType InTokenType);
}; // Size: 0xC8

class UWrestlerTokenSinkComponent : public UActorComponent
{
    class AActor* CurrentTarget;                                                      // 0x00A0 (size: 0x8)
    class UWrestlerToken* HeldToken;                                                  // 0x00A8 (size: 0x8)
    class UWrestlerTokenManager* SourceTokenManager;                                  // 0x00B0 (size: 0x8)
    FName ConfigDataName;                                                             // 0x00B8 (size: 0x8)
    FTimerHandle TokenCooldownTimerHandle;                                            // 0x00C8 (size: 0x8)

    void ReturnToken();
    FWrestlerTokenRequestResult RequestToken(class UWrestlerTokenManager* InTokenSource, const FWrestlerTokenRequestQuery& InTokenQuery);
    void OnTokenStolen(const FWrestlerTokenRequestQuery& InStealersRequest);
    bool HasActiveToken();
    class UWrestlerToken* GetHeldToken();
    void CooldownToken(float InOverrideCooldownTime);
}; // Size: 0xD0

class UWrestlerTokenSource : public UWorldSubsystem
{
    FName ConfigDataName;                                                             // 0x0030 (size: 0x8)
    class UWrestlerTokenManager* TokenManager;                                        // 0x0038 (size: 0x8)
    class UWrestlerBaseWidget* TokenDebugWidget;                                      // 0x0040 (size: 0x8)

    class UWrestlerTokenManager* GetTokenManager();
}; // Size: 0x48

class UWrestlerTokenStealingController : public UObject
{
    class AActor* OwningActor;                                                        // 0x0028 (size: 0x8)

    FWrestlerTokenRequestResult RequestTokenSteal(const FWrestlerTokenRequestQuery& InQuery, const FWrestlerTokenContainer& InTokenContainer);
    class UWrestlerToken* RequestActorCompare(class AActor* InTargetActor, const TArray<class UWrestlerToken*>& InQueuedTokens);
    void LastActiveActor(class AActor* InActiveActor);
    float GetScore(class AActor* InRequestingActor, class AActor* InTarget);
    class AActor* GetOwningActor();
    void ActorDied(const class AActor* InDiedActor);
}; // Size: 0x30

class UWrestlerTrainerMenu : public UWrestlerMenu
{
    class UWrestlerClanTrainerMenuWidget* ClanTrainerAbilityWidget;                   // 0x0300 (size: 0x8)

    void SetClanTrainer(const int32& InClanValue);
}; // Size: 0x308

class UWrestlerTransientCacheSubSystem : public UWorldSubsystem
{
    TMap<class FName, class TSubclassOf<UWrestlerDialogueAbilitylData>> DialogueAbilityCache; // 0x0030 (size: 0x50)

    void RemoveDialogueAbilityFromCache(const FName& InKey);
    bool GetDialogueAbilityFromCache(const FName& InKey, TSubclassOf<class UWrestlerDialogueAbilitylData>& OutDialogueData);
    void AddDialogueAbilityToCache(const FName& InKey, TSubclassOf<class UWrestlerDialogueAbilitylData> InClass);
}; // Size: 0x80

class UWrestlerTransitionSettings : public UWrestlerSettingsBase
{
    FGameplayTagContainer VolumeOverlapPlayerIgnoreTags;                              // 0x0048 (size: 0x20)
    TSoftObjectPtr<UHeraPropertyGameplayTag> PlayerLocationProperty;                  // 0x0068 (size: 0x28)
    FGameplayTagContainer SnowingInteriorLocationIgnoreTags;                          // 0x0090 (size: 0x20)

}; // Size: 0xB0

class UWrestlerTransitionSubsystem : public UGameInstanceSubsystem
{
    class UHeraPropertyGameplayTag* PlayerLocationProperty;                           // 0x0038 (size: 0x8)

    void SetDataLayerRuntimeStates(const TArray<class UDataLayerAsset*>& InDatalayersToUnload, const TArray<class UDataLayerAsset*>& InDatalayersToLoad, const TArray<class UDataLayerAsset*>& InDatalayersToActivate);
    void SeamlessTransitionContinueFromMidpoint();
    void RequestSeamlessLevelTransition(class AWrestlerTransitionActor* InTransitionActor, const FGameplayTag InDestinationTag, const FGameplayTag& InWorldTag, const FGameplayTag& InPlayerStartTag, FString InLevelLoadOptions, const class UDataLayerAsset* InTransitionDataLayer, const bool bInPauseAtMidpoint, EWrestlerTransitionRequestResult& OutResult);
    void RequestDataLayerTransition(class AWrestlerTransitionActor* InTransitionActor, const FGameplayTag InDestinationTag, const TArray<class UDataLayerAsset*>& InDatalayersToUnload, const TArray<class UDataLayerAsset*>& InDatalayersToLoad, const TArray<class UDataLayerAsset*>& InDatalayersToActivate, EWrestlerTransitionRequestResult& OutResult);
    bool IsRequestInProgress();
    bool IsLocationGameplayTagInInterior(const FGameplayTag& InTagToCheck);
    bool CalculateRelativeTransitionTransform(const class APawn* InPlayer, FWrestlerTransitionTransform& OutTransform);
    bool ApplyActorRelativeTransform(class APawn* InPlayer, const FWrestlerTransitionTransform& InTransitionTransform);
}; // Size: 0x50

class UWrestlerTraversalAbilityTask : public UAbilityTask
{
    FWrestlerTraversalAbilityTaskOnLerpComplete OnLerpComplete;                       // 0x0080 (size: 0x10)
    void TraversalDelegate();
    FWrestlerTraversalAbilityTaskOnFinish OnFinish;                                   // 0x0090 (size: 0x10)
    void TraversalDelegate();

}; // Size: 0xE8

class UWrestlerTraversalComponent : public UActorComponent
{
    FVector2D ClimbVector;                                                            // 0x00A0 (size: 0x10)
    bool bClimbLookingAtWall;                                                         // 0x00B0 (size: 0x1)
    FVector NewWallClimbInwardVector;                                                 // 0x00B8 (size: 0x18)
    FWrestlerTraversalCommonVars Common;                                              // 0x00E0 (size: 0x18)
    FWrestlerTraversalWallClimbVars WallClimb;                                        // 0x00F8 (size: 0x28)
    FWrestlerTraversalVaultVars Vault;                                                // 0x0120 (size: 0x28)
    FWrestlerTraversalMantleVars Mantle;                                              // 0x0148 (size: 0x1C)
    FWrestlerTraversalLedgeVaultVars LedgeVault;                                      // 0x0164 (size: 0x18)
    FWrestlerTraversalObjectSearchVars ObjectSearch;                                  // 0x017C (size: 0xC)
    class AActor* AttachActor;                                                        // 0x0350 (size: 0x8)
    TArray<TWeakObjectPtr<AActor>> nearbyTraversalObjects;                            // 0x0360 (size: 0x10)

    bool WasGliding();
    void SetTraversalVelocity(FVector InNewTraversalVelocity);
    void SetMantleOffsets(const FWrestlerTraversalMantleOffsets& NewMantleOffsets);
    void SetLedgeVaultStartLocation(const FVector& Location);
    void SetLedgeVaultEndLocation(const FVector& Location);
    void SetAttachDirection(const FVector& InAttachDirection);
    bool IsAttached();
    FVector GetWallClimbWallNormal();
    float GetWallClimbVerticalSpeed();
    TEnumAsByte<EPhysicalSurface> GetWallClimbSurface();
    FVector GetWallClimbStartPosition();
    float GetWallClimbOffset();
    FVector GetWallClimbLedgeCornerPosition();
    FVector GetWallClimbFinalPosition();
    float GetWallClimbDuration();
    TEnumAsByte<EPhysicalSurface> GetVaultSurface();
    FVector GetVaultStartLocation();
    FVector GetVaultHandHoldLocation();
    FVector GetVaultEndLocation();
    FVector GetTraversalVelocity();
    TEnumAsByte<EPhysicalSurface> GetMantleSurface();
    FVector GetMantleStartLocation();
    FWrestlerTraversalMantleOffsets GetMantleOffsets();
    bool GetMantleIntoCrouch();
    FVector GetMantleEndLocation();
    FVector GetLedgeVaultStartLocation();
    FWrestlerTraversalLedgeVaultVars GetLedgeVaultParameters();
    FVector GetLedgeVaultEndLocation();
    FVector GetAttachDirection();
    bool GetAttachActor(class AActor*& OutAttachActor);
    void Detach();
    bool CanWallClimb();
    bool CanVault();
    bool CanMantle();
    bool AttachTo(class AActor* InLinkActor);
}; // Size: 0x3A0

class UWrestlerTutorialComponent : public UActorComponent
{
    class UTutorialAssetMap* TutorialAssetMap;                                        // 0x00A0 (size: 0x8)

    FWrestlerTutorialData GetTutorialWithID(FString InID);
}; // Size: 0xA8

class UWrestlerTutorialTask : public UHeraAutomataTask
{
    FWrestlerTutorialTaskOnPlayerAction OnPlayerAction;                               // 0x0088 (size: 0x10)
    void WaitForPlayerActionDelegate();
    class UWrestlerTutorialComponent* TutorialComponent;                              // 0x0098 (size: 0x8)

    void StopBlockingInput();
    void StartBlockingInput();
    void OnPlayerLockInDialogue();
    FWrestlerTutorialData GetTutorialData(FString InID);
    class AHeraHUD* GetHeraHUD();
}; // Size: 0x158

class UWrestlerUI : public UHeraUI
{
}; // Size: 0xD0

class UWrestlerUIFunctionLibrary : public UWrestlerBlueprintFunctionLibrary
{

    bool SetCanvasSlotPositionToWorldLocation(class APlayerController* PlayerController, class UCanvasPanel* CanvasPanel, class UCanvasPanelSlot* CanvasSlot, const FVector& WorldLocation);
    bool ProjectWorldToScreen(class APlayerController* PlayerController, const FVector& WorldLocation, FVector2D& OutScreenPosition);
    bool ProjectWorldToCanvas(class APlayerController* PlayerController, class UCanvasPanel* CanvasPanel, const FVector& WorldLocation, FVector2D& OutNormalizedPosition);
    void GetScreenDirectionToWorld(class APlayerController* PlayerController, const FVector& WorldLocation, FVector2D& OutDirection);
    void GetScreenAngleToWorld(class APlayerController* PlayerController, const FVector& WorldLocation, float& OutAngle);
    bool GetFormattedQuestDataForGameplayTag(class APlayerController* PlayerController, const FGameplayTag& InQuestTag, FText& OutQuestTitle, TArray<FText>& OutQuestObjectives, TArray<FText>& OutQuestDescriptions);
}; // Size: 0x28

class UWrestlerUIHelperLibrary : public UBlueprintFunctionLibrary
{

    void UnlockSecondaryAbility(FString InAbilityName);
    void UnlockPlayerCostume(const FGameplayTag& InCostumeID);
    void SetHealth(class AWrestlerCharacter* InCharacter, float InNewHealth);
    bool IsPlatformXSX();
    bool IsPlatformPS5();
    bool IsPlatformPC();
    bool IsPartitionedWorld(const class UObject* InWorldContextObject);
    bool HasNetworkConnection();
    class UWrestlerUISettings* GetWrestlerUISettings();
    class UWrestlerHUDWidget* GetWrestlerHUDWidget(const class APlayerController* InPlayerController);
    class AWrestlerHUD* GetWrestlerHUD(const class APlayerController* InPlayerController, EHeraValidHUD& OutExecBranches, const class UObject* InWorldContextObject);
    class UCommonTextStyle* GetSubtitleStyle(FString InStyleName);
    class UWidget* GetFocusedUMGWidget();
    TArray<FWrestlerSimplifyAbilityDataStruct> GetAbilitiesClan(class UDataTable* DataTable);
    FText FormatLineBreaks(const FText& InValue);
    bool CheckForAbilitiesToBuy(EPlayerClan InCurrentClan, int32 InPlayerPoints);
    class UWrestlerRPGMenu* CastToRPGMenu(class UHeraMenu* InHeraMenu);
}; // Size: 0x28

class UWrestlerUILocalisationDataTable : public UDataTable
{
}; // Size: 0xC0

class UWrestlerUIMapSubsystem : public UWorldSubsystem
{
    FWrestlerUIMapSubsystemOnWaypointPlacedDelegate OnWaypointPlacedDelegate;         // 0x0030 (size: 0x10)
    void OnWaypointPlaced();
    FWrestlerUIMapSubsystemOnWaypointRemovedDelegate OnWaypointRemovedDelegate;       // 0x0040 (size: 0x10)
    void OnWaypointRemoved();
    TSet<FWrestlerUIMarkerInfo> UIMarkers;                                            // 0x0068 (size: 0x50)
    TMap<class FGameplayTag, class FTransform> UnlockedTrainersPositions;             // 0x00B8 (size: 0x50)
    TMap<class FGameplayTag, class FWrestlerUIAchievementInfo> FoundAchievementCollectablesPositions; // 0x0108 (size: 0x50)
    TMap<class FGameplayTag, class FTransform> LocationsPositions;                    // 0x0158 (size: 0x50)
    TMap<class FGameplayTag, class FTransform> FeedingStationPositions;               // 0x01A8 (size: 0x50)
    FWrestlerWaypointData RegisteredWaypointActor;                                    // 0x01F8 (size: 0x20)
    FString RegisteredWaypointActorName;                                              // 0x0218 (size: 0x10)

    void UnclockTrainerInMap();
    void TagRemovedFromWorld(FString InActorName, FString Tag);
    void OnNewActiveQuestSet(FGameplayTag InQuestTag);
    void HeraBoolPropertyChanged(FName InPropertyName, bool InNewValue);
    void AddTransformToArray(const FGameplayTag& InGameplayTag, class UObject* ObjectToAdd);
}; // Size: 0x228

class UWrestlerUISettings : public UHeraSettings
{
    TSoftObjectPtr<USubtitlesAssetMap> SubtitlesSize;                                 // 0x0038 (size: 0x28)
    bool bIsLasombraDLC_Debug;                                                        // 0x0060 (size: 0x1)
    bool bIsToreadorDLC_Debug;                                                        // 0x0061 (size: 0x1)
    TSoftObjectPtr<UDataTable> ControlsIconDataTable;                                 // 0x0068 (size: 0x28)
    TSoftObjectPtr<UDataTable> AbilityTreeDataTable;                                  // 0x0090 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyStateTrackingList> AcquiredAbilitiesList;             // 0x00B8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyStateTrackingList> AvailableAbilitiesList;            // 0x00E0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyStateTrackingList> CharacterCostumesList;             // 0x0108 (size: 0x28)
    TSoftObjectPtr<UWrestlerCodexData> CodexStoryInfo;                                // 0x0130 (size: 0x28)
    TSoftObjectPtr<UStringTable> MenuUILocalizationDataTable;                         // 0x0158 (size: 0x28)
    TSoftObjectPtr<UStringTable> HUDUILocalizationDataTable;                          // 0x0180 (size: 0x28)
    TSoftObjectPtr<UStringTable> AbilitiesUILocalizationDataTable;                    // 0x01A8 (size: 0x28)
    TSoftObjectPtr<UStringTable> InteractionUILocalizationDataTable;                  // 0x01D0 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> TrainersUnlocked;                               // 0x01F8 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> CodexUnlockedInDialogue;                        // 0x0220 (size: 0x28)
    TSoftObjectPtr<UIconLookupTable> IconLookupTable;                                 // 0x0248 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> VideoLoadingScreen_Debug;                       // 0x0270 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyBool> TDLCHalloweenUnlocked;                          // 0x0298 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyGameplayTag> DLCPlayerCharacterPropertyToLoad;        // 0x02C0 (size: 0x28)

    void SetDLCPlayerCharacterPropertyToLoad(FGameplayTag InPlayerTag);
    TSoftObjectPtr<UHeraPropertyGameplayTag> GetPlayerDLCCharacterPropertyToLoad();
}; // Size: 0x2E8

class UWrestlerUISubsystem : public UGameInstanceSubsystem
{
    class UWrestlerUISettings* UISettings;                                            // 0x0030 (size: 0x8)
    bool bBootFlowPlayed;                                                             // 0x0038 (size: 0x1)
    class USubtitlesAssetMap* SubtitleAssetMap;                                       // 0x0040 (size: 0x8)

    void SetBootFlowPlayed(bool Value);
    bool GetBootFlowPlayed();
}; // Size: 0x90

class UWrestlerUltraVolumetricsFogPreset : public UDataAsset
{
    FWrestlerUltraVolumetricsFogParameters Parameters;                                // 0x0030 (size: 0x68)

}; // Size: 0x98

class UWrestlerUpdateISMVertexAnimationProcessor : public UMassUpdateISMProcessor
{
}; // Size: 0x360

class UWrestlerUpdateQuestTask : public UHeraAutomataTask
{
    TSoftObjectPtr<UWrestlerQuestData> QuestData;                                     // 0x0088 (size: 0x28)
    FString ProgressVariable;                                                         // 0x00B0 (size: 0x10)
    TSet<FString> Objectives;                                                         // 0x00C0 (size: 0x50)

    TArray<FString> GetQuestObjectives();
    FString GetCurrentQuestLine();
}; // Size: 0x110

class UWrestlerVFXBlueprintUtilities : public UBlueprintFunctionLibrary
{

    void GetExposedNiagaraParameters(class UNiagaraComponent* InNiagaraSystemComponent, TArray<FName>& OutVectorParams, TArray<FName>& OutScalarParams, TArray<FName>& OutLinearColorParams, TArray<FName>& OutVector4Params);
}; // Size: 0x28

class UWrestlerWaypointComponent : public UActorComponent
{
    FGameplayTagContainer WaypointTags;                                               // 0x00A0 (size: 0x20)
    FGameplayTagContainer WaypointQuestTags;                                          // 0x00C0 (size: 0x20)
    FWrestlerWaypointComponentOnWaypointsAddedEvent OnWaypointsAddedEvent;            // 0x00E0 (size: 0x10)
    void WrestlerWaypointEvent(FString Tag, class AActor* Waypoint);
    FWrestlerWaypointComponentPostWaypointsAddedEvent PostWaypointsAddedEvent;        // 0x00F0 (size: 0x10)
    void WrestlerWaypointEvent(FString Tag, class AActor* Waypoint);
    FWrestlerWaypointComponentOnWaypointsRemovedEvent OnWaypointsRemovedEvent;        // 0x0100 (size: 0x10)
    void WrestlerWaypointEvent(FString Tag, class AActor* Waypoint);
    class UHeraPropertyComponentGameplayTag* LocationTagProperty;                     // 0x0140 (size: 0x8)
    TSet<TWeakObjectPtr<AWrestlerWaypoint_Location>> LocationChangedListeners;        // 0x0148 (size: 0x50)

    void UpdateTagFilter(FGameplayTag Tag);
    void OnWaypointRemoved(FString InTag, class UObject* InObject);
    void OnWaypointAdded(FString InTag, class UObject* InObject);
    void OnPlayerLocationPropertyChanged(const FGameplayTag& InNewValue);
    void OnNewActiveQuestSet(FGameplayTag InQuestTag);
    TMap<class AActor*, class FString> GetWaypoints();
}; // Size: 0x198

class UWrestlerWaypointIndicator : public UWrestlerBaseWidget
{
    class UOverlay* IndicatorPanel;                                                   // 0x02C8 (size: 0x8)
    class UTextBlock* WaypointDistanceText;                                           // 0x02D0 (size: 0x8)
    bool bDisplayDirWaypoint;                                                         // 0x02D8 (size: 0x1)
    float WaypointAngle;                                                              // 0x02DC (size: 0x4)
    float DisappearingDistance;                                                       // 0x02E0 (size: 0x4)
    float TestPeriod;                                                                 // 0x02E4 (size: 0x4)

    void SetDistanceVisibility(ESlateVisibility InVisibility);
    void RefreshWidget(class AActor* InTargetActor);
}; // Size: 0x2F0

class UWrestlerWaypointWidgetsContainer : public UWrestlerBaseWidget
{
    class UCanvasPanel* IndicatorsContainer;                                          // 0x02C8 (size: 0x8)
    TMap<class FName, class TSubclassOf<UWrestlerWaypointIndicator>> IndicatorWidgetClassPerTag; // 0x02D0 (size: 0x50)
    TSubclassOf<class UWrestlerWaypointIndicator> DefaultIndicatorWidgetClass;        // 0x0320 (size: 0x8)
    FVector2D IndicatorSize;                                                          // 0x0328 (size: 0x10)
    TArray<FWrestlerWaypointIndicatorData> ActiveIndicators;                          // 0x0338 (size: 0x10)
    class UWrestlerWaypointIndicator* PathIndicatorWidget;                            // 0x0348 (size: 0x8)
    class AWrestlerWaypointSplineActor* ActiveWaypointSpline;                         // 0x0350 (size: 0x8)

    void OnWaypointRemoved(FString Tag, class AActor* WaypointTarget);
    void OnWaypointPathActive(class AWrestlerWaypointSplineActor* InNewWaypointPath, bool bIsActive);
    void OnWaypointAdded(FString Tag, class AActor* WaypointTarget);
    class UWrestlerWaypointIndicator* GetIndicatorForTargetActor(const class AActor* Target);
    void AddWaypointIndicator(FString Tag, class AActor* WaypointTarget);
}; // Size: 0x360

class UWrestlerWeaponAbilitySet : public UPrimaryDataAsset
{
    TArray<FWrestlerAbilitySet_GameplayAbility> GrantedGameplayAbilities;             // 0x0030 (size: 0x10)
    TArray<FWrestlerAbilitySet_GameplayEffect> GrantedGameplayEffects;                // 0x0040 (size: 0x10)

}; // Size: 0x50

class UWrestlerWeaponInstance : public UWrestlerEquipmentInstance
{
    float BaseMeleeDamage;                                                            // 0x0038 (size: 0x4)
    TMap<FGameplayTag, float> WeaponData;                                             // 0x0040 (size: 0x50)

    void UpdateFiringTime();
    float GetWeaponDataByTag(const FGameplayTag& InDataTag);
    float GetTimeSinceLastInteractedWith();
    float GetBaseMeleeDamage();
}; // Size: 0xA0

class UWrestlerWeatherComponent : public USceneComponent
{
    class UWrestlerWeatherInformation* WeatherInformation;                            // 0x02A0 (size: 0x8)
    FWrestlerWeatherParameters WeatherParameters;                                     // 0x02A8 (size: 0x38)

}; // Size: 0x320

class UWrestlerWeatherInformation : public UHeraDataAsset
{
    FWrestlerWeatherParameters WeatherParameters;                                     // 0x0030 (size: 0x38)

}; // Size: 0x68

class UWrestlerWeatherReceiverComponent : public USceneComponent
{
    FWrestlerWeatherParameters CurrentWeatherParameters;                              // 0x02A0 (size: 0x38)

    void UpdateWeather(const FWrestlerWeatherParameters& InParameters);
    FWrestlerWeatherParameters GetCurrentWeatherParameters();
}; // Size: 0x2E0

class UWrestlerWeatherRecvNiagaraComp : public UWrestlerWeatherReceiverComponent
{
}; // Size: 0x2F0

class UWrestlerWeatherSetupComponent : public USceneComponent
{
    bool bIsAffectingPlayer;                                                          // 0x02A0 (size: 0x1)
    EWrestlerWeatherSetupScope Scope;                                                 // 0x02A1 (size: 0x1)
    int32 Priority;                                                                   // 0x02A4 (size: 0x4)
    EWrestlerWeatherSetupType Type;                                                   // 0x02A8 (size: 0x1)
    class UWrestlerWeatherInformation* WeatherInformation;                            // 0x02B0 (size: 0x8)
    FWrestlerWeatherParameters WeatherParameters;                                     // 0x02B8 (size: 0x38)

}; // Size: 0x2F0

class UWrestlerWeatherSubsystem : public UGameInstanceSubsystem
{
    FWrestlerWeatherSubsystemOnWindGust OnWindGust;                                   // 0x0038 (size: 0x10)
    void OnWindGust();
    FWrestlerWeatherSubsystemOnWeatherUpdate OnWeatherUpdate;                         // 0x0048 (size: 0x10)
    void OnWeatherUpdate(const FWrestlerWeatherParameters& WeatherParameters);
    float WindGustTimerRate;                                                          // 0x0058 (size: 0x4)

    void UnRegisterWeatherSetup(class UWrestlerWeatherSetupComponent* InSetup);
    void SetWindGustTimerRate(float InRate);
    void RegisterWeatherSetup(class UWrestlerWeatherSetupComponent* InSetup);
    float GetWindGustTimerRate();
    FWrestlerWeatherParameters GetCurrentWeatherParameters();
}; // Size: 0x1B0

class UWrestlerWidget_AltAbility : public UWrestlerBaseWidget
{
    class UCanvasPanel* BruhajAbilities;                                              // 0x02C8 (size: 0x8)
    class UCanvasPanel* BanuAbilities;                                                // 0x02D0 (size: 0x8)
    class UCanvasPanel* TremereAbilities;                                             // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

class UWrestlerWithTagsStateTreeTask : public UWrestlerStateTreeTaskBase
{
    FGameplayTagContainer StateTags;                                                  // 0x0048 (size: 0x20)

}; // Size: 0x68

class UWrestlerWorldMapWidget : public UWrestlerBaseMapWidget
{
}; // Size: 0x400

class UWrestlerWorldPartitionManager : public UObject
{
}; // Size: 0x40

class UWrestlerXPCollectableBoolComponent : public UHeraPersistenceComponentBool
{
}; // Size: 0xA0

class UWrestlerXPComponent : public UActorComponent
{
    class UHeraPropertyInt* ExperiencePointsProperty;                                 // 0x00A0 (size: 0x8)
    class UHeraPropertyInt* AbilityPointsProperty;                                    // 0x00A8 (size: 0x8)
    TMap<class EWrestlerGrantedPointsType, class UHeraPropertyInt*> BloodResonanceProperty; // 0x00B0 (size: 0x50)
    TMap<class EWrestlerGrantedPointsType, class UTexture2D*> BloodResonanceIcons;    // 0x0100 (size: 0x50)
    class UHeraPropertyInt* TotalAbilityPointsProperty;                               // 0x0150 (size: 0x8)
    class UWrestlerXPDataAsset* XPDataAsset;                                          // 0x0158 (size: 0x8)
    bool bConvertXPToAPAutomaticallyWhenPossible;                                     // 0x0160 (size: 0x1)
    FWrestlerXPComponentOnXPChanged OnXPChanged;                                      // 0x0168 (size: 0x10)
    void WrestlerXPDelegate(int32 NewPoints);
    FWrestlerXPComponentOnAPChanged OnAPChanged;                                      // 0x0178 (size: 0x10)
    void WrestlerNewAPDelegate(int32 NewPoints, int32 PreviousPoint);
    FWrestlerXPComponentOnAPChangedSimple OnAPChangedSimple;                          // 0x0188 (size: 0x10)
    void WrestlerXPDelegate(int32 NewPoints);
    FWrestlerXPComponentOnNewAPReceived OnNewAPReceived;                              // 0x0198 (size: 0x10)
    void WrestlerNewAPDelegate(int32 NewPoints, int32 PreviousPoint);
    FWrestlerXPComponentOnBRChanged OnBRChanged;                                      // 0x01A8 (size: 0x10)
    void WrestlerXPDelegate(int32 NewPoints);
    FWrestlerXPComponentOnXPOrAPChanged OnXPOrAPChanged;                              // 0x01B8 (size: 0x10)
    void WrestlerXPEventDelegate(FWrestlerGrantedPointsData NewEvent);
    FWrestlerXPComponentOnBRTypeGained OnBRTypeGained;                                // 0x01C8 (size: 0x10)
    void WrestlerXPEventDelegate(FWrestlerGrantedPointsData NewEvent);
    class UTexture2D* APIcon;                                                         // 0x01D8 (size: 0x8)
    FWrestlerNotificationData XPNotification;                                         // 0x01E0 (size: 0x58)
    double XPNotificationDuration_Default;                                            // 0x0238 (size: 0x8)
    double XPNotificationDuration_Long;                                               // 0x0240 (size: 0x8)

    void SpendSanguinePoints(int32 InSanguineToSpend);
    void SpendMelancholicPoints(int32 InSanguineToSpend);
    void SpendCholericPoints(int32 InSanguineToSpend);
    void SpendAP(int32 InAPToSpend);
    void ShouldOverrideNotificationTimer(bool InOverride, double InNewTimer);
    void ReceivePooledXPs();
    void PoolXPFromEvent(const FGameplayTag& InEventTag);
    int32 MaxXPForNextAPPoint();
    FWrestlerGrantedPointsData GetEventData(const FGameplayTag& InEventTag);
    int32 GetAvailableXP();
    int32 GetAvailableSanguinePoints();
    int32 GetAvailableMelancholicPoints();
    int32 GetAvailableCholericPoints();
    int32 GetAvailableAP();
    void GetAchievementCounterData(FGameplayTag InAchievementTag, int32& OutTotalToFind, int32& OutFoundCount);
    bool CanAffordAbility(TArray<FTrainingCost> InCost, TArray<FTrainingCost>& OutMissingCost);
    void AddXPFromFeed(class AActor* InFeedActor);
    void AddXP(int32 InXPToAdd);
    void AddSanguinePoints(int32 InSanguineToAdd);
    bool AddPointsForRegisteredEvent(const FGameplayTag& InEventTag, bool bInOverridePooling);
    bool AddPointsForCustomEvent(const FWrestlerGrantedPointsData& InEventData, bool bInOverridePooling);
    void AddMelancholicPoints(int32 InSanguineToAdd);
    void AddCholericPoints(int32 InSanguineToAdd);
    void AddAP(int32 InAPToAdd);
    void AchievementCollected(const FGameplayTag InAchievementTag, class UObject* ObjectToAdd);
}; // Size: 0x258

class UWrestlerXPDataAsset : public UHeraDataAsset
{
    TMap<class FGameplayTag, class FWrestlerGrantedPointsData> EventTagAndData;       // 0x0030 (size: 0x50)
    TMap<class FGameplayTag, class FWrestlerAchievementCollectableCounter> AchievementCollectableCounters; // 0x0080 (size: 0x50)
    FWrestlerXPConversionData ConversionData;                                         // 0x00D0 (size: 0x88)
    int32 XPtoAPGoal;                                                                 // 0x0158 (size: 0x4)

}; // Size: 0x160

class UWrestlerZGSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{
    FZoneGraphTagFilter TagFilter;                                                    // 0x0030 (size: 0xC)
    float MinGap;                                                                     // 0x003C (size: 0x4)
    float MaxGap;                                                                     // 0x0040 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x0044 (size: 0x4)
    bool RandomizeLocations;                                                          // 0x0048 (size: 0x1)
    bool bFillZones;                                                                  // 0x0049 (size: 0x1)
    float WidthRandomUsage;                                                           // 0x004C (size: 0x4)
    FWrestlerZGSpawnPointsGeneratorData Data;                                         // 0x0050 (size: 0x2C)

}; // Size: 0x80

class UWrestlerZoneGraphVolumeAnnotation : public UZoneGraphAnnotationComponent
{
    FZoneGraphTagMask AnnotationTags;                                                 // 0x05E0 (size: 0x4)
    TArray<FWrestlerZoneGraphAnnotationArea> PendingAnnotationEvents;                 // 0x05E8 (size: 0x10)
    TArray<FWrestlerZoneGraphAnnotationArea> ActiveAnnotationEvents;                  // 0x05F8 (size: 0x10)
    class UZoneGraphSubsystem* ZoneGraphSubsystem;                                    // 0x0658 (size: 0x8)

}; // Size: 0x660

#endif
