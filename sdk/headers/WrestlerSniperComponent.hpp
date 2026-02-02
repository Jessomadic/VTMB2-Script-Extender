#ifndef UE4SS_SDK_WrestlerSniperComponent_HPP
#define UE4SS_SDK_WrestlerSniperComponent_HPP

class UWrestlerSniperComponent_C : public UActorComponent
{
    class ABP_SniperSpline_C* SniperSpline;                                           // 0x00A0 (size: 0x8)
    bool BehaviourActive;                                                             // 0x00A8 (size: 0x1)
    FWrestlerSniperComponent_COnBehaviourUpdated OnBehaviourUpdated;                  // 0x00B0 (size: 0x10)
    void OnBehaviourUpdated(bool Active);
    FVector FocusLocation;                                                            // 0x00C0 (size: 0x18)
    bool CustomFocusActive;                                                           // 0x00D8 (size: 0x1)

    void SetCustomFocusEnabled(bool Enable);
    void SetCustomFocusLocation(FVector Location);
    void Is Tracking Target(bool& Return);
    void GetLookTowardLocation(FVector& Return);
    void GetBehaviourActive(bool& Return);
    void SetBehaviourActive(bool Active);
    void GetSniperSpline(class ABP_SniperSpline_C*& SniperSpline, bool& Valid);
    void IsSplineOwned(class ABP_SniperSpline_C* SniperSpline, bool& Return);
    void GetTargetingLocation(FVector& TargetingLocation);
    void ClearSniperSpline();
    void SetSniperSpline(class ABP_SniperSpline_C* SniperSpline, bool& Return);
    void OnBehaviourUpdated__DelegateSignature(bool Active);
}; // Size: 0xD9

#endif
