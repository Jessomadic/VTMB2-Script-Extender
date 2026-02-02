#ifndef UE4SS_SDK_WBP_WrestlerAttributeWidget_Health_HPP
#define UE4SS_SDK_WBP_WrestlerAttributeWidget_Health_HPP

class UWBP_WrestlerAttributeWidget_Health_C : public UWBP_WrestlerAttributeWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UProgressBar* Bar;                                                          // 0x0350 (size: 0x8)
    double SegmentSize;                                                               // 0x0358 (size: 0x8)

    float GetHealthPercentage();
    void SetBarSize();
    void UpdateMaxSize(double InVal);
    double GetSegmentWidth();
    double GetNumberOfSegments();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Init();
    void UpdateMaxHealth(FGameplayAttribute AffectedAttribute, float NewMax);
    void ExecuteUbergraph_WBP_WrestlerAttributeWidget_Health(int32 EntryPoint);
}; // Size: 0x360

#endif
