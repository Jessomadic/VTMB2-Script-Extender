#ifndef UE4SS_SDK_WrestlerFocusHelperComponent_HPP
#define UE4SS_SDK_WrestlerFocusHelperComponent_HPP

class UWrestlerFocusHelperComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class ABP_FocusHelper_C* AssignedHelper;                                          // 0x00A8 (size: 0x8)
    double MaximumHelperDistance;                                                     // 0x00B0 (size: 0x8)
    double MaximumHelperDot;                                                          // 0x00B8 (size: 0x8)
    bool Debug;                                                                       // 0x00C0 (size: 0x1)

    void HasLOSToHelper(class ABP_FocusHelper_C* Helper, bool& Return);
    void GetFocusPoint(FVector& Vector, bool& Return);
    void GetAndAssignClosestFocusHelper();
    void CheckAngleFromHelper(class ABP_FocusHelper_C* Helper, bool& Return);
    void CheckDistanceFromHelper(class ABP_FocusHelper_C* Helper, bool& Return);
    void ClearHelper();
    void GetAssignedHelper(class ABP_FocusHelper_C*& Helper, bool& Return);
    void AssignHelper(class ABP_FocusHelper_C* Helper, bool& Return);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_WrestlerFocusHelperComponent(int32 EntryPoint);
}; // Size: 0xC1

#endif
