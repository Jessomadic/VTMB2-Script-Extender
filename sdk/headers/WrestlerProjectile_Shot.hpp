#ifndef UE4SS_SDK_WrestlerProjectile_Shot_HPP
#define UE4SS_SDK_WrestlerProjectile_Shot_HPP

class AWrestlerProjectile_Shot_C : public AWrestlerProjectile_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UNiagaraComponent* NS_Bullet_trail;                                         // 0x0418 (size: 0x8)
    class UStaticMeshComponent* SM_Tracer;                                            // 0x0420 (size: 0x8)

    void CollisionImpact(FHitResult OutHit);
    void ProjectileActivated();
    void ExecuteUbergraph_WrestlerProjectile_Shot(int32 EntryPoint);
}; // Size: 0x428

#endif
