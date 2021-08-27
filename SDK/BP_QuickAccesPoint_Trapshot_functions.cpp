
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

// Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPoint_Trapshot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.UserConstructionScript");

	ABP_QuickAccesPoint_Trapshot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_QuickAccesPoint_Trapshot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.ReceiveBeginPlay");

	ABP_QuickAccesPoint_Trapshot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.GiveResources
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPoint_Trapshot_C::GiveResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.GiveResources");

	ABP_QuickAccesPoint_Trapshot_C_GiveResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.AmountRepEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPoint_Trapshot_C::AmountRepEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.AmountRepEvent");

	ABP_QuickAccesPoint_Trapshot_C_AmountRepEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.ExecuteUbergraph_BP_QuickAccesPoint_Trapshot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickAccesPoint_Trapshot_C::ExecuteUbergraph_BP_QuickAccesPoint_Trapshot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPoint_Trapshot.BP_QuickAccesPoint_Trapshot_C.ExecuteUbergraph_BP_QuickAccesPoint_Trapshot");

	ABP_QuickAccesPoint_Trapshot_C_ExecuteUbergraph_BP_QuickAccesPoint_Trapshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
