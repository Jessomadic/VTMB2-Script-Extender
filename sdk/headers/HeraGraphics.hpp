#ifndef UE4SS_SDK_HeraGraphics_HPP
#define UE4SS_SDK_HeraGraphics_HPP

#include "HeraGraphics_enums.hpp"

struct FHeraBufferToCapture
{
    EHeraLowResBuffer Buffer;                                                         // 0x0000 (size: 0x1)
    class UTextureRenderTarget2D* TextureTarget;                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHeraGraphicsRVTQuadTree
{
    FVector2D TextureSize;                                                            // 0x0000 (size: 0x10)
    FVector2D QuadTreeSize;                                                           // 0x0010 (size: 0x10)
    TArray<FHeraGraphicsRVTQuadTreeNode> CompressedTreeNodes;                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FHeraGraphicsRVTQuadTreeNode
{
    uint32 Depth;                                                                     // 0x0000 (size: 0x4)
    FBox2D Bounds;                                                                    // 0x0008 (size: 0x28)
    FLinearColor Colour;                                                              // 0x0030 (size: 0x10)
    uint32 Children;                                                                  // 0x0040 (size: 0x10)

}; // Size: 0x50

class AHeraGraphicsRuntimeVirtualTextureBrush : public AActor
{
    class USceneComponent* SceneComponent;                                            // 0x0298 (size: 0x8)
    class UStaticMeshComponent* PlaneMeshComp;                                        // 0x02A0 (size: 0x8)
    class URuntimeVirtualTexture* RuntimeVirtualTexture;                              // 0x02A8 (size: 0x8)
    class UMaterialInstanceDynamic* RvtMaterialInstanceDynamic;                       // 0x02B0 (size: 0x8)

    void OnSetupDynamicMaterial(class UMaterialInstanceDynamic* InMID);
    void OnEditorOnlySetupDynamicMaterial(class UMaterialInstanceDynamic* SortPriorityMaterialDynamic);
}; // Size: 0x2B8

class AHeraGraphicsRuntimeVirtualTextureVolume : public AActor
{
    class UHeraGraphicsRuntimeVirtualTextureComponent* VirtualTextureComponent;       // 0x0298 (size: 0x8)

    bool Query(const FVector& InWorldLocation, FLinearColor& OutParams);
}; // Size: 0x2A0

class UHeraGraphicsRuntimeVirtualTextureComponent : public URuntimeVirtualTextureComponent
{
    FHeraGraphicsRVTQuadTree TextureQuadTree;                                         // 0x0328 (size: 0x30)

}; // Size: 0x360

class UHeraGraphicsRuntimeVirtualTextureVolumeManager : public UObject
{
    TArray<class AHeraGraphicsRuntimeVirtualTextureVolume*> Volumes;                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UHeraGraphicsSettings : public UHeraSettings
{
    FName SnowBuildUpPropertyName;                                                    // 0x0038 (size: 0x8)
    FName SnowMaterialRVTPropertyName;                                                // 0x0040 (size: 0x8)
    bool bLowResolutionBufferEnabled;                                                 // 0x0048 (size: 0x1)
    TArray<FHeraBufferToCapture> BuffersToCapture;                                    // 0x0050 (size: 0x10)
    TSoftObjectPtr<UMaterial> RvtQuadTreeDebugMaterial;                               // 0x0060 (size: 0x28)

}; // Size: 0x88

class UHeraGraphicsSubsystem : public UWorldSubsystem
{
    class UHeraGraphicsRuntimeVirtualTextureVolumeManager* RuntimeVirtualTextureVolumeManager; // 0x0040 (size: 0x8)

}; // Size: 0x48

#endif
