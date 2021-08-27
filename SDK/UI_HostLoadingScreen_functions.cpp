
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

// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.SetBgImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_HostLoadingScreen_C::SetBgImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.SetBgImage");

	UUI_HostLoadingScreen_C_SetBgImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HostLoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.Construct");

	UUI_HostLoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.ExecuteUbergraph_UI_HostLoadingScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HostLoadingScreen_C::ExecuteUbergraph_UI_HostLoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.ExecuteUbergraph_UI_HostLoadingScreen");

	UUI_HostLoadingScreen_C_ExecuteUbergraph_UI_HostLoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
