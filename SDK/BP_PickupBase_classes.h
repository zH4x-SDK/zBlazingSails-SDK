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

// BlueprintGeneratedClass BP_PickupBase.BP_PickupBase_C
// 0x008C (0x0440 - 0x03B4)
class ABP_PickupBase_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Outline;                                                  // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       ObjectName;                                               // 0x03D0(0x0018) (Edit, BlueprintVisible)
	int                                                Amount_;                                                  // 0x03E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinAmount__0IfWeapon_;                                    // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount__0IfWeapon_;                                    // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Items>                               Item;                                                     // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Tiers>                               Tier;                                                     // 0x03F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03F6(0x0002) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Respawn;                                                  // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              RespawnTime;                                              // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SwitchWeaponOnPickup;                                     // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DespawnAfterTime;                                         // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	float                                              DespawnTime;                                              // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFloatMode;                                               // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  DefaultMeshMaterials;                                     // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     OriginalLocation;                                         // 0x0430(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupBase.BP_PickupBase_C");
		return ptr;
	}


	void FloatMode(bool Enable);
	void HighLightObject(const struct FLinearColor& Color);
	void ShowHideOutline(bool ShowOutline, bool NoRoom);
	void CheckIfPlayerHasRoom(bool* EnoughRoom);
	void UserConstructionScript();
	void UpdateAmount();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void S_Activate();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PickupBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
