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

// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.SetBgImage
struct UUI_HostLoadingScreen_C_SetBgImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.Construct
struct UUI_HostLoadingScreen_C_Construct_Params
{
};

// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.ExecuteUbergraph_UI_HostLoadingScreen
struct UUI_HostLoadingScreen_C_ExecuteUbergraph_UI_HostLoadingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
