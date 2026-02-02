#ifndef UE4SS_SDK_HeraDLC_HPP
#define UE4SS_SDK_HeraDLC_HPP

struct FHeraDlcSpecification
{
    FString DlcTitle;                                                                 // 0x0000 (size: 0x10)
    FString DlcDescription;                                                           // 0x0010 (size: 0x10)
    TArray<FName> ProductIdentifiers;                                                 // 0x0020 (size: 0x10)
    FName ProductIdentifier;                                                          // 0x0030 (size: 0x8)
    TArray<class UHeraPropertyBool*> AssociatedProperties;                            // 0x0038 (size: 0x10)
    bool bRequiresLicense;                                                            // 0x0048 (size: 0x1)

}; // Size: 0x50

class UHeraDLCSettings : public UObject
{
    TMap<class FString, class FString> DLCPlatformIdMap;                              // 0x0028 (size: 0x50)

}; // Size: 0x78

class UHeraDLCSubsystem : public UGameInstanceSubsystem
{
    FHeraDLCSubsystemDlcEntitlementsChanged DlcEntitlementsChanged;                   // 0x0030 (size: 0x10)
    void DlcEntitlementsChanged();
    class UHeraDlcSpecificationAsset* DlcSpecificationAsset;                          // 0x0050 (size: 0x8)

    void RefreshDlcProperties();
    bool IsDLCInitialised();
}; // Size: 0x98

class UHeraDLCSubsystemSettings : public UDeveloperSettings
{
    FSoftObjectPath DlcSpecificationAsset;                                            // 0x0038 (size: 0x20)

}; // Size: 0x58

class UHeraDlcSpecificationAsset : public UDataAsset
{
    TArray<FHeraDlcSpecification> DlcSpecifications;                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
