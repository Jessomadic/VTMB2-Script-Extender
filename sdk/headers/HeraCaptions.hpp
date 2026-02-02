#ifndef UE4SS_SDK_HeraCaptions_HPP
#define UE4SS_SDK_HeraCaptions_HPP

#include "HeraCaptions_enums.hpp"

struct FHeraCaption
{
    FText DisplayText;                                                                // 0x0000 (size: 0x18)
    EHeraCaptionsType Type;                                                           // 0x0018 (size: 0x1)
    EHeraCaptionsPriority Priority;                                                   // 0x0019 (size: 0x1)

}; // Size: 0x20

class UHeraCaptionWidget : public UHeraBaseWidget
{
    class UCommonTextBlock* CloseCaptionText;                                         // 0x02C8 (size: 0x8)
    class UWidgetSwitcher* CloseCaptionIconSwitcher;                                  // 0x02D0 (size: 0x8)
    class UImage* DirectionIcon;                                                      // 0x02D8 (size: 0x8)
    float ShowTime;                                                                   // 0x02E0 (size: 0x4)

}; // Size: 0x2F0

class UHeraCaptionsDataAsset : public UDataAsset
{
    TMap<class TSoftObjectPtr<UAkAudioEvent>, class FHeraCaption> AudioEventToCaptions; // 0x0030 (size: 0x50)

}; // Size: 0x80

class UHeraCaptionsSettings : public UHeraSettings
{
    TSoftObjectPtr<UHeraCaptionsDataAsset> CaptionsAsset;                             // 0x0038 (size: 0x28)

}; // Size: 0x60

class UHeraCaptionsSubsystem : public UWorldSubsystem
{
    TMap<class TSoftObjectPtr<UAkAudioEvent>, class FHeraCaption> AudioEventToCaptions; // 0x0048 (size: 0x50)

}; // Size: 0xA0

class UHeraCaptionsWidgetController : public UHeraBaseWidget
{
    TArray<class UHeraCaptionWidget*> CloseCaptionWidgetArray;                        // 0x02C8 (size: 0x10)
    class UHeraPropertyBool* CaptionOn;                                               // 0x02D8 (size: 0x8)

}; // Size: 0x2E8

#endif
