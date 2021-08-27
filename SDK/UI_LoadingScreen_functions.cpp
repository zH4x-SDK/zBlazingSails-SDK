
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

// Function UI_LoadingScreen.UI_LoadingScreen_C.SetBgImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_LoadingScreen_C::SetBgImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreen.UI_LoadingScreen_C.SetBgImage");

	UUI_LoadingScreen_C_SetBgImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LoadingScreen.UI_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreen.UI_LoadingScreen_C.Construct");

	UUI_LoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreen.UI_LoadingScreen_C.ExecuteUbergraph_UI_LoadingScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreen_C::ExecuteUbergraph_UI_LoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreen.UI_LoadingScreen_C.ExecuteUbergraph_UI_LoadingScreen");

	UUI_LoadingScreen_C_ExecuteUbergraph_UI_LoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
