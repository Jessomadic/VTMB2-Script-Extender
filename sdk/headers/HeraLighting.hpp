#ifndef UE4SS_SDK_HeraLighting_HPP
#define UE4SS_SDK_HeraLighting_HPP

class AHeraLightingActorBase : public AActor
{
    FHeraLightingActorBaseOnLightStateChanged OnLightStateChanged;                    // 0x0298 (size: 0x10)
    void OnLightChanged(bool NewState);
    FHeraLightingActorBaseOnFlickerStateChanged OnFlickerStateChanged;                // 0x02A8 (size: 0x10)
    void OnFlickerChanged(bool NewState);
    FHeraLightingActorBaseOnVFXStateChanged OnVFXStateChanged;                        // 0x02B8 (size: 0x10)
    void OnVFXChanged(bool NewState);
    FHeraLightingActorBaseOnAudioStateChanged OnAudioStateChanged;                    // 0x02C8 (size: 0x10)
    void OnAudioChanged(bool NewState);
    bool bStartsEnabled;                                                              // 0x02D8 (size: 0x1)
    bool bIsLightOn;                                                                  // 0x02D9 (size: 0x1)
    bool bIsFlickerOn;                                                                // 0x02DA (size: 0x1)
    bool bIsVFXOn;                                                                    // 0x02DB (size: 0x1)
    bool bIsAudioOn;                                                                  // 0x02DC (size: 0x1)
    bool bUseEditorTick;                                                              // 0x02DD (size: 0x1)

    void SetVFXState(bool bNewState);
    void SetMaxFadeDistance(class ULightComponent* InLightComponent, float InMaxFadeDistance);
    void SetMaxDrawDistance(class ULightComponent* InLightComponent, float InMaxDrawDistance);
    void SetLightState(bool bNewState);
    void SetFlickerState(bool bNewState);
    void SetAudioState(bool bNewState);
    bool GetVFXState();
    float GetMaxFadeDistance(class ULightComponent* InLightComponent);
    float GetMaxDrawDistance(class ULightComponent* InLightComponent);
    bool GetLightState();
    bool GetFlickerState();
    bool GetAudioState();
    void EditorTick(float DeltaTime);
}; // Size: 0x2E0

#endif
