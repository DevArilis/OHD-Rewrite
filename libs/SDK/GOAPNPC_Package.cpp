/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.25.4_v0.12.0.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008066F0
	 * 		Name   -> Function GOAPNPC.GOAPAction.Validate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPAction::Validate(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.Validate");
		
		UGOAPAction_Validate_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function GOAPNPC.GOAPAction.ReceiveIsActionInvalid
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPAction::ReceiveIsActionInvalid(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.ReceiveIsActionInvalid");
		
		UGOAPAction_ReceiveIsActionInvalid_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008060A0
	 * 		Name   -> Function GOAPNPC.GOAPAction.HasCompleted
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPAction::HasCompleted(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.HasCompleted");
		
		UGOAPAction_HasCompleted_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805FC0
	 * 		Name   -> Function GOAPNPC.GOAPAction.GetTargetsList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> UGOAPAction::GetTargetsList(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.GetTargetsList");
		
		UGOAPAction_GetTargetsList_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006E0110
	 * 		Name   -> Function GOAPNPC.GOAPAction.EndAction
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::EndAction(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.EndAction");
		
		UGOAPAction_EndAction_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805AA0
	 * 		Name   -> Function GOAPNPC.GOAPAction.DoAction
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FailureReason                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPAction::DoAction(class APawn* Pawn, class FString* FailureReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.DoAction");
		
		UGOAPAction_DoAction_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FailureReason != nullptr)
			*FailureReason = params.FailureReason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805970
	 * 		Name   -> Function GOAPNPC.GOAPAction.CheckProceduralPrecondition
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlanning                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPAction::CheckProceduralPrecondition(class APawn* Pawn, bool bPlanning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.CheckProceduralPrecondition");
		
		UGOAPAction_CheckProceduralPrecondition_Params params {};
		params.Pawn = Pawn;
		params.bPlanning = bPlanning;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006E0080
	 * 		Name   -> Function GOAPNPC.GOAPAction.BeginAction
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::BeginAction(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPAction.BeginAction");
		
		UGOAPAction_BeginAction_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAPNPC.GOAPAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008065A0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.UpdateCurrentWorld
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAtom>                               Atoms                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPComponent::UpdateCurrentWorld(TArray<struct FAtom> Atoms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.UpdateCurrentWorld");
		
		UGOAPComponent_UpdateCurrentWorld_Params params {};
		params.Atoms = Atoms;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008064A0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.SetGoal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGOAPGoal*                                   NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPComponent::SetGoal(class UGOAPGoal* NewGoal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.SetGoal");
		
		UGOAPComponent_SetGoal_Params params {};
		params.NewGoal = NewGoal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008063D0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.SetCurrentWorld
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAtom>                               NewCurrentWorld                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPComponent::SetCurrentWorld(TArray<struct FAtom> NewCurrentWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.SetCurrentWorld");
		
		UGOAPComponent_SetCurrentWorld_Params params {};
		params.NewCurrentWorld = NewCurrentWorld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008062E0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPComponent::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.Reset");
		
		UGOAPComponent_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.ReceiveOnReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGOAPComponent::ReceiveOnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.ReceiveOnReset");
		
		UGOAPComponent_ReceiveOnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008061F0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.IsPlanValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGOAPComponent::IsPlanValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.IsPlanValid");
		
		UGOAPComponent_IsPlanValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008061B0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.InvalidatePlan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPComponent::InvalidatePlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.InvalidatePlan");
		
		UGOAPComponent_InvalidatePlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00806170
	 * 		Name   -> Function GOAPNPC.GOAPComponent.InvalidateGoalSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPComponent::InvalidateGoalSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.InvalidateGoalSelection");
		
		UGOAPComponent_InvalidateGoalSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00806140
	 * 		Name   -> Function GOAPNPC.GOAPComponent.HasPlan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGOAPComponent::HasPlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.HasPlan");
		
		UGOAPComponent_HasPlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805F00
	 * 		Name   -> Function GOAPNPC.GOAPComponent.GetPlanSnapshot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UGOAPAction*> UGOAPComponent::GetPlanSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.GetPlanSnapshot");
		
		UGOAPComponent_GetPlanSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805E50
	 * 		Name   -> Function GOAPNPC.GOAPComponent.GetDesiredWorldStateAtoms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FAtom> UGOAPComponent::GetDesiredWorldStateAtoms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.GetDesiredWorldStateAtoms");
		
		UGOAPComponent_GetDesiredWorldStateAtoms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805DD0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.GetCurrentWorldStateAtoms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FAtom> UGOAPComponent::GetCurrentWorldStateAtoms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.GetCurrentWorldStateAtoms");
		
		UGOAPComponent_GetCurrentWorldStateAtoms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805D20
	 * 		Name   -> Function GOAPNPC.GOAPComponent.GeneratePlan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGOAPComponent::GeneratePlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.GeneratePlan");
		
		UGOAPComponent_GeneratePlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805BA0
	 * 		Name   -> Function GOAPNPC.GOAPComponent.ExecuteGOAP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCreatePlan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemoveActionOnComplete                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPComponent::ExecuteGOAP(bool bCreatePlan, bool bRemoveActionOnComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.ExecuteGOAP");
		
		UGOAPComponent_ExecuteGOAP_Params params {};
		params.bCreatePlan = bCreatePlan;
		params.bRemoveActionOnComplete = bRemoveActionOnComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805A60
	 * 		Name   -> Function GOAPNPC.GOAPComponent.ClearPlan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPComponent::ClearPlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPComponent.ClearPlan");
		
		UGOAPComponent_ClearPlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAPNPC.GOAPComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00806670
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.UpdateGoalSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGOAPGoalSet*                                InGoalSet                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPGoalManager::UpdateGoalSet(class UGOAPGoalSet* InGoalSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.UpdateGoalSet");
		
		UGOAPGoalManager_UpdateGoalSet_Params params {};
		params.InGoalSet = InGoalSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00806520
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.SetGoalSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGOAPGoalSet*                                InGoalSet                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPGoalManager::SetGoalSet(class UGOAPGoalSet* InGoalSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.SetGoalSet");
		
		UGOAPGoalManager_SetGoalSet_Params params {};
		params.InGoalSet = InGoalSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00806300
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.SetCurrentGoal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGOAPGoal*                                   NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeactivatePreviousGoal                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPGoalManager::SetCurrentGoal(class UGOAPGoal* NewGoal, bool bDeactivatePreviousGoal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.SetCurrentGoal");
		
		UGOAPGoalManager_SetCurrentGoal_Params params {};
		params.NewGoal = NewGoal;
		params.bDeactivatePreviousGoal = bDeactivatePreviousGoal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00806220
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.RemoveGoal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GoalClass                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPGoalManager::RemoveGoal(class UClass* GoalClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.RemoveGoal");
		
		UGOAPGoalManager_RemoveGoal_Params params {};
		params.GoalClass = GoalClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008061D0
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.InvalidatePlan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPGoalManager::InvalidatePlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.InvalidatePlan");
		
		UGOAPGoalManager_InvalidatePlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00806190
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.InvalidateGoalSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPGoalManager::InvalidateGoalSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.InvalidateGoalSelection");
		
		UGOAPGoalManager_InvalidateGoalSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805ED0
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.GetOuterGOAPComp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGOAPComponent* UGOAPGoalManager::GetOuterGOAPComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.GetOuterGOAPComp");
		
		UGOAPGoalManager_GetOuterGOAPComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805D50
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.GetCurrentGoalAtoms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FAtom> UGOAPGoalManager::GetCurrentGoalAtoms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.GetCurrentGoalAtoms");
		
		UGOAPGoalManager_GetCurrentGoalAtoms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805C80
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.FindGoal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GoalClass                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGOAPGoal* UGOAPGoalManager::FindGoal(class UClass* GoalClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.FindGoal");
		
		UGOAPGoalManager_FindGoal_Params params {};
		params.GoalClass = GoalClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805A40
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.ClearGoals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPGoalManager::ClearGoals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.ClearGoals");
		
		UGOAPGoalManager_ClearGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008058B0
	 * 		Name   -> Function GOAPNPC.GOAPGoalManager.AddGoal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GoalClass                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGOAPGoal* UGOAPGoalManager::AddGoal(class UClass* GoalClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoalManager.AddGoal");
		
		UGOAPGoalManager_AddGoal_Params params {};
		params.GoalClass = GoalClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPGoalManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPGoalManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAPNPC.GOAPGoalManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008062B0
	 * 		Name   -> Function GOAPNPC.GOAPGoal.RequiresNewPlan
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UGOAPGoal::RequiresNewPlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoal.RequiresNewPlan");
		
		UGOAPGoal_RequiresNewPlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805ED0
	 * 		Name   -> Function GOAPNPC.GOAPGoal.GetOuterGoalManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGOAPGoalManager* UGOAPGoal::GetOuterGoalManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoal.GetOuterGoalManager");
		
		UGOAPGoal_GetOuterGoalManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007DDBA0
	 * 		Name   -> Function GOAPNPC.GOAPGoal.GeneratePlanFailure
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGOAPGoal::GeneratePlanFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoal.GeneratePlanFailure");
		
		UGOAPGoal_GeneratePlanFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED2D0
	 * 		Name   -> Function GOAPNPC.GOAPGoal.Deactivate
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UGOAPGoal::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoal.Deactivate");
		
		UGOAPGoal_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805A80
	 * 		Name   -> Function GOAPNPC.GOAPGoal.ClearRelevance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGOAPGoal::ClearRelevance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoal.ClearRelevance");
		
		UGOAPGoal_ClearRelevance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00805950
	 * 		Name   -> Function GOAPNPC.GOAPGoal.CalculateRelevance
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UGOAPGoal::CalculateRelevance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoal.CalculateRelevance");
		
		UGOAPGoal_CalculateRelevance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED2B0
	 * 		Name   -> Function GOAPNPC.GOAPGoal.Activate
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UGOAPGoal::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNPC.GOAPGoal.Activate");
		
		UGOAPGoal_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAPNPC.GOAPGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGOAPAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGOAPAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAPNPC.GOAPAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPGoalSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPGoalSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAPNPC.GOAPGoalSet");
		return ptr;
	}

}


