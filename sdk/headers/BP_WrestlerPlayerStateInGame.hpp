#ifndef UE4SS_SDK_BP_WrestlerPlayerStateInGame_HPP
#define UE4SS_SDK_BP_WrestlerPlayerStateInGame_HPP

class ABP_WrestlerPlayerStateInGame_C : public AWrestlerPlayerStateInGame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0508 (size: 0x8)
    class UHeraPropertyInt* ElixirBloodCount;                                         // 0x0510 (size: 0x8)
    class UHeraPropertyInt* ElixirHealthCount;                                        // 0x0518 (size: 0x8)
    class UHeraPropertyInt* ElixirVentrueCount;                                       // 0x0520 (size: 0x8)
    class UHeraPropertyInt* ElixirBrujahCount;                                        // 0x0528 (size: 0x8)

    void ChangeElixirCount(bool Increase, EConsumableType ElixirType, bool& CanUseElixir);
    void SetUpCostume();
    void InitPlayerCostume();
    void ExecuteUbergraph_BP_WrestlerPlayerStateInGame(int32 EntryPoint);
}; // Size: 0x530

#endif
