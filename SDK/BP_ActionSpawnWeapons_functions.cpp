
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

// Function BP_ActionSpawnWeapons.BP_ActionSpawnWeapons_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionSpawnWeapons_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSpawnWeapons.BP_ActionSpawnWeapons_C.UserConstructionScript");

	ABP_ActionSpawnWeapons_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionSpawnWeapons.BP_ActionSpawnWeapons_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionSpawnWeapons_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSpawnWeapons.BP_ActionSpawnWeapons_C.StartAction");

	ABP_ActionSpawnWeapons_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionSpawnWeapons.BP_ActionSpawnWeapons_C.ExecuteUbergraph_BP_ActionSpawnWeapons
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionSpawnWeapons_C::ExecuteUbergraph_BP_ActionSpawnWeapons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSpawnWeapons.BP_ActionSpawnWeapons_C.ExecuteUbergraph_BP_ActionSpawnWeapons");

	ABP_ActionSpawnWeapons_C_ExecuteUbergraph_BP_ActionSpawnWeapons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
