#ifndef UE4SS_SDK_HeraPDX_HPP
#define UE4SS_SDK_HeraPDX_HPP

struct FCacheData
{
    FString accountId;                                                                // 0x0000 (size: 0x10)
    FString sessionToken;                                                             // 0x0010 (size: 0x10)
    FString RefreshToken;                                                             // 0x0020 (size: 0x10)
    TArray<FString> viewedLegalDocuments;                                             // 0x0030 (size: 0x10)
    bool telemetryEnabled;                                                            // 0x0040 (size: 0x1)
    int32 thirdPartyAutoLoginPromptState;                                             // 0x0044 (size: 0x4)
    FString fallbackPlayerId;                                                         // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FLegalDocument
{
    FString Title;                                                                    // 0x0000 (size: 0x10)
    FString Type;                                                                     // 0x0010 (size: 0x10)
    FString Text;                                                                     // 0x0020 (size: 0x10)
    FString Language;                                                                 // 0x0030 (size: 0x10)
    FString URL;                                                                      // 0x0040 (size: 0x10)
    FString restrictedLayoutUrl;                                                      // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FPDXContinueGameSaveData
{
    FString Title;                                                                    // 0x0000 (size: 0x10)
    FString date;                                                                     // 0x0010 (size: 0x10)
    FString saveFileName;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPDXSettingsData
{
}; // Size: 0x18

class UPDXSDKSubsystem : public UGameInstanceSubsystem
{
    bool bDisplayAutologinPrompt;                                                     // 0x0030 (size: 0x1)

    void UnlinkThirdPartyAccount(class UObject* pWorldContext, FLatentActionInfo LatentInfo, int32& errorCode_, FString& errorMessage_);
    void Startup(class UObject* pWorldContext, FLatentActionInfo LatentInfo, int32& errorCode_, FString& errorMessage_, int32& linkState_, bool& isLoginSuccess_, TArray<FString>& unviewedLegalDocuments_);
    void Shutdown(class UObject* pWorldContext, FLatentActionInfo LatentInfo, int32& errorCode_, FString& errorMessage_);
    bool ShouldShowPDXLoginScreen();
    void SetThirdPartyToken();
    void SetThirdPartyAutoLoginPromptState(int32 NewState);
    void SetLegalDocumentAsViewed(class UObject* pWorldContext, FLatentActionInfo LatentInfo, FString _title, int32& errorCode_, FString& errorMessage_);
    void SendHardwareEvent();
    void LogoutAccount(class UObject* pWorldContext, FLatentActionInfo LatentInfo, int32& errorCode_, FString& errorMessage_);
    void LoginThirdPartyAccount(class UObject* pWorldContext, FLatentActionInfo LatentInfo, int32& errorCode_, FString& errorMessage_);
    void LoginAccount(class UObject* pWorldContext, FLatentActionInfo LatentInfo, FString _email, FString _password, int32& errorCode_, FString& errorMessage_, TArray<FString>& unviewedLegalDocuments_);
    void LinkThirdPartyAccount(class UObject* pWorldContext, FLatentActionInfo LatentInfo, int32& errorCode_, FString& errorMessage_);
    bool IsRunningFromParadoxLauncher();
    bool IsLoggedIn();
    void GetThirdPartyLinkState(class UObject* pWorldContext, FLatentActionInfo LatentInfo, int32& result_);
    int32 GetThirdPartyAutoLoginPromptState();
    void GetLegalDocument(class UObject* pWorldContext, FLatentActionInfo LatentInfo, FString _title, int32& errorCode_, FString& errorMessage_, FLegalDocument& legalDocument_);
    float GetGameSessionElapsedTime();
    void GetCustomLegalDocument(class UObject* pWorldContext, FLatentActionInfo LatentInfo, FString _title, FString _type, int32& errorCode_, FString& errorMessage_, FLegalDocument& legalDocument_);
    TArray<FString> GetCountries();
    void CreateAccount(class UObject* pWorldContext, FLatentActionInfo LatentInfo, FString _email, FString _password, FString _dateOfBirth, const bool& _marketingConsent, FString _region, int32& errorCode_, FString& errorMessage_);
    FCacheData Cache_GetData();
    void Cache_ClearViewedLegalDocuments();
}; // Size: 0x48

#endif
