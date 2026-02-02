#ifndef UE4SS_SDK_BP_WrestlerTaskScore_AgentMultiTag_HPP
#define UE4SS_SDK_BP_WrestlerTaskScore_AgentMultiTag_HPP

class UBP_WrestlerTaskScore_AgentMultiTag_C : public UWrestlerTaskScore
{
    bool CheckPlayer;                                                                 // 0x0030 (size: 0x1)
    TArray<FGameplayTag> Tags;                                                        // 0x0038 (size: 0x10)

    float GetScore(class AWrestlerEnemyCharacter* InAgent, const class APawn* InTargetPawn);
}; // Size: 0x48

#endif
