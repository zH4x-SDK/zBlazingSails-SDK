
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

// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmountColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_QuickAccessAmount_C::SetAmountColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmountColor");

	UUI_QuickAccessAmount_C_SetAmountColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_QuickAccessAmount_C::SetAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmount");

	UUI_QuickAccessAmount_C_SetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessAmount_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.Tick");

	UUI_QuickAccessAmount_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.ExecuteUbergraph_UI_QuickAccessAmount
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessAmount_C::ExecuteUbergraph_UI_QuickAccessAmount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.ExecuteUbergraph_UI_QuickAccessAmount");

	UUI_QuickAccessAmount_C_ExecuteUbergraph_UI_QuickAccessAmount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
