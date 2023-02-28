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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ClearOwnerData
	 */
	struct UBP_HDScopeComponentBase_C_ClearOwnerData_Params
	{	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.SetupOwnerData
	 */
	struct UBP_HDScopeComponentBase_C_SetupOwnerData_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B80P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.LoadDefaults
	 */
	struct UBP_HDScopeComponentBase_C_LoadDefaults_Params
	{
	public:
		bool                                                       IsPlayerDead;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PN25[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.SaveDefaults
	 */
	struct UBP_HDScopeComponentBase_C_SaveDefaults_Params
	{	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.Init
	 */
	struct UBP_HDScopeComponentBase_C_Init_Params
	{	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ScopeEffect
	 */
	struct UBP_HDScopeComponentBase_C_ScopeEffect_Params
	{	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.CanScope
	 */
	struct UBP_HDScopeComponentBase_C_CanScope_Params
	{
	public:
		bool                                                       CanScope;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K4TH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.GetData
	 */
	struct UBP_HDScopeComponentBase_C_GetData_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerController*                                 Controller;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDFCharacterMovementComponent*                       Movement;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFPlayerCameraManager*                              Camera;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HDWeaponBase_C*                                  Parent;                                                  // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMeshComponent*                                      WeaponMesh;                                              // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UBP_HDScopeComponentBase_C*>                  ParentSightList;                                         // 0x0038(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
		TArray<class UMaterialInstanceDynamic*>                    FirstPersonMatArray;                                     // 0x0048(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<class UMaterialInstanceDynamic*>                    ThirdPersonMatArray;                                     // 0x0058(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimOut
	 */
	struct UBP_HDScopeComponentBase_C_AimOut_Params
	{	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimIn
	 */
	struct UBP_HDScopeComponentBase_C_AimIn_Params
	{	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimTransition
	 */
	struct UBP_HDScopeComponentBase_C_AimTransition_Params
	{
	public:
		bool                                                       bIsStartTransition;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimStyle
	 */
	struct UBP_HDScopeComponentBase_C_AimStyle_Params
	{
	public:
		class AHDPlayerCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDWeaponAimStyle                                          NewAimStyle;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDWeaponAimStyle                                          PrevAimStyle;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromPlayerInput;                                        // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.DeathEvent
	 */
	struct UBP_HDScopeComponentBase_C_DeathEvent_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IL6A[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ItemChanged
	 */
	struct UBP_HDScopeComponentBase_C_ItemChanged_Params
	{
	public:
		class ADFBaseCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         NewEquippedItem;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         PrevEquippedItem;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ChangeSights
	 */
	struct UBP_HDScopeComponentBase_C_ChangeSights_Params
	{	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ReceiveTick
	 */
	struct UBP_HDScopeComponentBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.EventActivated
	 */
	struct UBP_HDScopeComponentBase_C_EventActivated_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReset;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.EventDeactivated
	 */
	struct UBP_HDScopeComponentBase_C_EventDeactivated_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.BindEvents
	 */
	struct UBP_HDScopeComponentBase_C_BindEvents_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HDWeaponBase_C*                                  NewWeapon;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.UnbindEvents
	 */
	struct UBP_HDScopeComponentBase_C_UnbindEvents_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         OldCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HDWeaponBase_C*                                  OldWeapon;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ExecuteUbergraph_BP_HDScopeComponentBase
	 */
	struct UBP_HDScopeComponentBase_C_ExecuteUbergraph_BP_HDScopeComponentBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2LR5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
