#ifndef UE4SS_SDK_BP_WrestlerTaskScore_DistanceFromTarget_Z_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_DistanceFromTarget_Z_HPP

class UBP_WrestlerTaskScore_DistanceFromTarget_Z_C : public UWrestlerTaskScore
{
    double MinZoffset;                                                                // 0x0030 (size: 0x8)
    double MaxZoffset;                                                                // 0x0038 (size: 0x8)
    bool SingleDirection;                                                             // 0x0040 (size: 0x1)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x41

#endif
