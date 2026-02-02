#ifndef UE4SS_SDK_WrestlerProjectile_base_HPP
#define UE4SS_SDK_WrestlerProjectile_base_HPP

class AWrestlerProjectile_base_C : public AWrestlerRangedProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UHeraAudioComponent* HeraAudio;                                             // 0x0308 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0310 (size: 0x8)
    double Projectile Speed;                                                          // 0x0318 (size: 0x8)
    TEnumAsByte<ETraceTypeQuery> Trace Channel;                                       // 0x0320 (size: 0x1)
    bool Trace Complex;                                                               // 0x0321 (size: 0x1)
    TArray<class AActor*> Actors to Ignore;                                           // 0x0328 (size: 0x10)
    double Gravity Scale;                                                             // 0x0338 (size: 0x8)
    double WhizBy Distance;                                                           // 0x0340 (size: 0x8)
    class UAkAudioEvent* WhizByEvent;                                                 // 0x0348 (size: 0x8)
    FGameplayTag Hit Cue Tag;                                                         // 0x0350 (size: 0x8)
    FVector StartPoint;                                                               // 0x0358 (size: 0x18)
    bool Can Ricochet;                                                                // 0x0370 (size: 0x1)
    double RicochetChance;                                                            // 0x0378 (size: 0x8)
    double MaxRicochetAngle;                                                          // 0x0380 (size: 0x8)
    double Close Range Threshold;                                                     // 0x0388 (size: 0x8)
    FGameplayTag AttackTag;                                                           // 0x0390 (size: 0x8)
    FGameplayTag AttackTag_Close;                                                     // 0x0398 (size: 0x8)
    float MoveableForce;                                                              // 0x03A0 (size: 0x4)
    double WhizByAudioThreshold;                                                      // 0x03A8 (size: 0x8)
    double HeadShotMultiplier;                                                        // 0x03B0 (size: 0x8)
    FGameplayTag DeathTag;                                                            // 0x03B8 (size: 0x8)
    FGameplayTag HeadshotDeathTag;                                                    // 0x03C0 (size: 0x8)
    int32 EnemiesToPenetrate;                                                         // 0x03C8 (size: 0x4)
    double Vertical Knock Back;                                                       // 0x03D0 (size: 0x8)
    double Horizontal Knockback;                                                      // 0x03D8 (size: 0x8)
    float Vampire Damage Multiplier;                                                  // 0x03E0 (size: 0x4)
    bool In SS;                                                                       // 0x03E4 (size: 0x1)
    FGameplayTag Damage Type Tag;                                                     // 0x03E8 (size: 0x8)
    float Unbirthed Damage Multiplier;                                                // 0x03F0 (size: 0x4)
    class AActor* GunOwner;                                                           // 0x03F8 (size: 0x8)
    FWrestlerMassEntityHandle_BP AttachedToMassEntity;                                // 0x0400 (size: 0x8)
    double Splatterchance;                                                            // 0x0408 (size: 0x8)

    void WillBeLethal(class AActor* HitActor, FHitResult Hit, bool& Lethal);
    void SplitSecondProjectile(bool& InSS);
    void Enemy Penetration(class AActor* Penetrated Actor);
    void Was Hit Headshot?(const FHitResult& Hit, class AActor* TargetActor, bool& Headshot?);
    void TestForRicochet(FHitResult Hit);
    void ApplyHit(FHitResult Hit);
    void ReceiveTick(float DeltaSeconds);
    void WhizBy();
    void CollisionImpact(FHitResult OutHit);
    void ProjectileActivated();
    void StaggerEvent(class AActor* Actor, FGameplayTag Tag, FGameplayEventData Data);
    void DamageMass(class AActor* Actor);
    void Try Damage Mass();
    void ExecuteUbergraph_WrestlerProjectile_base(int32 EntryPoint);
}; // Size: 0x410

#endif
