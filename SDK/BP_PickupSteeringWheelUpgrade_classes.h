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

// BlueprintGeneratedClass BP_PickupSteeringWheelUpgrade.BP_PickupSteeringWheelUpgrade_C
// 0x0008 (0x0450 - 0x0448)
class ABP_PickupSteeringWheelUpgrade_C : public ABP_PickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupSteeringWheelUpgrade.BP_PickupSteeringWheelUpgrade_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void S_Activate();
	void ExecuteUbergraph_BP_PickupSteeringWheelUpgrade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
