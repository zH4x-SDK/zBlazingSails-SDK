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

// BlueprintGeneratedClass BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C
// 0x0008 (0x0368 - 0x0360)
class ABP_ActionCommandFireLCannons_C : public ABP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartAction();
	void ExecuteUbergraph_BP_ActionCommandFireLCannons(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
