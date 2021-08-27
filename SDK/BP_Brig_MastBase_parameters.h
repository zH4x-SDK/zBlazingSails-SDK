#pragma once

#include "../SDK.h"

// Name: BS, Version: 1.536.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.OnRep_TeamID
struct ABP_Brig_MastBase_C_OnRep_TeamID_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.SetSailParameters
struct ABP_Brig_MastBase_C_SetSailParameters_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstanceRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.SailRolledUpMultiplier
struct ABP_Brig_MastBase_C_SailRolledUpMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.GetSailAnglePercentage
struct ABP_Brig_MastBase_C_GetSailAnglePercentage_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.OnRep_SailColor
struct ABP_Brig_MastBase_C_OnRep_SailColor_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.AddRepairHit
struct ABP_Brig_MastBase_C_AddRepairHit_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.DamageSail
struct ABP_Brig_MastBase_C_DamageSail_Params
{
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.GetClosestWindActor
struct ABP_Brig_MastBase_C_GetClosestWindActor_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.UserConstructionScript
struct ABP_Brig_MastBase_C_UserConstructionScript_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_0__FinishedFunc
struct ABP_Brig_MastBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_0__UpdateFunc
struct ABP_Brig_MastBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_1__FinishedFunc
struct ABP_Brig_MastBase_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Timeline_1__UpdateFunc
struct ABP_Brig_MastBase_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.ReceiveBeginPlay
struct ABP_Brig_MastBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.ReceiveTick
struct ABP_Brig_MastBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.LoadKeys
struct ABP_Brig_MastBase_C_LoadKeys_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.Resetkeys
struct ABP_Brig_MastBase_C_Resetkeys_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.RefreshKeys
struct ABP_Brig_MastBase_C_RefreshKeys_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.RaiseSail
struct ABP_Brig_MastBase_C_RaiseSail_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.LowerSail
struct ABP_Brig_MastBase_C_LowerSail_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopRaiseSail
struct ABP_Brig_MastBase_C_StopRaiseSail_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopLowerSail
struct ABP_Brig_MastBase_C_StopLowerSail_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.TurnMastLeft
struct ABP_Brig_MastBase_C_TurnMastLeft_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopTurnMastLeft
struct ABP_Brig_MastBase_C_StopTurnMastLeft_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.TurnRight
struct ABP_Brig_MastBase_C_TurnRight_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.StopTurnRight
struct ABP_Brig_MastBase_C_StopTurnRight_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.S_UpdateMast
struct ABP_Brig_MastBase_C_S_UpdateMast_Params
{
	float                                              SailAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.MC_DetractSails
struct ABP_Brig_MastBase_C_MC_DetractSails_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.DestroySails
struct ABP_Brig_MastBase_C_DestroySails_Params
{
};

// Function BP_Brig_MastBase.BP_Brig_MastBase_C.ExecuteUbergraph_BP_Brig_MastBase
struct ABP_Brig_MastBase_C_ExecuteUbergraph_BP_Brig_MastBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
