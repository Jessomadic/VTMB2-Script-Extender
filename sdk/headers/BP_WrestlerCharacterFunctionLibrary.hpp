#ifndef UE4SS_SDK_BP_WrestlerCharacterFunctionLibrary_HPP
#define UE4SS_SDK_BP_WrestlerCharacterFunctionLibrary_HPP

class UBP_WrestlerCharacterFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetPlayerEyesData(class UObject* WorldContext, class UObject* __WorldContext, class UWrestlerCharacterEyesDataAsset*& EyesData);
    void ApplyEyes(TScriptInterface<class IBP_PlayerCostumeInterface_C> Player, class UWrestlerCharacterEyesDataAsset* PiercingData, bool IsDefault, class UObject* __WorldContext);
    void GetPiercingDefForCurrentVariation(class UWrestlerCharacterPiercingDataAsset* Piercing Data, class UObject* __WorldContext, TSoftObjectPtr<USkeletalMesh>& Peircing Mesh);
    void GetPlayerPiercingData(class UObject* WorldContext, class UObject* __WorldContext, class UWrestlerCharacterPiercingDataAsset*& Data);
    void ApplyPiercing(TScriptInterface<class IBP_PlayerCostumeInterface_C> Player, class UWrestlerCharacterPiercingDataAsset* PiercingData, bool IsDefaultPhyre, class UObject* __WorldContext);
    void GetPlayerMakeUpData(class UObject* WorldContext, class UObject* __WorldContext, class UWrestlerCharacterMakeUpDataAsset*& Data);
    void GetMakeUpDefForCurrentVariation(class UWrestlerCharacterMakeUpDataAsset* MakeUp Data, class UObject* __WorldContext, TSoftObjectPtr<UMaterialInstance>& MakeUp Material);
    void ApplyMakeUp(TScriptInterface<class IBP_PlayerCostumeInterface_C> Player, class UWrestlerCharacterMakeUpDataAsset* MakeUpData, bool ForceDefault, class UObject* __WorldContext);
    void GetPlayerHairDataWithID(class UObject* WorldContext, FGameplayTag HairID, class UObject* __WorldContext, class UWrestlerCharacterHairDataAsset*& HairData);
    void GetPlayerHairData(class UObject* WorldContext, class UObject* __WorldContext, class UWrestlerCharacterHairDataAsset*& Data);
    void GetHairDefForCurrentVariation(class UWrestlerCharacterHairDataAsset* Hair Data, class UObject* __WorldContext, TSoftObjectPtr<USkeletalMesh>& Hair);
    void ApplyHair(TScriptInterface<class IBP_PlayerCostumeInterface_C> Player, class UWrestlerCharacterHairDataAsset* HairData, bool ForcedHair, class UObject* __WorldContext);
    void GetPlayerCostumeData(class UObject* WorldContext, class UObject* __WorldContext, class UWrestlerCharacterCostumeDataAsset*& Data);
    void GetCostumeDefForCurrentVariation(class UWrestlerCharacterCostumeDataAsset* Costume Data, class UObject* __WorldContext, FWrestlerOutfitData& Costume);
    void ApplyCostume(TScriptInterface<class IBP_PlayerCostumeInterface_C> Player, class UWrestlerCharacterCostumeDataAsset* CostumeData, bool ApplyToProperty, class UObject* __WorldContext);
}; // Size: 0x28

#endif
