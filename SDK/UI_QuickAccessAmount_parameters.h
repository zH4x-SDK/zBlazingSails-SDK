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

// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmountColor
struct UUI_QuickAccessAmount_C_SetAmountColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmount
struct UUI_QuickAccessAmount_C_SetAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.Tick
struct UUI_QuickAccessAmount_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.ExecuteUbergraph_UI_QuickAccessAmount
struct UUI_QuickAccessAmount_C_ExecuteUbergraph_UI_QuickAccessAmount_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
