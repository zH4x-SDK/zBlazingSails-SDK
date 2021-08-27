
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

// Function BP_ProjectileAntiSail.BP_ProjectileAntiSail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileAntiSail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileAntiSail.BP_ProjectileAntiSail_C.UserConstructionScript");

	ABP_ProjectileAntiSail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileAntiSail.BP_ProjectileAntiSail_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileAntiSail_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileAntiSail.BP_ProjectileAntiSail_C.PostHit");

	ABP_ProjectileAntiSail_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileAntiSail.BP_ProjectileAntiSail_C.ExecuteUbergraph_BP_ProjectileAntiSail
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileAntiSail_C::ExecuteUbergraph_BP_ProjectileAntiSail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileAntiSail.BP_ProjectileAntiSail_C.ExecuteUbergraph_BP_ProjectileAntiSail");

	ABP_ProjectileAntiSail_C_ExecuteUbergraph_BP_ProjectileAntiSail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
