#ifndef UE4SS_SDK_BP_WrestlerTaskScore_DistanceThreshold_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_DistanceThreshold_HPP

class UBP_WrestlerTaskScore_DistanceThreshold_C : public UWrestlerTaskScore
{
    double Distance;                                                                  // 0x0030 (size: 0x8)
    bool LessThan;                                                                    // 0x0038 (size: 0x1)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x39

#endif
