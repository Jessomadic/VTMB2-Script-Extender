#ifndef UE4SS_SDK_BP_WrestlerTaskScore_InitialAbilityTimeoutElapsed_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_InitialAbilityTimeoutElapsed_HPP

class UBP_WrestlerTaskScore_InitialAbilityTimeoutElapsed_C : public UWrestlerTaskScore
{
    double Timeout;                                                                   // 0x0030 (size: 0x8)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x38

#endif
