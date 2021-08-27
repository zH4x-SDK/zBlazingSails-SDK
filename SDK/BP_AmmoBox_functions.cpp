
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

// Function BP_AmmoBox.BP_AmmoBox_C.GiveAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmmoBox_C::GiveAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.GiveAmmo");

	ABP_AmmoBox_C_GiveAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmmoBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.UserConstructionScript");

	ABP_AmmoBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AmmoBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.ReceiveBeginPlay");

	ABP_AmmoBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoBox_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.ReceiveTick");

	ABP_AmmoBox_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.ShowReceivedIndicatorCustom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_InventoryArray      MainAmmo                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FST_InventoryArray      SideAmmo                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_AmmoBox_C::ShowReceivedIndicatorCustom(const struct FST_InventoryArray& MainAmmo, const struct FST_InventoryArray& SideAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.ShowReceivedIndicatorCustom");

	ABP_AmmoBox_C_ShowReceivedIndicatorCustom_Params params;
	params.MainAmmo = MainAmmo;
	params.SideAmmo = SideAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.GiveResources
// (BlueprintCallable, BlueprintEvent)

void ABP_AmmoBox_C::GiveResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.GiveResources");

	ABP_AmmoBox_C_GiveResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoBox_C::ExecuteUbergraph_BP_AmmoBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox");

	ABP_AmmoBox_C_ExecuteUbergraph_BP_AmmoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
