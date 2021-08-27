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

// Function BP_CameraManager.BP_CameraManager_C.InitializeVoiceChat
struct ABP_CameraManager_C_InitializeVoiceChat_Params
{
};

// Function BP_CameraManager.BP_CameraManager_C.UserConstructionScript
struct ABP_CameraManager_C_UserConstructionScript_Params
{
};

// Function BP_CameraManager.BP_CameraManager_C.ReceiveBeginPlay
struct ABP_CameraManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_CameraManager.BP_CameraManager_C.ReceiveActorBeginOverlap
struct ABP_CameraManager_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraManager.BP_CameraManager_C.ReceiveTick
struct ABP_CameraManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraManager.BP_CameraManager_C.ReceiveActorEndOverlap
struct ABP_CameraManager_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraManager.BP_CameraManager_C.ExecuteUbergraph_BP_CameraManager
struct ABP_CameraManager_C_ExecuteUbergraph_BP_CameraManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
