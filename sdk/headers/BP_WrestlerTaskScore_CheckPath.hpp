#ifndef UE4SS_SDK_BP_WrestlerTaskScore_CheckPath_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_CheckPath_HPP

class UBP_WrestlerTaskScore_CheckPath_C : public UWrestlerTaskScore
{
    double MinDuration;                                                               // 0x0030 (size: 0x8)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x38

#endif
