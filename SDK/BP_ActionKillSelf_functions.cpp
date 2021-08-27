
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

// Function BP_ActionKillSelf.BP_ActionKillSelf_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionKillSelf_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionKillSelf.BP_ActionKillSelf_C.UserConstructionScript");

	ABP_ActionKillSelf_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionKillSelf.BP_ActionKillSelf_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionKillSelf_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionKillSelf.BP_ActionKillSelf_C.StartAction");

	ABP_ActionKillSelf_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionKillSelf.BP_ActionKillSelf_C.ExecuteUbergraph_BP_ActionKillSelf
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionKillSelf_C::ExecuteUbergraph_BP_ActionKillSelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionKillSelf.BP_ActionKillSelf_C.ExecuteUbergraph_BP_ActionKillSelf");

	ABP_ActionKillSelf_C_ExecuteUbergraph_BP_ActionKillSelf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
