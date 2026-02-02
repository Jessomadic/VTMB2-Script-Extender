#ifndef UE4SS_SDK_BP_WrestlerTaskScore_EnemiesInCombatCount_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_EnemiesInCombatCount_HPP

class UBP_WrestlerTaskScore_EnemiesInCombatCount_C : public UWrestlerTaskScore
{
    bool Filter Mode;                                                                 // 0x0030 (size: 0x1)
    bool PreferLess;                                                                  // 0x0031 (size: 0x1)
    int32 Filter Threshold;                                                           // 0x0034 (size: 0x4)
    int32 Target Count;                                                               // 0x0038 (size: 0x4)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x3C

#endif
