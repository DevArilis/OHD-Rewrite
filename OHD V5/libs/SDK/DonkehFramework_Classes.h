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
	 * Class DonkehFramework.DFCfgDataManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UDFCfgDataManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_L70B[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFMapRotationManager
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	class UDFMapRotationManager : public UDFCfgDataManager
	{
	public:
		unsigned char                                              UnknownData_RGT5[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPlayerAdminList
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UDFPlayerAdminList : public UDFCfgDataManager
	{
	public:
		unsigned char                                              UnknownData_5BYB[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPlayerBanList
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UDFPlayerBanList : public UDFCfgDataManager
	{
	public:
		unsigned char                                              UnknownData_LGIG[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPlayerWhitelist
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UDFPlayerWhitelist : public UDFCfgDataManager
	{
	public:
		unsigned char                                              UnknownData_KM31[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFAssetManager
	 * Size -> 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
	 */
	class UDFAssetManager : public UAssetManager
	{
	public:
		unsigned char                                              UnknownData_QULF[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseAIController
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ADFBaseAIController : public AAIController
	{
	public:
		unsigned char                                              UnknownData_ZZ0L[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		bool CanRestartPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseItem
	 * Size -> 0x0188 (FullSize[0x03A8] - InheritedSize[0x0220])
	 */
	class ADFBaseItem : public AActor
	{
	public:
		class ADFBaseCharacter*                                    PawnOwner;                                               // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                ItemMesh;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                ItemMesh1P;                                              // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMesh*                                       PawnMesh1P;                                              // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PawnMesh1PAnimClass;                                     // 0x0240(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             PawnMesh1PLocationOffset;                                // 0x0248(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            PawnMesh1PRotationOffset;                                // 0x0254(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EItemType                                                  ItemType;                                                // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESpecificItemType                                          SpecificItemType;                                        // 0x0261(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanEquip : 1;                                           // 0x0262(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanAimWhileEquipped : 1;                                // 0x0262(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisableFireInput : 1;                                   // 0x0262(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEquipped : 1;                                           // 0x0262(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingEquip : 1;                                       // 0x0262(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingUnEquip : 1;                                     // 0x0262(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWantsToFire : 1;                                        // 0x0262(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SEJG[0x15];                                  // 0x0263(0x0015) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDebug : 1;                                              // 0x0278(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTK6[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimCollection                            CharacterAnimCollection;                                 // 0x0280(0x0128) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void StopFire();
		void StartFire();
		void SetOwningPawn(class ADFBaseCharacter* NewOwner);
		void SetMeshVisibility(bool bFirstPerson);
		void ServerStopFire();
		void ServerStartFire();
		bool RemoveLegacyLocomotionAnims(bool bFPP);
		void ReceiveVisibilityChanged(bool bFirstPerson);
		void ReceiveStopFire();
		void ReceiveStartFire();
		void ReceiveOnUnEquipFinished(bool bLeavingPawnInventory);
		void ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
		void ReceiveOnTurnOff();
		void ReceiveOnLeaveInventory(class ADFBaseCharacter* LastOwner);
		void ReceiveOnEquipFinished();
		void ReceiveOnEquip(class ADFBaseItem* LastItem);
		void ReceiveOnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner);
		bool OwnerIsSprinting();
		bool OwnerIsAiming();
		void OnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
		void OnTurnOff();
		void OnRep_PawnOwner(class ADFBaseCharacter* LastOwner);
		void OnLeaveInventory(class ADFBaseCharacter* LastOwner);
		void OnEquip(class ADFBaseItem* LastItem);
		void OnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner);
		bool IsUnEquipping();
		bool IsEquipping();
		bool IsEquipped();
		bool IsClientSimulated();
		ESpecificItemType GetSpecificItemType();
		class ADFBaseCharacter* GetPawnOwner();
		class UDFInventoryComponent* GetPawnInventory();
		struct FRotator GetOwnerViewRotation();
		bool GetOwnerViewPoint(struct FVector* OutViewLoc, struct FRotator* OutViewRot);
		struct FVector GetOwnerViewLocation();
		TMap<class FName, class UAnimSequenceBase*> GetLegacyLocomotionAnims(bool bFPP);
		EItemType GetItemType();
		class UStaticMeshComponent* GetItemMeshToUse(bool bIgnoreLocalControlOnServer);
		class UStaticMeshComponent* GetItemMesh1P();
		class UStaticMeshComponent* GetItemMesh();
		struct FVector GetAdjustedAimDirection();
		bool CanSprintWhileEquipped();
		bool CanFire();
		bool CanEquip();
		bool CanAimWhileEquipped();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseAmmoClip
	 * Size -> 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
	 */
	class ADFBaseAmmoClip : public ADFBaseItem
	{
	public:
		class ADFBaseGun*                                          GunOwner;                                                // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentClipAmmo;                                         // 0x03B0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    StartingClipAmmo;                                        // 0x03B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxClipAmmo;                                             // 0x03B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_COGM[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (PADDING)

	public:
		int32_t STATIC_StoreAmmoInInventory(class UDFInventoryComponent* AmmoStore, int32_t AmmoAmt, class UClass* AmmoType);
		void StoreAmmo(int32_t AmmoToStore);
		void SetOwningGun(class ADFBaseGun* NewOwner);
		bool IsLoaded();
		int32_t GetStartingClipAmmo();
		int32_t GetMaxClipAmmo();
		class ADFBaseGun* GetGunOwner();
		int32_t GetCurrentClipAmmo();
		void ConsumeAmmo(int32_t AmmoToConsume);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseCharacter
	 * Size -> 0x0440 (FullSize[0x0900] - InheritedSize[0x04C0])
	 */
	class ADFBaseCharacter : public ACharacter
	{
	public:
		unsigned char                                              RemoteViewYaw;                                           // 0x04C0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GB59[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bClientResimulateSprintStamina : 1;                      // 0x04C8(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BAG[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimCollection                            DefaultPawnAnimCollection;                               // 0x04D0(0x0128) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bPlayFootstepFXWithPerspMeshOnly : 1;                    // 0x05F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTickAllAnimationOnDedicatedServer : 1;                  // 0x05F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyTickAnimMontagesOnDedicatedServer : 1;              // 0x05F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZNA[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterSoundCollection                           DefaultPawnSoundCollection;                              // 0x0600(0x0010) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		class ADFBaseItem*                                         EquippedItem;                                            // 0x0610(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADFBaseItem*                                         LastEquippedItem;                                        // 0x0618(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnEquippedItemChanged;                                   // 0x0620(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ItemAttachPoint;                                         // 0x0630(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDFInventoryComponent*                               Inventory;                                               // 0x0638(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDFLoadout*                                          DefaultLoadout;                                          // 0x0640(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDFItemEnabledMode                                         ItemEnabledMode;                                         // 0x0648(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDying : 1;                                              // 0x0649(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2BV[0x6];                                   // 0x064A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHealthChanged;                                         // 0x0650(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0660(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B6US[0x14];                                  // 0x0664(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RagdollLifeSpan;                                         // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F6L7[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCharacterDeath;                                        // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VMVV[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTakeHitInfo                                        LastTakeHitInfo;                                         // 0x0698(0x0120) Edit, Net, Transient, EditConst, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OHQ4[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   BoneDamageMultipliers;                                   // 0x07C0(0x0050) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       bApplyDamageMomentumOnHit : 1;                           // 0x0810(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53YK[0x7];                                   // 0x0811(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSprintTransition;                                      // 0x0818(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAimTransition;                                         // 0x0828(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeanTransition;                                        // 0x0838(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVaultTransition;                                       // 0x0848(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		ECharacterStance                                           ReplicatedStance;                                        // 0x0858(0x0001) Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterStance                                           PreviousStance;                                          // 0x0859(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPressedVault : 1;                                       // 0x085A(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSprinting : 1;                                          // 0x085A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAiming : 1;                                             // 0x085A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsProne : 1;                                            // 0x085A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVaulting : 1;                                           // 0x085A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasVaulting : 1;                                        // 0x085A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMMN[0x1];                                   // 0x085B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDFVaultTraceResult                                 PendingVaultTraceResult;                                 // 0x085C(0x001C) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDFVaultTraceData                                   VaultParams;                                             // 0x0878(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      ReplicatedLeanAmount;                                    // 0x0890(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPHG[0x4];                                   // 0x0894(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFCharacterLeanHandler*                             LeanHandler;                                             // 0x0898(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDFCharacterMovementComponent*                       DFCharacterMovement;                                     // 0x08A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetEyeHeight;                                         // 0x08A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UnknownData_2P2Z : 1;                                    // 0x08AC(0x0001) BIT_FIELD (PADDING)
		bool                                                       bInterpCrouchedEyeHeight : 1;                            // 0x08AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXZP[0x3];                                   // 0x08AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchedTransitionInterpSpeed;                           // 0x08B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpProneEyeHeight : 1;                               // 0x08B4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LV3[0x3];                                   // 0x08B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProneTransitionInterpSpeed;                              // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneEyeHeight;                                          // 0x08BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x08C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IJUQ[0x7];                                   // 0x08C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFTeamState*                                        TeamState;                                               // 0x08C8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADFTeamState*                                        PrevTeamState;                                           // 0x08D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowTeamIdOverride : 1;                                // 0x08D8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUCQ[0x7];                                   // 0x08D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPawnTeamNumUpdated;                                    // 0x08E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnTeamStateUpdated;                                  // 0x08F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Vault();
		void UnSprint(bool bClientSimulation);
		void UnLean(ELeanDirection UnDesiredLeanDir, bool bClientSimulation);
		void UnAim(bool bClientSimulation);
		void Suicide();
		void StopVaulting();
		void StopFire();
		void StopCharacterPerspectiveAnimation(const struct FPerspectiveAnim& CharAnim);
		void StopCharacterMontage(class UAnimMontage* CharMontage);
		void StopAllAnimMontages(bool bPerspectiveMeshOnly);
		void StartFire();
		void SprintToggle();
		void Sprint(bool bClientSimulation);
		void SpawnHitImpactFX(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
		void SetRagdollPhysics();
		void SetItemEnabledMode(EDFItemEnabledMode ItemMode);
		void SetHealth(float InHealth);
		void ServerSuicide();
		void ServerEquipItem(class ADFBaseItem* ItemToEquip);
		void ServerDoVault(const struct FDFVaultTraceData& VaultStartParams);
		void Reload();
		void ReceiveRestart();
		void ReceivePlayHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bKilled);
		void ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
		void ReceivePawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void ReceiveOnStartVault();
		void ReceiveOnStartSprint();
		void ReceiveOnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void ReceiveOnStartLean();
		void ReceiveOnStartAim();
		void ReceiveOnRepPlayerState();
		void ReceiveOnEndVault();
		void ReceiveOnEndSprint();
		void ReceiveOnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void ReceiveOnEndLean();
		void ReceiveOnEndAim();
		void ReceiveHealthChanged(float NewHealthTotal, float PrevHealthTotal);
		void ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void ProneToggle();
		float PlayCharacterUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay);
		float PlayCharacterThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay);
		float PlayCharacterThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay);
		float PlayCharacterStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
		class UAudioComponent* PlayCharacterSound(const struct FPerspectiveSound& Sound);
		float PlayCharacterReloadMontage(bool bDryReload);
		float PlayCharacterPerspectiveAnimation(const struct FPerspectiveAnim& CharAnim, bool bForceDisableAutoBlendOut);
		float PlayCharacterMontage(class UAnimMontage* CharMontage, bool bForceDisableAutoBlendOut);
		float PlayCharacterFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
		float PlayCharacterEquipMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayCharacterEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
		float PlayCharacterDeathMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayCharacterCockMontage(class UAnimMontage* CockMontageToPlay);
		float PlayCharacterActionMontage(class UAnimMontage* ActionMontageToPlay);
		void OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate);
		void OnRep_TeamNum(unsigned char LastTeamNum);
		void OnRep_ReplicatedStance();
		void OnRep_ReplicatedLeanAmount(float LastReplicatedLeanAmount);
		void OnRep_LastTakeHitInfo();
		void OnRep_ItemEnabledMode(EDFItemEnabledMode PreviousItemEnabledMode);
		void OnRep_IsProne();
		void OnRep_Health(float PreviousValue);
		void OnRep_EquippedItem(class ADFBaseItem* LastItem);
		void OnRep_bSprinting();
		void OnRep_bAiming();
		void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void LeaveProne(bool bClientSimulation);
		void LeanToggle(ELeanDirection LeanDir);
		void Lean(ELeanDirection DesiredLeanDir, bool bClientSimulation);
		void ItemEnabledModeChanged(EDFItemEnabledMode PreviousItemEnabledMode);
		bool IsPrefiring();
		bool IsPlayer();
		bool IsPerspectiveMesh(class USkeletalMeshComponent* MeshCompToCheck);
		bool IsLeaning();
		bool IsFiring();
		bool IsEquipped();
		bool IsAlive();
		void GoProne(bool bClientSimulation);
		void GiveLoadout(class UDFLoadout* Loadout, bool bEquipFirstItem);
		class ADFBaseItem* GetRelevantEquippedItem();
		class ADFBaseItem* GetPreviousInventoryItem(bool bEquippable);
		class ADFBaseItem* GetNextInventoryItem(bool bEquippable);
		class UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		EDFItemEnabledMode GetItemEnabledMode();
		class FName GetItemAttachPoint();
		class UDFInventoryComponent* GetInventory();
		class ADFBaseItem* GetEquippedItem();
		bool GetDamageMultiplierByBoneName(const class FName& BoneName, float* DamageMultiplier);
		class USkeletalMeshComponent* GetCharacterMeshToUse(bool bIgnoreLocalControlOnServer);
		bool GetCharacterDeathMontageToUse(class UAnimMontage** OutCharDeathMontage);
		EVisibilityBasedAnimTickOption GetCharacterAnimTickOptionToUse(bool bVisibleMesh);
		class UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		struct FRotator GetAimOffsets();
		void EquipPreviousItem();
		void EquipNextItemByType(EItemType ItemType);
		void EquipNextItem();
		void EquipItem(class ADFBaseItem* ItemToEquip);
		bool Die(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser);
		void CrouchToggle();
		void ClientVeryShortAdjustPosition_CustomStamina(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClientAdjustRootMotionSourcePosition_CustomStamina(float Timestamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const class FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClientAdjustRootMotionPosition_CustomStamina(float Timestamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const class FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClientAdjustPosition_CustomStamina(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClearCharacterAnimInstances(bool bPerspectiveMeshOnly);
		bool CanVault();
		bool CanSprint();
		bool CanLean(ELeanDirection DesiredLeanDir);
		bool CanGoProne();
		bool CanDie(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser);
		bool CanAim();
		void AimToggle();
		void Aim(bool bClientSimulation);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGameMode
	 * Size -> 0x00F0 (FullSize[0x03F8] - InheritedSize[0x0308])
	 */
	class ADFBaseGameMode : public AGameMode
	{
	public:
		class ADFGameSession*                                      DFGameSession;                                           // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A350[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TeamStateClass;                                          // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AIControllerClass;                                       // 0x0320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<unsigned char>                                      WinningTeams;                                            // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        TimerHandle_DefaultTimer;                                // 0x0338(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WarmupTime;                                              // 0x0340(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundTimeLimit;                                          // 0x0344(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundScoreLimit;                                         // 0x0348(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TimeBetweenMatches;                                      // 0x034C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBalanceTeams : 1;                                       // 0x0350(0x0001) BIT_FIELD Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VVSJ[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BalanceTimerInterval;                                    // 0x0354(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              AutoAssignHumanTeam;                                     // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBotAutofill : 1;                                        // 0x0359(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, GlobalConfig, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BC2A[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                GameDisplayName;                                         // 0x0360(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    NumTeams;                                                // 0x0378(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowUnassignedTeams : 1;                               // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPlayerNameChanges : 1;                             // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPlayerNameChangesUnderNullOSS : 1;                 // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPlayerNameChangesUnderSteamOSS : 1;                // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysDestroyPlayerDuringSeamlessTravel : 1;            // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRespawn : 1;                                       // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSpawns : 1;                                       // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestartPlayerAtTransformOnly : 1;                       // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFriendlyFire : 1;                                       // 0x037D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdatePlayerGameplayMuteStates : 1;                     // 0x037D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeamOnlyVoice : 1;                                      // 0x037D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpawnActorCollisionHandlingMethod                         DefaultPawnSpawnCollisionHandlingMethodOverride;         // 0x037E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowBots : 1;                                          // 0x037F(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        TimerHandle_BalanceTimer;                                // 0x0380(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              GameRulesetClasses[0x50];                                // 0x0388(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class AActor*>                                      SignificantActors;                                       // 0x03D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UDFGameRulesetBase*>                          GameRulesets;                                            // 0x03E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdatePlayerGameplayMuteStates(class ADFBasePlayerController* ForPlayerController);
		void UnregisterSignificantActor(class AActor* ActorToRemove);
		void SwitchToNextMap();
		void SignificantActorEndPlay(class AActor* RemovedActor, EEndPlayReason EndPlayReason);
		bool ShouldHibernate();
		bool ShouldGameplayMuteRemotePlayer(class ADFBasePlayerController* ForPlayer, class ADFBasePlayerController* PlayerToCheck);
		bool ShouldBotAutofill();
		void RemoveTeamBots(unsigned char TeamId, int32_t Num);
		void RemovePlayerByAge(bool bNewest, bool bExcludeBots, bool bExcludeHumans);
		void RemoveOldestPlayer();
		void RemoveOldestBot();
		void RemoveNewestPlayer();
		void RemoveNewestBot();
		bool RemoveBotByName(const class FString& PlayerName);
		bool RemoveBot(class APlayerState* BotPS);
		void RemoveAllBots();
		void RegisterSignificantActor(class AActor* ActorToRegister);
		void ReceiveOnSwapAIControllers(class AAIController* OldAIC, class AAIController* NewAIC);
		void ReceiveOnMatchIsWaitingToStart();
		void ReceiveOnMatchHasStarted();
		void ReceiveOnMatchHasEnded();
		void ReceiveOnMatchAborted();
		void ReceiveOnLeavingMap();
		bool PlayerCanRestartGeneric(class AController* Player);
		bool PlayerBotCanRestart(class AAIController* Player);
		void NextMap();
		float ModifyDamage(float Damage, class AActor* DamagedActor, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		bool KickPlayerByName(const class FString& KickedPlayerName, const class FText& KickReason);
		bool KickPlayerById(int32_t KickedPlayerId, const class FText& KickReason);
		bool IsValidTeamId(unsigned char TeamId);
		bool IsMatchWinner(class ADFBasePlayerState* PlayerStateToCheck);
		bool IsHibernating();
		bool IsFriendlyFireEnabled();
		int32_t GetTotalNumPlayers(bool bIncludeTravellingPlayers);
		int32_t GetNumPlayersOnTeam(unsigned char TeamId, EPlayerKind PlayerType);
		class FString GetNextMapName();
		class FString GetNextGameName();
		unsigned char GetAutoAssignHumanTeam();
		bool ForceTeamId(int32_t SwitchedPlayerId, unsigned char TeamIdToAssign);
		bool ForceTeam(const class FString& SwitchedPlayerName, unsigned char TeamIdToAssign);
		bool FindPlayerStartTransform(class AController* Player, struct FTransform* OutFoundSpawnTransform, const class FString& IncomingName);
		void DumpActiveRulesets();
		void DetermineMatchWinner();
		class ADFTeamState* CreateTeam(class UDFTeamDefinition* NewTeamDef, unsigned char NewTeamIdToUse);
		unsigned char ChooseTeam(class ADFBasePlayerState* ForPlayerState);
		bool ChooseSpawnPointFromPlayerStart(class AController* Player, class AActor* StartSpot, struct FSpawnPointDef* OutChosenSpawnPoint, ESpawnActorCollisionHandlingMethod* OutCollisionHandlingMethod);
		bool CheckWinConditions();
		bool CheckRulesetWinConditions();
		bool CanRegisterSignificantActor(class AActor* ActorToRegister, class FString* ActorDenialReason);
		bool CanDealDamage(class ADFBasePlayerState* DamageInstigator, class ADFBasePlayerState* DamagedPlayer);
		bool CanAddRuleset(class UClass** RulesetClassToAdd, class FString* RulesetDenialReason);
		bool BanPlayerByName(const class FString& BannedPlayerName, const class FText& BanReason, float BanDuration);
		bool BanPlayerById(int32_t BannedPlayerId, const class FText& BanReason, float BanDuration);
		void AutofillWithBots();
		void AssignTeam(class AController* ForController, unsigned char AssignedTeam);
		void AddTeamBots(unsigned char TeamId, int32_t Num);
		void AddNamedBot(const class FString& BotName);
		void AddBots(int32_t Num);
		class APlayerState* AddBot(unsigned char PlayerTeamID, const class FString& PlayerName);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGame_DeathMatch
	 * Size -> 0x0008 (FullSize[0x0400] - InheritedSize[0x03F8])
	 */
	class ADFBaseGame_DeathMatch : public ADFBaseGameMode
	{
	public:
		class ADFBasePlayerState*                                  WinningPlayerState;                                      // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGame_TeamDeathMatch
	 * Size -> 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
	 */
	class ADFBaseGame_TeamDeathMatch : public ADFBaseGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGameInstance
	 * Size -> 0x00B8 (FullSize[0x0250] - InheritedSize[0x0198])
	 */
	class UDFBaseGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_L3PF[0x90];                                  // 0x0198(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerStateTalkingStateChanged;                        // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WCOU[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (PADDING)

	public:
		void ProjectVersion();
		void OnTravelFailure(class UWorld* World, ETravelFailure FailureType, const class FString& ErrorString);
		void OnNetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, ENetworkLagState LagType);
		void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, ENetworkFailure FailureType, const class FString& ErrorString);
		void JoinGameByIP(const class FString& IPAddress, const class FString& JoinPassword);
		void JoinGame(int32_t SearchResultIndex, const class FString& JoinPassword);
		bool IsHibernating();
		void HostGame(const class FString& TravelURL, bool bLANGame, int32_t MaxPlayers, const class FString& HostName, const class FString& Password);
		void ForceUpdateSession();
		void FindGames(ESessionSearchPresenceType SearchPresenceType);
		void DumpOnlineSessionState();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGameState
	 * Size -> 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
	 */
	class ADFBaseGameState : public AGameState
	{
	public:
		unsigned char                                              NumTeams;                                                // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTimerPaused;                                            // 0x0291(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8E96[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RemainingTime;                                           // 0x0294(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReplicatedRemainingTime;                                 // 0x0298(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y037[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              TeamScores;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ADFTeamState*>                                TeamArray;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamStateAdded;                                        // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamStateRemoved;                                      // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateAdded;                                      // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateRemoved;                                    // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetTimerPauseState(bool bNewPauseState);
		void SetRemainingTime(int32_t NewRemainingTime);
		void OnRep_ReplicatedRemainingTime();
		void OnRep_NumTeams();
		bool IsValidTeamId(unsigned char TeamId);
		class ADFTeamState* GetTeamStateById(unsigned char TeamIdNum);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseWeapon
	 * Size -> 0x0298 (FullSize[0x0640] - InheritedSize[0x03A8])
	 */
	class ADFBaseWeapon : public ADFBaseItem
	{
	public:
		class FScriptMulticastDelegate                             OnFire;                                                  // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bFiring : 1;                                             // 0x03B8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UnknownData_DHJS : 3;                                    // 0x03B8(0x0001) BIT_FIELD (PADDING)
		bool                                                       bReadyToFirePendingRelease : 1;                          // 0x03B8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFireOnRelease : 1;                                      // 0x03B8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_80Y5[0x3];                                   // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrefireDelayMin;                                         // 0x03BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPrefiring : 1;                                          // 0x03C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0LZP[0x3F];                                  // 0x03C1(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bADSFireOnly : 1;                                        // 0x0400(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLastShotFired : 1;                                      // 0x0400(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRepCounterPending : 1;                                  // 0x0400(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7MLB[0x1];                                   // 0x0401(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepShotInfo                                        FireCounter;                                             // 0x0402(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, RepNotify, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FRepShotInfo                                        PreviousRepFireCounter;                                  // 0x0406(0x0004) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRepShotInfo                                        PostStoppedFireCounter;                                  // 0x040A(0x0004) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_37FB[0x2];                                   // 0x040E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastFireTime;                                            // 0x0410(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseServerSideFiringLogic : 1;                           // 0x0414(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSimulateWeaponFireOnDedicatedServer : 1;                // 0x0414(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9XFE[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponAnimCollection                               WeaponAnimCollection;                                    // 0x0418(0x00F0) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bSimulate1PWeaponFireOnPawnOwner1PMesh : 1;              // 0x0508(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MOR9[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponSoundCollection                              WeaponSoundCollection;                                   // 0x0510(0x0080) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bSingleAction : 1;                                       // 0x0590(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSingleLoad : 1;                                         // 0x0590(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N46H[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              WeaponMesh;                                              // 0x0598(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              WeaponMesh1P;                                            // 0x05A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanSprintWhilePrefiring : 1;                            // 0x05A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EMJ1[0x7];                                   // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  DamageFalloffCurve;                                      // 0x05B0(0x0088) Edit, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DamageTypeClass;                                         // 0x0638(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void StopWeaponPerspectiveAnimation(const struct FPerspectiveAnim& WeapAnim);
		void StopWeaponMontage(class UAnimMontage* WeapMontage);
		void StopSimulatingWeaponFire();
		void SimulateWeaponFire();
		bool ShouldSimulateWeaponFire();
		void ReceiveStopSimulatingWeaponFire();
		void ReceiveSimulateWeaponFire();
		void ReceiveOnStopFiring();
		void ReceiveOnStartFiring();
		void ReceiveFire();
		void PrefireDelayElapsed(bool bClientSimulation);
		float PlayWeaponUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay);
		float PlayWeaponThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay);
		float PlayWeaponThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay);
		class UAudioComponent* PlayWeaponSound(const struct FPerspectiveSound& Sound);
		float PlayWeaponPerspectiveAnimation(const struct FPerspectiveAnim& WeapAnim);
		float PlayWeaponMontage(class UAnimMontage* WeapMontage, bool bForceDisableAutoBlendOut);
		float PlayWeaponFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
		float PlayWeaponEquipMontage(class UAnimMontage* EquipMontageToPlay);
		float PlayWeaponCockMontage(class UAnimMontage* CockMontageToPlay);
		float PlayWeaponActionMontage(class UAnimMontage* ActionMontageToPlay);
		float PlayThrowAnimations(bool bOverhandThrow, bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayCockAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
		void PlayActionAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
		void OnStopFiring();
		void OnStartFiring();
		void OnRep_FireCounter(const struct FRepShotInfo& PreviousValue);
		void OnRep_bPrefiring();
		bool IsFiring();
		void HandleFire();
		class USkeletalMeshComponent* GetWeaponMeshToUse(bool bIgnoreLocalControlOnServer);
		class USkeletalMeshComponent* GetWeaponMesh1P();
		class USkeletalMeshComponent* GetWeaponMesh();
		class UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		float GetMontagePlayLengthToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		class UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		float GetAnimPlayLengthToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGun
	 * Size -> 0x01D8 (FullSize[0x0818] - InheritedSize[0x0640])
	 */
	class ADFBaseGun : public ADFBaseWeapon
	{
	public:
		class FScriptMulticastDelegate                             OnFireModeChanged;                                       // 0x0640(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1BG[0x8];                                   // 0x0650(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerIntervalAdjustment;                                 // 0x0658(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowAutomaticWeaponCatchup;                            // 0x065C(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BEKR[0x3];                                   // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireRate;                                                // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ShotsPerBurst;                                           // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              SupportedFireModes;                                      // 0x0668(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EFireMode                                                  SelectedFireMode;                                        // 0x0669(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_794A[0x6];                                   // 0x066A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFGunRecoilHandler*                                 RecoilHandler;                                           // 0x0670(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReloadStarted;                                         // 0x0678(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReloadFinished;                                        // 0x0688(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EGunReloadState                                            PendingReloadState;                                      // 0x0698(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGunReloadState                                            PreviousReloadState;                                     // 0x0699(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bKeepLoadedAmmoOnLeaveInventory : 1;                     // 0x069A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnknownData_KD4V : 2;                                    // 0x069A(0x0001) BIT_FIELD (PADDING)
		bool                                                       bUsesAmmo : 1;                                           // 0x069A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bExhaustible : 1;                                        // 0x069A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanSprintWhileReloading : 1;                            // 0x069A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZH2A[0x4D];                                  // 0x069B(0x004D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bReloadOnEquip : 1;                                      // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInstantReloadOnEquip : 1;                               // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInstantReloadOnInitialEquip : 1;                        // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInstantReloadOnInitialEnterInventory : 1;               // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReloadOnDryFire : 1;                                    // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReloadOnStopFire : 1;                                   // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSimulateGunReloadOnDedicatedServer : 1;                 // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAmmoClipReloadBehavior                                    AmmoClipReloadBehavior;                                  // 0x06E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HLYG[0x6];                                   // 0x06EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SupportedAmmoClips[0x50];                                // 0x06F0(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    StartingAmmoClips;                                       // 0x0740(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDispensedStartingAmmoClips : 1;                         // 0x0744(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZNSD[0x3];                                   // 0x0745(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseAmmoClip*                                     CurrentAmmoClip;                                         // 0x0748(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentAmmoClipInvIndex;                                 // 0x0750(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DZU0[0x4];                                   // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseAmmoClip*                                     PreviousAmmoClip;                                        // 0x0758(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentAmmoInClipBeforeReload;                           // 0x0760(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReloadCycleIterations;                                   // 0x0764(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInfiniteClipAmmo : 1;                                   // 0x0768(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteAmmo : 1;                                       // 0x0768(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoRecoil : 1;                                           // 0x0768(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OACE[0x7];                                   // 0x0769(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComponentReference                                 CustomMuzzleAttachComponentToUse;                        // 0x0770(0x0028) Edit, DisableEditOnTemplate, EditConst, AdvancedDisplay, NativeAccessSpecifierPrivate
		class FName                                                MuzzleAttachComponentName;                               // 0x0798(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MuzzleAttachPoint;                                       // 0x07A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     MuzzleFX;                                                // 0x07A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             MuzzleLocationOffset;                                    // 0x07B0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            MuzzleRotationOffset;                                    // 0x07BC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bLoopedMuzzleFX : 1;                                     // 0x07C8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6JUG[0x7];                                   // 0x07C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            MuzzlePSC;                                               // 0x07D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ShellEjectAttachPoint;                                   // 0x07D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     ShellEjectFX;                                            // 0x07E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ShellEjectLocationOffset;                                // 0x07E8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            ShellEjectRotationOffset;                                // 0x07F4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bLoopedShellEjectFX : 1;                                 // 0x0800(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayShellEjectFXOnFireLast : 1;                         // 0x0800(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CPLM[0x3];                                   // 0x0801(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShellEjectDelay;                                         // 0x0804(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            ShellEjectPSC;                                           // 0x0808(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0Z7O[0x8];                                   // 0x0810(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnloadCurrentAmmoClip();
		void StopSimulatingGunReload();
		void StartReload(bool bClientSimulation);
		void SimulateGunReload();
		bool ShouldUseRecoil();
		bool ShouldSimulateGunReload();
		void SetReloadState(EGunReloadState NewReloadState);
		void SetFireModeBP(EFireMode NewFireMode);
		bool SetFireMode(EFireMode NewFireMode, bool bFromPlayerInput, bool bForce);
		void ServerStartReload();
		void ServerSetFireMode(EFireMode NewFireMode);
		void ReceiveFireModeChanged(EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
		void ReceiveAmmoExhausted();
		float PlayWeaponStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
		float PlayWeaponReloadMontage(bool bDryReload);
		float PlayWeaponEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
		float PlayReloadTransitionAnimations(bool bStartReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayReloadAnimations(bool bDryReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
		void OnRep_SelectedFireMode(EFireMode PrevSelectedFireMode);
		void OnRep_PendingReloadState(EGunReloadState PrevReloadState);
		void OnRep_CurrentAmmoClip(class ADFBaseAmmoClip* PrevAmmoClip);
		void OnReload(bool bClientSimulation);
		void LoadPreviousAmmoClip();
		void LoadNextAmmoClip();
		void LoadAmmoClip(class ADFBaseAmmoClip* ClipToLoad);
		bool IsReloading();
		bool IsDryReloading();
		bool HasExhaustedAllAmmo();
		bool HasAmmoClip();
		int32_t GetTotalAmmo(bool bIncludeLoadedMags);
		unsigned char GetSupportedFireModes();
		class FName GetShellEjectAttachPoint();
		EFireMode GetSelectedFireMode();
		EGunReloadState GetReloadState();
		EGunReloadState GetPreviousReloadState();
		int32_t GetNumFreeAmmoClips(bool bIncludeEmptyMags, bool bIncludeCurrentMag);
		struct FVector GetMuzzleLocation(bool bIgnoreLocalControlOnServer);
		struct FVector GetMuzzleDirection(bool bIgnoreLocalControlOnServer);
		class FName GetMuzzleAttachPoint();
		class USceneComponent* GetMuzzleAttachComponent(bool bIgnoreLocalControlOnServer);
		int32_t GetClipAmmo();
		bool CanReload();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGun_Projectile
	 * Size -> 0x0028 (FullSize[0x0840] - InheritedSize[0x0818])
	 */
	class ADFBaseGun_Projectile : public ADFBaseGun
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0818(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProjectileSpawnDistance;                                 // 0x0820(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TargetTraceDistance;                                     // 0x0824(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMuzzleAsTrace;                                       // 0x0828(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZU6Z[0x3];                                   // 0x0829(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MuzzleSightOffset;                                       // 0x082C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FMulticastSparseDelegate                             OnProcessValidProjCSHit;                                 // 0x0838(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXXU[0x7];                                   // 0x0839(0x0007) MISSED OFFSET (PADDING)

	public:
		void ServerNotifyCSHitPredicted(const struct FCSHitInfo& HitInfo);
		void ServerNotifyCSHit(class ADFBaseProjectile* HitProj, const struct FCSHitInfo& HitInfo);
		void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
		void ClientProjDebugInfo(class ADFBaseProjectile* Proj, const struct FVector& NewProjLoc, const struct FVector& LastProjLoc, const struct FRotator& NewProjRot, const struct FVector& NewProjVel);
		void ClientProjDebugImpactInfo(class ADFBaseProjectile* Proj, const struct FVector& ImpactLoc, const struct FVector_NetQuantizeNormal& ImpactNorm);
		void ClientDrawDebugFireCone(const struct FVector& ConeOrig, const struct FVector_NetQuantizeNormal& ConeDir);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseImpactEffect
	 * Size -> 0x02C8 (FullSize[0x04E8] - InheritedSize[0x0220])
	 */
	class ADFBaseImpactEffect : public AActor
	{
	public:
		TArray<struct FDecalData>                                  ConcreteDecals;                                          // 0x0220(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  MetalSolidDecals;                                        // 0x0230(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  WoodDecals;                                              // 0x0240(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  GlassBPDecals;                                           // 0x0250(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  GlassDecals;                                             // 0x0260(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  GlassWHDecals;                                           // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  MetalThinDecals;                                         // 0x0280(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  SandbagDecals;                                           // 0x0290(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  BrickWallDecals;                                         // 0x02A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  RubberDecals;                                            // 0x02B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  DrywallDecals;                                           // 0x02C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  ElectricDevicesDecals;                                   // 0x02D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  OilBarrelDecals;                                         // 0x02E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SnowFX;                                                  // 0x02F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     WaterFX;                                                 // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     ConcreteFX;                                              // 0x0300(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     DirtFX;                                                  // 0x0308(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     MetalSolidFX;                                            // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     WoodFX;                                                  // 0x0318(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GlassBPFX;                                               // 0x0320(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GlassFX;                                                 // 0x0328(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GlassWHFX;                                               // 0x0330(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GrassFX;                                                 // 0x0338(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     MetalThinFX;                                             // 0x0340(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SandbagFX;                                               // 0x0348(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     BrickWallFX;                                             // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     RubberFX;                                                // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     DrywallFX;                                               // 0x0360(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     ElectricDevicesFX;                                       // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     OilBarrelFX;                                             // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SandFX;                                                  // 0x0378(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SoftFX;                                                  // 0x0380(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GroundFX;                                                // 0x0388(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     RockFX;                                                  // 0x0390(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     FleshFX;                                                 // 0x0398(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           ConcreteSound;                                           // 0x03A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           DirtSound;                                               // 0x03A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           SnowSound;                                               // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           SandbagSound;                                            // 0x03B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           BrickWallSound;                                          // 0x03C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           WaterSound;                                              // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           MetalSolidSound;                                         // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           MetalThinSound;                                          // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           WoodSound;                                               // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GlassSound;                                              // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GlassBPSound;                                            // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GlassWHSound;                                            // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GrassSound;                                              // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           RubberSound;                                             // 0x0408(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           DrywallSound;                                            // 0x0410(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GroundSound;                                             // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           ElectricDevicesSound;                                    // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           OilBarrelSound;                                          // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           RockSound;                                               // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           FleshSound;                                              // 0x0438(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDecalData                                          DefaultDecal;                                            // 0x0440(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     DefaultFX;                                               // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           DefaultSound;                                            // 0x0458(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FHitResult                                          SurfaceHit;                                              // 0x0460(0x0088) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class USoundCue* GetImpactSound(EPhysicalSurface SurfaceType);
		class UParticleSystem* GetImpactFX(EPhysicalSurface SurfaceType);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePickup
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class ADFBasePickup : public AActor
	{
	public:
		unsigned char                                              UnknownData_KYMV[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bActive : 1;                                             // 0x0230(0x0001) BIT_FIELD Edit, BlueprintVisible, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P813[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseCharacter*                                    InvokingPawn;                                            // 0x0238(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DHMT[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseable : 1;                                            // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverlap : 1;                                            // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QW1L[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RespawnDelay;                                            // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           PickupSound;                                             // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdatePickupState(bool bNewActive);
		void RespawnPickup();
		void OnRespawn();
		void OnRep_Active();
		void OnPickup();
		void InitializePickup();
		void GivePickupTo(class ADFBaseCharacter* PickupOwner);
		bool CanBePickedUp(class ADFBaseCharacter* Invoker);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePickup_Health
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class ADFBasePickup_Health : public ADFBasePickup
	{
	public:
		float                                                      Health;                                                  // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJXK[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePickup_Item
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class ADFBasePickup_Item : public ADFBasePickup
	{
	public:
		class UDFInventoryComponent*                               Inventory;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePlayerCharacter
	 * Size -> 0x0060 (FullSize[0x0960] - InheritedSize[0x0900])
	 */
	class ADFBasePlayerCharacter : public ADFBaseCharacter
	{
	public:
		float                                                      BaseTurnRate;                                            // 0x0900(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseLookUpRate;                                          // 0x0904(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BZR4[0x4];                                   // 0x0908(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionDistance;                                     // 0x090C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFirstPerson : 1;                                        // 0x0910(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2BX9[0x7];                                   // 0x0911(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    Camera;                                                  // 0x0918(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpringArmComponent*                                 CameraBoom;                                              // 0x0920(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraComponent*                                    Camera1P;                                                // 0x0928(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartInFirstPerson : 1;                                 // 0x0930(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTrueFirstPerson : 1;                                    // 0x0930(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisableOrientationOfRotationToMovementInFirstPerson : 1; // 0x0930(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisableUsageOfControllerRotationYawInThirdPerson : 1;   // 0x0930(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BJ6D[0x7];                                   // 0x0931(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh1P;                                                  // 0x0938(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseFirstPersonMesh : 1;                                 // 0x0940(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FTIJ[0x3];                                   // 0x0941(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemAttachPoint1P;                                       // 0x0944(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I0FA[0x4];                                   // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerToggleFirstPerson;                               // 0x0950(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		void Use();
		void TurnAtRate(float Rate);
		void SwitchFireMode();
		void SetMeshVisibility(bool bFirstPersonVisibility);
		void ServerUse();
		void ServerOnToggleFirstPerson(bool bNewFirstPerson);
		class USkeletalMesh* ReceiveGetDefaultPawnMesh1P();
		void OnToggleFirstPerson(bool bNewFirstPerson);
		void OnFireReleased();
		void OnFirePressed();
		void MoveUp(float Value);
		void MoveRight(float Value);
		void MoveForward(float Value);
		void LookUpAtRate(float Rate);
		void JumpVaultPressed();
		bool IsUsingFirstPersonMesh();
		bool IsTrueFirstPerson();
		bool IsLocalFirstPerson();
		bool IsFirstPerson();
		class USkeletalMeshComponent* GetMesh1P();
		class FName GetItemAttachPoint1P();
		class USkeletalMesh* GetDefaultPawnMesh1P();
		class USpringArmComponent* GetCameraBoom();
		class UCameraComponent* GetCamera1P();
		class UCameraComponent* GetCamera();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePlayerController
	 * Size -> 0x0088 (FullSize[0x05F8] - InheritedSize[0x0570])
	 */
	class ADFBasePlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_F4OM[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPossessPawn;                                           // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnpossessPawn;                                         // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFRP[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseCharacter*                                    DFCharacter;                                             // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_70OJ[0x18];                                  // 0x05A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSetGameOnlyInputOnBeginPlay : 1;                        // 0x05C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_19V6[0x7];                                   // 0x05C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerTeamNumUpdated;                                  // 0x05C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerTeamStateUpdated;                                // 0x05D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ADFTeamState*                                        TeamState;                                               // 0x05E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatMsgLen;                                           // 0x05F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IPHO[0x4];                                   // 0x05F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void TeamSay(const class FString& Msg);
		void ServerTeamSay(const class FString& Msg);
		void ServerSay(const class FString& Msg);
		void ServerNotifyProjCSHit(class ADFBaseProjectile* HitProj, class APawn* HitProjDamageInstigator, const struct FCSHitInfo& HitInfo);
		void ServerEnableCheats();
		void ServerAdmin(const class FString& Cmd);
		void Say(const class FString& Msg);
		void ReceiveUnpossessPawn(class APawn* UnpossessedPawn);
		void ReceivePreClientTravel(const class FString& PendingURL, bool bIsSeamlessTravelWithRelativeTravelType);
		void ReceivePossessPawn(class APawn* NewPawn);
		void ReceivePlayerTeamStateUpdated(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
		void ReceivePlayerTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void ReceiveOnRepPlayerState();
		void ReceiveNewChatMsg(const struct FPlayerChatMsg& ChatMsg);
		void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
		void OnFireReleased();
		void OnFirePressed();
		bool IsServerAdministrator();
		bool IsGameInputAllowed();
		struct FTimerHandle GetUnFreezeTimerHandle();
		void ClientEnableCheats();
		void Admin(const class FString& Cmd);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePlayerState
	 * Size -> 0x0058 (FullSize[0x0378] - InheritedSize[0x0320])
	 */
	class ADFBasePlayerState : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_NY0J[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRepPlayerName;                                         // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerTeamNumUpdated;                                  // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0348(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              PrevTeamNum;                                             // 0x0349(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ACZ5[0x6];                                   // 0x034A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFTeamState*                                        TeamState;                                               // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADFTeamState*                                        PrevTeamState;                                           // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAdmin : 1;                                              // 0x0360(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KSZJ[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumKills;                                                // 0x0364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumAssists;                                              // 0x0368(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumDeaths;                                               // 0x036C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TeamStartTime;                                           // 0x0370(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R2UU[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetTeam(unsigned char NewTeamNum, bool bCopyToInactivePlayerState);
		void SetAdminStatus(bool bNewAdminStatus);
		void ScorePoints(float Points, bool bForceNetUpdate);
		void ScoreKillPlayer(class ADFBasePlayerState* Victim, float Points);
		void ScoreDeath(class ADFBasePlayerState* KilledBy, float Points);
		void ScoreAssistPlayer(class ADFBasePlayerState* Killer, class ADFBasePlayerState* Victim, float Points);
		void ReceiveOnRepPlayerName();
		void OnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate);
		void OnTeamNumUpdated(unsigned char TeamNumBeforeUpdate);
		void OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate);
		void OnRep_TeamNum(unsigned char TeamNumBeforeUpdate);
		void OnRep_NumKills(int32_t PrevNumKills);
		void OnRep_NumDeaths(int32_t PrevNumDeaths);
		void OnRep_NumAssists(int32_t PrevNumAssists);
		void OnRep_bAdmin(bool bAdminStatusBeforeUpdate);
		unsigned char GetTeam();
		unsigned char GetPreviousTeam();
		int32_t GetKills();
		int32_t GetDeaths();
		int32_t GetAssists();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseProjectile
	 * Size -> 0x0150 (FullSize[0x0370] - InheritedSize[0x0220])
	 */
	class ADFBaseProjectile : public AActor
	{
	public:
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ProjectileImpactFXClass;                                 // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          SpawnTransform;                                          // 0x0230(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             LastLoc;                                                 // 0x0260(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSpawnImpactFXOnHit : 1;                                 // 0x026C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShootable : 1;                                    // 0x026C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreInstigator : 1;                                   // 0x026C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreInstigatorOnPayloadActivation : 1;                // 0x026C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A54O[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         InstigatingController;                                   // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDebug : 1;                                              // 0x0278(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnProcessValidHit;                                       // 0x0279(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreInstigatorHitEventsOnly : 1;                      // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bProcessedAHit : 1;                                      // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClientSideHitDetectionEnabled : 1;                      // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClientSideHitDamageEnabled : 1;                         // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNotifyOfPredictedProjectileHits : 1;                    // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOnlyNotifyOfPredictedProjectileHits : 1;                // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9QPH[0x1];                                   // 0x027B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCSHitInfo                                          PendingHitInfo;                                          // 0x027C(0x0070) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OYF3[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ImpactedActor;                                           // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyDamageOnImpact : 1;                                // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyDamageOnBounceImpact : 1;                          // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyDamageToInstigator : 1;                            // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D3X1[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDFDamageParams                                     BaseDamageParams;                                        // 0x02FC(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              WeaponDamageTypeClass;                                   // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             RadialDamageOriginOffset;                                // 0x0318(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          RadialDamagePreventionChannel;                           // 0x0324(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWantsToUseClientSidePrediction : 1;                     // 0x0325(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReconcilePredictedProjWithServerProj : 1;               // 0x0325(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPredictedClientProjectile : 1;                          // 0x0325(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HA8E[0x2];                                   // 0x0326(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseProjectile*                                   MyPredictedClientProjectile;                             // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADFBaseProjectile*                                   ServerAuthoritativeProjectile;                           // 0x0330(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8QX4[0x31];                                  // 0x0338(0x0031) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FMulticastSparseDelegate                             OnTriggerPayload;                                        // 0x0369(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPayloadTriggered : 1;                                   // 0x036A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTriggerPayloadWhenStopped : 1;                          // 0x036A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTearOffOnPayloadActivation : 1;                         // 0x036A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisableOnPayloadActivation : 1;                         // 0x036A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4N5U[0x5];                                   // 0x036B(0x0005) MISSED OFFSET (PADDING)

	public:
		void TriggerPayload(const struct FHitResult& ImpactHitResult, bool bFromTearOff);
		void SpawnImpactFX(const struct FHitResult& Impact);
		void SetProjectileUpdatedComponent(class USceneComponent* NewProjectileUpdatedComponent);
		void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
		void ProjectileStop(const struct FHitResult& ImpactResult);
		void ProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		bool K2_ShouldIgnoreHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult);
		void K2_PostProcessValidHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FHitResult& HitResult, bool bFromCSHitNotify);
		void IgnoreInstigatorWhenMoving(bool bShouldIgnore, bool bBidirectional);
		bool HasValidPredictedClientProjectile();
		class UPrimitiveComponent* GetProjectileUpdatedPrimitive();
		class USceneComponent* GetProjectileUpdatedComponent();
		class ADFBaseWeapon* GetOwningWeapon();
		class UClass* GetImpactFXClass();
		struct FDFDamageParams GetAdjustedDamageParams(class AActor* OtherActor, const struct FVector& HitLocation);
		void DisableAndDeferDestroy();
		float ApplyDamageToImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseProjectileLegacy
	 * Size -> 0x0120 (FullSize[0x0340] - InheritedSize[0x0220])
	 */
	class ADFBaseProjectileLegacy : public AActor
	{
	public:
		class UPrimitiveComponent*                                 ProjectileCollision;                                     // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ProjectileImpactFXClass;                                 // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9FHN[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0240(0x0030) Edit, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             LastLoc;                                                 // 0x0270(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bListenForImpactEvents : 1;                              // 0x027C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreInstigator : 1;                                   // 0x027C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PO6K[0x3];                                   // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         InstigatingController;                                   // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ActiveLifeSpan;                                          // 0x0288(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VZRS[0xC];                                   // 0x028C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WeaponDamageTypeClass;                                   // 0x0298(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDebug : 1;                                              // 0x02A0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyDamageFromPayload : 1;                             // 0x02A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KLVA[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitDamage;                                               // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyRadialDamage : 1;                                  // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I46D[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RadialDamageLocOffset;                                   // 0x02AC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          RadialDamagePreventionChannel;                           // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2CYX[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageRadius;                                            // 0x02BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPayloadTriggered : 1;                                   // 0x02C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTriggerPayloadWhenStopped : 1;                          // 0x02C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTriggerPayloadOnDelay : 1;                              // 0x02C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IC8T[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PayloadTriggerDelay;                                     // 0x02C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     PayloadTriggerFX;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAttachTriggerFXToRoot : 1;                              // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MT8L[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            TriggerFXPSC;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundBase*                                          PayloadTriggerSnd;                                       // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAttachTriggerSndToRoot : 1;                             // 0x02E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UK6W[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     TriggerSnd;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3WQD[0x48];                                  // 0x02F8(0x0048) MISSED OFFSET (PADDING)

	public:
		void TriggerPayload(const struct FHitResult& ImpactHitResult);
		void StopSimulatingPayloadActivation();
		void SpawnImpactFX(const struct FHitResult& Impact);
		void SimulatePayloadActivation();
		void ReceiveStopSimulatingPayloadActivation();
		void ReceiveSimulatePayloadActivation();
		void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
		void ProjectileStop(const struct FHitResult& ImpactResult);
		void ProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void PayloadDelayElapsed();
		void OnRep_bPayloadTriggered();
		class ADFBaseWeapon* GetOwningWeapon();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBlueprintFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFBlueprintFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WasShotFired(const struct FRepShotInfo& Counter, const struct FRepShotInfo& OtherCounter);
		void STATIC_TransferInventoryItems(class UDFInventoryComponent* FromInv, class UDFInventoryComponent* ToInv, bool bKeepLoadedAmmo);
		bool STATIC_TextIsEmptyOrWhitespace(const class FText& InText);
		class ADFBaseImpactEffect* STATIC_SpawnImpactFXFromHitResult(class UObject* WorldContextObject, class UClass* ImpactClass, const struct FHitResult& Impact);
		class ADFBaseImpactEffect* STATIC_SpawnImpactFXFromDamageEvent(class UObject* WorldContextObject, class UClass* ImpactClass, float DamageTaken, const struct FDamageEvent& DamageEvent, class AActor* HitActor, class AActor* HitInstigator, class AActor* DamageCauser);
		void STATIC_SetTeamNum(class AActor* Target, unsigned char NewTeamNum);
		void STATIC_SetStartSpot(class AController* Controller, class AActor* NewStartSpot);
		void STATIC_SetNetAddressable(class UActorComponent* ActorComp);
		void STATIC_ResetPlayerVoiceTalker(class APlayerState* InPlayerState);
		void STATIC_ResetAllPlayerVoiceTalkers();
		void STATIC_PrintTextToLog(class UObject* WorldContextObject, const class FText& InText, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
		void STATIC_PrintStringToLog(class UObject* WorldContextObject, const class FString& inString, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
		bool STATIC_IsVOIPTalkerStillAlive(class UVOIPTalker* InTalker);
		bool STATIC_IsValidActor(class AActor* Actor);
		bool STATIC_IsPlayInEditor(class UObject* WorldContextObject);
		bool STATIC_IsPlayerTalking(class APlayerState* PlayerPS);
		bool STATIC_IsPlayerMuted(class APlayerController* PC, class APlayerState* PSToCheck);
		bool STATIC_IsPendingKillPending(class AActor* Actor);
		bool STATIC_IsLocallyPlayerControlled(class APawn* Pawn);
		bool STATIC_IsEmptyOrWhitespace(const class FString& inString);
		bool STATIC_HasOptions(const class FString& Options, TArray<class FString> Keys, bool bMatchAll);
		bool STATIC_HasFiringStopped(const struct FRepShotInfo& Counter);
		class AWorldSettings* STATIC_GetWorldSettings(class UObject* WorldContextObject);
		class UVOIPTalker* STATIC_GetVOIPTalkerForPlayer(class APlayerState* InPlayerState);
		ESlateVisibility STATIC_GetVisibilityDefault(class UWidget* Widget);
		class ADFTeamState* STATIC_GetTeamStateFromTeamId(class UObject* WorldContextObject, unsigned char TeamIdNum);
		unsigned char STATIC_GetTeamNum(class AActor* Target);
		struct FVector STATIC_GetTargetLocation(class AActor* Actor, class AActor* RequestedBy);
		class FName STATIC_GetSurfaceName(EPhysicalSurface SurfaceType);
		class AActor* STATIC_GetStartSpot(class AController* Controller);
		int32_t STATIC_GetShotCounterBPCompat(const struct FRepShotInfo& Counter);
		class FString STATIC_GetPluginFriendlyName(const class FString& PluginName);
		int32_t STATIC_GetNumShotsFiredBPCompat(const struct FRepShotInfo& Counter, const struct FRepShotInfo& PreviousCounter);
		class FText STATIC_GetMapNameForDisplay(class UObject* WorldContextObject);
		class FString STATIC_GetMapName(class UObject* WorldContextObject);
		bool STATIC_GetMapAssetVisibleInMapSelectUI(const struct FPrimaryAssetId& WorldAssetId, bool* bOutVisibleInMapSelectUI);
		bool STATIC_GetMapAssetSupportedGameModes(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetPreviewImg(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetPreviewBannerImg(const struct FPrimaryAssetId& WorldAssetId);
		class FText STATIC_GetMapAssetNameForDisplay(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetGameRulesetClasses(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetDescription(const struct FPrimaryAssetId& WorldAssetId, class FString* OutMapDescription);
		bool STATIC_GetMapAssetDefaultGameMode(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetDataSupportedGameModes(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataPreviewImg(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataPreviewBannerImg(const struct FAssetData& WorldAsset);
		class FText STATIC_GetMapAssetDataNameForDisplay(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataGameRulesetClasses(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataDisplayName(const struct FAssetData& WorldAsset, class FText* OutMapDisplayName);
		bool STATIC_GetMapAssetDataDescription(const struct FAssetData& WorldAsset, class FString* OutMapDescription);
		bool STATIC_GetMapAssetDataDefaultGameMode(const struct FAssetData& WorldAsset);
		class FString STATIC_GetGlobalDefaultGameMode();
		class FString STATIC_GetGameVersion();
		class FText STATIC_GetGameNameForDisplay(class UObject* WorldContextObject);
		class FString STATIC_GetGameModeForName(const class FString& GameModeName);
		class FString STATIC_GetGameModeForMapName(const class FString& MapName);
		class FString STATIC_GetGameDefaultMap();
		class FString STATIC_GetGameBuildInfo();
		struct FVector STATIC_GetFocalPoint(class AActor* Actor);
		void STATIC_GetDefaultBoundingCylinder(class AActor* Actor, float* CylinderRadius, float* CylinderHalfHeight);
		class FString STATIC_GetCopyrightNotice();
		TArray<class FString> STATIC_GetAllMapNames();
		void STATIC_GameHasEnded(class AController* Controller, class AActor* EndGameFocus, bool bIsWinner);
		void STATIC_FlushPressedKeys(class APlayerController* PC);
		struct FPrimaryAssetId STATIC_FindMapIdByDisplayName(const class FText& MapDisplayName, TArray<struct FPrimaryAssetId> MapIds);
		bool STATIC_EqualEqual_WeaponSoundCollection(const struct FWeaponSoundCollection& A, const struct FWeaponSoundCollection& B);
		bool STATIC_EqualEqual_WeaponAnimSequence(const struct FWeaponAnimSequence& A, const struct FWeaponAnimSequence& B);
		bool STATIC_EqualEqual_WeaponAnimMontage(const struct FWeaponAnimMontage& A, const struct FWeaponAnimMontage& B);
		bool STATIC_EqualEqual_WeaponAnimCollection(const struct FWeaponAnimCollection& A, const struct FWeaponAnimCollection& B);
		bool STATIC_EqualEqual_WeaponAnim(const struct FWeaponAnim& A, const struct FWeaponAnim& B);
		bool STATIC_EqualEqual_PerspectiveSound(const struct FPerspectiveSound& A, const struct FPerspectiveSound& B);
		bool STATIC_EqualEqual_PerspectiveAnimSequence(const struct FPerspectiveAnimSequence& A, const struct FPerspectiveAnimSequence& B);
		bool STATIC_EqualEqual_PerspectiveAnim(const struct FPerspectiveAnim& A, const struct FPerspectiveAnim& B);
		bool STATIC_EqualEqual_CharacterSoundCollection(const struct FCharacterSoundCollection& A, const struct FCharacterSoundCollection& B);
		bool STATIC_EqualEqual_CharacterAnimCollection(const struct FCharacterAnimCollection& A, const struct FCharacterAnimCollection& B);
		bool STATIC_DoesMapIDSupportGMDefinition(const struct FPrimaryAssetId& MapId, class UDFGameModeDefinition* GMDef);
		bool STATIC_CharacterVariationIsValid(const struct FDFCharacterVariationDataHandle& VariationData);
		struct FDFCharacterVariationData STATIC_CharacterVariationGetData(const struct FDFCharacterVariationDataHandle& VariationData);
		struct FDFCharacterVariationDataHandle STATIC_CharacterVariationDataFromTableRow(class UObject* WorldContextObject, const struct FDataTableRowHandle& RowHandle);
		void STATIC_Array_UInt8Sort(TArray<unsigned char>* ArrayToSort, bool bDescending);
		void STATIC_Array_TextSort(TArray<class FText>* ArrayToSort, bool bDescending);
		void STATIC_Array_StringSort(TArray<class FString>* ArrayToSort, bool bDescending);
		void STATIC_Array_Reverse(TArray<int32_t> TargetArray);
		void STATIC_Array_NameSort(TArray<class FName>* ArrayToSort, bool bDescending);
		void STATIC_Array_Int64Sort(TArray<int64_t>* ArrayToSort, bool bDescending);
		void STATIC_Array_Int32Sort(TArray<int32_t>* ArrayToSort, bool bDescending);
		void STATIC_Array_FloatSort(TArray<float>* ArrayToSort, bool bDescending);
		void STATIC_Array_AssetDescriptorSort(TArray<struct FAssetDescriptor>* ArrayToSort, bool bDescending, bool bCompareDisplayText);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFCharacterLeanHandler
	 * Size -> 0x0258 (FullSize[0x0280] - InheritedSize[0x0028])
	 */
	class UDFCharacterLeanHandler : public UObject
	{
	public:
		struct FRuntimeFloatCurve                                  StationaryStandLeanCurve;                                // 0x0028(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  MobileStandLeanCurve;                                    // 0x00B0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  StationaryCrouchLeanCurve;                               // 0x0138(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  MobileCrouchLeanCurve;                                   // 0x01C0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      LeanTransitionSpeed;                                     // 0x0248(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StandLeanInYOffset;                                      // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrouchLeanInYOffset;                                     // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanRollAmount;                                          // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELeanDirection                                             LeanDirection;                                           // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JIDM[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanTarget;                                              // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAtFullLeanTarget : 1;                                   // 0x0260(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJ4L[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanAmount;                                              // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BOY[0x18];                                  // 0x0268(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateLeanDirection(ELeanDirection NewLeanDir);
		void ReceiveTick(float DeltaTime);
		void ReceiveReset();
		bool IsMoving();
		bool IsLeaning();
		ECharacterStance GetStance();
		ECharacterStance GetPreviousStance();
		class UDFCharacterMovementComponent* GetOwningCharacterMovement();
		class ADFBaseCharacter* GetOwningCharacter();
		float GetMaxLeanXOffset(ELeanDirection NewLeanDir, ECharacterStance LeanStance, bool bMoving);
		float GetLeanYOffset(float DesiredLeanAmt);
		float GetLeanXOffset(float DesiredLeanAmt);
		float GetLeanRollRot(float DesiredLeanAmt);
		float DetermineLeanTargetAmount(ELeanDirection DesiredLeanDir, bool bMoving);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFCharacterMovementComponent
	 * Size -> 0x0140 (FullSize[0x0750] - InheritedSize[0x0610])
	 */
	class UDFCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		class ADFBaseCharacter*                                    DFCharacterOwner;                                        // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMovementMode                                              LastMovementMode;                                        // 0x0618(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              LastCustomMovementMode;                                  // 0x0619(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8TQT[0x2];                                   // 0x061A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         StandWalkSpeedMultiplierRange;                           // 0x061C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         CrouchedWalkSpeedMultiplierRange;                        // 0x062C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         ProneWalkSpeedMultiplierRange;                           // 0x063C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeanSpeedMultiplier;                                     // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLeanSpeedMultiplierWhileAiming : 1;                  // 0x0650(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCrouchWhileFalling : 1;                              // 0x0650(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ9Y[0x3];                                   // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseJumpStamina : 1;                                     // 0x0654(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OD3B[0x3];                                   // 0x0655(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpMaxStamina;                                          // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpStaminaCost;                                         // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpStaminaRecoveryRate;                                 // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpStaminaThreshold;                                    // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        VaultOverVelocityCurve;                                  // 0x0668(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        SprintVaultOverVelocityCurve;                            // 0x0670(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        ClimbOntoVelocityCurve;                                  // 0x0678(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        SprintClimbOntoVelocityCurve;                            // 0x0680(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultViewPitch;                                          // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultReachDistance;                                      // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintVaultReachDistance;                                // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultReachRadius;                                        // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultCapsuleLOSRadius;                                   // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVaultObstacleVelocitySquared;                         // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultOverDisplacementXOffset;                            // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbOntoDisplacementXOffset;                            // 0x06A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultOverDisplacementZOffset;                            // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbOntoDisplacementZOffset;                            // 0x06AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultOverLedgeSurfaceThreshold;                          // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbOntoLedgeSurfaceThreshold;                          // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinVaultOverLedgeHeight;                                 // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVaultOverLedgeHeight;                                 // 0x06BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinClimbOntoLedgeHeight;                                 // 0x06C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxClimbOntoLedgeHeight;                                 // 0x06C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToSprint : 1;                                      // 0x06C8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHIF[0x3];                                   // 0x06C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintSpeedMultiplier;                                   // 0x06CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintAccelerationMultiplier;                            // 0x06D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStrafingThreshold;                                 // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSprintStamina : 1;                                   // 0x06D8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYJR[0x3];                                   // 0x06D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintMaxStamina;                                        // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaDelta;                                      // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThreshold;                                  // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToAim : 1;                                         // 0x06E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA1F[0x3];                                   // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimSpeedMultiplier;                                      // 0x06EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToLeanLeft : 1;                                    // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToLeanRight : 1;                                   // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZB9Y[0x3];                                   // 0x06F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProneHalfHeight;                                         // 0x06F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanWalkOffLedgesWhenProne : 1;                          // 0x06F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProneMaintainsBaseLocation : 1;                         // 0x06F8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0H2[0x3];                                   // 0x06F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWalkSpeedProne;                                       // 0x06FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToBeProne : 1;                                     // 0x0700(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSwimUnderwater : 1;                                  // 0x0700(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAUP[0x3];                                   // 0x0701(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpStamina;                                             // 0x0704(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanSprint : 1;                                          // 0x0708(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UELO[0x3];                                   // 0x0709(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintStamina;                                           // 0x070C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanAim : 1;                                             // 0x0710(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLean : 1;                                            // 0x0710(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeProne : 1;                                         // 0x0710(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanVault : 1;                                           // 0x0710(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFQ4[0x2F];                                  // 0x0711(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bJustLeftWater : 1;                                      // 0x0740(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_97Z2[0xF];                                   // 0x0741(0x000F) MISSED OFFSET (PADDING)

	public:
		struct FDFVaultTraceResult VaultTrace();
		bool IsVaulting();
		bool IsStrafing(float Threshold);
		bool IsStanding();
		bool IsSprinting();
		bool IsReloading();
		bool IsProne();
		bool IsMovingForward();
		bool IsMoving(bool bIgnoreZVel);
		bool IsLeaning();
		bool IsCrawling();
		bool IsAlive();
		bool IsAiming();
		ECharacterStance GetStance();
		ECharacterStance GetPreviousStance();
		ELeanDirection GetLeanDirection();
		float GetLeanAmount();
		class ADFBaseCharacter* GetDFCharacterOwner();
		float ClampSpeedMultiplier(float MultValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UDFCheatManager : public UCheatManager
	{
	public:
		void ToggleItemDebug();
		void ToggleGunRecoil();
		void ToggleGunInfiniteClipAmmo();
		void ToggleGunInfiniteAmmo();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFDamageType
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UDFDamageType : public UDamageType
	{
	public:
		class UClass*                                              ImpactFXClass;                                           // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPrimaryDataAsset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDFPrimaryDataAsset : public UPrimaryDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFFactionInfo
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UDFFactionInfo : public UDFPrimaryDataAsset
	{
	public:
		struct FPrimaryAssetType                                   FactionType;                                             // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                FactionName;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVisibleInFactionSelectUI : 1;                           // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_606A[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                DisplayNameShort;                                        // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                DisplayNameAcronym;                                      // 0x0078(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFFunctionLibrary : public UObject
	{
	public:
		void STATIC_SetEnableAutoBlendOutForActiveMontage(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* AnimSourceMesh, bool bNewEnableAutoBlendOut);
		void STATIC_ClearMeshAnimInstance(class USkeletalMeshComponent* MeshToClear);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGameEngine
	 * Size -> 0x0000 (FullSize[0x0E30] - InheritedSize[0x0E30])
	 */
	class UDFGameEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGameModeDefinition
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UDFGameModeDefinition : public UPrimaryDataAsset
	{
	public:
		bool                                                       bSupportsAllMaps;                                        // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDG3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpecificMapsToSupport[0x50];                             // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bShowInFrontEnd;                                         // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61J5[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0090(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x00A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, NativeAccessSpecifierPublic
		unsigned char                                              PreviewBannerImg[0x28];                                  // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGameRulesetBase
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDFGameRulesetBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_RDJA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTickable : 1;                                           // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NWV[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		int32_t                                                    Priority;                                                // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CW3Y[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		void UnregisterActor(class AActor* UnregisteredActor);
		void RegisterActor(class AActor* RegisteredActor);
		void ReceiveTick(float DeltaTime);
		void PlayerWounded(class AController* Victim, float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void PlayerSuicide(class AController* Victim);
		void PlayerSpawn(class AController* Player, class APawn* NewPlayerPawn);
		void PlayerPostLogout(class AController* ExitingPlayer);
		void PlayerPostLogin(class APlayerController* NewPlayer);
		void PlayerKilled(class AController* Killer, class AController* Victim);
		void PlayerJoinedTeam(class AController* JoiningPlayer, unsigned char TeamNum);
		void PlayerJoined(class APlayerController* NewPlayer);
		void PlayerDied(class AController* Victim);
		void MatchHasEnded();
		void Init();
		class ADFBaseGameState* GetGameState();
		class ADFBaseGameMode* GetGameMode();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGameSession
	 * Size -> 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
	 */
	class ADFGameSession : public AGameSession
	{
	public:
		class FString                                              ServerName;                                              // 0x0238(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_71M1[0x10];                                  // 0x0248(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinPlayers;                                              // 0x0258(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MRP1[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Password;                                                // 0x0260(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGunRecoilHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFGunRecoilHandler : public UObject
	{
	public:
		void OnWeaponStopFire();
		void OnWeaponStartFire();
		void OnWeaponFire();
		void OnTick(float DeltaTime);
		bool IsFiring();
		class APawn* GetOwningPawn();
		class ADFBaseGun* GetOwningGun();
		struct FVector GetConeOfFireOffset();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFHandlerInterface : public UInterface
	{
	public:
		void EventUpdate(float DeltaTime, bool bMakeDecision);
		bool EventShouldUpdateThisFrame(float DeltaTime, bool bActiveAndSpawnedInWorld);
		void EventRespawn();
		void EventReset();
		void EventOnNewPawn(class APawn* NewPawn, class APawn* PreviousPawn);
		void EventInit();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFInfo
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ADFInfo : public AInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFIntrinsicCharAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFIntrinsicCharAnimInstInterface : public UInterface
	{
	public:
		float PlayDeathMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFIntrinsicWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFIntrinsicWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
		float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
		float PlayEquipMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFInventoryComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UDFInventoryComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnItemAdded;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemRemoved;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic
		TArray<class ADFBaseItem*>                                 Items;                                                   // 0x00D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      DefaultItemClasses;                                      // 0x00E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		int32_t Size();
		bool RemoveItemAt(int32_t Index, class ADFBaseItem** OutRemovedItem, bool bDestroyItem);
		bool Remove(class ADFBaseItem* Item, bool bDestroyItem);
		bool IsValidIndex(int32_t Index);
		bool GetItem(int32_t Index, class ADFBaseItem** OutItem);
		bool FindItemByClass(class UClass* ItemClass, class ADFBaseItem** OutItem);
		bool Find(class ADFBaseItem* ItemToCompare, int32_t* OutIndex);
		void Clear(bool bDestroyItems);
		void AddDefaultInventoryItems();
		bool Add(class ADFBaseItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFLevelScriptActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ADFLevelScriptActor : public ALevelScriptActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFLoadout
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDFLoadout : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      ItemClasses;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFNavigationSystem
	 * Size -> 0x0000 (FullSize[0x0538] - InheritedSize[0x0538])
	 */
	class UDFNavigationSystem : public UNavigationSystemV1
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFNavigationSystemConfig
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UDFNavigationSystemConfig : public UNavigationSystemModuleConfig
	{
	public:
		bool                                                       bGenerateNavigationOnlyAroundNavigationInvokers : 1;     // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IF48[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFNetworkEventSubsystem
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UDFNetworkEventSubsystem : public UWorldSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnPlayersUpdatedDynamic;                                 // 0x0030(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnTeamsUpdatedDynamic;                                   // 0x0040(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GU8P[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnGameStateEventDynamic__DelegateSignature(class AGameStateBase* GameState);
		class UDFNetworkEventSubsystem* STATIC_Get(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFOnlineSessionClient
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UDFOnlineSessionClient : public UOnlineSessionClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPhysicalMaterial
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UDFPhysicalMaterial : public UPhysicalMaterial
	{
	public:
		class UParticleSystem*                                     CollisionFX;                                             // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           CollisionSound;                                          // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPhysicsCollisionHandler
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDFPhysicsCollisionHandler : public UPhysicsCollisionHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPlayerCameraManager
	 * Size -> 0x0004 (FullSize[0x2740] - InheritedSize[0x273C])
	 */
	class ADFPlayerCameraManager : public APlayerCameraManager
	{
	public:
		float                                                      AimInterpSpeed;                                          // 0x273C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPlayerComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UDFPlayerComponent : public UActorComponent
	{
	public:
		class AController*                                         ControllerOwner;                                         // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWantsToRestart : 1;                                     // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W511[0xF];                                   // 0x00B9(0x000F) MISSED OFFSET (PADDING)

	public:
		void RestartPlayer();
		void ReceiveSeamlessTravelToCommon(class AController* NewC, class UDFPlayerComponent* NewCPlayerComp);
		void ReceiveSeamlessTravelFromCommon(class AController* OldC, class UDFPlayerComponent* OldCPlayerComp);
		void ReceivePawnLeavingGame();
		void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
		bool IsPendingRestart();
		class ADFTeamState* GetTeamState();
		class APlayerState* GetPlayerState();
		class APawn* GetPawnOwner();
		float GetMinRestartDelay();
		bool CanRestartPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFProjectileGISubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDFProjectileGISubsystem : public UGameInstanceSubsystem
	{
	public:
		TArray<class ADFBaseProjectile*>                           PredictedProjectiles;                                    // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFRecastNavMesh
	 * Size -> 0x0000 (FullSize[0x04B8] - InheritedSize[0x04B8])
	 */
	class ADFRecastNavMesh : public ARecastNavMesh
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFReplInfo
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ADFReplInfo : public ADFInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFServerAdminSubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDFServerAdminSubsystem : public UEngineSubsystem
	{
	public:
		TArray<class UDFCfgDataManager*>                           DataMgrs;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFSingleActionWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFSingleActionWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayActionMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFSingleLoadWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFSingleLoadWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayStartReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayEndReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTableLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFTableLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_GetRowInvFromIndex(int32_t Index, int32_t TableHeight);
		int32_t STATIC_GetRowFromIndex(int32_t Index, int32_t TableWidth);
		int32_t STATIC_GetIndexFromRowColumnPair(int32_t Row, int32_t Column, int32_t TableWidth);
		int32_t STATIC_GetIndexFromColumnRowPair(int32_t Column, int32_t Row, int32_t TableHeight);
		int32_t STATIC_GetColumnInvFromIndex(int32_t Index, int32_t TableHeight);
		int32_t STATIC_GetColumnFromIndex(int32_t Index, int32_t TableWidth);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTeamAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFTeamAgentInterface : public UGenericTeamAgentInterface
	{
	public:
		void EventSetTeamNum(unsigned char NewTeamNum);
		unsigned char EventGetTeamNum();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTeamDefinition
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDFTeamDefinition : public UObject
	{
	public:
		class FName                                                TeamName;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              FactionInfoClass[0x28];                                  // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTeamState
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class ADFTeamState : public AInfo
	{
	public:
		unsigned char                                              UnknownData_5KKE[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInitialized : 1;                                        // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U0PX[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FactionInfoClass;                                        // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              TeamNum;                                                 // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T38S[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPostInitTeam;                                          // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ReceivePostInitTeam();
		void ReceiveInitTeam(class UDFTeamDefinition* InTeamDef);
		bool IsReadyToInitialize();
		bool IsPendingSetupBP();
		class UDFFactionInfo* GetFactionInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFThrowableWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFThrowableWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayThrowUnderhandMontage(class UAnimMontage* MontageToPlay);
		float PlayThrowOverhandMontage(class UAnimMontage* MontageToPlay);
		float PlayCockMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTokenStore
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UDFTokenStore : public UDFCfgDataManager
	{
	public:
		unsigned char                                              UnknownData_91UF[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFWorldSettings
	 * Size -> 0x0128 (FullSize[0x04C8] - InheritedSize[0x03A0])
	 */
	class ADFWorldSettings : public AWorldSettings
	{
	public:
		bool                                                       bVisibleInMapSelectUI : 1;                               // 0x03A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XKN9[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MapDisplayName;                                          // 0x03A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		class FText                                                MapDescription;                                          // 0x03C0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              MapPreviewImg[0x28];                                     // 0x03D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MapPreviewBannerImg[0x28];                               // 0x0400(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SupportedGameModes[0x50];                                // 0x0428(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              GameRulesetClasses[0x50];                                // 0x0478(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.GameSessionBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameSessionBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveAdmin(class UObject* WorldContextObj, class APlayerController* AdminPlayer);
		int32_t STATIC_GetMinPlayers(class UObject* WorldContextObj);
		int32_t STATIC_GetMaxSpectators(class UObject* WorldContextObj);
		int32_t STATIC_GetMaxPlayers(class UObject* WorldContextObj);
		void STATIC_AddAdmin(class UObject* WorldContextObj, class APlayerController* AdminPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.SpawnPointProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnPointProviderInterface : public UInterface
	{
	public:
		bool GetSpawnPointCollisionHandlingOverrideBP(const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod);
		int32_t GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints);
		bool FindSpawnPointBP(int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint);
		bool CanSpawnActorFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass);
		bool CanRestartPlayerFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.SpawnPointStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnPointStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SpawnPointExists(class UObject* Target, int32_t SpawnPointID);
		bool STATIC_GetSpawnPointCollisionHandlingOverride(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod);
		int32_t STATIC_GetAllSpawnPointTransforms(class UObject* Target, TArray<struct FTransform>* SpawnPointTransforms);
		int32_t STATIC_GetAllSpawnPoints(class UObject* Target, TArray<struct FSpawnPointDef>* SpawnPoints);
		bool STATIC_FindSpawnPoint(class UObject* Target, int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint);
		bool STATIC_CanSpawnActorFromSpawnPoint(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass);
		bool STATIC_CanSpawnActorFromAnySpawnPoint(class UObject* Target, class UClass* SpawnActorClass);
		bool STATIC_CanRestartPlayerFromSpawnPoint(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass);
		bool STATIC_CanRestartPlayerFromAnySpawnPoint(class UObject* Target, class AController* Player, class UClass* PlayerPawnClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.UseableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUseableInterface : public UInterface
	{
	public:
		void Used(class AActor* Invoker);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.VisibilityInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisibilityInterface : public UInterface
	{
	public:
		struct FVector EventGetFocalPoint();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
