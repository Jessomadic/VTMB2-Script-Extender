#ifndef UE4SS_SDK_WBP_WrestlerAttributeWidget_HPP
#define UE4SS_SDK_WBP_WrestlerAttributeWidget_HPP

class UWBP_WrestlerAttributeWidget_C : public UWrestlerAttributeWidget
{
    FGameplayAttribute Attribute;                                                     // 0x02C8 (size: 0x38)
    FGameplayAttribute MaxAttribute;                                                  // 0x0300 (size: 0x38)
    class AWrestlerPlayerStateInGame* NewVar_0;                                       // 0x0338 (size: 0x8)
    class UWrestlerAttributeSet* NewVar_1;                                            // 0x0340 (size: 0x8)

    double GetAttributeFill();
    double GetAttributeFraction(FGameplayAttribute Attribute, FGameplayAttribute MaxAttribute, bool& bSuccessfullyFoundAttribute);
    double GetAttributeValue(FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    class AController* GetAttributeTargetActor();
}; // Size: 0x348

#endif
