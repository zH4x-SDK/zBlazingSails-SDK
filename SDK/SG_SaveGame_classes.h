#pragma once

// Name: BS, Version: 1.536.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SG_SaveGame.SG_SaveGame_C
// 0x00CD (0x00F5 - 0x0028)
class USG_SaveGame_C : public USaveGame
{
public:
	struct FST_Customisation                           Customisation;                                            // 0x0028(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DefaultNameGenerated;                                     // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<struct FText>                               UsedCodes;                                                // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              LBytes;                                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              GABytes;                                                  // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              PBytes;                                                   // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_OIBytes>                         OIBytes;                                                  // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Index_Fair_;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dv;                                                       // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SG_SaveGame.SG_SaveGame_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
