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

// BlueprintGeneratedClass BP_PickupTrapShot.BP_PickupTrapShot_C
// 0x0008 (0x0450 - 0x0448)
class ABP_PickupTrapShot_C : public ABP_PickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupTrapShot.BP_PickupTrapShot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void S_Activate();
	void ExecuteUbergraph_BP_PickupTrapShot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif