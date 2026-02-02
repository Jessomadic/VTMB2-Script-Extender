#ifndef UE4SS_SDK_HeraFX_HPP
#define UE4SS_SDK_HeraFX_HPP

class AHeraFXActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;                                        // 0x0298 (size: 0x8)
    class UHeraAudioComponent* AudioComponent;                                        // 0x02A0 (size: 0x8)

    class UNiagaraComponent* GetNiagaraComponent();
    class UHeraAudioComponent* GetAudioComponent();
    void EditorTick(float DeltaTime);
}; // Size: 0x2A8

class AHeraFXMassActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;                                        // 0x0298 (size: 0x8)
    class UHeraAudioMassComponent* AudioComponent;                                    // 0x02A0 (size: 0x8)

    class UNiagaraComponent* GetNiagaraComponent();
    class UHeraAudioMassComponent* GetAudioComponent();
    void EditorTick(float DeltaTime);
}; // Size: 0x2A8

class UHeraFXBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

#endif
