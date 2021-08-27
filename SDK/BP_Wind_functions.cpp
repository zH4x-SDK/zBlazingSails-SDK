
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

// Function BP_Wind.BP_Wind_C.OnRep_NewRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_Wind_C::OnRep_NewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wind.BP_Wind_C.OnRep_NewRotation");

	ABP_Wind_C_OnRep_NewRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wind.BP_Wind_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Wind_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wind.BP_Wind_C.UserConstructionScript");

	ABP_Wind_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wind.BP_Wind_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wind_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wind.BP_Wind_C.ReceiveTick");

	ABP_Wind_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wind.BP_Wind_C.ExecuteUbergraph_BP_Wind
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wind_C::ExecuteUbergraph_BP_Wind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wind.BP_Wind_C.ExecuteUbergraph_BP_Wind");

	ABP_Wind_C_ExecuteUbergraph_BP_Wind_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
