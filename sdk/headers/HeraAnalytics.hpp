#ifndef UE4SS_SDK_HeraAnalytics_HPP
#define UE4SS_SDK_HeraAnalytics_HPP

struct FDeviceAndUserIdentityInfo
{
}; // Size: 0x60

struct FEvent_Response
{
    FString _index;                                                                   // 0x0000 (size: 0x10)
    FString _id;                                                                      // 0x0010 (size: 0x10)
    int32 _version;                                                                   // 0x0020 (size: 0x4)
    FString Result;                                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FHeraAnalyticsCommonData
{
    FString Timestamp;                                                                // 0x0000 (size: 0x10)
    int32 dv;                                                                         // 0x0010 (size: 0x4)
    FString UserId;                                                                   // 0x0018 (size: 0x10)
    FString SessionId;                                                                // 0x0028 (size: 0x10)
    float ts;                                                                         // 0x0038 (size: 0x4)
    float tl;                                                                         // 0x003C (size: 0x4)
    TArray<FString> Tags;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FHeraAnalyticsPerfData : public FHeraAnalyticsCommonData
{
    int32 winmode;                                                                    // 0x0050 (size: 0x4)
    bool vsync;                                                                       // 0x0054 (size: 0x1)
    FString Resolution;                                                               // 0x0058 (size: 0x10)
    int32 resolutionX;                                                                // 0x0068 (size: 0x4)
    int32 resolutionY;                                                                // 0x006C (size: 0x4)
    float scrn_percent;                                                               // 0x0070 (size: 0x4)
    int32 shadowQuality;                                                              // 0x0074 (size: 0x4)
    int32 viewDistanceQuality;                                                        // 0x0078 (size: 0x4)
    int32 globalIlluminationQuality;                                                  // 0x007C (size: 0x4)
    int32 reflectionQuality;                                                          // 0x0080 (size: 0x4)
    int32 antiAliasingQuality;                                                        // 0x0084 (size: 0x4)
    int32 textureQuality;                                                             // 0x0088 (size: 0x4)
    int32 visualEffectQuality;                                                        // 0x008C (size: 0x4)
    int32 postProcessQuality;                                                         // 0x0090 (size: 0x4)
    int32 foliageQuality;                                                             // 0x0094 (size: 0x4)
    int32 shadingQuality;                                                             // 0x0098 (size: 0x4)
    FVector Point;                                                                    // 0x00A0 (size: 0x18)
    FVector geo_point;                                                                // 0x00B8 (size: 0x18)
    FRotator Rotation;                                                                // 0x00D0 (size: 0x18)
    FRotator rotation2D;                                                              // 0x00E8 (size: 0x18)
    FString map_p;                                                                    // 0x0100 (size: 0x10)
    TArray<FString> Maps;                                                             // 0x0110 (size: 0x10)
    float fps_avg;                                                                    // 0x0120 (size: 0x4)
    float Duration;                                                                   // 0x0124 (size: 0x4)
    float ms_avg;                                                                     // 0x0128 (size: 0x4)
    float ms_min;                                                                     // 0x012C (size: 0x4)
    float ms_max;                                                                     // 0x0130 (size: 0x4)
    float ms_avg_game;                                                                // 0x0134 (size: 0x4)
    float ms_avg_render;                                                              // 0x0138 (size: 0x4)
    float ms_avg_rhi;                                                                 // 0x013C (size: 0x4)
    float ms_avg_gpu;                                                                 // 0x0140 (size: 0x4)
    float ms_avg_input;                                                               // 0x0144 (size: 0x4)
    FString gpudevicedesc;                                                            // 0x0148 (size: 0x10)
    float audio_cpu_total;                                                            // 0x0158 (size: 0x4)
    float audio_cpu_plugin;                                                           // 0x015C (size: 0x4)
    float audio_loudness_lufs;                                                        // 0x0160 (size: 0x4)
    int32 audio_numvoices_physical;                                                   // 0x0164 (size: 0x4)
    int32 audio_numvoices_virtual;                                                    // 0x0168 (size: 0x4)
    int32 audio_numvoices_total;                                                      // 0x016C (size: 0x4)
    int32 audio_numeevents;                                                           // 0x0170 (size: 0x4)
    int32 audio_numaudio_comps;                                                       // 0x0174 (size: 0x4)
    int32 audio_numactiveaudio_comps;                                                 // 0x0178 (size: 0x4)
    int32 audio_numgeometry_comps;                                                    // 0x017C (size: 0x4)

}; // Size: 0x180

class AHeraPerformanceTestActor : public AActor
{
    FString CameraUniqueName;                                                         // 0x0298 (size: 0x10)
    class UCameraComponent* CameraComponent;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* SceneComponent;                                            // 0x02B0 (size: 0x8)
    class UTextRenderComponent* TextRenderComponent;                                  // 0x02B8 (size: 0x8)
    FHeraAnalyticsPerfData LastMeasurement;                                           // 0x02C0 (size: 0x180)

    void TakeScreenShotWithPostFix(FString InFilenamePreFix, FString InFilenamePostFix);
    void TakeScreenShot();
    void SendAnalyticsEvent();
    void RefreshDataWithoutSendingEvent();
    void ActivateCamera();
}; // Size: 0x450

class UHeraAnalyticsSubsystem : public UGameInstanceSubsystem
{
    FHeraAnalyticsPerfData LastPerformanceData;                                       // 0x0030 (size: 0x180)

    bool GetLastRecordedPerformanceMeasurement(FHeraAnalyticsPerfData& OutPerformanceData);
}; // Size: 0x3E0

#endif
