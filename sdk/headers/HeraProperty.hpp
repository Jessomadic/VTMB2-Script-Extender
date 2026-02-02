#ifndef UE4SS_SDK_HeraProperty_HPP
#define UE4SS_SDK_HeraProperty_HPP

#include "HeraProperty_enums.hpp"

struct FHeraPropertyStorageData
{
    TMap<class FName, class bool> Booleans;                                           // 0x0000 (size: 0x50)
    TMap<FName, int32> Integers;                                                      // 0x0050 (size: 0x50)
    TMap<FName, float> Floats;                                                        // 0x00A0 (size: 0x50)
    TMap<class FName, class FString> Strings;                                         // 0x00F0 (size: 0x50)
    TMap<class FName, class FGameplayTag> GameplayTags;                               // 0x0140 (size: 0x50)
    TMap<class FName, class FHeraStateTrackingList> StateLists;                       // 0x0190 (size: 0x50)

}; // Size: 0x1E0

struct FHeraPropertyStorageState
{
    FHeraPropertyStorageData LiveData;                                                // 0x0000 (size: 0x1E0)
    TArray<FName> DirtyBools;                                                         // 0x01E0 (size: 0x10)
    TArray<FName> DirtyInts;                                                          // 0x01F0 (size: 0x10)
    TArray<FName> DirtyFloats;                                                        // 0x0200 (size: 0x10)
    TArray<FName> DirtyStrings;                                                       // 0x0210 (size: 0x10)
    TArray<FName> DirtyGameplayTags;                                                  // 0x0220 (size: 0x10)
    TArray<FName> DirtyLists;                                                         // 0x0230 (size: 0x10)

}; // Size: 0x240

