
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

// Function UI_EarlyTesterAgreement.UI_EarlyTesterAgreement_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_EarlyTesterAgreement_C::BndEvt__Button_61_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EarlyTesterAgreement.UI_EarlyTesterAgreement_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature");

	UUI_EarlyTesterAgreement_C_BndEvt__Button_61_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_EarlyTesterAgreement.UI_EarlyTesterAgreement_C.ExecuteUbergraph_UI_EarlyTesterAgreement
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_EarlyTesterAgreement_C::ExecuteUbergraph_UI_EarlyTesterAgreement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EarlyTesterAgreement.UI_EarlyTesterAgreement_C.ExecuteUbergraph_UI_EarlyTesterAgreement");

	UUI_EarlyTesterAgreement_C_ExecuteUbergraph_UI_EarlyTesterAgreement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
