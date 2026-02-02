#ifndef UE4SS_SDK_BP_WrestlerTaskScore_AmmoCount_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_AmmoCount_HPP

class UBP_WrestlerTaskScore_AmmoCount_C : public UWrestlerTaskScore
{
    bool CheckHigher;                                                                 // 0x0030 (size: 0x1)
    double TargetAmmoPercentage;                                                      // 0x0038 (size: 0x8)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x40

#endif
