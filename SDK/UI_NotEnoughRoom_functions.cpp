
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

// Function UI_NotEnoughRoom.UI_NotEnoughRoom_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NotEnoughRoom_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotEnoughRoom.UI_NotEnoughRoom_C.Construct");

	UUI_NotEnoughRoom_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotEnoughRoom.UI_NotEnoughRoom_C.ExecuteUbergraph_UI_NotEnoughRoom
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotEnoughRoom_C::ExecuteUbergraph_UI_NotEnoughRoom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotEnoughRoom.UI_NotEnoughRoom_C.ExecuteUbergraph_UI_NotEnoughRoom");

	UUI_NotEnoughRoom_C_ExecuteUbergraph_UI_NotEnoughRoom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
