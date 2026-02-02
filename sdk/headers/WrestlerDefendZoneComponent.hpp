#ifndef UE4SS_SDK_WrestlerDefendZoneComponent_HPP
#define UE4SS_SDK_WrestlerDefendZoneComponent_HPP

class UWrestlerDefendZoneComponent_C : public UWrestlerEnemyDefendZoneComponent
{
    FGameplayTagContainer DefendZoneExemptionTags;                                    // 0x00B0 (size: 0x20)

    bool IsPointInOwnedZone(FVector Point, float ExtentMultiplier, bool IncludeHysteresis);
    bool HasDefendZones();
    TArray<class AWrestlerDefendZone*> GetDefendZones();
    void RemoveAllDefendZones();
    void RemoveDefendZones(TArray<class ABP_EQSDefendZone_C*>& DefendZones, bool& Return);
    void RemoveDefendZone(class ABP_EQSDefendZone_C* DefendZone, bool& Return);
    void AddDefendZones(TArray<class ABP_EQSDefendZone_C*>& DefendZones);
    void AddDefendZone(class ABP_EQSDefendZone_C* DefendZone);
}; // Size: 0xD0

#endif
