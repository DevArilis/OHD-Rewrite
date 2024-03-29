﻿/**
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
	 * 		RVA    -> 0x00AF0200
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients");
		
		AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1AE0
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMagicLeapSharedWorldGameMode::SelectChosenOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne");
		
		AMagicLeapSharedWorldGameMode_SelectChosenOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature");
		
		AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF00E0
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMagicLeapSharedWorldSharedData             NewSharedWorldData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData");
		
		AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSharedWorldData != nullptr)
			*NewSharedWorldData = params.NewSharedWorldData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagicLeapSharedWorldGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapSharedWorldGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF01E0
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData");
		
		AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF01C0
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms");
		
		AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature");
		
		AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AEFF90
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform");
		
		AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagicLeapSharedWorldGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapSharedWorldGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF02D0
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
	 * Parameters:
	 * 		struct FMagicLeapSharedWorldLocalData              LocalWorldReplicationData                                  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData");
		
		AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params params {};
		params.LocalWorldReplicationData = LocalWorldReplicationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF0230
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
	 * Parameters:
	 * 		struct FMagicLeapSharedWorldAlignmentTransforms    InAlignmentTransforms                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms");
		
		AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params params {};
		params.InAlignmentTransforms = InAlignmentTransforms;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF0190
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AMagicLeapSharedWorldPlayerController::IsChosenOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne");
		
		AMagicLeapSharedWorldPlayerController_IsChosenOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF0050
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bChosenOne                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne");
		
		AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params params {};
		params.bChosenOne = bChosenOne;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF0030
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData");
		
		AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AF0000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer");
		
		AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagicLeapSharedWorldPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapSharedWorldPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController");
		return ptr;
	}

}


