#ifndef UE4SS_SDK_HeraAchievements_HPP
#define UE4SS_SDK_HeraAchievements_HPP

#include "HeraAchievements_enums.hpp"

struct FHeraAchievementEntry
{
    FName SteamAchievementID;                                                         // 0x0000 (size: 0x8)
    FName PSAchievementID;                                                            // 0x0008 (size: 0x8)
    FName XSXAchievementID;                                                           // 0x0010 (size: 0x8)
    FName EpicAchievementID;                                                          // 0x0018 (size: 0x8)
    EHeraAchievementType AchievementType;                                             // 0x0020 (size: 0x4)
    bool bAchievementCanBeLocked;                                                     // 0x0024 (size: 0x1)
    int32 ProgressiveGoal;                                                            // 0x0028 (size: 0x4)
    TSoftObjectPtr<UHeraPropertyRule> Rule;                                           // 0x0030 (size: 0x28)
    int32 TriggerOnRulePassCount;                                                     // 0x0058 (size: 0x4)

}; // Size: 0x60

class UHeraAchievementsReconciler : public UObject
{
    TMap<class FName, class FName> GeneriIDToPlatformIDLookUpMap;                     // 0x0028 (size: 0x50)
    TMap<class FName, class FName> PlatformIDToGenericIDLookUpMap;                    // 0x0078 (size: 0x50)
    TMap<FName, int32> ProgressiveGoal;                                               // 0x00C8 (size: 0x50)

}; // Size: 0x118

class UHeraAchievementsSettings : public UHeraSettings
{
    TMap<class FName, class FHeraAchievementEntry> Achievements;                      // 0x0038 (size: 0x50)
    TSoftObjectPtr<UHeraPropertyBool> bLockAchievements;                              // 0x0088 (size: 0x28)

}; // Size: 0xB0

class UHeraAchievementsSubsystem : public UGameInstanceSubsystem
{
    class UHeraAchievementsReconciler* ProgressionReconciler;                         // 0x0140 (size: 0x8)

    void UpdateAchievement(const FName InAchievementName, const int32 InProgressAmount, class APlayerController* InPlayerController, bool InSetProgress);
    void ResetAchievements();
    void GetAchievementsNameList(TArray<FName>& OutNameList);
    void GetAchievementProgress(const FName InAchievementName, int32& Progress, bool& IsUnlocked);
}; // Size: 0x148

#endif
