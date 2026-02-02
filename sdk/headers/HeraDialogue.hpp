#ifndef UE4SS_SDK_HeraDialogue_HPP
#define UE4SS_SDK_HeraDialogue_HPP

#include "HeraDialogue_enums.hpp"

struct FHeraBantsArray
{
    TArray<FHeraBantsData> BantsArray;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FHeraBantsCooldownElement
{
    FGameplayTag NarrativePrompt;                                                     // 0x0000 (size: 0x8)
    double Cooldown;                                                                  // 0x0008 (size: 0x8)
    double TimeTriggered;                                                             // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FHeraBantsData
{
    TArray<FHeraBantsParticipant> Participants;                                       // 0x0000 (size: 0x10)

}; // Size: 0x58

struct FHeraBantsParticipant
{
    FHeraDialogueParticipant Member;                                                  // 0x0000 (size: 0x30)
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FHeraBantsPromptData
{
    FGameplayTag PromptTag;                                                           // 0x0000 (size: 0x8)
    int32 MaxSimultaneous;                                                            // 0x0008 (size: 0x4)
    TEnumAsByte<EHeraBantsPromptLimitExceededBehaviour> PromptLimitExceededBehaviour; // 0x000C (size: 0x1)

}; // Size: 0x10

struct FHeraDialogueAnimBlendingOverrideParams
{
    float BlendSpeed;                                                                 // 0x0000 (size: 0x4)
    class UCurveFloat* BlendCurve;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHeraDialogueAudioPlaybackItem
{
    class UAkExternalMediaAsset* MediaAsset;                                          // 0x0000 (size: 0x8)
    bool bCallbackOnFinished;                                                         // 0x0008 (size: 0x1)
    int32 PlayingID;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

struct FHeraDialogueAudioRequest
{
    int32 StoryHandle;                                                                // 0x0000 (size: 0x4)
    class UAkAudioEvent* DialogueAudioEvent;                                          // 0x0008 (size: 0x8)
    float DialogueVolumeOffsetdB;                                                     // 0x0010 (size: 0x4)
    class UAkRtpc* DialogueVolumeRtpc;                                                // 0x0018 (size: 0x8)
    class UAkRtpc* DialoguePriorityRtpc;                                              // 0x0020 (size: 0x8)
    float DialoguePriorityValue;                                                      // 0x0028 (size: 0x4)
    FSoftObjectPath ExternalSourceAssetPath;                                          // 0x0030 (size: 0x20)
    class UAkGameObject* AudioObject;                                                 // 0x0050 (size: 0x8)
    bool bUseGlobalGameObject;                                                        // 0x0058 (size: 0x1)
    bool bCallbackOnFinished;                                                         // 0x0059 (size: 0x1)
    bool bUseMultiplePositions;                                                       // 0x005A (size: 0x1)
    TArray<FTransform> EmitterTransforms;                                             // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FHeraDialogueAutoBindingProperty
{
    FString DialogueVariableName;                                                     // 0x0000 (size: 0x10)
    TSoftObjectPtr<UHeraPropertyBase> HeraProperty;                                   // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FHeraDialogueBodyIdlePair
{
    FGameplayTag CharacterTag;                                                        // 0x0000 (size: 0x8)
    TSoftObjectPtr<UAnimSequence> BodyIdleAnimation;                                  // 0x0008 (size: 0x28)
    bool bResetStateAtEventEnd;                                                       // 0x0030 (size: 0x1)
    bool bOverrideBlendingParams;                                                     // 0x0031 (size: 0x1)
    FHeraDialogueAnimBlendingOverrideParams OverrideBlendingParams;                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FHeraDialogueCameraAvailabilityInfo
{
}; // Size: 0x50

struct FHeraDialogueCharacterLocationStruct
{
    FGameplayTag CharacterTag;                                                        // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FRotator Rotation;                                                                // 0x0020 (size: 0x18)
    bool bKeepPositionAfterRowEnds;                                                   // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FHeraDialogueCharacterTagAssociation
{
    FGameplayTag CharacterTag;                                                        // 0x0000 (size: 0x8)
    FString GoogleTtsName;                                                            // 0x0008 (size: 0x10)
    FText UserFacingCharacterName;                                                    // 0x0018 (size: 0x18)
    TSoftClassPtr<AActor> ConversationCharacterClass;                                 // 0x0030 (size: 0x28)
    FText CharacterBio;                                                               // 0x0058 (size: 0x18)
    TSoftObjectPtr<UHeraDialogueAudioSettings> AudioSettings;                         // 0x0070 (size: 0x28)

}; // Size: 0x98

struct FHeraDialogueChoice
{
    FString ChoiceText;                                                               // 0x0000 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FHeraDialogueDopeSheetRow : public FTableRowBase
{
    FText Text;                                                                       // 0x0008 (size: 0x18)
    FString Comment;                                                                  // 0x0020 (size: 0x10)
    FGameplayTag CharacterTag;                                                        // 0x0030 (size: 0x8)
    TSoftObjectPtr<UAnimSequence> FacialAnimation;                                    // 0x0038 (size: 0x28)
    TSoftObjectPtr<UAnimSequence> BodyAnimation;                                      // 0x0060 (size: 0x28)
    bool bLoopBodyAnimation;                                                          // 0x0088 (size: 0x1)
    FSoftObjectPath AudioAssetPath;                                                   // 0x0090 (size: 0x20)
    TSoftObjectPtr<UHeraDialogueAudioSettings> AudioSettings;                         // 0x00B0 (size: 0x28)
    float DialogueVolumeOffsetdB;                                                     // 0x00D8 (size: 0x4)
    FHeraDialogueViewTargetTransitionParams CameraTransitionParams;                   // 0x00DC (size: 0x28)
    TArray<class UHeraDialogueEvent*> DialogueTimelineEvents;                         // 0x0108 (size: 0x10)
    FName InkCharacterTag;                                                            // 0x0118 (size: 0x8)
    FName TtsGenerationHash;                                                          // 0x0120 (size: 0x8)
    float AudioAssetDuration;                                                         // 0x0128 (size: 0x4)
    float LineDuration;                                                               // 0x012C (size: 0x4)
    float AudioPaddingAfter;                                                          // 0x0130 (size: 0x4)
    int32 TextVersionNumber;                                                          // 0x0134 (size: 0x4)
    int32 AudioVersionNumber;                                                         // 0x0138 (size: 0x4)
    FString ChosenTake;                                                               // 0x0140 (size: 0x10)
    EFinalAudioStatus FinalAudioStatus;                                               // 0x0150 (size: 0x1)
    bool RequiresPickup;                                                              // 0x0151 (size: 0x1)
    TSoftObjectPtr<UAnimSequence> FacialAnimation_M;                                  // 0x0158 (size: 0x28)
    TSoftObjectPtr<UAnimSequence> BodyAnimation_M;                                    // 0x0180 (size: 0x28)
    class UAkExternalMediaAsset* AudioAssetPath_M;                                    // 0x01A8 (size: 0x8)
    float DialogueVolumeOffsetdB_M;                                                   // 0x01B0 (size: 0x4)
    float AudioAssetDuration_M;                                                       // 0x01B4 (size: 0x4)
    EFinalAudioStatus FinalAudioStatus_M;                                             // 0x01B8 (size: 0x1)
    bool RequiresPickup_M;                                                            // 0x01B9 (size: 0x1)
    bool CanSkipLine;                                                                 // 0x01BA (size: 0x1)

}; // Size: 0x1C0

struct FHeraDialogueHardcutIntroAnimation
{
    FGameplayTag CharacterTag;                                                        // 0x0000 (size: 0x8)
    TSoftObjectPtr<UAnimSequence> Animation;                                          // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FHeraDialogueLargestIdInStoryScope
{
    FName InkStoryScope;                                                              // 0x0000 (size: 0x8)
    int32 LargestInkID;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FHeraDialogueMovieSceneSectionParams
{
    FString InkID;                                                                    // 0x0000 (size: 0x10)
    FText TextLine;                                                                   // 0x0010 (size: 0x18)
    float Duration;                                                                   // 0x0028 (size: 0x4)
    bool bProcessInEditor;                                                            // 0x002C (size: 0x1)

}; // Size: 0x30

struct FHeraDialogueMovieSceneSectionTemplateParameters : public FHeraDialogueMovieSceneSectionParams
{
    FFrameNumber SectionStartTime;                                                    // 0x0030 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FHeraDialogueMovieSceneTrackImplementation : public FMovieSceneTrackImplementation
{
    TWeakObjectPtr<class UHeraDialogueInfo> DialoguePtr;                              // 0x0010 (size: 0x8)
    bool bShouldResolveStory;                                                         // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FHeraDialogueParticipant
{
    class AActor* Actor;                                                              // 0x0008 (size: 0x8)
    TWeakObjectPtr<class UAkGameObject> AudioObject;                                  // 0x0010 (size: 0x8)
    TArray<FTransform> EmitterTransforms;                                             // 0x0018 (size: 0x10)
    bool bSpeaking;                                                                   // 0x0028 (size: 0x1)
    bool bShouldProgressStory;                                                        // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FHeraDialoguePlayStatus
{
    float InCurrentDuration;                                                          // 0x0000 (size: 0x4)
    int32 InStoryHandle;                                                              // 0x0004 (size: 0x4)
    class UHeraDialogueSubsystem* InDialogueSubsystem;                                // 0x0008 (size: 0x8)
    class UHeraDialogueAudioController* AudioController;                              // 0x0010 (size: 0x8)
    class UHeraDialogueAnimationController* AnimationController;                      // 0x0018 (size: 0x8)
    class UHeraDialogueCameraController* CameraController;                            // 0x0020 (size: 0x8)
    class AHeraDialogueRig* DialogueRig;                                              // 0x0028 (size: 0x8)
    class UHeraDialogueEventKeyFrame* LastKeyFrame;                                   // 0x0030 (size: 0x8)
    class UHeraDialogueEventKeyFrame* NextKeyFrame;                                   // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FHeraDialoguePostProcessVideo
{
    TSoftObjectPtr<UMediaPlayer> MediaPlayer;                                         // 0x0000 (size: 0x28)
    TSoftObjectPtr<UMediaSource> MediaSource;                                         // 0x0028 (size: 0x28)

}; // Size: 0x50

struct FHeraDialogueRuntimeInfo
{
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x0000 (size: 0x8)
    class AHeraDialogueRig* DialogueRig;                                              // 0x0008 (size: 0x8)
    TMap<class FGameplayTag, class FHeraDialogueParticipant> ParticipantList;         // 0x0010 (size: 0x50)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0060 (size: 0x8)
    bool bStoryHasChoices;                                                            // 0x0068 (size: 0x1)
    bool bIsIntroInProgress;                                                          // 0x0069 (size: 0x1)
    bool bHidePlayerHUD;                                                              // 0x006A (size: 0x1)
    bool bDisablePlayerInput;                                                         // 0x006B (size: 0x1)
    bool bUsingFakePlayerOnRig;                                                       // 0x006C (size: 0x1)
    bool bShouldEvaluateLine;                                                         // 0x006D (size: 0x1)
    bool bShouldResetTimeElapsed;                                                     // 0x006E (size: 0x1)
    bool bShouldSkipLine;                                                             // 0x006F (size: 0x1)
    bool bHasBroadcastPresentChoices;                                                 // 0x0070 (size: 0x1)
    bool bCurrentLineAudible;                                                         // 0x0071 (size: 0x1)
    float CurrentLineDuration;                                                        // 0x0074 (size: 0x4)
    float CurrentLineTimeElapsed;                                                     // 0x0078 (size: 0x4)
    float LastTimeElapsed;                                                            // 0x007C (size: 0x4)
    float AudioEmitterDistanceSqr;                                                    // 0x0080 (size: 0x4)
    EHeraDialogueType DialogueType;                                                   // 0x0084 (size: 0x1)
    bool bShouldTearDownStoryImmediatelyOnFinished;                                   // 0x0085 (size: 0x1)
    bool bIsContinueStoryPending;                                                     // 0x0086 (size: 0x1)
    bool bIsContinueStorySequencerPending;                                            // 0x0087 (size: 0x1)
    int32 ChosenChoiceIndex;                                                          // 0x0088 (size: 0x4)

}; // Size: 0xA0

struct FHeraDialogueSectionEvalTemplate : public FMovieSceneEvalTemplate
{
    FHeraDialogueMovieSceneSectionTemplateParameters Params;                          // 0x0020 (size: 0x38)

}; // Size: 0x58

struct FHeraDialogueSerialisedDialogue
{
    uint32 StoryVersion;                                                              // 0x0000 (size: 0x4)
    FString StoryJson;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FHeraDialogueViewTargetTransitionParams
{
    EHeraDialogueCameraCutType CameraCutType;                                         // 0x0000 (size: 0x4)
    bool bHidePlayerForTransition;                                                    // 0x0004 (size: 0x1)
    FViewTargetTransitionParams ViewTargetTransitionParams;                           // 0x0008 (size: 0x10)
    float FadeTime;                                                                   // 0x0018 (size: 0x4)
    FGameplayTag CameraTag;                                                           // 0x001C (size: 0x8)
    bool bNotifyTransitionDone;                                                       // 0x0024 (size: 0x1)

}; // Size: 0x28

class AHeraDialogueCameraActor : public ACameraActor
{
    FGameplayTag DialogueCameraTag;                                                   // 0x09B8 (size: 0x8)

}; // Size: 0x9D0

class AHeraDialogueCineCameraActor : public ACineCameraActor
{
    FGameplayTag DialogueCameraTag;                                                   // 0x0A30 (size: 0x8)

}; // Size: 0xA40

class AHeraDialogueRig : public AActor
{
    bool bIntroCameraCut;                                                             // 0x0298 (size: 0x1)
    bool bOutroCameraCut;                                                             // 0x0299 (size: 0x1)
    FHeraDialogueViewTargetTransitionParams IntroParams;                              // 0x029C (size: 0x28)
    FHeraDialogueViewTargetTransitionParams OutroParams;                              // 0x02C4 (size: 0x28)
    TArray<TSoftObjectPtr<AActor>> Props;                                             // 0x02F0 (size: 0x10)
    TSoftObjectPtr<ATargetPoint> PlayerPosition;                                      // 0x0300 (size: 0x28)
    TMap<class FGameplayTag, class TSoftObjectPtr<AActor>> Participants;              // 0x0328 (size: 0x50)
    TMap<class FGameplayTag, class TSoftObjectPtr<AActor>> Cameras;                   // 0x0378 (size: 0x50)
    TArray<TSoftObjectPtr<AHeraLightRigActor>> LightRigs;                             // 0x03C8 (size: 0x10)
    TSubclassOf<class UHeraDialogueDisplayWidget> DialogueWidgetClassOverride;        // 0x03D8 (size: 0x8)
    bool bIsInUse;                                                                    // 0x03E0 (size: 0x1)

    void RepopulateRig();
    void OnDialogueStartedEvent();
    void OnDialogueFinishedEvent();
    bool IsInUse();
    class AActor* GetParticipant(const FGameplayTag& InTag);
    class AActor* GetCamera(const FGameplayTag& InTag);
    void AddCustomLightRig();
}; // Size: 0x3E8

class AHeraDialogueSkeletalMeshActor : public ASkeletalMeshActor
{
    FGameplayTag DialogueCharacterTag;                                                // 0x0328 (size: 0x8)
    class UHeraAudioCharacterComponent* AudioCharacterComponent;                      // 0x0330 (size: 0x8)
    bool bInDialogue;                                                                 // 0x0338 (size: 0x1)
    bool bInCutscene;                                                                 // 0x0339 (size: 0x1)
    bool bIsSpeaking;                                                                 // 0x033A (size: 0x1)

    void SetIsSpeaking(const bool bIsSpeaking);
    void SetIsInDialogue(const bool bInDialogue);
    void SetIsInCutscene(const bool bInDialogue);
    bool MatchesCharacterTag(const FGameplayTag& InCharacterTag);
    class USkeletalMeshComponent* GetSkeletalMeshComp();
    bool GetIsSpeaking();
    bool GetIsInDialogue();
    bool GetIsInCutscene();
    FGameplayTag GetDialogueCharacterTag();
    class UAkGameObject* GetAudioComponent();
    FString GetActorName();
}; // Size: 0x340

class AHeraLightRigActor : public AActor
{
    TArray<TSoftObjectPtr<AActor>> Cameras;                                           // 0x0298 (size: 0x10)
    bool bLightsVisibleOutsideConversation;                                           // 0x02A8 (size: 0x1)
    TArray<class AActor*> Lights;                                                     // 0x02B0 (size: 0x10)

}; // Size: 0x2C0

class IHeraDialogueBantsActorInterface : public IInterface
{
}; // Size: 0x28

class IHeraDialogueCharacterInterface : public IInterface
{

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
    FString GetActorName();
}; // Size: 0x28

class IHeraDialogueInterface : public IInterface
{
}; // Size: 0x28

class UHeraBantsCooldowns : public UObject
{
    TArray<FHeraBantsCooldownElement> PromptCooldowns;                                // 0x0028 (size: 0x10)

}; // Size: 0x38

class UHeraBantsSettings : public UHeraSettings
{
    TArray<FHeraBantsPromptData> Priorities;                                          // 0x0038 (size: 0x10)
    TMap<FGameplayTag, double> PromptCooldowns;                                       // 0x0048 (size: 0x50)
    TMap<class EHeraDialogueType, class FGameplayTag> DialogueTypePromptMap;          // 0x0098 (size: 0x50)
    FGameplayTag NarrativePromptRoot;                                                 // 0x00E8 (size: 0x8)
    FGameplayTag IdlePromptRoot;                                                      // 0x00F0 (size: 0x8)
    FGameplayTag PlayerLockedInDialoguePromptRoot;                                    // 0x00F8 (size: 0x8)
    TSoftObjectPtr<UHeraPropertyBool> PlayerLockedIntoDialogue;                       // 0x0100 (size: 0x28)
    FSoftObjectPath BanterLogicFile;                                                  // 0x0128 (size: 0x20)
    FHeraAudioPoolName MassAudioPoolName;                                             // 0x0148 (size: 0x8)

}; // Size: 0x150

class UHeraBantsSubsystem : public UTickableWorldSubsystem
{
    FHeraBantsSubsystemOnPlayerLockedIntoDialogue OnPlayerLockedIntoDialogue;         // 0x0058 (size: 0x10)
    void OnPlayerLockedIntoDialogue();
    FHeraBantsSubsystemOnPlayerUnlockedFromDialogue OnPlayerUnlockedFromDialogue;     // 0x0068 (size: 0x10)
    void OnPlayerUnlockedFromDialogue();
    TArray<FMassEntityHandle> ActiveMassEntities;                                     // 0x0078 (size: 0x10)
    TMap<TWeakObjectPtr<AActor>, int32> ActorVoiceMemory;                             // 0x0090 (size: 0x50)
    TMap<FMassEntityHandle, int32> MassEntityVoiceMemory;                             // 0x00E0 (size: 0x50)
    TArray<TWeakObjectPtr<UHeraAudioComponent>> EntityAudioComponents;                // 0x0130 (size: 0x10)
    TScriptInterface<class IHeraDialogueInterface> StoryController;                   // 0x0140 (size: 0x10)
    class UObject* StoryControllerObject;                                             // 0x0150 (size: 0x8)
    class UHeraBantsCooldowns* Cooldowns;                                             // 0x0158 (size: 0x8)
    class UHeraPropertyBool* LockedInDialoguePropertyPtr;                             // 0x0160 (size: 0x8)
    TMap<int32, FHeraBantsArray> LiveBants;                                           // 0x0168 (size: 0x50)
    TArray<FHeraBantsData> Requests;                                                  // 0x01B8 (size: 0x10)
    TArray<FHeraBantsData> IdleRequests;                                              // 0x01C8 (size: 0x10)

    void StopBanterOnActor(const class AActor* InActor);
    void StopAllBanterByPrompt(const FGameplayTag& InPrompt);
    void SetIsAcceptingIdleRequests(const bool InIsAccepting);
    void RequestDialogueForEnemies(const TArray<class AActor*>& InActors, const FGameplayTag& InPrompt, const TArray<class UHeraDialogueInfo*>& InDialogueInfos);
    void OnStoryTerminated(int32 InStoryHandle);
    void OnStoryLoaded(int32 InStoryHandle, const FHeraDialogueRuntimeInfo& InInfo);
    void OnStoryEvent(int32 InStoryHandle, EHeraStoryProgress InStoryProgress, const FHeraDialogueRuntimeInfo& InInfo);
    void OnStoryAudibilityChanged(int32 InStoryHandle, bool bIsAudible, float InDistanceSqrToSpeaker);
    void OnPlayerUnlockedFromDialogue__DelegateSignature();
    void OnPlayerLockedIntoDialogue__DelegateSignature();
    void OnActorEndPlay(class AActor* InActor, TEnumAsByte<EEndPlayReason::Type> InEndPlayReason);
    bool IsPlayerLockedIntoDialogue();
}; // Size: 0x1F0

class UHeraDialogue : public UObject
{
}; // Size: 0x28

class UHeraDialogueAnimInstance : public UAnimInstance
{
    class UAnimSequence* FacialAnimation;                                             // 0x0350 (size: 0x8)
    class UAnimSequence* BodyAnimation;                                               // 0x0358 (size: 0x8)
    class UAnimSequence* BodyIdleAnimation;                                           // 0x0360 (size: 0x8)
    bool bIsLoopingBodyAnimation;                                                     // 0x0368 (size: 0x1)
    bool bBlendingPoses;                                                              // 0x0369 (size: 0x1)
    float BlendingAlpha;                                                              // 0x036C (size: 0x4)
    float BlendSpeed;                                                                 // 0x0370 (size: 0x4)
    class UCurveFloat* BlendCurve;                                                    // 0x0378 (size: 0x8)

    void SetPlayRate(const float InPlayRate);
    void SetIsLoopingBodyAnimation(bool InLooping);
    void SetHardCutToBodyIdleAnimation(bool bHardCut);
    void SetFacialAnimation(class UAnimSequence* InAnimation);
    void SetBodyIdleAnimation(class UAnimSequence* InAnimation);
    void SetBodyAnimation(class UAnimSequence* InAnimation);
    void SetBlendingPoses(bool InBlendingPoses);
    bool IsLoopingBodyAnimation();
    bool IsBlendingPoses();
    float GetPlayRate();
    FName GetOldBodyIdleSnapshotName();
    bool GetIsInDialogue();
    class UAnimSequence* GetFacialAnimation();
    class UAnimSequence* GetBodyIdleAnimation();
    class UAnimSequence* GetBodyAnimation();
    float GetBlendingInterpSpeed();
    float GetBlendingAlpha();
}; // Size: 0x3A0

class UHeraDialogueAnimNotify : public UAnimNotify
{
    EHeraDialogueAnimNotifyType NotifyType;                                           // 0x0038 (size: 0x1)

}; // Size: 0x50

class UHeraDialogueAnimationController : public UObject
{

    void DialogueAnimationStarted(class UHeraDialogueAnimInstance* InAnimInstance, const class UHeraDialogueAnimNotify* InNotify, bool bLoopBodyAnimation);
    void DialogueAnimationEnded(class UHeraDialogueAnimInstance* InAnimInstance, const class UHeraDialogueAnimNotify* InNotify);
}; // Size: 0x48

class UHeraDialogueAudioController : public UObject
{
    TMap<uint64, FHeraDialogueAudioPlaybackItem> PlaybackItems;                       // 0x0058 (size: 0x50)

    void InternalOnDialogueAudioFinished(EAkCallbackType InCallbackType, class UAkCallbackInfo* InCallbackInfo);
}; // Size: 0xB8

class UHeraDialogueAudioSettings : public UDataAsset
{
    class UAkAudioEvent* DialogueAudioPlayEventOverride;                              // 0x0030 (size: 0x8)
    class UAkAudioEvent* DialogueAudioStopEventOverride;                              // 0x0038 (size: 0x8)
    FName DialogueConversionSettingsOverride;                                         // 0x0040 (size: 0x8)

}; // Size: 0x48

class UHeraDialogueBlueprintHelpers : public UBlueprintFunctionLibrary
{

    class AActor* GetDialogueParticipantFromTag(class UObject* WorldContext, const FGameplayTag& Tag, const class AHeraDialogueRig* OptionalDialogueSet);
    FGameplayTag GetCameraTagFromCameraActor(const class AActor* InCameraActor);
    class AActor* GetCameraFromTag(class UObject* WorldContext, const FGameplayTag& Tag, const class AHeraDialogueRig* OptionalDialogueSet);
}; // Size: 0x28

class UHeraDialogueButton : public UHeraButtonBase
{
    class UTextBlock* DialogueButtonText;                                             // 0x13E0 (size: 0x8)
    class UImage* DialogueButtonIcon;                                                 // 0x13E8 (size: 0x8)
    class UImage* PressedBKG;                                                         // 0x13F0 (size: 0x8)
    TMap<class FString, class UTexture2D*> IconMap;                                   // 0x1410 (size: 0x50)

    void OnButtonClicked();
    int32 GetChoiceIndex();
}; // Size: 0x1460

class UHeraDialogueCameraController : public UObject
{

    void OnTransitionDone(int32 InStoryHandle, class APlayerController* InController, class AActor* InPlayerCharacter, class AActor* InOldViewTarget, FHeraDialogueViewTargetTransitionParams InParams);
    void OnSetupOrTeardownDialogueCallback(int32 InStoryHandle, class AActor* InPlayerCharacter, FHeraDialogueViewTargetTransitionParams InParams);
    void FadeOut(int32 InStoryHandle, class APlayerController* InController, FHeraDialogueViewTargetTransitionParams InParams, class AActor* InCameraActor, const class AHeraDialogueRig* InDialogueRig);
}; // Size: 0xE0

class UHeraDialogueDisplayWidget : public UHeraMenu
{
    TSubclassOf<class UHeraDialogueButton> DialogueButtonClass;                       // 0x02F8 (size: 0x8)
    class UWidgetSwitcher* ControlTypeWidgetSwitcher;                                 // 0x0300 (size: 0x8)
    class UTextBlock* DialogueStoryText;                                              // 0x0308 (size: 0x8)
    class UTextBlock* DialogueNameText;                                               // 0x0310 (size: 0x8)
    class UVerticalBox* DialogueButtonsContainer;                                     // 0x0318 (size: 0x8)
    class UOverlay* DialogueButtonsContainer_Controller;                              // 0x0320 (size: 0x8)
    class UHeraPropertyBool* PB_SubtitleOn;                                           // 0x0330 (size: 0x8)
    FHeraDialogueDisplayWidgetOnChoicesActivatedEvent OnChoicesActivatedEvent;        // 0x0338 (size: 0x10)
    void OnChoicesActivated(const int32 ActiveChoices);
    FHeraDialogueDisplayWidgetOnChoicesDeactivatedEvent OnChoicesDeactivatedEvent;    // 0x0348 (size: 0x10)
    void OnChoicesDeactivated();
    FHeraDialogueDisplayWidgetOnFocusRestoreNeededEvent OnFocusRestoreNeededEvent;    // 0x0358 (size: 0x10)
    void OnFocusRestoreNeeded();
    bool bOptionsShowing;                                                             // 0x0368 (size: 0x1)
    bool bOptionsSelected;                                                            // 0x0369 (size: 0x1)

    void SkipLine();
    void RefreshWidget();
    void ReceiveOnSetStoryText(FString Text, float WavLengthSeconds);
    void OnDialogueAudioStarted(int32 InStoryHandle);
    void OnDialogueAudioFinished(int32 InStoryHandle);
    void OnChoiceClickedAnimation(int32 InChoiceIndex);
    void OnChoiceClicked(int32 InChoiceIndex);
    void OnCharacterReaction(int32 InStoryHandle, FString InWho, const FText& InReactionText, EHeraDialogueReactionClass InReactionClass);
    bool DoesStoryNeedFocus();
}; // Size: 0x370

class UHeraDialogueDopeSheetDataTable : public UDataTable
{

    FHeraDialogueViewTargetTransitionParams GetViewTargetTransitionParamsFromID(FString InID);
    FText GetTextFromID(FString InID);
    bool GetShouldLoopBodyAnimationFromID(FString InID);
    float GetLineDurationFromID(FString InID);
    class UAnimSequence* GetFacialAnimationAssetFromID(FString InID);
    float GetDialogueVolumeOffsetdBFromID(FString InID);
    FGameplayTag GetCharacterTagFromID(FString InID);
    FText GetCharacterNameFromID(FString InID);
    FGameplayTag GetCameraTagFromID(FString InID);
    class UAnimSequence* GetBodyAnimationAssetFromID(FString InID);
    class UHeraDialogueAudioSettings* GetAudioSettingsFromID(FString InID);
    FSoftObjectPath GetAudioAssetPathFromID(FString InID, EHeraPlayerVariantOverride InVariantOverride);
    float GetAudioAssetDurationFromID(FString InID);
}; // Size: 0xB0

class UHeraDialogueEvent : public UObject
{
    float TriggerTime;                                                                // 0x0028 (size: 0x4)
    float Duration;                                                                   // 0x002C (size: 0x4)
    TArray<class UHeraDialogueEventKeyFrame*> KeyFrames;                              // 0x0030 (size: 0x10)
    class UHeraDialogueEventKeyFrame* DefaultKeyFrame;                                // 0x0040 (size: 0x8)
    TSubclassOf<class UHeraDialogueEventKeyFrame> KeyFrameClass;                      // 0x0048 (size: 0x8)
    FString EventName;                                                                // 0x0050 (size: 0x10)
    bool bOneShotEvent;                                                               // 0x0060 (size: 0x1)

    void Update_Blueprint(const FHeraDialoguePlayStatus& InPlayStatus);
    void ResetState_Blueprint(const FHeraDialoguePlayStatus& InPlayStatus);
    void OnEnd_Blueprint(const FHeraDialoguePlayStatus& InPlayStatus);
    void OnBegin_Blueprint(const FHeraDialoguePlayStatus& InPlayStatus);
}; // Size: 0x68

class UHeraDialogueEventKeyFrame : public UObject
{
    float Position;                                                                   // 0x0028 (size: 0x4)
    bool bIsDefault;                                                                  // 0x002C (size: 0x1)

    bool IsDefault();
}; // Size: 0x30

class UHeraDialogueEvent_CameraCut : public UHeraDialogueEvent
{
    bool bUseRelativeTransform;                                                       // 0x0068 (size: 0x1)
    bool bShouldReset;                                                                // 0x0069 (size: 0x1)
    FGameplayTag CameraTag;                                                           // 0x006C (size: 0x8)

}; // Size: 0x120

class UHeraDialogueEvent_Pacing : public UHeraDialogueEvent
{
}; // Size: 0x68

class UHeraDialogueEvent_PlayAnimation : public UHeraDialogueEvent
{
    FGameplayTag CharacterTag;                                                        // 0x0068 (size: 0x8)
    class UAnimSequence* AnimSequence;                                                // 0x0070 (size: 0x8)
    TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent;                   // 0x0078 (size: 0x8)

}; // Size: 0x88

class UHeraDialogueEvent_PlayTransition : public UHeraDialogueEvent
{
    FGameplayTag CharacterTag;                                                        // 0x0068 (size: 0x8)
    class UAnimSequence* MovingFacialAnimation;                                       // 0x0070 (size: 0x8)
    class UAnimSequence* MovingBodyAnimation;                                         // 0x0078 (size: 0x8)
    class UAnimSequence* IdleAnimation;                                               // 0x0080 (size: 0x8)
    TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent;                   // 0x0088 (size: 0x8)

}; // Size: 0x90

class UHeraDialogueEvent_SetBodyIdles : public UHeraDialogueEvent
{
    TArray<FHeraDialogueBodyIdlePair> BodyIdles;                                      // 0x0068 (size: 0x10)

}; // Size: 0x88

class UHeraDialogueEvent_SetCharacterLocation : public UHeraDialogueEvent
{
    FHeraDialogueCharacterLocationStruct CharacterLocation;                           // 0x0068 (size: 0x70)

    void Propagate();
}; // Size: 0xE0

class UHeraDialogueEvent_TriggerEyeGlows : public UHeraDialogueEvent
{
    FRuntimeFloatCurve Curve;                                                         // 0x0068 (size: 0x88)
    FGameplayTag CharacterTag;                                                        // 0x00F0 (size: 0x8)
    FName EyeGlowParameterName;                                                       // 0x00F8 (size: 0x8)
    FString MaterialKeyword;                                                          // 0x0100 (size: 0x10)
    TMap<UMaterialInstanceDynamic*, int32> DynamicMaterialInstances;                  // 0x0110 (size: 0x50)
    TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent;                   // 0x0160 (size: 0x8)

}; // Size: 0x168

class UHeraDialogueInfo : public UHeraConfigurationAsset
{
    EHeraDialogueType DialogueType;                                                   // 0x0030 (size: 0x1)
    FString StoryStatus;                                                              // 0x0038 (size: 0x10)
    TSubclassOf<class UHeraDialogueDisplayWidget> DialogueWidgetClass;                // 0x0048 (size: 0x8)
    FName DialogueWidgetSlotName;                                                     // 0x0050 (size: 0x8)
    bool bPlayVideoDialogue;                                                          // 0x0058 (size: 0x1)
    FName CharacterPostProcessVideo;                                                  // 0x005C (size: 0x8)
    bool bUseMultipleAudioPositions;                                                  // 0x0064 (size: 0x1)
    TMap<class FString, class TSoftObjectPtr<UHeraPropertyBase>> DialogueVariableNameToPropertyMap; // 0x0068 (size: 0x50)
    TArray<FString> DialogueOutcomes;                                                 // 0x00B8 (size: 0x10)
    FHeraDialogueHardcutIntroAnimation HardCutIntroCharacterAnimation;                // 0x00C8 (size: 0x30)
    class UHeraDialogueDopeSheetDataTable* DopeSheet;                                 // 0x00F8 (size: 0x8)
    bool bStoryShouldRemainInMemory;                                                  // 0x0100 (size: 0x1)
    bool bDisableCulling;                                                             // 0x0101 (size: 0x1)
    FString JumpToKnot;                                                               // 0x0108 (size: 0x10)
    uint32 StoryVersion;                                                              // 0x0118 (size: 0x4)
    class UHeraDialogue* Story;                                                       // 0x0120 (size: 0x8)
    bool bShowHUD;                                                                    // 0x0128 (size: 0x1)
    class UHeraPropertyString* DialogueOutcomeVariable;                               // 0x0130 (size: 0x8)
    TMap<class FString, class TSoftObjectPtr<UHeraPropertyBase>> DialogueVariableNameToPropertyMapAutomatic; // 0x0138 (size: 0x50)

}; // Size: 0x188

class UHeraDialogueKeyFrame_CameraCut : public UHeraDialogueEventKeyFrame
{
    FVector Location;                                                                 // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    float ManualFocusDistance;                                                        // 0x0060 (size: 0x4)
    float FocusOffset;                                                                // 0x0064 (size: 0x4)

}; // Size: 0x68

class UHeraDialogueMovieSceneSection : public UMovieSceneSection
{
    FHeraDialogueMovieSceneSectionParams Params;                                      // 0x00F0 (size: 0x30)

}; // Size: 0x120

class UHeraDialogueMovieSceneTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x00A0 (size: 0x10)
    class UHeraDialogueInfo* DialogueInfo;                                            // 0x00B0 (size: 0x8)
    TMap<class FGameplayTag, class UHeraDialogueMovieSceneTrack*> ChildTracks;        // 0x00B8 (size: 0x50)
    class UHeraDialogueMovieSceneTrack* MasterTrack;                                  // 0x0108 (size: 0x8)
    bool bResolveStory;                                                               // 0x0110 (size: 0x1)

}; // Size: 0x118

class UHeraDialoguePersistentData : public UHeraSettings
{
}; // Size: 0x38

class UHeraDialogueSettings : public UHeraSettings
{
    TSoftObjectPtr<UAkAudioEvent> DialogueAudioPlayEvent;                             // 0x0038 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> DialogueAudioStopEvent;                             // 0x0060 (size: 0x28)
    TSoftObjectPtr<UHeraPropertyInt> DialogueAudioStateProperty;                      // 0x0088 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> DialogueVolumeRtpc;                                       // 0x00B0 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> DialoguePriorityRtpc;                                     // 0x00D8 (size: 0x28)
    bool MuteTextToSpeechDialogue;                                                    // 0x0100 (size: 0x1)
    FName DefaultConversionSettings;                                                  // 0x0104 (size: 0x8)
    AkCodecId DialogueAudioCodec;                                                     // 0x010C (size: 0x1)
    TMap<class EHeraDialogueAudioCodecPlatforms, class AkCodecId> PlatformDialogueAudioCodecs; // 0x0110 (size: 0x50)
    TMap<EHeraDialogueAudioPriority, uint8> DialogueAudioPriorityBuckets;             // 0x0160 (size: 0x50)
    FName DialogueAssetFolder;                                                        // 0x01B0 (size: 0x8)
    FGameplayTag CharacterSelfGameplayTag;                                            // 0x01B8 (size: 0x8)
    FName CharacterSelfInkTagPrefix;                                                  // 0x01C0 (size: 0x8)
    FSoftClassPath PreviewPlayerCharacterClass;                                       // 0x01C8 (size: 0x20)
    TMap<class EHeraPlayerVariant, class FName> PlayerVariantSequenceTags;            // 0x01E8 (size: 0x50)
    TSoftClassPtr<UHeraDialogueDisplayWidget> DefaultDialogueWidgetClass;             // 0x0238 (size: 0x28)
    FName DefaultDialogueSlot;                                                        // 0x0260 (size: 0x8)
    TSoftClassPtr<UHeraMenu> DefaultVideoDialogueWidgetClass;                         // 0x0268 (size: 0x28)
    FName DefaultVideoDialogueSlot;                                                   // 0x0290 (size: 0x8)
    FGameplayTag PlayerCameraGameplayTag;                                             // 0x0298 (size: 0x8)
    TArray<FGameplayTag> DefaultRigCameraTags;                                        // 0x02A0 (size: 0x10)
    TMap<class FName, class FHeraDialoguePostProcessVideo> CharacterPostProcessVideos; // 0x02B0 (size: 0x50)
    FString DefaultCharacterVoiceName;                                                // 0x0300 (size: 0x10)
    TMap<class FName, class FHeraDialogueCharacterTagAssociation> DialogueCharacterTagAssociations; // 0x0310 (size: 0x50)
    FHeraDialogueAutoBindingProperty DialogueOutputBinding;                           // 0x0360 (size: 0x38)
    FHeraDialogueAutoBindingProperty DialogueBarkTagBinding;                          // 0x0398 (size: 0x38)
    FHeraDialogueAutoBindingProperty DialogueErrorBinding;                            // 0x03D0 (size: 0x38)
    FString DefaultNarrativePathForAutoBindingVariables;                              // 0x0408 (size: 0x10)
    TArray<FHeraDialogueAutoBindingProperty> AutoBindingDialogueVariables;            // 0x0418 (size: 0x10)
    bool bIgnoreTimeDilation;                                                         // 0x0428 (size: 0x1)
    FSoftObjectPath CharacterReactions;                                               // 0x0430 (size: 0x20)
    float ChoicePresentationLeadTime;                                                 // 0x0450 (size: 0x4)
    FSoftClassPath DialogueStoryControllerClass;                                      // 0x0458 (size: 0x20)

}; // Size: 0x478

class UHeraDialogueShortcutController : public UHeraActivatableWidget
{
    FHeraDialogueShortcutControllerOnInputChanged OnInputChanged;                     // 0x0450 (size: 0x10)
    void OnInputChanged(const ECommonInputType NewInputType);
    TArray<FDataTableRowHandle> ChoiceInputActionData;                                // 0x0470 (size: 0x10)
    FDataTableRowHandle SkipInputActionData;                                          // 0x04A8 (size: 0x10)

    ECommonInputType GetCurrentInputType();
}; // Size: 0x4C0

class UHeraDialogueSubsystem : public UTickableWorldSubsystem
{
    TScriptInterface<class IHeraDialogueInterface> StoryController;                   // 0x0160 (size: 0x10)
    class UObject* StoryControllerObject;                                             // 0x0170 (size: 0x8)
    class UHeraDialogueAudioController* AudioController;                              // 0x0178 (size: 0x8)
    class UHeraDialogueAnimationController* AnimationController;                      // 0x0180 (size: 0x8)
    class UHeraDialogueCameraController* CameraController;                            // 0x0188 (size: 0x8)
    TMap<int32, FHeraDialogueRuntimeInfo> ActiveStories;                              // 0x0190 (size: 0x50)
    TMap<class FString, class FHeraDialogueSerialisedDialogue> SavedDialogue;         // 0x01E0 (size: 0x50)
    class UAkAudioEvent* LoadedDialogueAudioPlayEvent;                                // 0x0230 (size: 0x8)
    class UAkAudioEvent* LoadedDialogueAudioStopEvent;                                // 0x0238 (size: 0x8)
    class UAkRtpc* LoadedDialogueVolumeRTPC;                                          // 0x0240 (size: 0x8)
    class UAkRtpc* LoadedDialoguePriorityRTPC;                                        // 0x0248 (size: 0x8)
    class AHeraDialogueRig* LastInteractedDialogueRig;                                // 0x0250 (size: 0x8)
    class UHeraPropertyInt* LoadedDialogueAudioStateProperty;                         // 0x0258 (size: 0x8)

    void UnbindExternalFunction(int32 InStoryHandle, FString InFunctionName);
    void TearDownPreviousStory();
    void SetInteractedWithDialogueRig(class AActor* InRig);
    void RemoveParticipantFromMultiPositionStory(FGameplayTag InCharacterTag, class AActor* InParticipantActor);
    void Ink_CharacterReaction(int32 InStoryHandle, FString InWho, const FText& InReaction, EHeraDialogueReactionClass InReactionClass);
    int32 GetCurrentStoryHandle();
    void ForgetSavedDialogueState(class UHeraDialogueInfo* InDialogueInfo);
    void FinishDialogueSequencer(int32 InStoryHandle);
    void FinishDialogue(int32 InStoryHandle);
    void BroadcastSkipDialogue();
    void BindExternalFunction(int32 InStoryHandle, FString InFunctionName, FBindExternalFunctionInFunction InFunction);
    void AbortStoriesWithParticipantTag(FGameplayTag InCharacterTag);
    void AbortStoriesWithParticipantActor(class AActor* InParticipantActor);
    void AbortStoriesWithParticipant(class AActor* InParticipantActor, TEnumAsByte<EEndPlayReason::Type> InEndPlayReason);
}; // Size: 0x2A0

class UHeraDialogueUserSettings : public UHeraSettings
{
}; // Size: 0x38

class UHeraPlayerVariantSettings : public UHeraSettings
{
    TSoftObjectPtr<UHeraPropertyBool> ShouldUseAlternativePlayerCharacterProperty;    // 0x0038 (size: 0x28)

}; // Size: 0x60

#endif
