#pragma once

// Name: BS, Version: 1.536.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C
// 0x0015 (0x0418 - 0x0403)
class ABP_QuickAccesPoint_AntiCannonball_C : public ABP_QuickAccesPointBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0403(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuickAccesPoint_AntiCannonball.BP_QuickAccesPoint_AntiCannonball_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GiveResources();
	void AmountRepEvent();
	void ExecuteUbergraph_BP_QuickAccesPoint_AntiCannonball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
