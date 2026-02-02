#ifndef UE4SS_SDK_HeraUI_HPP
#define UE4SS_SDK_HeraUI_HPP

#include "HeraUI_enums.hpp"

struct FHeraHUDSetup
{
    TSoftClassPtr<UHeraHUDWidget> HUD;                                                // 0x0000 (size: 0x28)
    FGameplayTag DefaultMenuName;                                                     // 0x0028 (size: 0x8)
    FGameplayTag SkipDefaultMenuName;                                                 // 0x0030 (size: 0x8)
    FGameplayTag PauseMenuName;                                                       // 0x0038 (size: 0x8)
    FGameplayTag CutScenePauseMenuName;                                               // 0x0040 (size: 0x8)
    FGameplayTag RPGMenuName;                                                         // 0x0048 (size: 0x8)
    FGameplayTag GameOverMenuName;                                                    // 0x0050 (size: 0x8)
    FGameplayTag ControllerDisconnectName;                                            // 0x0058 (size: 0x8)
    FGameplayTag SystemNotificationMenuName;                                          // 0x0060 (size: 0x8)
    bool bPushDefaultOnBeginPlay;                                                     // 0x0068 (size: 0x1)
    bool bShowDebugInfo;                                                              // 0x0069 (size: 0x1)
    TArray<FName> PlayerHUDSlots;                                                     // 0x0070 (size: 0x10)
    TArray<FName> PlayerHUDSlotsInNarrativeMode;                                      // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FHeraSlotWidget
{
    FName SlotNameID;                                                                 // 0x0000 (size: 0x8)
    TSubclassOf<class UHeraBaseWidget> Widget;                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

class AHeraHUD : public AHUD
{
    FHeraHUDOnGamePausedChanged OnGamePausedChanged;                                  // 0x0388 (size: 0x10)
    void OnGamePausedChanged(bool bInPaused);
    FHeraHUDPlayerHudVisibilityChanged PlayerHudVisibilityChanged;                    // 0x0398 (size: 0x10)
    void OnShowHidePlayerHud(bool bIsVisible);
    FHeraHUDPlayerHudVisibilityChangedForGameOver PlayerHudVisibilityChangedForGameOver; // 0x03A8 (size: 0x10)
    void OnPlayerHudVisibilityChangedForGameOver();
    class UHeraPropertyBool* PlayerInNarrativeMode;                                   // 0x03B8 (size: 0x8)

    void UpdateSlotWidget(FName InSlotNameID, TSubclassOf<class UHeraBaseWidget> InWidget, const bool InSetSlot);
    void ShowPlayerHUD();
    void ShowHUDDebugInfo(class AActor* InActor);
    void RestartLevel();
    void ReceiveOnUIEvent(const FName& InName);
    class UHeraMenu* Push(FGameplayTag InName);
    class UHeraMenu* Pop();
    void OnUIEvent(const FName& InName);
    void OnShowHidePlayerHud__DelegateSignature(bool bIsVisible);
    void OnPlayerHudVisibilityChangedForGameOver__DelegateSignature();
    void OnGamePausedChanged__DelegateSignature(bool bInPaused);
    void HidePlayerHUD();
    void HideHUDForGameOver();
    class UHeraBaseWidget* GetSlotWidget(FName InSlotNameID);
    class UHeraCommonUIBaseWidget* GetSlotCommonWidget(FName InSlotNameID);
    class UWidget* GetOtherSlotWidget(FName InSlotNameID);
    class UHeraHUDWidget* GetHUDWidget();
}; // Size: 0x460

class UHeraActivatableWidget : public UCommonActivatableWidget
{
    bool bHandleConfirm;                                                              // 0x0410 (size: 0x1)
    bool bUseBPBackHandlerOverride;                                                   // 0x0411 (size: 0x1)
    class UWidget* HeraDesiredFocusWidget;                                            // 0x0418 (size: 0x8)
    FDataTableRowHandle BackInputActionData;                                          // 0x0420 (size: 0x10)
    FDataTableRowHandle ConfirmInputActionData;                                       // 0x0438 (size: 0x10)

    void UnregisterScrollRecipient(const class UWidget* AnalogScrollRecipient);
    void SetDesiredFocusWidgetHera(class UWidget* InWidget);
    void RegisterScrollRecipient(const class UWidget* AnalogScrollRecipient);
    void ReceiveOnSynchronizeProperties();
    FString GetVersionInfo();
    FString GetVersionDate();
    bool BP_OnHandleConfirmAction();
    bool BP_OnHandleBackActionOverride();
}; // Size: 0x450

class UHeraBaseWidget : public UUserWidget
{
    int32 PreventFocusChange;                                                         // 0x02C0 (size: 0x4)

    void ShowDebugInfo(class AActor* InActor);
    void Show();
    void Refresh();
    void ReceiveOnUIFocus();
    void ReceiveOnSynchronizeProperties();
    void ReceiveOnShow();
    void ReceiveOnHide();
    void ReceiveOnFocusReceived();
    void ReceiveOnFocusLost();
    void Hide();
    FName GetWidgetFName();
    FString GetVersionInfo();
    FString GetVersionDate();
}; // Size: 0x2C8

class UHeraButtonBase : public UHeraCommonUIBaseWidget
{
    FText ButtonLabel;                                                                // 0x0330 (size: 0x18)
    bool bShowActionIcon;                                                             // 0x0348 (size: 0x1)
    bool bShowSecondaryBackground;                                                    // 0x0349 (size: 0x1)
    TSubclassOf<class UCommonButtonStyle> Style;                                      // 0x0350 (size: 0x8)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x0358 (size: 0x1)
    FSlateBrush PCIconBrush;                                                          // 0x0360 (size: 0xD0)
    TMap<class EWrestlerControllerType, class FSlateBrush> ControllerTypeAndBrush;    // 0x0430 (size: 0x50)
    FHeraButtonBaseOnButtonClickedCallback OnButtonClickedCallback;                   // 0x0480 (size: 0x10)
    void BUIOnClickedSignature(class UHeraButtonBase* Button);
    class UButton* Button;                                                            // 0x0490 (size: 0x8)
    class UCommonTextBlock* ButtonText;                                               // 0x0498 (size: 0x8)
    class UImage* SecondaryBackground;                                                // 0x04A0 (size: 0x8)
    class UImage* PCIcon;                                                             // 0x04A8 (size: 0x8)
    class UImage* ConsoleIcon;                                                        // 0x04B0 (size: 0x8)
    class UImage* PSConsoleIcon;                                                      // 0x04B8 (size: 0x8)
    class UOverlay* ActionIconOverlay;                                                // 0x04C0 (size: 0x8)
    class UMaterialInstanceDynamic* SingleMaterialStyleMID;                           // 0x04C8 (size: 0x8)
    FButtonStyle NormalStyle;                                                         // 0x04D0 (size: 0x3F0)
    FButtonStyle SelectedStyle;                                                       // 0x08C0 (size: 0x3F0)
    FButtonStyle DisabledStyle;                                                       // 0x0CB0 (size: 0x3F0)
    FTextBlockStyle NormalTextStyle;                                                  // 0x10A0 (size: 0x340)

    void SetButtonText(const FText& InText);
    void SetButtonStyle();
    void NativeOnButtonClicked();
    class UButton* GetButton();
}; // Size: 0x13E0

class UHeraCommonUIBaseWidget : public UCommonUserWidget
{
    FHeraCommonUIBaseWidgetOnWidgetReceivedFocusCallback OnWidgetReceivedFocusCallback; // 0x02E8 (size: 0x10)
    void BUICommonUIWidgetSignature(class UHeraCommonUIBaseWidget* Button);
    FHeraCommonUIBaseWidgetOnWidgetLostFocusCallback OnWidgetLostFocusCallback;       // 0x02F8 (size: 0x10)
    void BUICommonUIWidgetSignature(class UHeraCommonUIBaseWidget* Button);
    FHeraCommonUIBaseWidgetOnWidgetHoverOnCallback OnWidgetHoverOnCallback;           // 0x0308 (size: 0x10)
    void BUICommonUIWidgetSignature(class UHeraCommonUIBaseWidget* Button);
    FHeraCommonUIBaseWidgetOnWidgetHoverOffCallback OnWidgetHoverOffCallback;         // 0x0318 (size: 0x10)
    void BUICommonUIWidgetSignature(class UHeraCommonUIBaseWidget* Button);
    ECommonInputType CurrentInputType;                                                // 0x032A (size: 0x1)

    void ToggleVisibility(bool bInStatus);
    void SetIsFocused(bool bInIsFocused);
    void Refresh();
    void ReceiveOnSynchronizeProperties();
    void ReceiveOnSelectedStateChanged();
    void ReceiveOnFocusReceived();
    void ReceiveOnFocusLost();
    void OnInputChanged(ECommonInputType InCurrentInputType);
    bool IsSelected();
    bool IsPlayerUsingController();
    bool IsFocused();
    void ChangeSelectedState(bool bInSelected);
}; // Size: 0x330

class UHeraFNames : public UObject
{
}; // Size: 0x28

class UHeraFadeWidget : public UHeraBaseWidget
{
    FHeraFadeWidgetOnFadeFinished OnFadeFinished;                                     // 0x02C8 (size: 0x10)
    void HeraFadeWidgetOnFadeFinished(class UHeraFadeWidget* Widget, EHeraFadeDirection Direction);
    class UImage* FadeImage;                                                          // 0x02D8 (size: 0x8)

    void SetFadeColour(FLinearColor InColor, bool bUpdateOpacity);
    void OnFadeOpacityChanged(EHeraFadeDirection InFadeDirection, float InNewOpacity);
    bool IsFadeOpaque();
    bool IsDefaultFadeState();
    void ApplyFade(EHeraFadeDirection InFadeDirection, float InFadeDuration);
}; // Size: 0x2F0

class UHeraHUDWidget : public UHeraBaseWidget
{

    void UpdateSlotWidget(FName InSlotNameID, TSubclassOf<class UHeraBaseWidget> InWidget, const bool InSetSlot);
    void ReceiveOnHUDUpdate();
    void HideHUDForGameOver();
    class UHeraBaseWidget* GetSlotWidget(FName InSlotNameID);
    class UWidget* GetSlotOtherWidget(FName InSlotNameID);
    class UHeraCommonUIBaseWidget* GetSlotCommonWidget(FName InSlotNameID);
    class APlayerState* GetPlayerState();
    class APlayerController* GetPlayerController();
    class ACharacter* GetPawn();
    class AHUD* GetHUD();
}; // Size: 0x2C8

class UHeraLoadingWidget : public UHeraBaseWidget
{
}; // Size: 0x2C8

class UHeraMenu : public UHeraBaseWidget
{
    FHeraMenuOnSkipCutsceneDelegate OnSkipCutsceneDelegate;                           // 0x02C8 (size: 0x10)
    void HeraOnCutsceneSkipped(bool bInAlwaysSkip);
    bool bCanSkipCutscene;                                                            // 0x02D8 (size: 0x1)
    class UHeraUI* OverridenUI;                                                       // 0x02E0 (size: 0x8)
    EHeraUIInputMode MenuInputMode;                                                   // 0x02E8 (size: 0x1)
    class UHeraActivatableWidget* ActivatableLayout;                                  // 0x02F0 (size: 0x8)

    void RestartLevel();
    void ReceiveOnUIEvent(const FName& InEventName);
    void ReceiveOnPush();
    void ReceiveOnPop();
    void ReceiveOnMouseDown();
    void ReceiveOnKeyPressed(FName InKeyName);
    void RaiseEvent(FName InEvent);
    class UHeraMenu* Push(FGameplayTag InScreen);
    void Pop();
    void OverrideUI(class UHeraUI* InNewHeraUI);
    void LoadMapFromDebugStartPoint(FGameplayTag InWorldName, FGameplayTag InDebugPointStartID);
    void LoadMapByName(FName InMapTag, FString InOptions);
    void LoadMap(FGameplayTag InMap, FString InOptions);
    EHeraUIInputMode GetMenuInputMode();
}; // Size: 0x2F8

class UHeraMenuStack : public UObject
{
    TArray<class UHeraMenu*> Contents;                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

class UHeraSignWidget : public UHeraBaseWidget
{
    bool bIsNew;                                                                      // 0x02C8 (size: 0x1)
    class UTextBlock* TB_Text;                                                        // 0x02D0 (size: 0x8)
    class UImage* IMG_Symbol;                                                         // 0x02D8 (size: 0x8)
    class UBorder* BD_Frame;                                                          // 0x02E0 (size: 0x8)
    class UBorder* BD_Sign;                                                           // 0x02E8 (size: 0x8)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x02F0 (size: 0x1)

    void SetTextOffset(FVector2D InOffset);
    void SetText(FText InText);
    void SetSymbolOffset(FVector2D InOffset);
    void SetSignPadding(FMargin InPadding);
    void SetSignColorAndOpacity(FLinearColor InColor);
    void SetSignBrush(FSlateBrush InBrush);
    void SetShadowColorAndOffset(FLinearColor InColor, FVector2D InOffset);
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetImgLocation(EHeraUIAlignment InLocation);
    void SetImgBrush(FSlateBrush InBrush);
    void SetImgAngle(float InAngle);
    void SetFramePadding(FMargin InPadding);
    void SetFrameColorAndOpacity(FLinearColor InColor);
    void SetFrameBrush(FSlateBrush InBrush);
    void SetFont(FSlateFontInfo InFontInfo);
    void SetColor(FSlateColor InColorAndOpacity);
    FVector2D GetTextOffset();
    FText GetText();
    FVector2D GetSymbolOffset();
    FMargin GetSignPadding();
    FLinearColor GetSignColorAndOpacity();
    FSlateBrush GetSignBrush();
    void GetShadowColorAndOffset(FLinearColor& OutColor, FVector2D& OutOffset);
    TEnumAsByte<ETextJustify::Type> GetJustification();
    EHeraUIAlignment GetImgLocation();
    FSlateBrush GetImgBrush();
    float GetImgAngle();
    FMargin GetFramePadding();
    FLinearColor GetFrameColorAndOpacity();
    FSlateBrush GetFrameBrush();
    FSlateFontInfo GetFont();
    FSlateColor GetColor();
}; // Size: 0x2F8

class UHeraTestWidget : public UHeraBaseWidget
{
    class UHeraTestWidget* Next;                                                      // 0x02C8 (size: 0x8)
    class UHeraTestWidget* Prev;                                                      // 0x02D0 (size: 0x8)
    TArray<class UHeraTestWidget*> AllLinks;                                          // 0x02D8 (size: 0x10)

}; // Size: 0x2E8

class UHeraUI : public UGameInstanceSubsystem
{
    class UHeraPropertyInt* PropertyMenuID;                                           // 0x0050 (size: 0x8)
    class UHeraMenuStack* Stack;                                                      // 0x0058 (size: 0x8)
    class UHeraUISetup* Setup;                                                        // 0x0060 (size: 0x8)
    TMap<class FName, class UHeraMenu*> Cache;                                        // 0x0068 (size: 0x50)

    void TriggerUIRefresh();
    void HeraPropertyChanged();
}; // Size: 0xD0

class UHeraUIHelper : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UHeraUISettings : public UHeraSettings
{
    TSoftObjectPtr<UHeraPropertyInt> PropertyMenuID;                                  // 0x0038 (size: 0x28)
    FName DefaultInteractionSlot;                                                     // 0x0060 (size: 0x8)
    FName DefaultFadeOverlaySlot;                                                     // 0x0068 (size: 0x8)

}; // Size: 0x70

class UHeraUISetup : public UHeraConfigurationAsset
{
    TMap<class FGameplayTag, class TSoftClassPtr<UHeraMenu>> Menus;                   // 0x0030 (size: 0x50)
    TMap<class TSoftClassPtr<AHeraHUD>, class FHeraHUDSetup> HUDMapping;              // 0x0080 (size: 0x50)

}; // Size: 0xD0

#endif
