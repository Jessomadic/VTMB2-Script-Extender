#ifndef UE4SS_SDK_BP_WrestlerTaskScore_EnemiesCloseToTargetCount_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_EnemiesCloseToTargetCount_HPP

class UBP_WrestlerTaskScore_EnemiesCloseToTargetCount_C : public UWrestlerTaskScore
{
    double MaxDistanceFromPlayer;                                                     // 0x0030 (size: 0x8)
    int32 MinCount;                                                                   // 0x0038 (size: 0x4)
    int32 MaxCount;                                                                   // 0x003C (size: 0x4)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x40

#endif
