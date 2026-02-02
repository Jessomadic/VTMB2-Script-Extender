#ifndef UE4SS_SDK_WrestlerProjectile_Bullet_HPP
#define UE4SS_SDK_WrestlerProjectile_Bullet_HPP

class AWrestlerProjectile_Bullet_C : public AWrestlerProjectile_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UNiagaraComponent* NS_Bullet_trail;                                         // 0x0418 (size: 0x8)
    class UStaticMeshComponent* SM_Tracer;                                            // 0x0420 (size: 0x8)

    void CollisionImpact(FHitResult OutHit);
    void ProjectileActivated();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_WrestlerProjectile_Bullet(int32 EntryPoint);
}; // Size: 0x428

#endif
