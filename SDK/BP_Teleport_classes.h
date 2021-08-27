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

// BlueprintGeneratedClass BP_Teleport.BP_Teleport_C
// 0x001C (0x03D0 - 0x03B4)
class ABP_Teleport_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Destination;                                              // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Base;                                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Teleport.BP_Teleport_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ExecuteUbergraph_BP_Teleport(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
