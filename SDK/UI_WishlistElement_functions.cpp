
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

// Function UI_WishlistElement.UI_WishlistElement_C.BndEvt__WishlistButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_WishlistElement_C::BndEvt__WishlistButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WishlistElement.UI_WishlistElement_C.BndEvt__WishlistButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_WishlistElement_C_BndEvt__WishlistButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WishlistElement.UI_WishlistElement_C.ExecuteUbergraph_UI_WishlistElement
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WishlistElement_C::ExecuteUbergraph_UI_WishlistElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WishlistElement.UI_WishlistElement_C.ExecuteUbergraph_UI_WishlistElement");

	UUI_WishlistElement_C_ExecuteUbergraph_UI_WishlistElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
