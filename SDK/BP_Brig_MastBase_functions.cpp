
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

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.OnRep_TeamID");

	ABP_Brig_MastBase_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.SetSailParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstanceRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Brig_MastBase_C::SetSailParameters(class UMaterialInstanceDynamic* MaterialInstanceRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.SetSailParameters");

	ABP_Brig_MastBase_C_SetSailParameters_Params params;
	params.MaterialInstanceRef = MaterialInstanceRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.SailRolledUpMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Brig_MastBase_C::SailRolledUpMultiplier(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.SailRolledUpMultiplier");

	ABP_Brig_MastBase_C_SailRolledUpMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.GetSailAnglePercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Brig_MastBase_C::GetSailAnglePercentage(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.GetSailAnglePercentage");

	ABP_Brig_MastBase_C_GetSailAnglePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.OnRep_SailColor
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::OnRep_SailColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.OnRep_SailColor");

	ABP_Brig_MastBase_C_OnRep_SailColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.AddRepairHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::AddRepairHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.AddRepairHit");

	ABP_Brig_MastBase_C_AddRepairHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.DamageSail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Brig_MastBase_C::DamageSail(int damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.DamageSail");

	ABP_Brig_MastBase_C_DamageSail_Params params;
	params.damage = damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.GetClosestWindActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::GetClosestWindActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.GetClosestWindActor");

	ABP_Brig_MastBase_C_GetClosestWindActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.UserConstructionScript");

	ABP_Brig_MastBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Brig_MastBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_0__FinishedFunc");

	ABP_Brig_MastBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Brig_MastBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_0__UpdateFunc");

	ABP_Brig_MastBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_Brig_MastBase_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_1__FinishedFunc");

	ABP_Brig_MastBase_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_Brig_MastBase_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_1__UpdateFunc");

	ABP_Brig_MastBase_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Brig_MastBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.ReceiveBeginPlay");

	ABP_Brig_MastBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Brig_MastBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.ReceiveTick");

	ABP_Brig_MastBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.LoadKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::LoadKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.LoadKeys");

	ABP_Brig_MastBase_C_LoadKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Resetkeys
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::Resetkeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.Resetkeys");

	ABP_Brig_MastBase_C_Resetkeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.RefreshKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::RefreshKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.RefreshKeys");

	ABP_Brig_MastBase_C_RefreshKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.RaiseSail
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::RaiseSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.RaiseSail");

	ABP_Brig_MastBase_C_RaiseSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.LowerSail
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::LowerSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.LowerSail");

	ABP_Brig_MastBase_C_LowerSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopRaiseSail
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::StopRaiseSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopRaiseSail");

	ABP_Brig_MastBase_C_StopRaiseSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopLowerSail
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::StopLowerSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopLowerSail");

	ABP_Brig_MastBase_C_StopLowerSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.TurnMastLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::TurnMastLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.TurnMastLeft");

	ABP_Brig_MastBase_C_TurnMastLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopTurnMastLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::StopTurnMastLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopTurnMastLeft");

	ABP_Brig_MastBase_C_StopTurnMastLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.TurnRight
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::TurnRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.TurnRight");

	ABP_Brig_MastBase_C_TurnRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopTurnRight
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::StopTurnRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopTurnRight");

	ABP_Brig_MastBase_C_StopTurnRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.S_UpdateMast
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SailAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Brig_MastBase_C::S_UpdateMast(float SailAmount, float RotationAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.S_UpdateMast");

	ABP_Brig_MastBase_C_S_UpdateMast_Params params;
	params.SailAmount = SailAmount;
	params.RotationAmount = RotationAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.MC_DetractSails
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::MC_DetractSails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.MC_DetractSails");

	ABP_Brig_MastBase_C_MC_DetractSails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.DestroySails
// (BlueprintCallable, BlueprintEvent)

void ABP_Brig_MastBase_C::DestroySails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.DestroySails");

	ABP_Brig_MastBase_C_DestroySails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Brig_MastBase.BP_Brig_MastBase_C.ExecuteUbergraph_BP_Brig_MastBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Brig_MastBase_C::ExecuteUbergraph_BP_Brig_MastBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Brig_MastBase.BP_Brig_MastBase_C.ExecuteUbergraph_BP_Brig_MastBase");

	ABP_Brig_MastBase_C_ExecuteUbergraph_BP_Brig_MastBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
