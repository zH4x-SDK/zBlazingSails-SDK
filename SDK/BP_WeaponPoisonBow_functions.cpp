
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

// Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponPoisonBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.UserConstructionScript");

	ABP_WeaponPoisonBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponPoisonBow_C::LoadedState(bool Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.LoadedState");

	ABP_WeaponPoisonBow_C_LoadedState_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.ExecuteUbergraph_BP_WeaponPoisonBow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponPoisonBow_C::ExecuteUbergraph_BP_WeaponPoisonBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.ExecuteUbergraph_BP_WeaponPoisonBow");

	ABP_WeaponPoisonBow_C_ExecuteUbergraph_BP_WeaponPoisonBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
