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

// BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C
// 0x001D (0x0420 - 0x0403)
class ABP_AmmoBox_C : public ABP_QuickAccesPointBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0403(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C");
		return ptr;
	}


	void GiveAmmo();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowReceivedIndicatorCustom(const struct FST_InventoryArray& MainAmmo, const struct FST_InventoryArray& SideAmmo);
	void GiveResources();
	void ExecuteUbergraph_BP_AmmoBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
