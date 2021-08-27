
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

// Function UI_ToolTipWeapon.UI_ToolTipWeapon_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ToolTipWeapon_C::Init(int WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTipWeapon.UI_ToolTipWeapon_C.Init");

	UUI_ToolTipWeapon_C_Init_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ToolTipWeapon.UI_ToolTipWeapon_C.ExecuteUbergraph_UI_ToolTipWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ToolTipWeapon_C::ExecuteUbergraph_UI_ToolTipWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTipWeapon.UI_ToolTipWeapon_C.ExecuteUbergraph_UI_ToolTipWeapon");

	UUI_ToolTipWeapon_C_ExecuteUbergraph_UI_ToolTipWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
