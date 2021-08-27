
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

// Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileCannonball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.UserConstructionScript");

	ABP_ProjectileCannonball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileCannonball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.ReceiveBeginPlay");

	ABP_ProjectileCannonball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.ExecuteUbergraph_BP_ProjectileCannonball
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileCannonball_C::ExecuteUbergraph_BP_ProjectileCannonball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.ExecuteUbergraph_BP_ProjectileCannonball");

	ABP_ProjectileCannonball_C_ExecuteUbergraph_BP_ProjectileCannonball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
