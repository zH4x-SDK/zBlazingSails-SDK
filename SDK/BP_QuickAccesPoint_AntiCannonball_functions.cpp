
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

// Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPoint_AntiCannonball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.UserConstructionScript");

	ABP_QuickAccesPoint_AntiCannonball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_QuickAccesPoint_AntiCannonball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.ReceiveBeginPlay");

	ABP_QuickAccesPoint_AntiCannonball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.GiveResources
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPoint_AntiCannonball_C::GiveResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.GiveResources");

	ABP_QuickAccesPoint_AntiCannonball_C_GiveResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.AmountRepEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPoint_AntiCannonball_C::AmountRepEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.AmountRepEvent");

	ABP_QuickAccesPoint_AntiCannonball_C_AmountRepEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.ExecuteUbergraph_BP_QuickAccesPoint_AntiCannonball
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickAccesPoint_AntiCannonball_C::ExecuteUbergraph_BP_QuickAccesPoint_AntiCannonball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C.ExecuteUbergraph_BP_QuickAccesPoint_AntiCannonball");

	ABP_QuickAccesPoint_AntiCannonball_C_ExecuteUbergraph_BP_QuickAccesPoint_AntiCannonball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