struct FPropertyScope
{
    FPropertyScopePaths Category;                                                     // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FPropertyScopePaths
{
    TArray<FDirectoryPath> Paths;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

class UHeraPersistenceComponentBase : public UActorComponent
{

    void AddComponentToGameProgression();
}; // Size: 0xA0

class UHeraPersistenceComponentBool : public UHeraPersistenceComponentBase
{

    void SetProperty(bool Value);
}; // Size: 0xA0

class UHeraPersistenceComponentHidden : public UHeraPersistenceComponentBool
{
    bool SetHiddenInGame;                                                             // 0x00A0 (size: 0x1)
    bool DisableCollision;                                                            // 0x00A1 (size: 0x1)
    FHeraPersistenceComponentHiddenOnHiddenChanged OnHiddenChanged;                   // 0x00A8 (size: 0x10)
    void WrestlerHiddenDelegate(bool InHidden);

}; // Size: 0xB8

class UHeraPersistenceComponentInt : public UHeraPersistenceComponentBase
{

    void SetProperty(int32 Value);
}; // Size: 0xA0

class UHeraPersistenceComponentInt32 : public UHeraPersistenceComponentInt
{
}; // Size: 0xA0

class UHeraPersistenceComponentSequence : public UHeraPersistenceComponentBool
{
}; // Size: 0xA0

class UHeraPropertyBase : public UHeraDataAsset
{
    bool bPartOfGameProgressionSave;                                                  // 0x0040 (size: 0x1)

    FString GetValueAsString();
    FName GetPropertyName();
}; // Size: 0x48

class UHeraPropertyBool : public UHeraPropertyBase
{
    bool Property;                                                                    // 0x0048 (size: 0x1)
    bool PropertyDefault;                                                             // 0x0049 (size: 0x1)

    void SetProperty(bool InValue);
    bool GetPropertyDefault();
    bool GetProperty();
}; // Size: 0x50

class UHeraPropertyComponent : public UActorComponent
{
    FName PropertyName;                                                               // 0x00A0 (size: 0x8)

}; // Size: 0xB0

class UHeraPropertyComponentBool : public UHeraPropertyComponent
{
    FHeraPropertyComponentBoolHeraPropertyChanged HeraPropertyChanged;                // 0x00B0 (size: 0x10)
    void HeraPropertyBoolChanged(bool NewValue);
    TSoftObjectPtr<UHeraPropertyBool> PropertyAssetReference;                         // 0x00C0 (size: 0x28)

    void OnHeraPropertyStoreBoolChanged(FName InPropertyName, bool InNewValue);
}; // Size: 0xE8

class UHeraPropertyComponentFloat : public UHeraPropertyComponent
{
    FHeraPropertyComponentFloatHeraPropertyChanged HeraPropertyChanged;               // 0x00B0 (size: 0x10)
    void HeraPropertyFloatChanged(float NewValue);
    TSoftObjectPtr<UHeraPropertyFloat> PropertyAssetReference;                        // 0x00C0 (size: 0x28)

    void OnHeraPropertyStoreFloatChanged(FName InPropertyName, float InNewValue);
}; // Size: 0xE8

class UHeraPropertyComponentGameplayTag : public UHeraPropertyComponent
{
    FHeraPropertyComponentGameplayTagHeraPropertyChanged HeraPropertyChanged;         // 0x00B0 (size: 0x10)
    void HeraPropertyGameplayTagChanged(const FGameplayTag& NewValue);
    TSoftObjectPtr<UHeraPropertyGameplayTag> PropertyAssetReference;                  // 0x00C0 (size: 0x28)

    void OnHeraPropertyStoreGameplayTagChanged(FName InPropertyName, const FGameplayTag& InNewValue);
    FGameplayTag GetPropertyValue();
}; // Size: 0xE8

class UHeraPropertyComponentInt : public UHeraPropertyComponent
{
    FHeraPropertyComponentIntHeraPropertyChanged HeraPropertyChanged;                 // 0x00B0 (size: 0x10)
    void HeraPropertyIntChanged(int32 NewValue);
    TSoftObjectPtr<UHeraPropertyInt> PropertyAssetReference;                          // 0x00C0 (size: 0x28)

    void OnHeraPropertyStoreIntChanged(FName InPropertyName, int32 InNewValue);
}; // Size: 0xE8

class UHeraPropertyComponentList : public UHeraPropertyComponent
{
    FHeraPropertyComponentListHeraPropertyChanged HeraPropertyChanged;                // 0x00B0 (size: 0x10)
    void HeraPropertyStateTrackingListChanged(FHeraStateTrackingList NewValue);
    TSoftObjectPtr<UHeraPropertyStateTrackingList> PropertyAssetReference;            // 0x00C0 (size: 0x28)

    void OnHeraPropertyStoreListChanged(FName InPropertyName, FHeraStateTrackingList InNewValue);
}; // Size: 0xE8

class UHeraPropertyComponentRule : public UHeraPropertyComponent
{
    FHeraPropertyComponentRuleHeraPropertyChanged HeraPropertyChanged;                // 0x00B0 (size: 0x10)
    void HeraPropertyRuleChanged(bool NewValue);
    TSoftObjectPtr<UHeraPropertyRule> PropertyAssetReference;                         // 0x00C0 (size: 0x28)

    void OnHeraPropertyStoreBoolChanged(FName InPropertyName, bool InNewValue);
}; // Size: 0xE8

class UHeraPropertyComponentString : public UHeraPropertyComponent
{
    FHeraPropertyComponentStringHeraPropertyChanged HeraPropertyChanged;              // 0x00B0 (size: 0x10)
    void HeraPropertyStringChanged(FString NewValue);
    TSoftObjectPtr<UHeraPropertyString> PropertyAssetReference;                       // 0x00C0 (size: 0x28)

    void OnHeraPropertyStoreStringChanged(FName InPropertyName, FString InNewValue);
}; // Size: 0xE8

class UHeraPropertyCriteria : public UObject
{
    bool bInvertCriteria;                                                             // 0x0028 (size: 0x1)

}; // Size: 0x30

class UHeraPropertyFloat : public UHeraPropertyBase
{
    float Property;                                                                   // 0x0048 (size: 0x4)
    float PropertyDefault;                                                            // 0x004C (size: 0x4)

    void SetProperty(float InValue);
    float GetPropertyDefault();
    float GetProperty();
}; // Size: 0x50

class UHeraPropertyGameplayTag : public UHeraPropertyBase
{
    FGameplayTag Property;                                                            // 0x0048 (size: 0x8)
    FGameplayTag PropertyDefault;                                                     // 0x0050 (size: 0x8)

    void SetProperty(FGameplayTag InValue);
    FGameplayTag GetPropertyDefault();
    FGameplayTag GetProperty();
}; // Size: 0x58

class UHeraPropertyInt : public UHeraPropertyBase
{
    int32 Property;                                                                   // 0x0048 (size: 0x4)
    int32 PropertyDefault;                                                            // 0x004C (size: 0x4)

    void SetProperty(int32 InValue);
    int32 GetPropertyDefault();
    int32 GetProperty();
}; // Size: 0x50

class UHeraPropertyRule : public UHeraPropertyBase
{
    bool Property;                                                                    // 0x0048 (size: 0x1)
    TArray<class UHeraPropertyCriteria*> Criteria;                                    // 0x0050 (size: 0x10)

    bool GetProperty();
    int32 GetPassCount();
    bool Evaluate();
    int32 CriteriaCount();
}; // Size: 0x60

class UHeraPropertySettings : public UHeraSettings
{
    FPropertyScope PropertyScope;                                                     // 0x0038 (size: 0x30)

}; // Size: 0x68

class UHeraPropertyStateTrackingList : public UHeraPropertyBase
{
    FHeraStateTrackingList Property;                                                  // 0x0048 (size: 0x60)
    FHeraStateTrackingList PropertyDefault;                                           // 0x00A8 (size: 0x60)

    void SetProperty(FHeraStateTrackingList InValue);
    void RemoveItem(FString InItemName);
    int32 GetTrackingListLength();
    FHeraStateTrackingList GetPropertyDefault();
    FHeraStateTrackingList GetProperty();
    void Empty();
    bool ContainsItemTagged(const FGameplayTag& InItemName);
    bool ContainsItemNamed(FString InItemName);
    void AddTag(const FGameplayTag& InItemName);
    void AddItem(FString InItemName);
}; // Size: 0x108

class UHeraPropertyStorage : public UGameInstanceSubsystem
{
    FHeraPropertyStorageState Properties;                                             // 0x0038 (size: 0x240)
    TMap<class FName, class UHeraPropertyRule*> PropertyRules;                        // 0x0278 (size: 0x50)
    TSet<FName> GameProgressionSavePropertyNames;                                     // 0x02C8 (size: 0x50)
    FHeraPropertyStorageOnAnyValueChanged OnAnyValueChanged;                          // 0x03C0 (size: 0x10)
    void OnAnyValueChanged();

    void SetString(FName InProperty, FString Value);
    void SetInt(FName InProperty, int32 Value);
    void SetGameplayTag(FName InProperty, FGameplayTag Value);
    void SetFloat(FName InProperty, float Value);
    void SetBool(FName InProperty, bool InValue);
    bool HasString(FName InProperty);
    bool HasInt(FName InProperty);
    bool HasGameplayTag(FName InProperty);
    bool HasFloat(FName InProperty);
    bool HasBool(FName InProperty);
    FString GetString(FName InProperty, FString InDefaultValue);
    int32 GetInt(FName InProperty, const int32 InDefaultValue);
    FGameplayTag GetGameplayTag(FName InProperty);
    float GetFloat(FName InProperty, const float InDefaultValue);
    bool GetBool(FName InProperty, const bool InDefaultValue);
    void GetAllProperties(TArray<class UTCR_PropertyEntryView*>& PropertyDisplay);
}; // Size: 0x3D0

class UHeraPropertyString : public UHeraPropertyBase
{
    FString Property;                                                                 // 0x0048 (size: 0x10)
    FString PropertyDefault;                                                          // 0x0058 (size: 0x10)

    void SetProperty(FString InValue);
    FString GetPropertyDefault();
    FString GetProperty();
}; // Size: 0x68

class UHeraRuleCriteriaBool : public UHeraPropertyCriteria
{
    class UHeraPropertyBase* RuleProperty;                                            // 0x0030 (size: 0x8)

}; // Size: 0x40

class UHeraRuleCriteriaFloat : public UHeraPropertyCriteria
{
    TSoftObjectPtr<UHeraPropertyFloat> RuleProperty;                                  // 0x0030 (size: 0x28)
    class UHeraPropertyFloat* RulePropertyPtr;                                        // 0x0058 (size: 0x8)
    EHeraComparisonType Comparison;                                                   // 0x0060 (size: 0x4)
    float Value;                                                                      // 0x0064 (size: 0x4)

}; // Size: 0x70

class UHeraRuleCriteriaGameplayTag : public UHeraPropertyCriteria
{
    TSoftObjectPtr<UHeraPropertyGameplayTag> RuleProperty;                            // 0x0030 (size: 0x28)
    class UHeraPropertyGameplayTag* RulePropertyPtr;                                  // 0x0058 (size: 0x8)
    EHeraComparisonType Comparison;                                                   // 0x0060 (size: 0x4)
    FGameplayTag Value;                                                               // 0x0064 (size: 0x8)

}; // Size: 0x70

class UHeraRuleCriteriaInt : public UHeraPropertyCriteria
{
    TSoftObjectPtr<UHeraPropertyInt> RuleProperty;                                    // 0x0030 (size: 0x28)
    class UHeraPropertyInt* RulePropertyPtr;                                          // 0x0058 (size: 0x8)
    EHeraComparisonType Comparison;                                                   // 0x0060 (size: 0x4)
    int32 Value;                                                                      // 0x0064 (size: 0x4)

}; // Size: 0x70

class UHeraRuleCriteriaStateTrackingList : public UHeraPropertyCriteria
{
    TSoftObjectPtr<UHeraPropertyStateTrackingList> RuleProperty;                      // 0x0030 (size: 0x28)
    class UHeraPropertyStateTrackingList* RulePropertyPtr;                            // 0x0058 (size: 0x8)
    EHeraListComparisonType Comparison;                                               // 0x0060 (size: 0x4)
    FString Value;                                                                    // 0x0068 (size: 0x10)

}; // Size: 0x80

class UHeraRuleCriteriaString : public UHeraPropertyCriteria
{
    TSoftObjectPtr<UHeraPropertyString> RuleProperty;                                 // 0x0030 (size: 0x28)
    class UHeraPropertyString* RulePropertyPtr;                                       // 0x0058 (size: 0x8)
    EHeraComparisonType Comparison;                                                   // 0x0060 (size: 0x4)
    FString Value;                                                                    // 0x0068 (size: 0x10)

}; // Size: 0x80

#endif
