#ifndef UE4SS_SDK_BP_WrestlerTaskScore_TargetInWeaponRange_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_TargetInWeaponRange_HPP

class UBP_WrestlerTaskScore_TargetInWeaponRange_C : public UWrestlerTaskScore
{
    double MinRangeScoreMultiplier;                                                   // 0x0030 (size: 0x8)
    double MaxRangeScoreMultiplier;                                                   // 0x0038 (size: 0x8)
    double MinRangeMultiplier;                                                        // 0x0040 (size: 0x8)
    double MaxRangeMultiplier;                                                        // 0x0048 (size: 0x8)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x50

#endif
