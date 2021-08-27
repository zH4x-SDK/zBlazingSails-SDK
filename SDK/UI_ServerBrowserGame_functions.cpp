
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

// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUI_ServerBrowserGame_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.GetListItemObject");

	UUI_ServerBrowserGame_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetServerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ServerBrowserGame_C::SetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetServerName");

	UUI_ServerBrowserGame_C_SetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_81
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ServerBrowserGame_C::SetRelevancyColor_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_81");

	UUI_ServerBrowserGame_C_SetRelevancyColor_81_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_61
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ServerBrowserGame_C::SetRelevancyColor_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_61");

	UUI_ServerBrowserGame_C_SetRelevancyColor_61_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_41
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ServerBrowserGame_C::SetRelevancyColor_41()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_41");

	UUI_ServerBrowserGame_C_SetRelevancyColor_41_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_21
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ServerBrowserGame_C::SetRelevancyColor_21()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_21");

	UUI_ServerBrowserGame_C_SetRelevancyColor_21_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.GetRelevancyColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ServerBrowserGame_C::GetRelevancyColor(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.GetRelevancyColor");

	UUI_ServerBrowserGame_C_GetRelevancyColor_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ServerBrowserGame_C::SetRelevancyColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevancyColor_1");

	UUI_ServerBrowserGame_C_SetRelevancyColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowserGame_C::SetRelevance()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetRelevance");

	UUI_ServerBrowserGame_C_SetRelevance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetButtontext
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ServerBrowserGame_C::SetButtontext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetButtontext");

	UUI_ServerBrowserGame_C_SetButtontext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetPlayerAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ServerBrowserGame_C::SetPlayerAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetPlayerAmount");

	UUI_ServerBrowserGame_C_SetPlayerAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetTODIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_ServerBrowserGame_C::SetTODIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetTODIcon");

	UUI_ServerBrowserGame_C_SetTODIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetMapname
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ServerBrowserGame_C::SetMapname()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetMapname");

	UUI_ServerBrowserGame_C_SetMapname_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.ShowLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ServerBrowserGame_C::ShowLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.ShowLocked");

	UUI_ServerBrowserGame_C_ShowLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetStateText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ServerBrowserGame_C::SetStateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetStateText");

	UUI_ServerBrowserGame_C_SetStateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetStateColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_ServerBrowserGame_C::SetStateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetStateColor");

	UUI_ServerBrowserGame_C_SetStateColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.EnableJoinButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_ServerBrowserGame_C::EnableJoinButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.EnableJoinButton");

	UUI_ServerBrowserGame_C_EnableJoinButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetVersionColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_ServerBrowserGame_C::SetVersionColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.SetVersionColor");

	UUI_ServerBrowserGame_C_SetVersionColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnFailure_51C5BD4F4C045DF5A9AAE49FC8055396
// (BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowserGame_C::OnFailure_51C5BD4F4C045DF5A9AAE49FC8055396()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnFailure_51C5BD4F4C045DF5A9AAE49FC8055396");

	UUI_ServerBrowserGame_C_OnFailure_51C5BD4F4C045DF5A9AAE49FC8055396_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnSuccess_51C5BD4F4C045DF5A9AAE49FC8055396
// (BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowserGame_C::OnSuccess_51C5BD4F4C045DF5A9AAE49FC8055396()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnSuccess_51C5BD4F4C045DF5A9AAE49FC8055396");

	UUI_ServerBrowserGame_C_OnSuccess_51C5BD4F4C045DF5A9AAE49FC8055396_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnFailure_8287EB654185832B15D39BA08A1CEF55
// (BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowserGame_C::OnFailure_8287EB654185832B15D39BA08A1CEF55()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnFailure_8287EB654185832B15D39BA08A1CEF55");

	UUI_ServerBrowserGame_C_OnFailure_8287EB654185832B15D39BA08A1CEF55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnSuccess_8287EB654185832B15D39BA08A1CEF55
// (BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowserGame_C::OnSuccess_8287EB654185832B15D39BA08A1CEF55()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnSuccess_8287EB654185832B15D39BA08A1CEF55");

	UUI_ServerBrowserGame_C_OnSuccess_8287EB654185832B15D39BA08A1CEF55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUI_ServerBrowserGame_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BP_OnEntryReleased");

	UUI_ServerBrowserGame_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowserGame_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BP_OnItemExpansionChanged");

	UUI_ServerBrowserGame_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowserGame_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BP_OnItemSelectionChanged");

	UUI_ServerBrowserGame_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerBrowserGame_C::BndEvt__Btn_Join_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");

	UUI_ServerBrowserGame_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.JoinServer
// (BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowserGame_C::JoinServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.JoinServer");

	UUI_ServerBrowserGame_C_JoinServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowserGame_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.OnListItemObjectSet");

	UUI_ServerBrowserGame_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.ExecuteUbergraph_UI_ServerBrowserGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowserGame_C::ExecuteUbergraph_UI_ServerBrowserGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserGame.UI_ServerBrowserGame_C.ExecuteUbergraph_UI_ServerBrowserGame");

	UUI_ServerBrowserGame_C_ExecuteUbergraph_UI_ServerBrowserGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
