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
	 * BlueprintGeneratedClass BP_HDScopeComponentBase.BP_HDScopeComponentBase_C
	 * Size -> 0x0630 (FullSize[0x0820] - InheritedSize[0x01F0])
	 */
	class UBP_HDScopeComponentBase_C : public UHDWeaponScopeComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       UseOverlay;                                              // 0x01F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8TBH[0x3];                                   // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScopeRadius;                                             // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimingFOV;                                               // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADSOffset;                                               // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ScopeMaterialIndex;                                      // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_931G[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedBlendable>                          PostProcessMaterial;                                     // 0x0210(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UMaterialInterface*                                  ScopeGlassMaterial;                                      // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ScopeOpticMaterial;                                      // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ScopeOverlayClass;                                       // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FreeAimMaxPitch;                                         // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FreeAimMaxYaw;                                           // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReticleOffsetY;                                          // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReticleOffsetX;                                          // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScopeMIDGlass;                                           // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ScopeOverlay;                                            // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimInterpSpeed;                                          // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7GO1[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ScopeMID;                                                // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultAimingFOV;                                        // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultAimInterpSpeed;                                   // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultFreeAimPitch;                                     // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultFreeAimYaw;                                       // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YYQE[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                DefaultCameraPostProcess;                                // 0x0280(0x0540) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsScopedIn;                                             // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7RK0[0x3];                                   // 0x07C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultADSOffset;                                        // 0x07C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMeshComponent*                                      ParentMesh;                                              // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHDPlayerController*                                 ControllerRef;                                           // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerCharacterBase_C*                         CharacterRef;                                            // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDWeaponBase_C*                                  ParentWeaponRef;                                         // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FWeightedBlendable>                          PostProcessRef;                                          // 0x07E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class ADFPlayerCameraManager*                              CameraRef;                                               // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBP_HDScopeComponentBase_C*>                  ParentSightList;                                         // 0x0800(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FMaterialParameterInfo                              MPC;                                                     // 0x0810(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void ClearOwnerData();
		void SetupOwnerData(bool* IsValid);
		void LoadDefaults(bool IsPlayerDead);
		void SaveDefaults();
		void Init();
		void ScopeEffect();
		void CanScope(bool* CanScope);
		void GetData(class ABP_HDPlayerCharacterBase_C** Character, class AHDPlayerController** Controller, class UDFCharacterMovementComponent** Movement, class ADFPlayerCameraManager** Camera, class ABP_HDWeaponBase_C** Parent, class USkeletalMeshComponent** CharacterMesh, class UMeshComponent** WeaponMesh, TArray<class UBP_HDScopeComponentBase_C*>* ParentSightList, TArray<class UMaterialInstanceDynamic*>* FirstPersonMatArray, TArray<class UMaterialInstanceDynamic*>* ThirdPersonMatArray);
		void AimOut();
		void AimIn();
		void AimTransition(bool bIsStartTransition);
		void AimStyle(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void DeathEvent(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void ItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void ChangeSights();
		void ReceiveTick(float DeltaSeconds);
		void EventActivated(class UActorComponent* Component, bool bReset);
		void EventDeactivated(class UActorComponent* Component);
		void BindEvents(class ABP_HDPlayerCharacterBase_C* NewCharacter, class ABP_HDWeaponBase_C* NewWeapon);
		void UnbindEvents(class ABP_HDPlayerCharacterBase_C* OldCharacter, class ABP_HDWeaponBase_C* OldWeapon);
		void ExecuteUbergraph_BP_HDScopeComponentBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
