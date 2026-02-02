#ifndef UE4SS_SDK_BP_WrestlerTaskScore_SeenActionNumberTimes_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_SeenActionNumberTimes_HPP

class UBP_WrestlerTaskScore_SeenActionNumberTimes_C : public UWrestlerTaskScore
{
    TEnumAsByte<eReactionMemoryComponent_Actions::Type> SpecifiedPlayerAction;        // 0x0030 (size: 0x1)
    int32 MinimumCount;                                                               // 0x0034 (size: 0x4)
    int32 DesiredCount;                                                               // 0x0038 (size: 0x4)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x3C

#endif
