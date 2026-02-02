#ifndef UE4SS_SDK_WrestlerCameraShake_HPP
#define UE4SS_SDK_WrestlerCameraShake_HPP

class UWrestlerCameraShake_C : public ULegacyCameraShake
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01F0 (size: 0x8)
    double MainScale;                                                                 // 0x01F8 (size: 0x8)
    FROscillator BaseRot;                                                             // 0x0200 (size: 0x24)
    class UHeraPropertyFloat* Property;                                               // 0x0228 (size: 0x8)

    void ReceivePlayShake(float Scale);
    void ExecuteUbergraph_WrestlerCameraShake(int32 EntryPoint);
}; // Size: 0x230

#endif
