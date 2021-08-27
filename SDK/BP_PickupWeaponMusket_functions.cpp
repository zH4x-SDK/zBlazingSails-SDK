
#include "../SDK.h"

// Name: BS, Version: 1.536.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupWeaponMusket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.UserConstructionScript");

	ABP_PickupWeaponMusket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupWeaponMusket_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.ReceiveTick");

	ABP_PickupWeaponMusket_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.ExecuteUbergraph_BP_PickupWeaponMusket
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupWeaponMusket_C::ExecuteUbergraph_BP_PickupWeaponMusket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.ExecuteUbergraph_BP_PickupWeaponMusket");

	ABP_PickupWeaponMusket_C_ExecuteUbergraph_BP_PickupWeaponMusket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
