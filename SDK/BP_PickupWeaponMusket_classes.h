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

// BlueprintGeneratedClass BP_PickupWeaponMusket.BP_PickupWeaponMusket_C
// 0x000F (0x0460 - 0x0451)
class ABP_PickupWeaponMusket_C : public ABP_PickupWeaponBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupWeaponMusket.BP_PickupWeaponMusket_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PickupWeaponMusket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
