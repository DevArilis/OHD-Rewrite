/**
 * Name: Operation__Harsh_Doorstop
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ClearOwnerData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDScopeComponentBase_C::ClearOwnerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ClearOwnerData");
		
		UBP_HDScopeComponentBase_C_ClearOwnerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.SetupOwnerData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDScopeComponentBase_C::SetupOwnerData(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.SetupOwnerData");
		
		UBP_HDScopeComponentBase_C_SetupOwnerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.LoadDefaults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlayerDead                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDScopeComponentBase_C::LoadDefaults(bool IsPlayerDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.LoadDefaults");
		
		UBP_HDScopeComponentBase_C_LoadDefaults_Params params {};
		params.IsPlayerDead = IsPlayerDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.SaveDefaults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDScopeComponentBase_C::SaveDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.SaveDefaults");
		
		UBP_HDScopeComponentBase_C_SaveDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.Init
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDScopeComponentBase_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.Init");
		
		UBP_HDScopeComponentBase_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ScopeEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDScopeComponentBase_C::ScopeEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ScopeEffect");
		
		UBP_HDScopeComponentBase_C_ScopeEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.CanScope
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanScope                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDScopeComponentBase_C::CanScope(bool* CanScope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.CanScope");
		
		UBP_HDScopeComponentBase_C_CanScope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanScope != nullptr)
			*CanScope = params.CanScope;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.GetData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerController*                         Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDFCharacterMovementComponent*               Movement                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFPlayerCameraManager*                      Camera                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDWeaponBase_C*                          Parent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      CharacterMesh                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMeshComponent*                              WeaponMesh                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UBP_HDScopeComponentBase_C*>          ParentSightList                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInstanceDynamic*>            FirstPersonMatArray                                        (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInstanceDynamic*>            ThirdPersonMatArray                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::GetData(class ABP_HDPlayerCharacterBase_C** Character, class AHDPlayerController** Controller, class UDFCharacterMovementComponent** Movement, class ADFPlayerCameraManager** Camera, class ABP_HDWeaponBase_C** Parent, class USkeletalMeshComponent** CharacterMesh, class UMeshComponent** WeaponMesh, TArray<class UBP_HDScopeComponentBase_C*>* ParentSightList, TArray<class UMaterialInstanceDynamic*>* FirstPersonMatArray, TArray<class UMaterialInstanceDynamic*>* ThirdPersonMatArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.GetData");
		
		UBP_HDScopeComponentBase_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
		if (Controller != nullptr)
			*Controller = params.Controller;
		if (Movement != nullptr)
			*Movement = params.Movement;
		if (Camera != nullptr)
			*Camera = params.Camera;
		if (Parent != nullptr)
			*Parent = params.Parent;
		if (CharacterMesh != nullptr)
			*CharacterMesh = params.CharacterMesh;
		if (WeaponMesh != nullptr)
			*WeaponMesh = params.WeaponMesh;
		if (ParentSightList != nullptr)
			*ParentSightList = params.ParentSightList;
		if (FirstPersonMatArray != nullptr)
			*FirstPersonMatArray = params.FirstPersonMatArray;
		if (ThirdPersonMatArray != nullptr)
			*ThirdPersonMatArray = params.ThirdPersonMatArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimOut
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDScopeComponentBase_C::AimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimOut");
		
		UBP_HDScopeComponentBase_C_AimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimIn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDScopeComponentBase_C::AimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimIn");
		
		UBP_HDScopeComponentBase_C_AimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimTransition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsStartTransition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDScopeComponentBase_C::AimTransition(bool bIsStartTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimTransition");
		
		UBP_HDScopeComponentBase_C_AimTransition_Params params {};
		params.bIsStartTransition = bIsStartTransition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimStyle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDWeaponAimStyle                                  NewAimStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDWeaponAimStyle                                  PrevAimStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromPlayerInput                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDScopeComponentBase_C::AimStyle(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.AimStyle");
		
		UBP_HDScopeComponentBase_C_AimStyle_Params params {};
		params.Character = Character;
		params.NewAimStyle = NewAimStyle;
		params.PrevAimStyle = PrevAimStyle;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.DeathEvent
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 VictimController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::DeathEvent(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.DeathEvent");
		
		UBP_HDScopeComponentBase_C_DeathEvent_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ItemChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 NewEquippedItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 PrevEquippedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::ItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ItemChanged");
		
		UBP_HDScopeComponentBase_C_ItemChanged_Params params {};
		params.Character = Character;
		params.NewEquippedItem = NewEquippedItem;
		params.PrevEquippedItem = PrevEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ChangeSights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDScopeComponentBase_C::ChangeSights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ChangeSights");
		
		UBP_HDScopeComponentBase_C_ChangeSights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ReceiveTick");
		
		UBP_HDScopeComponentBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.EventActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDScopeComponentBase_C::EventActivated(class UActorComponent* Component, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.EventActivated");
		
		UBP_HDScopeComponentBase_C_EventActivated_Params params {};
		params.Component = Component;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.EventDeactivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::EventDeactivated(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.EventDeactivated");
		
		UBP_HDScopeComponentBase_C_EventDeactivated_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.BindEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDWeaponBase_C*                          NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::BindEvents(class ABP_HDPlayerCharacterBase_C* NewCharacter, class ABP_HDWeaponBase_C* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.BindEvents");
		
		UBP_HDScopeComponentBase_C_BindEvents_Params params {};
		params.NewCharacter = NewCharacter;
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.UnbindEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 OldCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDWeaponBase_C*                          OldWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::UnbindEvents(class ABP_HDPlayerCharacterBase_C* OldCharacter, class ABP_HDWeaponBase_C* OldWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.UnbindEvents");
		
		UBP_HDScopeComponentBase_C_UnbindEvents_Params params {};
		params.OldCharacter = OldCharacter;
		params.OldWeapon = OldWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ExecuteUbergraph_BP_HDScopeComponentBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDScopeComponentBase_C::ExecuteUbergraph_BP_HDScopeComponentBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeComponentBase.BP_HDScopeComponentBase_C.ExecuteUbergraph_BP_HDScopeComponentBase");
		
		UBP_HDScopeComponentBase_C_ExecuteUbergraph_BP_HDScopeComponentBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDScopeComponentBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDScopeComponentBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDScopeComponentBase.BP_HDScopeComponentBase_C");
		return ptr;
	}

}


