
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

// Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CustomUISniperScope2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.Construct");

	UUI_CustomUISniperScope2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CustomUISniperScope2_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.Destruct");

	UUI_CustomUISniperScope2_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomUISniperScope2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.Tick");

	UUI_CustomUISniperScope2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.ExecuteUbergraph_UI_CustomUISniperScope2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomUISniperScope2_C::ExecuteUbergraph_UI_CustomUISniperScope2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope2.UI_CustomUISniperScope2_C.ExecuteUbergraph_UI_CustomUISniperScope2");

	UUI_CustomUISniperScope2_C_ExecuteUbergraph_UI_CustomUISniperScope2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
