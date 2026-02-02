#ifndef UE4SS_SDK_HeraCore_HPP
#define UE4SS_SDK_HeraCore_HPP

#include "HeraCore_enums.hpp"

struct FHeraMapInfo
{
    TSoftObjectPtr<UWorld> Map;                                                       // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FHeraScaledCurve
{
    bool bScaleX;                                                                     // 0x0000 (size: 0x1)
    float MinInput;                                                                   // 0x0004 (size: 0x4)
    float MaxInput;                                                                   // 0x0008 (size: 0x4)
    bool bScaleY;                                                                     // 0x000C (size: 0x1)
    float MinValue;                                                                   // 0x0010 (size: 0x4)
    float MaxValue;                                                                   // 0x0014 (size: 0x4)
    FRuntimeFloatCurve Curve;                                                         // 0x0018 (size: 0x88)

}; // Size: 0xA0

struct FHeraStateTrackingList
{
    TMap<FHeraStateTrackingListItem, int32> StateTrackingMap;                         // 0x0000 (size: 0x50)
    TArray<class UHeraStateTrackingListDefinition*> Origins;                          // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FHeraStateTrackingListItem
{
    FString OriginName;                                                               // 0x0000 (size: 0x10)
    FString ItemName;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

class AHeraGameMode : public AGameMode
{
}; // Size: 0x380

class AHeraPlayerController : public APlayerController
{

    void SetUsePawnRotation(bool bUsePawnRotation);
    void OnGamePaused(bool bPaused);
    bool IsPlayingInVR();
    void DisableControllerRotation();
}; // Size: 0x860

class IHeraVersionInterface : public IInterface
{
}; // Size: 0x28

class UHeraConfigurationAsset : public UHeraDataAsset
{
}; // Size: 0x30

class UHeraDataAsset : public UPrimaryDataAsset
{
}; // Size: 0x30

class UHeraDataLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UHeraDefaults : public UPrimaryDataAsset
{
    TMap<class TSubclassOf<UHeraConfigurationAsset>, class TSoftObjectPtr<UHeraConfigurationAsset>> DataSetup; // 0x0030 (size: 0x50)

}; // Size: 0x80

class UHeraGameInstance : public UGameInstance
{
    TSoftObjectPtr<UHeraDefaults> DefaultsPtr;                                        // 0x01F8 (size: 0x28)
    class UHeraDefaults* Defaults;                                                    // 0x0220 (size: 0x8)
    class UHeraMaps* MapSetup;                                                        // 0x0228 (size: 0x8)

    void LoadMapAtDebugStart(const FGameplayTag& InWorldName, const FGameplayTag& InDebugPointStartID);
    void LoadMap(const FGameplayTag& InWorldName, FString Options);
    EHeraPlayerVariant GetPlayerVariant();
}; // Size: 0x230

class UHeraGlobal : public UBlueprintFunctionLibrary
{

    bool IsPIE();
}; // Size: 0x28

class UHeraMaps : public UHeraConfigurationAsset
{
    TMap<class FGameplayTag, class FHeraMapInfo> MapInfo;                             // 0x0030 (size: 0x50)

}; // Size: 0x80

class UHeraPlayerVariantSettingsPerUser : public UHeraSettings
{
}; // Size: 0x38

class UHeraSettings : public UDeveloperSettings
{
}; // Size: 0x38

class UHeraStateTrackingListDefinition : public UHeraDataAsset
{
    FString Name;                                                                     // 0x0030 (size: 0x10)
    TMap<FString, int32> ItemNameToValues;                                            // 0x0090 (size: 0x50)

}; // Size: 0xE0

class UHeraWorldPartitionStreamingSourceComponent : public UWorldPartitionStreamingSourceComponent
{
}; // Size: 0x110

#endif
