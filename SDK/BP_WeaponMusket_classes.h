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

// BlueprintGeneratedClass BP_WeaponMusket.BP_WeaponMusket_C
// 0x0008 (0x0540 - 0x0538)
class ABP_WeaponMusket_C : public ABP_WeaponRangedBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponMusket.BP_WeaponMusket_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WeaponMusket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
