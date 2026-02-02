#ifndef UE4SS_SDK_WrestlerWeaponStowComponent_HPP
#define UE4SS_SDK_WrestlerWeaponStowComponent_HPP

class UWrestlerWeaponStowComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    TSubclassOf<class ABP_Weapon_C> InitialWeaponClass;                               // 0x00A8 (size: 0x8)
    TSubclassOf<class ABP_Weapon_C> OverrideWeaponClass;                              // 0x00B0 (size: 0x8)
    FstructWeaponSwap InitialWeaponInfos;                                             // 0x00B8 (size: 0x60)
    bool InitialWeaponEquipped;                                                       // 0x0118 (size: 0x1)
    class USkeletalMesh* CurrentWeaponMesh;                                           // 0x0120 (size: 0x8)
    class ASkeletalMeshActor* StowedWeapon;                                           // 0x0128 (size: 0x8)
    TSubclassOf<class UBP_RangedWeaponInstance_Base_C> InitialRangedWeaponInstanceClass; // 0x0130 (size: 0x8)
    TSubclassOf<class UBP_RangedWeaponInstance_Base_C> OverrideRangedWeaponInstanceClass; // 0x0138 (size: 0x8)
    class USkeletalMesh* DroppedWeaponSkeletalMesh;                                   // 0x0140 (size: 0x8)
    FTransform DroppedWeaponTransform;                                                // 0x0150 (size: 0x60)

    void GetCurrentWeapon(class ABP_Weapon_C*& CurrentWeapon);
    void GetWeaponEquipped(bool& IsInitial);
    void Stow Weapon(bool IsOverrideWeapon);
    void SetOverrideWeapon(class AActor* WeaponActor, bool& Return);
    void GetOverrideWeapon(TSubclassOf<class ABP_Weapon_C>& Weapon, bool& Return);
    void GetInitialWeaponInfos(TSubclassOf<class ABP_Weapon_C>& Weapon, FstructWeaponSwap& WeaponInfos, bool& Return);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_WrestlerWeaponStowComponent(int32 EntryPoint);
}; // Size: 0x1B0

#endif
