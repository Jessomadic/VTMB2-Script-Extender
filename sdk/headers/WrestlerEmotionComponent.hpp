#ifndef UE4SS_SDK_WrestlerEmotionComponent_HPP
#define UE4SS_SDK_WrestlerEmotionComponent_HPP

class UWrestlerEmotionComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    double Pain Alpha;                                                                // 0x00A8 (size: 0x8)
    double Anger Alpha;                                                               // 0x00B0 (size: 0x8)
    double Fear Alpha;                                                                // 0x00B8 (size: 0x8)
    double Happiness Alpha;                                                           // 0x00C0 (size: 0x8)

    void Emote(TEnumAsByte<Emotion::Type> Emotion, double Strength, double Duration);
    void Reset Emotions();
    void ExecuteUbergraph_WrestlerEmotionComponent(int32 EntryPoint);
}; // Size: 0xC8

#endif
