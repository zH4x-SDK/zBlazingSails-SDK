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

// BlueprintGeneratedClass BP_WeaponSniper2.BP_WeaponSniper2_C
// 0x0008 (0x0540 - 0x0538)
class ABP_WeaponSniper2_C : public ABP_WeaponRangedBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponSniper2.BP_WeaponSniper2_C");
		return ptr;
	}


	void UserConstructionScript();
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void HolsteredEvent();
	void StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ExecuteUbergraph_BP_WeaponSniper2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
