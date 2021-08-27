
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

// Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupBasicSwivelCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.UserConstructionScript");

	ABP_PickupBasicSwivelCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupBasicSwivelCannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.ReceiveBeginPlay");

	ABP_PickupBasicSwivelCannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupBasicSwivelCannon_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.S_Activate");

	ABP_PickupBasicSwivelCannon_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.ExecuteUbergraph_BP_PickupBasicSwivelCannon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBasicSwivelCannon_C::ExecuteUbergraph_BP_PickupBasicSwivelCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.ExecuteUbergraph_BP_PickupBasicSwivelCannon");

	ABP_PickupBasicSwivelCannon_C_ExecuteUbergraph_BP_PickupBasicSwivelCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
