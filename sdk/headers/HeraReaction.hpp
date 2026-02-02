#ifndef UE4SS_SDK_HeraReaction_HPP
#define UE4SS_SDK_HeraReaction_HPP

#include "HeraReaction_enums.hpp"

class UHeraReactionComponent : public USceneComponent
{
    FHeraReactionComponentOnReactEventDelegate OnReactEventDelegate;                  // 0x02A0 (size: 0x1)
    void HeraReactionDelegate(float Intensity, FGameplayTag ReactionTag);

    void OnReactEvent(float InIntensity, FGameplayTag InReactionTag);
}; // Size: 0x2B0

class UHeraReactionDebugSettings : public UHeraSettings
{
    uint32 ReactionDebugDrawFlags;                                                    // 0x0044 (size: 0x4)
    float ReactionTagTextScale;                                                       // 0x0048 (size: 0x4)
    float EventDebugDuration;                                                         // 0x004C (size: 0x4)
    float ReactionDistanceFilter;                                                     // 0x0050 (size: 0x4)
    FLinearColor ReactionEventLocationColour;                                         // 0x0054 (size: 0x10)
    FLinearColor ReactionEventRadiusColour;                                           // 0x0064 (size: 0x10)
    FLinearColor ComponentLocationColourInactive;                                     // 0x0074 (size: 0x10)
    FLinearColor ComponentLocationColourActive;                                       // 0x0084 (size: 0x10)
    float ComponentActiveDuration;                                                    // 0x0094 (size: 0x4)
    FGameplayTagContainer ReactionTagFilter;                                          // 0x0098 (size: 0x20)

}; // Size: 0xB8

class UHeraReactionSubsystem : public UWorldSubsystem
{
    FGameplayTagContainer DisabledTags;                                               // 0x0030 (size: 0x20)
    TArray<class UHeraReactionComponent*> Components;                                 // 0x0050 (size: 0x10)

    void RemoveDisabledTags(FGameplayTagContainer InTags);
    void GenerateReactionEvent(FVector InLocation, float InMaxDistance, FGameplayTag InReactionTag);
    void AddDisabledTags(FGameplayTagContainer InTags);
}; // Size: 0x60

#endif
