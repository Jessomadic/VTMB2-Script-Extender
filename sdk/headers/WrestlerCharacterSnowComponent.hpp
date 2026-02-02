#ifndef UE4SS_SDK_WrestlerCharacterSnowComponent_HPP
#define UE4SS_SDK_WrestlerCharacterSnowComponent_HPP

class UWrestlerCharacterSnowComponent_C : public UWrestlerCharacterSnowComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    double KillVolumeCheckRadius;                                                     // 0x02C8 (size: 0x8)
    TArray<class AActor*> CurrentKillActors;                                          // 0x02D0 (size: 0x10)
    class AActor* VolumeCache;                                                        // 0x02E0 (size: 0x8)
    class USphereComponent* SphereOverlap;                                            // 0x02E8 (size: 0x8)
    TArray<FVector> CurrentDefinitions;                                               // 0x02F0 (size: 0x10)

    void AddSphereComp();
    void SendDefsToNiagara();
    void ReceiveTick(float DeltaSeconds);
    void OnParticlesActivated(bool bInResetNiagaraSystem);
    void OnParticlesDeactivated();
    void ReceiveBeginPlay();
    void Overlapped(class AActor* OverlappedActor, class AActor* OtherActor);
    void EndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void PerformManualCheck();
    void ExecuteUbergraph_WrestlerCharacterSnowComponent(int32 EntryPoint);
}; // Size: 0x300

#endif
