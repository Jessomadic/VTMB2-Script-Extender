#ifndef UE4SS_SDK_WrestlerDataAsset_ReactionConfig_HPP
#define UE4SS_SDK_WrestlerDataAsset_ReactionConfig_HPP

class UWrestlerDataAsset_ReactionConfig_C : public UHeraDataAsset
{
    TMap<class FGameplayTag, class FStruct_ReactionData> Reaction Map;                // 0x0030 (size: 0x50)

    void Get Reaction(FGameplayTag Attack Tag, FStruct_ReactionData& Reaction);
}; // Size: 0x80

#endif
