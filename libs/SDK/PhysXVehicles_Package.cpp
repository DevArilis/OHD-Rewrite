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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWheeledVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWheeledVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D8D0
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.IsInAir
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVehicleWheel::IsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.IsInAir");
		
		UVehicleWheel_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D810
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleWheel::GetSuspensionOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset");
		
		UVehicleWheel_GetSuspensionOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D7E0
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.GetSteerAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleWheel::GetSteerAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSteerAngle");
		
		UVehicleWheel_GetSteerAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D7B0
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.GetRotationAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleWheel::GetRotationAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetRotationAngle");
		
		UVehicleWheel_GetRotationAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleWheel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleWheel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E4F0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bUseAuto                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears");
		
		UWheeledVehicleMovementComponent_SetUseAutoGears_Params params {};
		params.bUseAuto = bUseAuto;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E470
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Throttle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput");
		
		UWheeledVehicleMovementComponent_SetThrottleInput_Params params {};
		params.Throttle = Throttle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E3B0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            GearNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetTargetGear(int32_t GearNum, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear");
		
		UWheeledVehicleMovementComponent_SetTargetGear_Params params {};
		params.GearNum = GearNum;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E330
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Steering                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput");
		
		UWheeledVehicleMovementComponent_SetSteeringInput_Params params {};
		params.Steering = Steering;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E1D0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewHandbrake                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput");
		
		UWheeledVehicleMovementComponent_SetHandbrakeInput_Params params {};
		params.bNewHandbrake = bNewHandbrake;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E140
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           GroupMask                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask");
		
		UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params {};
		params.GroupMask = GroupMask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E0C0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            GroupFlags                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int32_t GroupFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore");
		
		UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params {};
		params.GroupFlags = GroupFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E030
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           GroupMask                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask");
		
		UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params {};
		params.GroupMask = GroupMask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DFB0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            GroupFlags                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int32_t GroupFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid");
		
		UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params {};
		params.GroupFlags = GroupFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DF20
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewGearUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp");
		
		UWheeledVehicleMovementComponent_SetGearUp_Params params {};
		params.bNewGearUp = bNewGearUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DE90
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewGearDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown");
		
		UWheeledVehicleMovementComponent_SetGearDown_Params params {};
		params.bNewGearDown = bNewGearDown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DC70
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Brake                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput");
		
		UWheeledVehicleMovementComponent_SetBrakeInput_Params params {};
		params.Brake = Brake;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DBE0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           GroupMask                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask");
		
		UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params {};
		params.GroupMask = GroupMask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DB60
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            GroupFlags                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int32_t GroupFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup");
		
		UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params {};
		params.GroupFlags = GroupFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DAD0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled");
		
		UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D900
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              InSteeringInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InThrottleInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InBrakeInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InHandbrakeInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CurrentGear                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState");
		
		UWheeledVehicleMovementComponent_ServerUpdateState_Params params {};
		params.InSteeringInput = InSteeringInput;
		params.InThrottleInput = InThrottleInput;
		params.InBrakeInput = InBrakeInput;
		params.InHandbrakeInput = InHandbrakeInput;
		params.CurrentGear = CurrentGear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D870
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWheeledVehicleMovementComponent::GetUseAutoGears()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears");
		
		UWheeledVehicleMovementComponent_GetUseAutoGears_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D840
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWheeledVehicleMovementComponent::GetTargetGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear");
		
		UWheeledVehicleMovementComponent_GetTargetGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D780
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWheeledVehicleMovementComponent::GetForwardSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed");
		
		UWheeledVehicleMovementComponent_GetForwardSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D750
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed");
		
		UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D720
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed");
		
		UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D6F0
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWheeledVehicleMovementComponent::GetCurrentGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear");
		
		UWheeledVehicleMovementComponent_GetCurrentGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWheeledVehicleMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheeledVehicleMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082E260
	 * 		Name   -> Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SteerAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle");
		
		USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params params {};
		params.SteerAngle = SteerAngle;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DDC0
	 * 		Name   -> Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DriveTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque");
		
		USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params params {};
		params.DriveTorque = DriveTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DCF0
	 * 		Name   -> Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BrakeTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque");
		
		USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params params {};
		params.BrakeTorque = BrakeTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleWheeledVehicleMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleWheeledVehicleMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTireConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTireConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082D8A0
	 * 		Name   -> Function PhysXVehicles.VehicleAnimInstance.GetVehicle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleAnimInstance.GetVehicle");
		
		UVehicleAnimInstance_GetVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWheeledVehicleMovementComponent4W.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheeledVehicleMovementComponent4W::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

}


