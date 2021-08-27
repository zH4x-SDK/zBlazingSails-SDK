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

// Function UI_HostScreen.UI_HostScreen_C.DeselectTODs
struct UUI_HostScreen_C_DeselectTODs_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.SetMaximumPlayer
struct UUI_HostScreen_C_SetMaximumPlayer_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_HostScreen.UI_HostScreen_C.DeselectAllLevels
struct UUI_HostScreen_C_DeselectAllLevels_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.AddLevels
struct UUI_HostScreen_C_AddLevels_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.HighlightLevel
struct UUI_HostScreen_C_HighlightLevel_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.OnFailure_0F9C20F54D4C84AEBD6576B07C373994
struct UUI_HostScreen_C_OnFailure_0F9C20F54D4C84AEBD6576B07C373994_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.OnSuccess_0F9C20F54D4C84AEBD6576B07C373994
struct UUI_HostScreen_C_OnSuccess_0F9C20F54D4C84AEBD6576B07C373994_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.Construct
struct UUI_HostScreen_C_Construct_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_159_OnButtonClickedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_159_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__ComboBoxString_183_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__ComboBoxString_183_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__CheckBox_67_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_HostScreen_C_BndEvt__CheckBox_67_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Button_111_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Btn_Day_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Btn_Day_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Btn_Overcast_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Btn_Overcast_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__ComboBoxString_165_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__ComboBoxString_165_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HostScreen.UI_HostScreen_C.HostSession_Completed
struct UUI_HostScreen_C_HostSession_Completed_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__CheckBox_196_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_HostScreen_C_BndEvt__CheckBox_196_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Txt_Servername_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Txt_Servername_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Button_130_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Button_130_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UUI_HostScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_HostScreen.UI_HostScreen_C.ExecuteUbergraph_UI_HostScreen
struct UUI_HostScreen_C_ExecuteUbergraph_UI_HostScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
