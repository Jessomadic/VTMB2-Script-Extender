#ifndef UE4SS_SDK_WBP_WrestlerAttributeWidget_Shield_HPP
#define UE4SS_SDK_WBP_WrestlerAttributeWidget_Shield_HPP

class UWBP_WrestlerAttributeWidget_Shield_C : public UWBP_WrestlerAttributeWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UProgressBar* Bar;                                                          // 0x0350 (size: 0x8)
    double SegmentSize;                                                               // 0x0358 (size: 0x8)
    double AttributeValue;                                                            // 0x0360 (size: 0x8)

    void SetBarSize();
    float GetShieldPercent();
    double GetSegmentWidth();
    double GetNumberOfSegments();
    void Init();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_WrestlerAttributeWidget_Shield(int32 EntryPoint);
}; // Size: 0x368

#endif
