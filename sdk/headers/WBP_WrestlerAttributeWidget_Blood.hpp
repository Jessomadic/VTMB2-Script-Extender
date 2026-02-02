#ifndef UE4SS_SDK_WBP_WrestlerAttributeWidget_Blood_HPP
#define UE4SS_SDK_WBP_WrestlerAttributeWidget_Blood_HPP

class UWBP_WrestlerAttributeWidget_Blood_C : public UWBP_WrestlerAttributeWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* OnPipFilled;                                              // 0x0350 (size: 0x8)
    class UProgressBar* Bar;                                                          // 0x0358 (size: 0x8)
    class UImage* PipShine;                                                           // 0x0360 (size: 0x8)
    double PipWidth;                                                                  // 0x0368 (size: 0x8)

    float GetBloodPercent();
    void UpdatePipShinePosition();
    double GetNumberOfSegments();
    void SetBarSize(double InNumSegments);
    double GetPipWidth();
    void UpdateBarSize();
    void OnMaximumValueChangedEvent_Event(FGameplayAttribute AffectedAttribute, float NewMax);
    void InitBar();
    void ExecuteUbergraph_WBP_WrestlerAttributeWidget_Blood(int32 EntryPoint);
}; // Size: 0x370

#endif
