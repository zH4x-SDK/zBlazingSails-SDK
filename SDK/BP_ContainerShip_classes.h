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

// BlueprintGeneratedClass BP_ContainerShip.BP_ContainerShip_C
// 0x0008 (0x0458 - 0x0450)
class ABP_ContainerShip_C : public ABP_ContainerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContainerShip.BP_ContainerShip_C");
		return ptr;
	}


	void SpawnDuplicateShipDeathContainer();
	void UserConstructionScript();
	void RefreshQuickAccessPoints();
	void ExecuteUbergraph_BP_ContainerShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
