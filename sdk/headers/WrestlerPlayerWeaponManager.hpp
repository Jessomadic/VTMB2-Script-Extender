#ifndef UE4SS_SDK_WrestlerPlayerWeaponManager_HPP
#define UE4SS_SDK_WrestlerPlayerWeaponManager_HPP

class UWrestlerPlayerWeaponManager_C : public UActorComponent
{
    TMap<FGameplayTag, int32> AmmoMap;                                                // 0x00A0 (size: 0x50)
    TMap<FGameplayTag, int32> MaxAmmoMap;                                             // 0x00F0 (size: 0x50)

    void CanCollect(FGameplayTag AmmoType, bool& CanCollect, bool& AmmoFull);
    void AddAmmo(FGameplayTag AmmoTag, int32 Ammo, bool& Filled, bool& FillBlocked);
    void DeductAmmo(FGameplayTag AmmoTag);
}; // Size: 0x140

#endif
