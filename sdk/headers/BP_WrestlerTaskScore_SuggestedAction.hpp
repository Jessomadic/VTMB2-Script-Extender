#ifndef UE4SS_SDK_BP_WrestlerTaskScore_SuggestedAction_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_SuggestedAction_HPP

class UBP_WrestlerTaskScore_SuggestedAction_C : public UWrestlerTaskScore
{
    TArray<TEnumAsByte<eReactionMemoryComponent_Actions::Type>> DesiredActions;       // 0x0030 (size: 0x10)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x40

#endif
