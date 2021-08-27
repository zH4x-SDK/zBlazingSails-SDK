
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

// Function BP_SinkingFire.BP_SinkingFire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SinkingFire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SinkingFire.BP_SinkingFire_C.UserConstructionScript");

	ABP_SinkingFire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SinkingFire.BP_SinkingFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SinkingFire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SinkingFire.BP_SinkingFire_C.ReceiveBeginPlay");

	ABP_SinkingFire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SinkingFire.BP_SinkingFire_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SinkingFire_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SinkingFire.BP_SinkingFire_C.ReceiveTick");

	ABP_SinkingFire_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SinkingFire.BP_SinkingFire_C.ExecuteUbergraph_BP_SinkingFire
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SinkingFire_C::ExecuteUbergraph_BP_SinkingFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SinkingFire.BP_SinkingFire_C.ExecuteUbergraph_BP_SinkingFire");

	ABP_SinkingFire_C_ExecuteUbergraph_BP_SinkingFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
