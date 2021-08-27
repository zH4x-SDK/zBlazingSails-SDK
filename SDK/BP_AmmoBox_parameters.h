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

// Function BP_AmmoBox.BP_AmmoBox_C.GiveAmmo
struct ABP_AmmoBox_C_GiveAmmo_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.UserConstructionScript
struct ABP_AmmoBox_C_UserConstructionScript_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.ReceiveBeginPlay
struct ABP_AmmoBox_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.ReceiveTick
struct ABP_AmmoBox_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoBox.BP_AmmoBox_C.ShowReceivedIndicatorCustom
struct ABP_AmmoBox_C_ShowReceivedIndicatorCustom_Params
{
	struct FST_InventoryArray                          MainAmmo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FST_InventoryArray                          SideAmmo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_AmmoBox.BP_AmmoBox_C.GiveResources
struct ABP_AmmoBox_C_GiveResources_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox
struct ABP_AmmoBox_C_ExecuteUbergraph_BP_AmmoBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
