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

// BlueprintGeneratedClass BP_ProjectileHeavyShot.BP_ProjectileHeavyShot_C
// 0x0008 (0x04F8 - 0x04F0)
class ABP_ProjectileHeavyShot_C : public ABP_ProjectileCannonballBase_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem_1;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileHeavyShot.BP_ProjectileHeavyShot_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
