#ifndef UE4SS_SDK_BP_WrestlerTaskScore_IndefendZone_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_IndefendZone_HPP

class UBP_WrestlerTaskScore_IndefendZone_C : public UWrestlerTaskScore
{
    bool CheckTargetInZone;                                                           // 0x0030 (size: 0x1)
    bool ExemptIfTargetBlocking;                                                      // 0x0031 (size: 0x1)
    double TargetBlockThreshold;                                                      // 0x0038 (size: 0x8)
    float Extent Multiplier;                                                          // 0x0040 (size: 0x4)
    float TargetExtentMultiplier;                                                     // 0x0044 (size: 0x4)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x48

#endif
