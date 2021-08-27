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

// Function UI_LoadingScreen.UI_LoadingScreen_C.SetBgImage
struct UUI_LoadingScreen_C_SetBgImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LoadingScreen.UI_LoadingScreen_C.Construct
struct UUI_LoadingScreen_C_Construct_Params
{
};

// Function UI_LoadingScreen.UI_LoadingScreen_C.ExecuteUbergraph_UI_LoadingScreen
struct UUI_LoadingScreen_C_ExecuteUbergraph_UI_LoadingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
