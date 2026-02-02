#ifndef UE4SS_SDK_BP_WrestlerTaskScore_SuggestedTargetProfile_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_SuggestedTargetProfile_HPP

class UBP_WrestlerTaskScore_SuggestedTargetProfile_C : public UWrestlerTaskScore
{
    TArray<TEnumAsByte<eReactionMemoryComponent_PlayerStyle::Type>> SpecifiedPlayerProfiles; // 0x0030 (size: 0x10)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x40

#endif
