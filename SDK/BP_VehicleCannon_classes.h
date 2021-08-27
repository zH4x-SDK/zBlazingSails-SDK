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

// BlueprintGeneratedClass BP_VehicleCannon.BP_VehicleCannon_C
// 0x012B (0x054C - 0x0421)
class ABP_VehicleCannon_C : public ABP_VehicleBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Fuse1;                                                    // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CannonBlockedMesh;                                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ActualBarrel;                                             // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalBarrel;                                           // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Ammo;                                                     // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Fuse;                                                     // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ProjectileStart;                                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RotationalBarrel;                                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Pitch;                                                    // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTimer;                                              // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadPercentage;                                           // 0x04AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycleAmmoTimer;                                           // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProjectileDirection;                                      // 0x04B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProjectileStartLocation;                                  // 0x04C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MoveBackLocation;                                         // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MoveBack;                                                 // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	float                                              MaxTurnWidth;                                             // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Loaded;                                                   // 0x04E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reloading;                                                // 0x04E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanCycleAmmo;                                             // 0x04E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFire;                                                  // 0x04E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        ReloadKey;                                                // 0x04E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_CannonAmmo>                          CannonAmmoType;                                           // 0x0500(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_CannonAmmo>                          LoadedAmmo;                                               // 0x0501(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0502(0x0002) MISSED OFFSET
	int                                                AmmoAmount;                                               // 0x0504(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveBackMultiplier;                                       // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxUpRange;                                               // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownRange;                                             // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OneAmmoTypeOnly;                                          // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_CannonAmmo>                          AllowedAmmoType;                                          // 0x0515(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0516(0x0002) MISSED OFFSET
	class USoundBase*                                  CustomFireSound;                                          // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ControllerDoubleFireBlocked;                              // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	int                                                CannonLevel;                                              // 0x0524(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ReloadMultiplier;                                         // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Upgradable;                                               // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CannonBlocked;                                            // 0x052D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x052E(0x0002) MISSED OFFSET
	int                                                CannonBlockChainHP;                                       // 0x0530(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     attachedFXScale;                                          // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DettachedFXScale;                                         // 0x0540(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleCannon.BP_VehicleCannon_C");
		return ptr;
	}


	void DamageBlockChain(int DamageAmount);
	void OnRep_CannonBlockChainHP();
	void OnRep_CannonbBlocked();
	void SetCannonLevelAppearance();
	void OnRep_CannonLevel();
	void UpgradeCannon();
	void CheckSpecificAmmo(TEnumAsByte<E_CannonAmmo> AmmoType, bool* HasAmmo);
	void FireCannon(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity, bool OwnProjectile);
	void Muzzle(class UParticleSystem* Muzzle_TP, class UParticleSystem* Smoke_TP, class UParticleSystem* Muzzle_FP, class UParticleSystem* Smoke_FP, float ClunkSoundPitch, class UParticleSystem* Fuse, const struct FVector& AttachToCannonScale, const struct FVector& DettachToCannonScale);
	void FireProjectile(class UClass* Projectile, const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, const struct FVector& AddedVelocity, bool OwnProjectile);
	void AmmoDown(bool* Cycled);
	void AmmoUp(bool* Cycled);
	void CheckAmmo(bool* HasAmmo);
	void LoadAmmo();
	void OnRep_LoadedAmmo();
	void OnRep_AmmoType();
	void OnRep_Loaded();
	void CycleAmmoPrevious();
	void CycleAmmoNext();
	void UserConstructionScript();
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_A_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_D_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_12(float AxisValue);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16(float AxisValue);
	void S_Fire(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity);
	void S_SetYaw(float Yaw);
	void S_SetPitch(float Pitch);
	void RequestCannonFire(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity, bool OwnProjectile);
	void S_StartReload();
	void S_StopReload();
	void S_NextAmmoType();
	void S_PreviousAmmoType();
	void MC_Reloaded();
	void UnOccupied();
	void Occupied();
	void MC_Pitch(float Pitch);
	void MC_Yaw(float Yaw);
	void LoadKeys();
	void Resetkeys();
	void RefreshKeys();
	void MC_FireCannon(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity);
	void MC_CannonUpgrade();
	void BlockCannon();
	void ExecuteUbergraph_BP_VehicleCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
