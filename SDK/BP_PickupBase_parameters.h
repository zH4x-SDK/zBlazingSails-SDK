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

// Function BP_PickupBase.BP_PickupBase_C.FloatMode
struct ABP_PickupBase_C_FloatMode_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.HighLightObject
struct ABP_PickupBase_C_HighLightObject_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.ShowHideOutline
struct ABP_PickupBase_C_ShowHideOutline_Params
{
	bool                                               ShowOutline;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoRoom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.CheckIfPlayerHasRoom
struct ABP_PickupBase_C_CheckIfPlayerHasRoom_Params
{
	bool                                               EnoughRoom;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.UserConstructionScript
struct ABP_PickupBase_C_UserConstructionScript_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.UpdateAmount
struct ABP_PickupBase_C_UpdateAmount_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.Activate
struct ABP_PickupBase_C_Activate_Params
{
	class ABP_Character_C*                             LocalCharacterRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.S_Activate
struct ABP_PickupBase_C_S_Activate_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.ReceiveTick
struct ABP_PickupBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay
struct ABP_PickupBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase
struct ABP_PickupBase_C_ExecuteUbergraph_BP_PickupBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
