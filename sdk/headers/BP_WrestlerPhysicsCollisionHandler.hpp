#ifndef UE4SS_SDK_BP_WrestlerPhysicsCollisionHandler_HPP
#define UE4SS_SDK_BP_WrestlerPhysicsCollisionHandler_HPP

class UBP_WrestlerPhysicsCollisionHandler_C : public UHeraPhysicsCollisionHandler
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0090 (size: 0x8)

    void GetAudioComponentFromActor(class AActor* Actor, class UHeraAudioComponent*& AudioComponent);
    void PostImpactHeraAudio(float Impulse, class UHeraAudioComponent* AudioComponent, class UHeraPhysicalMaterial* ThisMaterial, class UHeraPhysicalMaterial* OtherMaterial);
    void PostImpactHeraCharacterAudio(float Impulse, class UHeraAudioCharacterComponent* AudioCharacterComponent, class UHeraPhysicalMaterial* ThisMaterial, class UHeraPhysicalMaterial* OtherMaterial);
    void AudioSlideEndHandler(class AActor* SlidingActor, class UHeraPhysicalMaterial* SlidingMaterial);
    void AudioSlideUpdateHandler(class AActor* SlidingActor, FHeraPhysicsBodyInfo SlidingInfo, FVector WorldLocation);
    void AudioSlideStartHandler(class AActor* SlidingActor, FHeraPhysicsBodyInfo SlidingInfo, FVector WorldLocation, FVector Impulse);
    void AudioCollisionHandler(class UPrimitiveComponent* Component, class UHeraPhysicalMaterial* ThisMaterial, double MASS, FVector Velocity, FVector ImpulseNormal, FVector Location, class UHeraPhysicalMaterial* OtherMaterial);
    void OnImpact(const FHeraPhysicsBodyContactPair& ContactPair);
    void OnRollSlideStart(const class AActor* SlidingActor, const class AActor* OtherActor, const FHeraPhysicsBodyInfo& SlidingInfo, const FHeraPhysicsBodyInfo& OtherInfo, const FVector WorldLocation, const FVector Impulse);
    void OnRollSlideEnd(const class AActor* SlidingActor, const class AActor* OtherActor, const class UHeraPhysicalMaterial* SlidingMaterial, const class UHeraPhysicalMaterial* OtherMaterial);
    void OnRollSlideUpdate(const class AActor* SlidingActor, const class AActor* OtherActor, const FHeraPhysicsBodyInfo& SlidingInfo, const FHeraPhysicsBodyInfo& OtherInfo, const FVector WorldLocation, const FVector Impulse);
    void ExecuteUbergraph_BP_WrestlerPhysicsCollisionHandler(int32 EntryPoint);
}; // Size: 0x98

#endif
