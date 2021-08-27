
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

// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupAntiCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.UserConstructionScript");

	ABP_PickupAntiCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupAntiCannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.ReceiveBeginPlay");

	ABP_PickupAntiCannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupAntiCannon_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.S_Activate");

	ABP_PickupAntiCannon_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupAntiCannon_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.Activate");

	ABP_PickupAntiCannon_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.ExecuteUbergraph_BP_PickupAntiCannon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupAntiCannon_C::ExecuteUbergraph_BP_PickupAntiCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.ExecuteUbergraph_BP_PickupAntiCannon");

	ABP_PickupAntiCannon_C_ExecuteUbergraph_BP_PickupAntiCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
