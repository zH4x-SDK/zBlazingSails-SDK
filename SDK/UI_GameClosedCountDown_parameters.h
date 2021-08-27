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

// Function UI_GameClosedCountDown.UI_GameClosedCountDown_C.GetVisibility_1
struct UUI_GameClosedCountDown_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameClosedCountDown.UI_GameClosedCountDown_C.PreConstruct
struct UUI_GameClosedCountDown_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameClosedCountDown.UI_GameClosedCountDown_C.Tick
struct UUI_GameClosedCountDown_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameClosedCountDown.UI_GameClosedCountDown_C.ExecuteUbergraph_UI_GameClosedCountDown
struct UUI_GameClosedCountDown_C_ExecuteUbergraph_UI_GameClosedCountDown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
