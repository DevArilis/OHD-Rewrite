#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C
	 * Size -> 0x0618 (FullSize[0x1050] - InheritedSize[0x0A38])
	 */
	class ABP_HDScopeWeaponBase_C : public ABP_HDWeaponBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A38(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    RadiusDebugSphere;                                       // 0x0A40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RadiusDebugTopPoint;                                     // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerCharacterBase_C*                         PlayerCharOwner;                                         // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDFCharacterMovementComponent*                       PlayerCharOwnerMoveComp;                                 // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHDPlayerController*                                 PCOwner;                                                 // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADFPlayerCameraManager*                              PlayerOwnerCamMgr;                                       // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultAimingFOV;                                        // 0x0A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultAimingDistance;                                   // 0x0A74(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultAimInterpSpeed;                                   // 0x0A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultFreeAimPitch;                                     // 0x0A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultFreeAimYaw;                                       // 0x0A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PJIF[0xC];                                   // 0x0A84(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                DefaultCameraPostProcess;                                // 0x0A90(0x0540) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            ScopeMID;                                                // 0x0FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScopeMIDGlass;                                           // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseOverlay;                                             // 0x0FE0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D6VJ[0x3];                                   // 0x0FE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimingFOV;                                               // 0x0FE4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimInterpSpeed;                                          // 0x0FE8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimInDelay;                                              // 0x0FEC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlurEffectDelay;                                         // 0x0FF0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScopeRadius;                                             // 0x0FF4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FreeAimMaxPitch;                                         // 0x0FF8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FreeAimMaxYaw;                                           // 0x0FFC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ScopeMaterialIndex;                                      // 0x1000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4413[0x4];                                   // 0x1004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedBlendable>                          PostProcessMaterial;                                     // 0x1008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash
		class UMaterialInterface*                                  ScopeGlassMaterial;                                      // 0x1018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ScopeOpticMaterial;                                      // 0x1020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ScopeOverlay;                                            // 0x1028(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ScopeOverlayClass;                                       // 0x1030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReticleOffsetY;                                          // 0x1038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReticleOffsetX;                                          // 0x103C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FWeightedBlendable>                          PostProcessRef;                                          // 0x1040(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ShouldUseScope(bool* bUseScope);
		void SaveOwnerDefaultValues();
		void RestoreOwnerDefaultValues();
		void ScopeEffects();
		void AimOut();
		void AimIn();
		void HasLocallyPlayerControlledOwner(bool* bLocalPlayerOwner);
		void HasValidOwnerData(bool bCharAliveCheck, bool* bValidOwnerData);
		void ResetDefaultValues();
		void CleanupOwnerData();
		void SetupOwnerData(bool* bValidOwnerData);
		void UserConstructionScript();
		void StartAimInScope();
		void StartAimOutScope();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveOnEquipFinished();
		void ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
		void ResetAimOutGate();
		void ReceiveOnLeaveInventory(class ADFBaseCharacter* LastOwner);
		void SetCurrentSight(class USceneComponent* Sight);
		void OnBraceAimEnd();
		void ExecuteUbergraph_BP_HDScopeWeaponBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
