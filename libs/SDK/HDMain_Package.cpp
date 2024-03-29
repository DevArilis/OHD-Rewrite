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
	 * 		Name   -> PredefinedFunction UDeployMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_ClassSelectionListing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_ClassSelectionListing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_ClassSelectionListing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_ClassSelectionPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_ClassSelectionPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_ClassSelectionPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794670
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.SquadPreRemoveFromPlatoon
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDPlatoonState*                             SourcePlatoon                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDSquadState*                               SquadToBeRemoved                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_PlatoonSquadListBase::SquadPreRemoveFromPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* SquadToBeRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.SquadPreRemoveFromPlatoon");
		
		UDeployMenu_PlatoonSquadListBase_SquadPreRemoveFromPlatoon_Params params {};
		params.SourcePlatoon = SourcePlatoon;
		params.SquadToBeRemoved = SquadToBeRemoved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794230
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.SquadAddedToPlatoon
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDPlatoonState*                             SourcePlatoon                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDSquadState*                               NewSquad                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_PlatoonSquadListBase::SquadAddedToPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* NewSquad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.SquadAddedToPlatoon");
		
		UDeployMenu_PlatoonSquadListBase_SquadAddedToPlatoon_Params params {};
		params.SourcePlatoon = SourcePlatoon;
		params.NewSquad = NewSquad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794080
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.SetupPlatoon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPlatoonListEntry*                           InPlatoonData                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_PlatoonSquadListBase::SetupPlatoon(class UPlatoonListEntry* InPlatoonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.SetupPlatoon");
		
		UDeployMenu_PlatoonSquadListBase_SetupPlatoon_Params params {};
		params.InPlatoonData = InPlatoonData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793F20
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.RepopulatePlatoon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDeployMenu_PlatoonSquadListBase::RepopulatePlatoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.RepopulatePlatoon");
		
		UDeployMenu_PlatoonSquadListBase_RepopulatePlatoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.OnPlatoonSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDeployMenu_PlatoonSquadListBase::OnPlatoonSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.OnPlatoonSet");
		
		UDeployMenu_PlatoonSquadListBase_OnPlatoonSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007937F0
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.GetPlatoonStateFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlatoonState* UDeployMenu_PlatoonSquadListBase::GetPlatoonStateFromData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.GetPlatoonStateFromData");
		
		UDeployMenu_PlatoonSquadListBase_GetPlatoonStateFromData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.GenerateSquad
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadListEntry*                             SquadData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_PlatoonSquadListBase::GenerateSquad(class USquadListEntry* SquadData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.GenerateSquad");
		
		UDeployMenu_PlatoonSquadListBase_GenerateSquad_Params params {};
		params.SquadData = SquadData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_PlatoonSquadListBase.DeconstructSquad
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadListEntry*                             RemovedSquadData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RemovedSquadIdx                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_PlatoonSquadListBase::DeconstructSquad(class USquadListEntry* RemovedSquadData, int32_t RemovedSquadIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_PlatoonSquadListBase.DeconstructSquad");
		
		UDeployMenu_PlatoonSquadListBase_DeconstructSquad_Params params {};
		params.RemovedSquadData = RemovedSquadData;
		params.RemovedSquadIdx = RemovedSquadIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_PlatoonSquadListBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_PlatoonSquadListBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_PlatoonSquadListBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_SpawnMapView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_SpawnMapView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_SpawnMapView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_SpawnMinimap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_SpawnMinimap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_SpawnMinimap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007944C0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.SquadNameChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AHDSquadState*                               SourceSquad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        NewName                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        PrevName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::SquadNameChanged(class AHDSquadState* SourceSquad, const class FText& NewName, const class FText& PrevName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.SquadNameChanged");
		
		UDeployMenu_SquadListBase_SquadNameChanged_Params params {};
		params.SourceSquad = SourceSquad;
		params.NewName = NewName;
		params.PrevName = PrevName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007943F0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.SquadLockStateUpdated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDSquadState*                               SourceSquad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewLocked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::SquadLockStateUpdated(class AHDSquadState* SourceSquad, bool bNewLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.SquadLockStateUpdated");
		
		UDeployMenu_SquadListBase_SquadLockStateUpdated_Params params {};
		params.SourceSquad = SourceSquad;
		params.bNewLocked = bNewLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007942F0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.SquadLeaderChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDSquadState*                               SourceSquad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              NewLeaderPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              PrevLeaderPS                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::SquadLeaderChanged(class AHDSquadState* SourceSquad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.SquadLeaderChanged");
		
		UDeployMenu_SquadListBase_SquadLeaderChanged_Params params {};
		params.SourceSquad = SourceSquad;
		params.NewLeaderPS = NewLeaderPS;
		params.PrevLeaderPS = PrevLeaderPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794100
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.SetupSquad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USquadListEntry*                             InSquadData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::SetupSquad(class USquadListEntry* InSquadData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.SetupSquad");
		
		UDeployMenu_SquadListBase_SetupSquad_Params params {};
		params.InSquadData = InSquadData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793F40
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.RepopulateSquad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDeployMenu_SquadListBase::RepopulateSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.RepopulateSquad");
		
		UDeployMenu_SquadListBase_RepopulateSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.OnSquadSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDeployMenu_SquadListBase::OnSquadSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.OnSquadSet");
		
		UDeployMenu_SquadListBase_OnSquadSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.OnSquadNameUpdated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewSquadName                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        PreviousSquadName                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::OnSquadNameUpdated(const class FText& NewSquadName, const class FText& PreviousSquadName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.OnSquadNameUpdated");
		
		UDeployMenu_SquadListBase_OnSquadNameUpdated_Params params {};
		params.NewSquadName = NewSquadName;
		params.PreviousSquadName = PreviousSquadName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.OnSquadLockStateUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewLockedState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::OnSquadLockStateUpdated(bool bNewLockedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.OnSquadLockStateUpdated");
		
		UDeployMenu_SquadListBase_OnSquadLockStateUpdated_Params params {};
		params.bNewLockedState = bNewLockedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.OnSquadLeaderUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerState*                              NewLeaderPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              PrevLeaderPS                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.OnSquadLeaderUpdated");
		
		UDeployMenu_SquadListBase_OnSquadLeaderUpdated_Params params {};
		params.NewLeaderPS = NewLeaderPS;
		params.PrevLeaderPS = PrevLeaderPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793D40
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.OnListRefresh
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDeployMenu_SquadListBase::OnListRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.OnListRefresh");
		
		UDeployMenu_SquadListBase_OnListRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793C20
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.MemberSquadInfoUpdated
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AHDSquadState*                               SourceSquad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              MemberPS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHDSquadAssignmentInfo                      MemberSQInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::MemberSquadInfoUpdated(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPS, const struct FHDSquadAssignmentInfo& MemberSQInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.MemberSquadInfoUpdated");
		
		UDeployMenu_SquadListBase_MemberSquadInfoUpdated_Params params {};
		params.SourceSquad = SourceSquad;
		params.MemberPS = MemberPS;
		params.MemberSQInfo = MemberSQInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793B60
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.MemberPreRemoveFromSquad
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDSquadState*                               SourceSquad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              MemberPSToBeRemoved                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::MemberPreRemoveFromSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPSToBeRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.MemberPreRemoveFromSquad");
		
		UDeployMenu_SquadListBase_MemberPreRemoveFromSquad_Params params {};
		params.SourceSquad = SourceSquad;
		params.MemberPSToBeRemoved = MemberPSToBeRemoved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793980
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.MemberAddedToSquad
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDSquadState*                               SourceSquad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              NewMemberPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::MemberAddedToSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* NewMemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.MemberAddedToSquad");
		
		UDeployMenu_SquadListBase_MemberAddedToSquad_Params params {};
		params.SourceSquad = SourceSquad;
		params.NewMemberPS = NewMemberPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007937F0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.GetSquadStateFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDSquadState* UDeployMenu_SquadListBase::GetSquadStateFromData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.GetSquadStateFromData");
		
		UDeployMenu_SquadListBase_GetSquadStateFromData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793750
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.GetParentPlatoonStateFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlatoonState* UDeployMenu_SquadListBase::GetParentPlatoonStateFromData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.GetParentPlatoonStateFromData");
		
		UDeployMenu_SquadListBase_GetParentPlatoonStateFromData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.GenerateSquadMember
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadMemberInfo*                            MemberData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::GenerateSquadMember(class USquadMemberInfo* MemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.GenerateSquadMember");
		
		UDeployMenu_SquadListBase_GenerateSquadMember_Params params {};
		params.MemberData = MemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadListBase.DeconstructSquadMember
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadMemberInfo*                            RemovedMemberData                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadListBase::DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadListBase.DeconstructSquadMember");
		
		UDeployMenu_SquadListBase_DeconstructSquadMember_Params params {};
		params.RemovedMemberData = RemovedMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_SquadListBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_SquadListBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_SquadListBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794000
	 * 		Name   -> Function HDMain.DeployMenu_SquadMemberListingBase.SetupMember
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USquadMemberInfo*                            InMemberData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadMemberListingBase::SetupMember(class USquadMemberInfo* InMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadMemberListingBase.SetupMember");
		
		UDeployMenu_SquadMemberListingBase_SetupMember_Params params {};
		params.InMemberData = InMemberData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadMemberListingBase.OnMemberSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDeployMenu_SquadMemberListingBase::OnMemberSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadMemberListingBase.OnMemberSet");
		
		UDeployMenu_SquadMemberListingBase_OnMemberSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadMemberListingBase.OnMemberPlayerNameUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      NewPlayerName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadMemberListingBase::OnMemberPlayerNameUpdated(const class FString& NewPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadMemberListingBase.OnMemberPlayerNameUpdated");
		
		UDeployMenu_SquadMemberListingBase_OnMemberPlayerNameUpdated_Params params {};
		params.NewPlayerName = NewPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793A40
	 * 		Name   -> Function HDMain.DeployMenu_SquadMemberListingBase.MemberPlayerNameChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewPlayerName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadMemberListingBase::MemberPlayerNameChanged(class APlayerState* PlayerState, const class FString& NewPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadMemberListingBase.MemberPlayerNameChanged");
		
		UDeployMenu_SquadMemberListingBase_MemberPlayerNameChanged_Params params {};
		params.PlayerState = PlayerState;
		params.NewPlayerName = NewPlayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007937F0
	 * 		Name   -> Function HDMain.DeployMenu_SquadMemberListingBase.GetPlayerStateFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlayerState* UDeployMenu_SquadMemberListingBase::GetPlayerStateFromData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadMemberListingBase.GetPlayerStateFromData");
		
		UDeployMenu_SquadMemberListingBase_GetPlayerStateFromData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007937A0
	 * 		Name   -> Function HDMain.DeployMenu_SquadMemberListingBase.GetParentSquadStateFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDSquadState* UDeployMenu_SquadMemberListingBase::GetParentSquadStateFromData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadMemberListingBase.GetParentSquadStateFromData");
		
		UDeployMenu_SquadMemberListingBase_GetParentSquadStateFromData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793750
	 * 		Name   -> Function HDMain.DeployMenu_SquadMemberListingBase.GetParentPlatoonStateFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlatoonState* UDeployMenu_SquadMemberListingBase::GetParentPlatoonStateFromData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadMemberListingBase.GetParentPlatoonStateFromData");
		
		UDeployMenu_SquadMemberListingBase_GetParentPlatoonStateFromData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_SquadMemberListingBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_SquadMemberListingBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_SquadMemberListingBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794180
	 * 		Name   -> Function HDMain.DeployMenu_SquadSelectionWidgetBase.SetupSquadSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDTeamState*                                InPlatoonTeamState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadSelectionWidgetBase::SetupSquadSelection(class AHDTeamState* InPlatoonTeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadSelectionWidgetBase.SetupSquadSelection");
		
		UDeployMenu_SquadSelectionWidgetBase_SetupSquadSelection_Params params {};
		params.InPlatoonTeamState = InPlatoonTeamState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793F60
	 * 		Name   -> Function HDMain.DeployMenu_SquadSelectionWidgetBase.RepopulateSquadSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDeployMenu_SquadSelectionWidgetBase::RepopulateSquadSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadSelectionWidgetBase.RepopulateSquadSelection");
		
		UDeployMenu_SquadSelectionWidgetBase_RepopulateSquadSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793E20
	 * 		Name   -> Function HDMain.DeployMenu_SquadSelectionWidgetBase.PlatoonPreRemoveFromTeam
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDTeamState*                                SourceTeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlatoonState*                             PlatoonToBeRemoved                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadSelectionWidgetBase::PlatoonPreRemoveFromTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* PlatoonToBeRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadSelectionWidgetBase.PlatoonPreRemoveFromTeam");
		
		UDeployMenu_SquadSelectionWidgetBase_PlatoonPreRemoveFromTeam_Params params {};
		params.SourceTeam = SourceTeam;
		params.PlatoonToBeRemoved = PlatoonToBeRemoved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793D60
	 * 		Name   -> Function HDMain.DeployMenu_SquadSelectionWidgetBase.PlatoonAddedToTeam
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDTeamState*                                SourceTeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlatoonState*                             NewPlatoon                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadSelectionWidgetBase::PlatoonAddedToTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* NewPlatoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadSelectionWidgetBase.PlatoonAddedToTeam");
		
		UDeployMenu_SquadSelectionWidgetBase_PlatoonAddedToTeam_Params params {};
		params.SourceTeam = SourceTeam;
		params.NewPlatoon = NewPlatoon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadSelectionWidgetBase.OnSquadSelectionSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDeployMenu_SquadSelectionWidgetBase::OnSquadSelectionSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadSelectionWidgetBase.OnSquadSelectionSet");
		
		UDeployMenu_SquadSelectionWidgetBase_OnSquadSelectionSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadSelectionWidgetBase.GeneratePlatoon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UPlatoonListEntry*                           PlatoonData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadSelectionWidgetBase::GeneratePlatoon(class UPlatoonListEntry* PlatoonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadSelectionWidgetBase.GeneratePlatoon");
		
		UDeployMenu_SquadSelectionWidgetBase_GeneratePlatoon_Params params {};
		params.PlatoonData = PlatoonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.DeployMenu_SquadSelectionWidgetBase.DeconstructPlatoon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UPlatoonListEntry*                           RemovedPlatoonData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RemovedPlatoonIdx                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeployMenu_SquadSelectionWidgetBase::DeconstructPlatoon(class UPlatoonListEntry* RemovedPlatoonData, int32_t RemovedPlatoonIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.DeployMenu_SquadSelectionWidgetBase.DeconstructPlatoon");
		
		UDeployMenu_SquadSelectionWidgetBase_DeconstructPlatoon_Params params {};
		params.RemovedPlatoonData = RemovedPlatoonData;
		params.RemovedPlatoonIdx = RemovedPlatoonIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployMenu_SquadSelectionWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployMenu_SquadSelectionWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.DeployMenu_SquadSelectionWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAIHandlerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAIHandlerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAIHandlerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007947B0
	 * 		Name   -> Function HDMain.HDAIAimingHandler.SuggestProjectileVelocity
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     TossVelocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TossSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAIAimingHandler::SuggestProjectileVelocity(struct FVector* TossVelocity, const struct FVector& StartLocation, const struct FVector& EndLocation, float TossSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.SuggestProjectileVelocity");
		
		UHDAIAimingHandler_SuggestProjectileVelocity_Params params {};
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.TossSpeed = TossSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TossVelocity != nullptr)
			*TossVelocity = params.TossVelocity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794200
	 * 		Name   -> Function HDMain.HDAIAimingHandler.ShouldChangeNoEnemyFocalPoint
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
	 */
	bool UHDAIAimingHandler::ShouldChangeNoEnemyFocalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.ShouldChangeNoEnemyFocalPoint");
		
		UHDAIAimingHandler_ShouldChangeNoEnemyFocalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793F80
	 * 		Name   -> Function HDMain.HDAIAimingHandler.SetEnableNoEnemyLookAround
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnableNoEnemyLookAround                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIAimingHandler::SetEnableNoEnemyLookAround(bool bInEnableNoEnemyLookAround)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.SetEnableNoEnemyLookAround");
		
		UHDAIAimingHandler_SetEnableNoEnemyLookAround_Params params {};
		params.bInEnableNoEnemyLookAround = bInEnableNoEnemyLookAround;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793960
	 * 		Name   -> Function HDMain.HDAIAimingHandler.MakeNoEnemyFocalPoint
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIAimingHandler::MakeNoEnemyFocalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.MakeNoEnemyFocalPoint");
		
		UHDAIAimingHandler_MakeNoEnemyFocalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007938D0
	 * 		Name   -> Function HDMain.HDAIAimingHandler.IsCandidateTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAIAimingHandler::IsCandidateTarget(class AActor* ActorToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.IsCandidateTarget");
		
		UHDAIAimingHandler_IsCandidateTarget_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007938A0
	 * 		Name   -> Function HDMain.HDAIAimingHandler.IsAimingAtTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAIAimingHandler::IsAimingAtTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.IsAimingAtTarget");
		
		UHDAIAimingHandler_IsAimingAtTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793720
	 * 		Name   -> Function HDMain.HDAIAimingHandler.GetNoEnemyFocalPoint
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UHDAIAimingHandler::GetNoEnemyFocalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.GetNoEnemyFocalPoint");
		
		UHDAIAimingHandler_GetNoEnemyFocalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793620
	 * 		Name   -> Function HDMain.HDAIAimingHandler.GetIsNewTargetMoreRelevant
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              OldTargetStrength                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewTargetStrength                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAIAimingHandler::GetIsNewTargetMoreRelevant(float OldTargetStrength, float NewTargetStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.GetIsNewTargetMoreRelevant");
		
		UHDAIAimingHandler_GetIsNewTargetMoreRelevant_Params params {};
		params.OldTargetStrength = OldTargetStrength;
		params.NewTargetStrength = NewTargetStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007935D0
	 * 		Name   -> Function HDMain.HDAIAimingHandler.GetEnableNoEnemyLookAround
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAIAimingHandler::GetEnableNoEnemyLookAround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.GetEnableNoEnemyLookAround");
		
		UHDAIAimingHandler_GetEnableNoEnemyLookAround_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793460
	 * 		Name   -> Function HDMain.HDAIAimingHandler.GetActorStimulusData
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutStrength                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutAge                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIAimingHandler::GetActorStimulusData(class AActor* InActor, struct FVector* OutLocation, float* OutStrength, float* OutAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.GetActorStimulusData");
		
		UHDAIAimingHandler_GetActorStimulusData_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (OutStrength != nullptr)
			*OutStrength = params.OutStrength;
		if (OutAge != nullptr)
			*OutAge = params.OutAge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007933D0
	 * 		Name   -> Function HDMain.HDAIAimingHandler.EstablishNewTargetFromPerception
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      SenseToUse                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIAimingHandler::EstablishNewTargetFromPerception(class UClass* SenseToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.EstablishNewTargetFromPerception");
		
		UHDAIAimingHandler_EstablishNewTargetFromPerception_Params params {};
		params.SenseToUse = SenseToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793230
	 * 		Name   -> Function HDMain.HDAIAimingHandler.CheckForTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UHDAIAimingHandler::CheckForTarget(class AActor* TargetActor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.CheckForTarget");
		
		UHDAIAimingHandler_CheckForTarget_Params params {};
		params.TargetActor = TargetActor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007931F0
	 * 		Name   -> Function HDMain.HDAIAimingHandler.CalcAimingDirection
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIAimingHandler::CalcAimingDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.CalcAimingDirection");
		
		UHDAIAimingHandler_CalcAimingDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007931D0
	 * 		Name   -> Function HDMain.HDAIAimingHandler.AimAtCurrentTarget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIAimingHandler::AimAtCurrentTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIAimingHandler.AimAtCurrentTarget");
		
		UHDAIAimingHandler_AimAtCurrentTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAIAimingHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAIAimingHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAIAimingHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794790
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.StartSafeBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::StartSafeBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.StartSafeBehavior");
		
		UHDAIBehaviorHandler_StartSafeBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794770
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.StartDangerBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::StartDangerBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.StartDangerBehavior");
		
		UHDAIBehaviorHandler_StartDangerBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794750
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.StartCombatBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::StartCombatBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.StartCombatBehavior");
		
		UHDAIBehaviorHandler_StartCombatBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00794730
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.StartAwareBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::StartAwareBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.StartAwareBehavior");
		
		UHDAIBehaviorHandler_StartAwareBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793F00
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.ReceiveSuppression
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::ReceiveSuppression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.ReceiveSuppression");
		
		UHDAIBehaviorHandler_ReceiveSuppression_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793EE0
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.ReceiveHitDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::ReceiveHitDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.ReceiveHitDamage");
		
		UHDAIBehaviorHandler_ReceiveHitDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793880
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.HandleSafeBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::HandleSafeBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.HandleSafeBehavior");
		
		UHDAIBehaviorHandler_HandleSafeBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793860
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.HandleDangerBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::HandleDangerBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.HandleDangerBehavior");
		
		UHDAIBehaviorHandler_HandleDangerBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793840
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.HandleCombatBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::HandleCombatBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.HandleCombatBehavior");
		
		UHDAIBehaviorHandler_HandleCombatBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793820
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.HandleBehaviorStates
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::HandleBehaviorStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.HandleBehaviorStates");
		
		UHDAIBehaviorHandler_HandleBehaviorStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7310
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.HandleAwareBehavior
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::HandleAwareBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.HandleAwareBehavior");
		
		UHDAIBehaviorHandler_HandleAwareBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007936F0
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.GetIsUnderSuppression
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAIBehaviorHandler::GetIsUnderSuppression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.GetIsUnderSuppression");
		
		UHDAIBehaviorHandler_GetIsUnderSuppression_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007935F0
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.GetIsBeingHit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAIBehaviorHandler::GetIsBeingHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.GetIsBeingHit");
		
		UHDAIBehaviorHandler_GetIsBeingHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007933B0
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.DetermineThreatLevel
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::DetermineThreatLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.DetermineThreatLevel");
		
		UHDAIBehaviorHandler_DetermineThreatLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00793210
	 * 		Name   -> Function HDMain.HDAIBehaviorHandler.CalcThreatLevels
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAIBehaviorHandler::CalcThreatLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIBehaviorHandler.CalcThreatLevels");
		
		UHDAIBehaviorHandler_CalcThreatLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAIBehaviorHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAIBehaviorHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAIBehaviorHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797460
	 * 		Name   -> Function HDMain.HDAICaptureHandler.ShouldEstablishNewControlPoint
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAICaptureHandler::ShouldEstablishNewControlPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.ShouldEstablishNewControlPoint");
		
		UHDAICaptureHandler_ShouldEstablishNewControlPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797040
	 * 		Name   -> Function HDMain.HDAICaptureHandler.SetCurrentCP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         InCurrentCP                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICaptureHandler::SetCurrentCP(class AHDBaseCapturePoint* InCurrentCP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.SetCurrentCP");
		
		UHDAICaptureHandler_SetCurrentCP_Params params {};
		params.InCurrentCP = InCurrentCP;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007970C0
	 * 		Name   -> Function HDMain.HDAICaptureHandler.SetCurrentCaptureMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHDAICaptureMode                                   NewCaptureMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICaptureHandler::SetCurrentCaptureMode(EHDAICaptureMode NewCaptureMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.SetCurrentCaptureMode");
		
		UHDAICaptureHandler_SetCurrentCaptureMode_Params params {};
		params.NewCaptureMode = NewCaptureMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796820
	 * 		Name   -> Function HDMain.HDAICaptureHandler.GetStartSpotClosestToControlPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      InCapturePoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UHDAICaptureHandler::GetStartSpotClosestToControlPoint(class AActor* InCapturePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.GetStartSpotClosestToControlPoint");
		
		UHDAICaptureHandler_GetStartSpotClosestToControlPoint_Params params {};
		params.InCapturePoint = InCapturePoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007966F0
	 * 		Name   -> Function HDMain.HDAICaptureHandler.GetCurrentCPLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FVector UHDAICaptureHandler::GetCurrentCPLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.GetCurrentCPLocation");
		
		UHDAICaptureHandler_GetCurrentCPLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796620
	 * 		Name   -> Function HDMain.HDAICaptureHandler.FindControlPointToCapture
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         OutFoundCP                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAICaptureHandler::FindControlPointToCapture(class AHDBaseCapturePoint** OutFoundCP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.FindControlPointToCapture");
		
		UHDAICaptureHandler_FindControlPointToCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundCP != nullptr)
			*OutFoundCP = params.OutFoundCP;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796560
	 * 		Name   -> Function HDMain.HDAICaptureHandler.FindControlPointRandom
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class AHDBaseCapturePoint*>                 CPs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHDBaseCapturePoint* UHDAICaptureHandler::FindControlPointRandom(TArray<class AHDBaseCapturePoint*> CPs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.FindControlPointRandom");
		
		UHDAICaptureHandler_FindControlPointRandom_Params params {};
		params.CPs = CPs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007964A0
	 * 		Name   -> Function HDMain.HDAICaptureHandler.FindControlPointClosestToPawn
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class AHDBaseCapturePoint*>                 CPs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHDBaseCapturePoint* UHDAICaptureHandler::FindControlPointClosestToPawn(TArray<class AHDBaseCapturePoint*> CPs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.FindControlPointClosestToPawn");
		
		UHDAICaptureHandler_FindControlPointClosestToPawn_Params params {};
		params.CPs = CPs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007963D0
	 * 		Name   -> Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfTypeV3
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDAICaptureMode                                   InCaptureMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfTypeV3(EHDAICaptureMode InCaptureMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfTypeV3");
		
		UHDAICaptureHandler_FindAvailableControlPointsOfTypeV3_Params params {};
		params.InCaptureMode = InCaptureMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796300
	 * 		Name   -> Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfTypeV2
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDAICaptureMode                                   InCaptureMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfTypeV2(EHDAICaptureMode InCaptureMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfTypeV2");
		
		UHDAICaptureHandler_FindAvailableControlPointsOfTypeV2_Params params {};
		params.InCaptureMode = InCaptureMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796230
	 * 		Name   -> Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfTypeV1
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDAICaptureMode                                   InCaptureMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfTypeV1(EHDAICaptureMode InCaptureMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfTypeV1");
		
		UHDAICaptureHandler_FindAvailableControlPointsOfTypeV1_Params params {};
		params.InCaptureMode = InCaptureMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796160
	 * 		Name   -> Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfType
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDAICaptureMode                                   InCaptureMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AHDBaseCapturePoint*> UHDAICaptureHandler::FindAvailableControlPointsOfType(EHDAICaptureMode InCaptureMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfType");
		
		UHDAICaptureHandler_FindAvailableControlPointsOfType_Params params {};
		params.InCaptureMode = InCaptureMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796130
	 * 		Name   -> Function HDMain.HDAICaptureHandler.EstablishNewControlPoint
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UHDAICaptureHandler::EstablishNewControlPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICaptureHandler.EstablishNewControlPoint");
		
		UHDAICaptureHandler_EstablishNewControlPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAICaptureHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAICaptureHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAICaptureHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007975A0
	 * 		Name   -> Function HDMain.HDAICombatHandler.UpdateEquipmentHandling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAICombatHandler::UpdateEquipmentHandling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.UpdateEquipmentHandling");
		
		UHDAICombatHandler_UpdateEquipmentHandling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797580
	 * 		Name   -> Function HDMain.HDAICombatHandler.UpdateAttackParameters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAICombatHandler::UpdateAttackParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.UpdateAttackParameters");
		
		UHDAICombatHandler_UpdateAttackParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797560
	 * 		Name   -> Function HDMain.HDAICombatHandler.StopUsingSpecialtyItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHDAICombatHandler::StopUsingSpecialtyItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.StopUsingSpecialtyItem");
		
		UHDAICombatHandler_StopUsingSpecialtyItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797520
	 * 		Name   -> Function HDMain.HDAICombatHandler.StopAttack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAICombatHandler::StopAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.StopAttack");
		
		UHDAICombatHandler_StopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007974C0
	 * 		Name   -> Function HDMain.HDAICombatHandler.StartAttack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAICombatHandler::StartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.StartAttack");
		
		UHDAICombatHandler_StartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797390
	 * 		Name   -> Function HDMain.HDAICombatHandler.SetWeaponMovementFireEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInWeaponMovementFire                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICombatHandler::SetWeaponMovementFireEnabled(bool bInWeaponMovementFire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.SetWeaponMovementFireEnabled");
		
		UHDAICombatHandler_SetWeaponMovementFireEnabled_Params params {};
		params.bInWeaponMovementFire = bInWeaponMovementFire;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797300
	 * 		Name   -> Function HDMain.HDAICombatHandler.SetWeaponAutoReloadEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInWeaponAutoReload                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICombatHandler::SetWeaponAutoReloadEnabled(bool bInWeaponAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.SetWeaponAutoReloadEnabled");
		
		UHDAICombatHandler_SetWeaponAutoReloadEnabled_Params params {};
		params.bInWeaponAutoReload = bInWeaponAutoReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797420
	 * 		Name   -> Function HDMain.HDAICombatHandler.SetupEquipmentReferences
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAICombatHandler::SetupEquipmentReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.SetupEquipmentReferences");
		
		UHDAICombatHandler_SetupEquipmentReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007972C0
	 * 		Name   -> Function HDMain.HDAICombatHandler.SetNextAttackTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAICombatHandler::SetNextAttackTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.SetNextAttackTime");
		
		UHDAICombatHandler_SetNextAttackTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007971E0
	 * 		Name   -> Function HDMain.HDAICombatHandler.SetItemAttackParameters
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHDAISpecificItemTypeAttackData             InAttackData                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHDAICombatHandler::SetItemAttackParameters(const struct FHDAISpecificItemTypeAttackData& InAttackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.SetItemAttackParameters");
		
		UHDAICombatHandler_SetItemAttackParameters_Params params {};
		params.InAttackData = InAttackData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797160
	 * 		Name   -> Function HDMain.HDAICombatHandler.SetEnemy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      NewEnemy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICombatHandler::SetEnemy(class AActor* NewEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.SetEnemy");
		
		UHDAICombatHandler_SetEnemy_Params params {};
		params.NewEnemy = NewEnemy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006E0110
	 * 		Name   -> Function HDMain.HDAICombatHandler.Reload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDBaseWeapon*                               InWeapon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICombatHandler::Reload(class AHDBaseWeapon* InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.Reload");
		
		UHDAICombatHandler_Reload_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796F50
	 * 		Name   -> Function HDMain.HDAICombatHandler.ReceiveSuppression
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBasePickup*                               Pickup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICombatHandler::ReceiveSuppression(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.ReceiveSuppression");
		
		UHDAICombatHandler_ReceiveSuppression_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796E90
	 * 		Name   -> Function HDMain.HDAICombatHandler.ReceiveHitDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBasePickup*                               Pickup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAICombatHandler::ReceiveHitDamage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.ReceiveHitDamage");
		
		UHDAICombatHandler_ReceiveHitDamage_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796D20
	 * 		Name   -> Function HDMain.HDAICombatHandler.PauseAttack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAICombatHandler::PauseAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.PauseAttack");
		
		UHDAICombatHandler_PauseAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796990
	 * 		Name   -> Function HDMain.HDAICombatHandler.IsFiring
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAICombatHandler::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.IsFiring");
		
		UHDAICombatHandler_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796900
	 * 		Name   -> Function HDMain.HDAICombatHandler.HasValidEnemy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bAliveCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAICombatHandler::HasValidEnemy(bool bAliveCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.HasValidEnemy");
		
		UHDAICombatHandler_HasValidEnemy_Params params {};
		params.bAliveCheck = bAliveCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007968D0
	 * 		Name   -> Function HDMain.HDAICombatHandler.HasAmmoLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAICombatHandler::HasAmmoLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.HasAmmoLoaded");
		
		UHDAICombatHandler_HasAmmoLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796050
	 * 		Name   -> Function HDMain.HDAICombatHandler.CanAttackEnemy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bCheckFireTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreAmmoReloadCheck                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAICombatHandler::CanAttackEnemy(bool bCheckFireTime, bool bIgnoreAmmoReloadCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAICombatHandler.CanAttackEnemy");
		
		UHDAICombatHandler_CanAttackEnemy_Params params {};
		params.bCheckFireTime = bCheckFireTime;
		params.bIgnoreAmmoReloadCheck = bIgnoreAmmoReloadCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAICombatHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAICombatHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAICombatHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007969F0
	 * 		Name   -> Function HDMain.HDAIController.JoinOrCreateSquad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AHDAIController::JoinOrCreateSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIController.JoinOrCreateSquad");
		
		AHDAIController_JoinOrCreateSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007967E0
	 * 		Name   -> Function HDMain.HDAIController.GetStartPawnClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* AHDAIController::GetStartPawnClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIController.GetStartPawnClass");
		
		AHDAIController_GetStartPawnClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796760
	 * 		Name   -> Function HDMain.HDAIController.GetFactionSpecifiedSquadMemberKit
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UHDKit* AHDAIController::GetFactionSpecifiedSquadMemberKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIController.GetFactionSpecifiedSquadMemberKit");
		
		AHDAIController_GetFactionSpecifiedSquadMemberKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796730
	 * 		Name   -> Function HDMain.HDAIController.GetFactionSpecifiedSquadLeaderKit
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UHDKit* AHDAIController::GetFactionSpecifiedSquadLeaderKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIController.GetFactionSpecifiedSquadLeaderKit");
		
		AHDAIController_GetFactionSpecifiedSquadLeaderKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797540
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.StopRetreat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::StopRetreat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.StopRetreat");
		
		UHDAIGroupBehaviorHandler_StopRetreat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797500
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.StartRetreat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::StartRetreat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.StartRetreat");
		
		UHDAIGroupBehaviorHandler_StartRetreat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007974E0
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.StartGroupWaitTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::StartGroupWaitTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.StartGroupWaitTime");
		
		UHDAIGroupBehaviorHandler_StartGroupWaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797490
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.ShouldRetreat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHDAIGroupBehaviorHandler::ShouldRetreat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.ShouldRetreat");
		
		UHDAIGroupBehaviorHandler_ShouldRetreat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797440
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.SetupGroupData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::SetupGroupData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.SetupGroupData");
		
		UHDAIGroupBehaviorHandler_SetupGroupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007972E0
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.SetSquadParams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::SetSquadParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.SetSquadParams");
		
		UHDAIGroupBehaviorHandler_SetSquadParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797140
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.SetCurrentDestination
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::SetCurrentDestination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.SetCurrentDestination");
		
		UHDAIGroupBehaviorHandler_SetCurrentDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00797010
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.RequestGroupDataSync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHDAIGroupBehaviorHandler::RequestGroupDataSync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.RequestGroupDataSync");
		
		UHDAIGroupBehaviorHandler_RequestGroupDataSync_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796D40
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.PointsAreEqualXY
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Vector1                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vector2                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAIGroupBehaviorHandler::STATIC_PointsAreEqualXY(const struct FVector& Vector1, const struct FVector& Vector2, float Tolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.PointsAreEqualXY");
		
		UHDAIGroupBehaviorHandler_PointsAreEqualXY_Params params {};
		params.Vector1 = Vector1;
		params.Vector2 = Vector2;
		params.Tolerance = Tolerance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796B40
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.OnOwnerDeath
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 VictimController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIGroupBehaviorHandler::OnOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.OnOwnerDeath");
		
		UHDAIGroupBehaviorHandler_OnOwnerDeath_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796B20
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.OnMoveToFailed
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::OnMoveToFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.OnMoveToFailed");
		
		UHDAIGroupBehaviorHandler_OnMoveToFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796A40
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.MakeNewMasterNavPath
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InStart                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InDestination                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIGroupBehaviorHandler::MakeNewMasterNavPath(const struct FVector& InStart, const struct FVector& InDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.MakeNewMasterNavPath");
		
		UHDAIGroupBehaviorHandler_MakeNewMasterNavPath_Params params {};
		params.InStart = InStart;
		params.InDestination = InDestination;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796A20
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.MakeNavPathSegment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::MakeNavPathSegment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.MakeNavPathSegment");
		
		UHDAIGroupBehaviorHandler_MakeNavPathSegment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007969C0
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.IsGroupWaitTimeOver
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHDAIGroupBehaviorHandler::IsGroupWaitTimeOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.IsGroupWaitTimeOver");
		
		UHDAIGroupBehaviorHandler_IsGroupWaitTimeOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007968B0
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.HandleMoveToFailed
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::HandleMoveToFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.HandleMoveToFailed");
		
		UHDAIGroupBehaviorHandler_HandleMoveToFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796790
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.GetGroupData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FHDAIGroupData UHDAIGroupBehaviorHandler::GetGroupData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.GetGroupData");
		
		UHDAIGroupBehaviorHandler_GetGroupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007966D0
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.FollowHumanLeader
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::FollowHumanLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.FollowHumanLeader");
		
		UHDAIGroupBehaviorHandler_FollowHumanLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796030
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.BroadcastGroupData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIGroupBehaviorHandler::BroadcastGroupData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.BroadcastGroupData");
		
		UHDAIGroupBehaviorHandler_BroadcastGroupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796000
	 * 		Name   -> Function HDMain.HDAIGroupBehaviorHandler.AllGroupMembersAreOnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHDAIGroupBehaviorHandler::AllGroupMembersAreOnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIGroupBehaviorHandler.AllGroupMembersAreOnPoint");
		
		UHDAIGroupBehaviorHandler_AllGroupMembersAreOnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAIGroupBehaviorHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAIGroupBehaviorHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAIGroupBehaviorHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A110
	 * 		Name   -> Function HDMain.HDAINavigationHandler.SetupRVOAvoidance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAINavigationHandler::SetupRVOAvoidance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.SetupRVOAvoidance");
		
		UHDAINavigationHandler_SetupRVOAvoidance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A0F0
	 * 		Name   -> Function HDMain.HDAINavigationHandler.SetupNextTargetNavPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAINavigationHandler::SetupNextTargetNavPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.SetupNextTargetNavPoint");
		
		UHDAINavigationHandler_SetupNextTargetNavPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799F60
	 * 		Name   -> Function HDMain.HDAINavigationHandler.SetDesiredLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InDesiredLocation                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAINavigationHandler::SetDesiredLocation(const struct FVector& InDesiredLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.SetDesiredLocation");
		
		UHDAINavigationHandler_SetDesiredLocation_Params params {};
		params.InDesiredLocation = InDesiredLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799840
	 * 		Name   -> Function HDMain.HDAINavigationHandler.MoveToLocationFailed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAINavigationHandler::MoveToLocationFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.MoveToLocationFailed");
		
		UHDAINavigationHandler_MoveToLocationFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799810
	 * 		Name   -> Function HDMain.HDAINavigationHandler.MakePathToDesiredLocation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHDAINavigationHandler::MakePathToDesiredLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.MakePathToDesiredLocation");
		
		UHDAINavigationHandler_MakePathToDesiredLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007997E0
	 * 		Name   -> Function HDMain.HDAINavigationHandler.IsPawnAtDestination
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAINavigationHandler::IsPawnAtDestination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.IsPawnAtDestination");
		
		UHDAINavigationHandler_IsPawnAtDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007997B0
	 * 		Name   -> Function HDMain.HDAINavigationHandler.IsNavigationPossible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAINavigationHandler::IsNavigationPossible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.IsNavigationPossible");
		
		UHDAINavigationHandler_IsNavigationPossible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799780
	 * 		Name   -> Function HDMain.HDAINavigationHandler.IsNavDataValidForAllControlPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDAINavigationHandler::IsNavDataValidForAllControlPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.IsNavDataValidForAllControlPoints");
		
		UHDAINavigationHandler_IsNavDataValidForAllControlPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007993D0
	 * 		Name   -> Function HDMain.HDAINavigationHandler.FixVectorValuesNaN
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRandomize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAINavigationHandler::FixVectorValuesNaN(struct FVector* InVector, bool bRandomize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.FixVectorValuesNaN");
		
		UHDAINavigationHandler_FixVectorValuesNaN_Params params {};
		params.bRandomize = bRandomize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVector != nullptr)
			*InVector = params.InVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799320
	 * 		Name   -> Function HDMain.HDAINavigationHandler.FindNewControlPointNavLocation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         CP                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAINavigationHandler::FindNewControlPointNavLocation(class AHDBaseCapturePoint* CP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.FindNewControlPointNavLocation");
		
		UHDAINavigationHandler_FindNewControlPointNavLocation_Params params {};
		params.CP = CP;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799240
	 * 		Name   -> Function HDMain.HDAINavigationHandler.FindNavLocationInsideControlPoint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         CP                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutNavLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAINavigationHandler::FindNavLocationInsideControlPoint(class AHDBaseCapturePoint* CP, struct FVector* OutNavLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.FindNavLocationInsideControlPoint");
		
		UHDAINavigationHandler_FindNavLocationInsideControlPoint_Params params {};
		params.CP = CP;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNavLoc != nullptr)
			*OutNavLoc = params.OutNavLoc;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799170
	 * 		Name   -> Function HDMain.HDAINavigationHandler.CheckPawnStuckStatus
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure)
	 */
	bool UHDAINavigationHandler::CheckPawnStuckStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.CheckPawnStuckStatus");
		
		UHDAINavigationHandler_CheckPawnStuckStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00798DC0
	 * 		Name   -> Function HDMain.HDAINavigationHandler.CalcSeparationVector
	 * 		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UHDAINavigationHandler::CalcSeparationVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.CalcSeparationVector");
		
		UHDAINavigationHandler_CalcSeparationVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00798D80
	 * 		Name   -> Function HDMain.HDAINavigationHandler.CalcObstacleAvoidanceVector
	 * 		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UHDAINavigationHandler::CalcObstacleAvoidanceVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.CalcObstacleAvoidanceVector");
		
		UHDAINavigationHandler_CalcObstacleAvoidanceVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00798D40
	 * 		Name   -> Function HDMain.HDAINavigationHandler.CalcCohesionVector
	 * 		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UHDAINavigationHandler::CalcCohesionVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAINavigationHandler.CalcCohesionVector");
		
		UHDAINavigationHandler_CalcCohesionVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAINavigationHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAINavigationHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAINavigationHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00798E90
	 * 		Name   -> Function HDMain.HDAIPerceptionComponent.CanBeSeenFrom
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     ObserverLocation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutSeenLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberOfLoSChecksPerformed                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutSightStrength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      IgnoreActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDAIPerceptionComponent::CanBeSeenFrom(const struct FVector& ObserverLocation, struct FVector* OutSeenLocation, int32_t* NumberOfLoSChecksPerformed, float* OutSightStrength, class AActor* IgnoreActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIPerceptionComponent.CanBeSeenFrom");
		
		UHDAIPerceptionComponent_CanBeSeenFrom_Params params {};
		params.ObserverLocation = ObserverLocation;
		params.IgnoreActor = IgnoreActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSeenLocation != nullptr)
			*OutSeenLocation = params.OutSeenLocation;
		if (NumberOfLoSChecksPerformed != nullptr)
			*NumberOfLoSChecksPerformed = params.NumberOfLoSChecksPerformed;
		if (OutSightStrength != nullptr)
			*OutSightStrength = params.OutSightStrength;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00798E00
	 * 		Name   -> Function HDMain.HDAIPerceptionComponent.CalcSightStrength
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Distance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHDAIPerceptionComponent::CalcSightStrength(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIPerceptionComponent.CalcSightStrength");
		
		UHDAIPerceptionComponent_CalcSightStrength_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAIPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAIPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAIPerceptionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A280
	 * 		Name   -> Function HDMain.HDAIVocalHandler.VocalizeSuppression
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIVocalHandler::VocalizeSuppression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.VocalizeSuppression");
		
		UHDAIVocalHandler_VocalizeSuppression_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A260
	 * 		Name   -> Function HDMain.HDAIVocalHandler.VocalizeReload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIVocalHandler::VocalizeReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.VocalizeReload");
		
		UHDAIVocalHandler_VocalizeReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A1D0
	 * 		Name   -> Function HDMain.HDAIVocalHandler.VocalizeContact
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bHasContact                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIVocalHandler::VocalizeContact(bool bHasContact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.VocalizeContact");
		
		UHDAIVocalHandler_VocalizeContact_Params params {};
		params.bHasContact = bHasContact;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A1B0
	 * 		Name   -> Function HDMain.HDAIVocalHandler.VocalizeBeenHit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIVocalHandler::VocalizeBeenHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.VocalizeBeenHit");
		
		UHDAIVocalHandler_VocalizeBeenHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A130
	 * 		Name   -> Function HDMain.HDAIVocalHandler.Vocalize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHDAIVocalizationType                              InVocalType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIVocalHandler::Vocalize(EHDAIVocalizationType InVocalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.Vocalize");
		
		UHDAIVocalHandler_Vocalize_Params params {};
		params.InVocalType = InVocalType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079A070
	 * 		Name   -> Function HDMain.HDAIVocalHandler.SetTimeLimit
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EHDAIVocalizationType                              InVocalType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIVocalHandler::SetTimeLimit(EHDAIVocalizationType InVocalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.SetTimeLimit");
		
		UHDAIVocalHandler_SetTimeLimit_Params params {};
		params.InVocalType = InVocalType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799FF0
	 * 		Name   -> Function HDMain.HDAIVocalHandler.SetPitchMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPitchMultiplier                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIVocalHandler::SetPitchMultiplier(float InPitchMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.SetPitchMultiplier");
		
		UHDAIVocalHandler_SetPitchMultiplier_Params params {};
		params.InPitchMultiplier = InPitchMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799E20
	 * 		Name   -> Function HDMain.HDAIVocalHandler.RandomizePitchMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDAIVocalHandler::RandomizePitchMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.RandomizePitchMultiplier");
		
		UHDAIVocalHandler_RandomizePitchMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799DA0
	 * 		Name   -> Function HDMain.HDAIVocalHandler.PlayVocalSound
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EHDAIVocalizationType                              InVocalType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIVocalHandler::PlayVocalSound(EHDAIVocalizationType InVocalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.PlayVocalSound");
		
		UHDAIVocalHandler_PlayVocalSound_Params params {};
		params.InVocalType = InVocalType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799860
	 * 		Name   -> Function HDMain.HDAIVocalHandler.NotifySurroundingCharacters
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EHDAIVocalizationType                              InVocalType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDAIVocalHandler::NotifySurroundingCharacters(EHDAIVocalizationType InVocalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDAIVocalHandler.NotifySurroundingCharacters");
		
		UHDAIVocalHandler_NotifySurroundingCharacters_Params params {};
		params.InVocalType = InVocalType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAIVocalHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAIVocalHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAIVocalHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDAssetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CFBF0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.Unlock
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AHDBaseCapturePoint::Unlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.Unlock");
		
		AHDBaseCapturePoint_Unlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799ED0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.SetActiveRoute
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewActiveRoute                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::SetActiveRoute(int32_t NewActiveRoute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.SetActiveRoute");
		
		AHDBaseCapturePoint_SetActiveRoute_Params params {};
		params.NewActiveRoute = NewActiveRoute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799E40
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.SetActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::SetActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.SetActive");
		
		AHDBaseCapturePoint_SetActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.ReceiveOnTeamCaptureStatusUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHDBaseCapturePoint::ReceiveOnTeamCaptureStatusUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.ReceiveOnTeamCaptureStatusUpdated");
		
		AHDBaseCapturePoint_ReceiveOnTeamCaptureStatusUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.ReceiveOnOwningTeamUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            LastOwningTeam                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.ReceiveOnOwningTeamUpdated");
		
		AHDBaseCapturePoint_ReceiveOnOwningTeamUpdated_Params params {};
		params.LastOwningTeam = LastOwningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.ReceiveOnLocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewLocked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::ReceiveOnLocked(bool bNewLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.ReceiveOnLocked");
		
		AHDBaseCapturePoint_ReceiveOnLocked_Params params {};
		params.bNewLocked = bNewLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.ReceiveOnCaptureProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewContested                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::ReceiveOnCaptureProgress(bool bNewContested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.ReceiveOnCaptureProgress");
		
		AHDBaseCapturePoint_ReceiveOnCaptureProgress_Params params {};
		params.bNewContested = bNewContested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.ReceiveOnActive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::ReceiveOnActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.ReceiveOnActive");
		
		AHDBaseCapturePoint_ReceiveOnActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799D20
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnRep_OwningTeam
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EHDTeam                                            LastOwningTeam                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::OnRep_OwningTeam(EHDTeam LastOwningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnRep_OwningTeam");
		
		AHDBaseCapturePoint_OnRep_OwningTeam_Params params {};
		params.LastOwningTeam = LastOwningTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799D00
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnRep_Locked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AHDBaseCapturePoint::OnRep_Locked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnRep_Locked");
		
		AHDBaseCapturePoint_OnRep_Locked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799CE0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnRep_Contested
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AHDBaseCapturePoint::OnRep_Contested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnRep_Contested");
		
		AHDBaseCapturePoint_OnRep_Contested_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799CE0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnRep_CaptureProgress
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AHDBaseCapturePoint::OnRep_CaptureProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnRep_CaptureProgress");
		
		AHDBaseCapturePoint_OnRep_CaptureProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799CC0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnRep_CapturableByTeam
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AHDBaseCapturePoint::OnRep_CapturableByTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnRep_CapturableByTeam");
		
		AHDBaseCapturePoint_OnRep_CapturableByTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799CA0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnRep_Active
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AHDBaseCapturePoint::OnRep_Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnRep_Active");
		
		AHDBaseCapturePoint_OnRep_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799C20
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnOwningTeamUpdated
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EHDTeam                                            LastOwningTeam                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::OnOwningTeamUpdated(EHDTeam LastOwningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnOwningTeamUpdated");
		
		AHDBaseCapturePoint_OnOwningTeamUpdated_Params params {};
		params.LastOwningTeam = LastOwningTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799AE0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnEndOverlap
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnEndOverlap");
		
		AHDBaseCapturePoint_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007998E0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.OnBeginOverlap
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.OnBeginOverlap");
		
		AHDBaseCapturePoint_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CFAA0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.Lock
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AHDBaseCapturePoint::Lock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.Lock");
		
		AHDBaseCapturePoint_Lock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007996F0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.IsCapturableByTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            CaptureTeam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDBaseCapturePoint::IsCapturableByTeam(EHDTeam CaptureTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.IsCapturableByTeam");
		
		AHDBaseCapturePoint_IsCapturableByTeam_Params params {};
		params.CaptureTeam = CaptureTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007995D0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.GetOverlappingCharactersByTeam
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class ADFBaseCharacter*>                    OverlappingCharsRed                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class ADFBaseCharacter*>                    OverlappingCharsBlue                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseCapturePoint::GetOverlappingCharactersByTeam(TArray<class ADFBaseCharacter*>* OverlappingCharsRed, TArray<class ADFBaseCharacter*>* OverlappingCharsBlue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.GetOverlappingCharactersByTeam");
		
		AHDBaseCapturePoint_GetOverlappingCharactersByTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OverlappingCharsRed != nullptr)
			*OverlappingCharsRed = params.OverlappingCharsRed;
		if (OverlappingCharsBlue != nullptr)
			*OverlappingCharsBlue = params.OverlappingCharsBlue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00799540
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.GetObjectiveTypeForTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            ObjTeam                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHDControlPointObjectiveType AHDBaseCapturePoint::GetObjectiveTypeForTeam(EHDTeam ObjTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.GetObjectiveTypeForTeam");
		
		AHDBaseCapturePoint_GetObjectiveTypeForTeam_Params params {};
		params.ObjTeam = ObjTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007994B0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.GetMinPlayersRequiredForCaptureTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            CaptureTeam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AHDBaseCapturePoint::GetMinPlayersRequiredForCaptureTeam(EHDTeam CaptureTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.GetMinPlayersRequiredForCaptureTeam");
		
		AHDBaseCapturePoint_GetMinPlayersRequiredForCaptureTeam_Params params {};
		params.CaptureTeam = CaptureTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007991A0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.ChoosePlayerStart
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerController*                         Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* AHDBaseCapturePoint::ChoosePlayerStart(class AHDPlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.ChoosePlayerStart");
		
		AHDBaseCapturePoint_ChoosePlayerStart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007990D0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.CanRestartPlayer
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDBaseCapturePoint::CanRestartPlayer(class AController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.CanRestartPlayer");
		
		AHDBaseCapturePoint_CanRestartPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007990A0
	 * 		Name   -> Function HDMain.HDBaseCapturePoint.CanCapture
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDBaseCapturePoint::CanCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseCapturePoint.CanCapture");
		
		AHDBaseCapturePoint_CanCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDBaseCapturePoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDBaseCapturePoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDBaseCapturePoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E610
	 * 		Name   -> Function HDMain.HDBaseGameMode.RemoveOpforBots
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseGameMode::RemoveOpforBots(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseGameMode.RemoveOpforBots");
		
		AHDBaseGameMode_RemoveOpforBots_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E580
	 * 		Name   -> Function HDMain.HDBaseGameMode.RemoveBluforBots
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseGameMode::RemoveBluforBots(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseGameMode.RemoveBluforBots");
		
		AHDBaseGameMode_RemoveBluforBots_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E470
	 * 		Name   -> Function HDMain.HDBaseGameMode.PlayerCanRestartAtPlayerStart
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      StartSpot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFLoadout*                                  StartLoadout                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDBaseGameMode::PlayerCanRestartAtPlayerStart(class AController* Player, class AActor* StartSpot, class UDFLoadout* StartLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseGameMode.PlayerCanRestartAtPlayerStart");
		
		AHDBaseGameMode_PlayerCanRestartAtPlayerStart_Params params {};
		params.Player = Player;
		params.StartSpot = StartSpot;
		params.StartLoadout = StartLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DA40
	 * 		Name   -> Function HDMain.HDBaseGameMode.AddOpforBots
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseGameMode::AddOpforBots(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseGameMode.AddOpforBots");
		
		AHDBaseGameMode_AddOpforBots_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079D9B0
	 * 		Name   -> Function HDMain.HDBaseGameMode.AddBluforBots
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDBaseGameMode::AddBluforBots(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseGameMode.AddBluforBots");
		
		AHDBaseGameMode_AddBluforBots_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDBaseGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDBaseGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDBaseGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDBasePickup_Kit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDBasePickup_Kit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDBasePickup_Kit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDBaseProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDBaseProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDBaseProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E190
	 * 		Name   -> Function HDMain.HDBaseWeapon.IsSelectableEquipment
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDBaseWeapon::IsSelectableEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDBaseWeapon.IsSelectableEquipment");
		
		AHDBaseWeapon_IsSelectableEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDBaseWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDBaseWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDBaseWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7C00
	 * 		Name   -> Function HDMain.HDPlayerController.UnloadVictoryMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AHDPlayerController::UnloadVictoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.UnloadVictoryMenu");
		
		AHDPlayerController_UnloadVictoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7BE0
	 * 		Name   -> Function HDMain.HDPlayerController.TeamTalk
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AHDPlayerController::TeamTalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.TeamTalk");
		
		AHDPlayerController_TeamTalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7BC0
	 * 		Name   -> Function HDMain.HDPlayerController.Talk
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AHDPlayerController::Talk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.Talk");
		
		AHDPlayerController_Talk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7B10
	 * 		Name   -> Function HDMain.HDPlayerController.StopTalkingOverChannelIfActive
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TalkStopChannelName                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::StopTalkingOverChannelIfActive(const class FName& TalkStopChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.StopTalkingOverChannelIfActive");
		
		AHDPlayerController_StopTalkingOverChannelIfActive_Params params {};
		params.TalkStopChannelName = TalkStopChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7A80
	 * 		Name   -> Function HDMain.HDPlayerController.StopTalkingOverChannelGroupIfActive
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TalkStopGroupName                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::StopTalkingOverChannelGroupIfActive(const class FName& TalkStopGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.StopTalkingOverChannelGroupIfActive");
		
		AHDPlayerController_StopTalkingOverChannelGroupIfActive_Params params {};
		params.TalkStopGroupName = TalkStopGroupName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7A60
	 * 		Name   -> Function HDMain.HDPlayerController.StopTalkingOnActiveChannels
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AHDPlayerController::StopTalkingOnActiveChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.StopTalkingOnActiveChannels");
		
		AHDPlayerController_StopTalkingOnActiveChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A79D0
	 * 		Name   -> Function HDMain.HDPlayerController.StartTalkingOverChannelGroup
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TalkStartGroupName                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::StartTalkingOverChannelGroup(const class FName& TalkStartGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.StartTalkingOverChannelGroup");
		
		AHDPlayerController_StartTalkingOverChannelGroup_Params params {};
		params.TalkStartGroupName = TalkStartGroupName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7940
	 * 		Name   -> Function HDMain.HDPlayerController.StartTalkingOverChannel
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TalkStartChannelName                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::StartTalkingOverChannel(const class FName& TalkStartChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.StartTalkingOverChannel");
		
		AHDPlayerController_StartTalkingOverChannel_Params params {};
		params.TalkStartChannelName = TalkStartChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A78F0
	 * 		Name   -> Function HDMain.HDPlayerController.ServerSwitchTeam
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AHDPlayerController::ServerSwitchTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ServerSwitchTeam");
		
		AHDPlayerController_ServerSwitchTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A78A0
	 * 		Name   -> Function HDMain.HDPlayerController.ServerSpawnVehicle
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AHDPlayerController::ServerSpawnVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ServerSpawnVehicle");
		
		AHDPlayerController_ServerSpawnVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A77A0
	 * 		Name   -> Function HDMain.HDPlayerController.ServerRestartPlayerAtStartSpot
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      DesiredStartSpot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFLoadout*                                  DesiredStartLoadout                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::ServerRestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ServerRestartPlayerAtStartSpot");
		
		AHDPlayerController_ServerRestartPlayerAtStartSpot_Params params {};
		params.DesiredStartSpot = DesiredStartSpot;
		params.DesiredStartLoadout = DesiredStartLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A76F0
	 * 		Name   -> Function HDMain.HDPlayerController.ServerPickTeam
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		EHDTeam                                            DesiredTeam                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::ServerPickTeam(EHDTeam DesiredTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ServerPickTeam");
		
		AHDPlayerController_ServerPickTeam_Params params {};
		params.DesiredTeam = DesiredTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7630
	 * 		Name   -> Function HDMain.HDPlayerController.ServerCheatSetAllowIdleSway
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	 * Parameters:
	 * 		bool                                               bIdleSwayDisallowed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::ServerCheatSetAllowIdleSway(bool bIdleSwayDisallowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ServerCheatSetAllowIdleSway");
		
		AHDPlayerController_ServerCheatSetAllowIdleSway_Params params {};
		params.bIdleSwayDisallowed = bIdleSwayDisallowed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlayerController.ReceiveVoipTalkerMsgReceived
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              MsgTalkerChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                MsgTalkerPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMsgIsTalking                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ReceiveVoipTalkerMsgReceived");
		
		AHDPlayerController_ReceiveVoipTalkerMsgReceived_Params params {};
		params.MsgTalkerChannel = MsgTalkerChannel;
		params.MsgTalkerPS = MsgTalkerPS;
		params.bMsgIsTalking = bMsgIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A73F0
	 * 		Name   -> Function HDMain.HDPlayerController.OnShowScoreboardReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AHDPlayerController::OnShowScoreboardReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.OnShowScoreboardReleased");
		
		AHDPlayerController_OnShowScoreboardReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A73D0
	 * 		Name   -> Function HDMain.HDPlayerController.OnShowScoreboardPressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AHDPlayerController::OnShowScoreboardPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.OnShowScoreboardPressed");
		
		AHDPlayerController_OnShowScoreboardPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlayerController.OnPlayerSpawnTimerElapsed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHDPlayerController::OnPlayerSpawnTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.OnPlayerSpawnTimerElapsed");
		
		AHDPlayerController_OnPlayerSpawnTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7250
	 * 		Name   -> Function HDMain.HDPlayerController.OnPauseMenu
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AHDPlayerController::OnPauseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.OnPauseMenu");
		
		AHDPlayerController_OnPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7160
	 * 		Name   -> Function HDMain.HDPlayerController.LoadVictoryMenu
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHDGameRoundEndEventDetails                 RoundDetails                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWinner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::LoadVictoryMenu(const struct FHDGameRoundEndEventDetails& RoundDetails, bool bWinner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.LoadVictoryMenu");
		
		AHDPlayerController_LoadVictoryMenu_Params params {};
		params.RoundDetails = RoundDetails;
		params.bWinner = bWinner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A70D0
	 * 		Name   -> Function HDMain.HDPlayerController.IsTalkingOverChannelName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        TalkChannelName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlayerController::IsTalkingOverChannelName(const class FName& TalkChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.IsTalkingOverChannelName");
		
		AHDPlayerController_IsTalkingOverChannelName_Params params {};
		params.TalkChannelName = TalkChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7040
	 * 		Name   -> Function HDMain.HDPlayerController.IsTalkingOverChannelGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        TalkGroupName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlayerController::IsTalkingOverChannelGroup(const class FName& TalkGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.IsTalkingOverChannelGroup");
		
		AHDPlayerController_IsTalkingOverChannelGroup_Params params {};
		params.TalkGroupName = TalkGroupName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6FB0
	 * 		Name   -> Function HDMain.HDPlayerController.IsTalkingOverChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDFCommChannel*                              TalkChannel                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlayerController::IsTalkingOverChannel(class UDFCommChannel* TalkChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.IsTalkingOverChannel");
		
		AHDPlayerController_IsTalkingOverChannel_Params params {};
		params.TalkChannel = TalkChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6F20
	 * 		Name   -> Function HDMain.HDPlayerController.IsTalking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeWantsToTalk                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlayerController::IsTalking(bool bIncludeWantsToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.IsTalking");
		
		AHDPlayerController_IsTalking_Params params {};
		params.bIncludeWantsToTalk = bIncludeWantsToTalk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6EF0
	 * 		Name   -> Function HDMain.HDPlayerController.IsInVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDPlayerController::IsInVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.IsInVehicle");
		
		AHDPlayerController_IsInVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6EC0
	 * 		Name   -> Function HDMain.HDPlayerController.IsIdleSwayAllowed
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDPlayerController::IsIdleSwayAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.IsIdleSwayAllowed");
		
		AHDPlayerController_IsIdleSwayAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6DF0
	 * 		Name   -> Function HDMain.HDPlayerController.GetTalkChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UDFCommChannel* AHDPlayerController::GetTalkChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.GetTalkChannel");
		
		AHDPlayerController_GetTalkChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6DC0
	 * 		Name   -> Function HDMain.HDPlayerController.GetPlayerCommsComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UDFPlayerCommsComponent* AHDPlayerController::GetPlayerCommsComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.GetPlayerCommsComponent");
		
		AHDPlayerController_GetPlayerCommsComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6950
	 * 		Name   -> Function HDMain.HDPlayerController.ClientRoundEnd
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		struct FHDGameRoundEndEventDetails                 RoundDetails                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsWinner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::ClientRoundEnd(const struct FHDGameRoundEndEventDetails& RoundDetails, bool bIsWinner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ClientRoundEnd");
		
		AHDPlayerController_ClientRoundEnd_Params params {};
		params.RoundDetails = RoundDetails;
		params.bIsWinner = bIsWinner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6890
	 * 		Name   -> Function HDMain.HDPlayerController.ClientLoadTeamData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		TArray<class FString>                              FactionAssetPaths                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::ClientLoadTeamData(TArray<class FString> FactionAssetPaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ClientLoadTeamData");
		
		AHDPlayerController_ClientLoadTeamData_Params params {};
		params.FactionAssetPaths = FactionAssetPaths;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6800
	 * 		Name   -> Function HDMain.HDPlayerController.ClientCheatSetAllowIdleSway
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		bool                                               bIdleSwayDisallowed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerController::ClientCheatSetAllowIdleSway(bool bIdleSwayDisallowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.ClientCheatSetAllowIdleSway");
		
		AHDPlayerController_ClientCheatSetAllowIdleSway_Params params {};
		params.bIdleSwayDisallowed = bIdleSwayDisallowed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6760
	 * 		Name   -> Function HDMain.HDPlayerController.CanTalkOverChannel
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        TalkChannelName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlayerController::CanTalkOverChannel(const class FName& TalkChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.CanTalkOverChannel");
		
		AHDPlayerController_CanTalkOverChannel_Params params {};
		params.TalkChannelName = TalkChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6740
	 * 		Name   -> Function HDMain.HDPlayerController.Auth_SpawnVehicle
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void AHDPlayerController::Auth_SpawnVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerController.Auth_SpawnVehicle");
		
		AHDPlayerController_Auth_SpawnVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079F080
	 * 		Name   -> Function HDMain.HDCheatManager.ToggleIdleSway
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UHDCheatManager::ToggleIdleSway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.ToggleIdleSway");
		
		UHDCheatManager_ToggleIdleSway_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079F060
	 * 		Name   -> Function HDMain.HDCheatManager.ToggleFreeAimADS
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UHDCheatManager::ToggleFreeAimADS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.ToggleFreeAimADS");
		
		UHDCheatManager_ToggleFreeAimADS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079F040
	 * 		Name   -> Function HDMain.HDCheatManager.ToggleFreeAim
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UHDCheatManager::ToggleFreeAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.ToggleFreeAim");
		
		UHDCheatManager_ToggleFreeAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7310
	 * 		Name   -> Function HDMain.HDCheatManager.SpawnVehicle
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UHDCheatManager::SpawnVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.SpawnVehicle");
		
		UHDCheatManager_SpawnVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079ED80
	 * 		Name   -> Function HDMain.HDCheatManager.SetMaxFreeAimYawADS
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              NewYaw                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDCheatManager::SetMaxFreeAimYawADS(float NewYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.SetMaxFreeAimYawADS");
		
		UHDCheatManager_SetMaxFreeAimYawADS_Params params {};
		params.NewYaw = NewYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079ED00
	 * 		Name   -> Function HDMain.HDCheatManager.SetMaxFreeAimYaw
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              NewYaw                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDCheatManager::SetMaxFreeAimYaw(float NewYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.SetMaxFreeAimYaw");
		
		UHDCheatManager_SetMaxFreeAimYaw_Params params {};
		params.NewYaw = NewYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079EC80
	 * 		Name   -> Function HDMain.HDCheatManager.SetMaxFreeAimPitchADS
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              NewPitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDCheatManager::SetMaxFreeAimPitchADS(float NewPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.SetMaxFreeAimPitchADS");
		
		UHDCheatManager_SetMaxFreeAimPitchADS_Params params {};
		params.NewPitch = NewPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079EC00
	 * 		Name   -> Function HDMain.HDCheatManager.SetMaxFreeAimPitch
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              NewPitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDCheatManager::SetMaxFreeAimPitch(float NewPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.SetMaxFreeAimPitch");
		
		UHDCheatManager_SetMaxFreeAimPitch_Params params {};
		params.NewPitch = NewPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E8E0
	 * 		Name   -> Function HDMain.HDCheatManager.SetFreeAimReturnToCenterInterpSpeed
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              NewInterpSpeed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDCheatManager::SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.SetFreeAimReturnToCenterInterpSpeed");
		
		UHDCheatManager_SetFreeAimReturnToCenterInterpSpeed_Params params {};
		params.NewInterpSpeed = NewInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E860
	 * 		Name   -> Function HDMain.HDCheatManager.SetFreeAimDeadzoneCameraSpeedFactor
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              NewSpeedFactor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDCheatManager::SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDCheatManager.SetFreeAimDeadzoneCameraSpeedFactor");
		
		UHDCheatManager_SetFreeAimDeadzoneCameraSpeedFactor_Params params {};
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDFactionInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDFactionInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDFactionInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DC30
	 * 		Name   -> Function HDMain.HDGame_AdvanceAndSecure.GetCurrentRedCaptureTier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AHDGame_AdvanceAndSecure::GetCurrentRedCaptureTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGame_AdvanceAndSecure.GetCurrentRedCaptureTier");
		
		AHDGame_AdvanceAndSecure_GetCurrentRedCaptureTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DC10
	 * 		Name   -> Function HDMain.HDGame_AdvanceAndSecure.GetCurrentBlueCaptureTier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AHDGame_AdvanceAndSecure::GetCurrentBlueCaptureTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGame_AdvanceAndSecure.GetCurrentBlueCaptureTier");
		
		AHDGame_AdvanceAndSecure_GetCurrentBlueCaptureTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDGame_AdvanceAndSecure.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDGame_AdvanceAndSecure::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGame_AdvanceAndSecure");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDGame_TeamDeathMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDGame_TeamDeathMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGame_TeamDeathMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGameEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGameEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079F0A0
	 * 		Name   -> Function HDMain.HDGameInstance.UnloadScoreboardMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDGameInstance::UnloadScoreboardMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameInstance.UnloadScoreboardMenu");
		
		UHDGameInstance_UnloadScoreboardMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E3F0
	 * 		Name   -> Function HDMain.HDGameInstance.OwnsAppBP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDGameInstance::STATIC_OwnsAppBP(int64_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameInstance.OwnsAppBP");
		
		UHDGameInstance_OwnsAppBP_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E310
	 * 		Name   -> Function HDMain.HDGameInstance.LoadScoreboardMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDGameInstance::LoadScoreboardMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameInstance.LoadScoreboardMenu");
		
		UHDGameInstance_LoadScoreboardMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E010
	 * 		Name   -> Function HDMain.HDGameInstance.HasModsLoaded
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UHDGameInstance::STATIC_HasModsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameInstance.HasModsLoaded");
		
		UHDGameInstance_HasModsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DF90
	 * 		Name   -> Function HDMain.HDGameInstance.HasDLCBP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            DLCAppID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDGameInstance::STATIC_HasDLCBP(int64_t DLCAppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameInstance.HasDLCBP");
		
		UHDGameInstance_HasDLCBP_Params params {};
		params.DLCAppID = DLCAppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGameModeDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGameModeDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameModeDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGameModsProjectPolicies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGameModsProjectPolicies::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameModsProjectPolicies");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E0A0
	 * 		Name   -> Function HDMain.HDGameProjectBuildSettings.IsDemoBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UHDGameProjectBuildSettings::STATIC_IsDemoBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameProjectBuildSettings.IsDemoBuild");
		
		UHDGameProjectBuildSettings_IsDemoBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGameProjectBuildSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGameProjectBuildSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameProjectBuildSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E7A0
	 * 		Name   -> Function HDMain.HDGameRulesetBase.RevokeTicketsFromTeam
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EHDTeam                                            TicketTeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TicketsToRemove                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDGameRulesetBase::RevokeTicketsFromTeam(EHDTeam TicketTeam, int32_t TicketsToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameRulesetBase.RevokeTicketsFromTeam");
		
		UHDGameRulesetBase_RevokeTicketsFromTeam_Params params {};
		params.TicketTeam = TicketTeam;
		params.TicketsToRemove = TicketsToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DED0
	 * 		Name   -> Function HDMain.HDGameRulesetBase.GiveTicketsToTeam
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EHDTeam                                            TicketTeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TicketsToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDGameRulesetBase::GiveTicketsToTeam(EHDTeam TicketTeam, int32_t TicketsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameRulesetBase.GiveTicketsToTeam");
		
		UHDGameRulesetBase_GiveTicketsToTeam_Params params {};
		params.TicketTeam = TicketTeam;
		params.TicketsToAdd = TicketsToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DD40
	 * 		Name   -> Function HDMain.HDGameRulesetBase.GetHDGameState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDGameState* UHDGameRulesetBase::GetHDGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameRulesetBase.GetHDGameState");
		
		UHDGameRulesetBase_GetHDGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DD10
	 * 		Name   -> Function HDMain.HDGameRulesetBase.GetHDGameMode
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDBaseGameMode* UHDGameRulesetBase::GetHDGameMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameRulesetBase.GetHDGameMode");
		
		UHDGameRulesetBase_GetHDGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGameRulesetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGameRulesetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameRulesetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E6D0
	 * 		Name   -> Function HDMain.HDGameState.RevokeTicketsFromTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHDTeam                                            TicketTeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TicketsToRemove                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDGameState::RevokeTicketsFromTeam(EHDTeam TicketTeam, int32_t TicketsToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameState.RevokeTicketsFromTeam");
		
		AHDGameState_RevokeTicketsFromTeam_Params params {};
		params.TicketTeam = TicketTeam;
		params.TicketsToRemove = TicketsToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E160
	 * 		Name   -> Function HDMain.HDGameState.IsGameUsingTickets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDGameState::IsGameUsingTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameState.IsGameUsingTickets");
		
		AHDGameState_IsGameUsingTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E0D0
	 * 		Name   -> Function HDMain.HDGameState.IsGameUsingPlayerSpawnKitRestrictions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDGameState::IsGameUsingPlayerSpawnKitRestrictions(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameState.IsGameUsingPlayerSpawnKitRestrictions");
		
		AHDGameState_IsGameUsingPlayerSpawnKitRestrictions_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DE00
	 * 		Name   -> Function HDMain.HDGameState.GiveTicketsToTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHDTeam                                            TicketTeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TicketsToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDGameState::GiveTicketsToTeam(EHDTeam TicketTeam, int32_t TicketsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameState.GiveTicketsToTeam");
		
		AHDGameState_GiveTicketsToTeam_Params params {};
		params.TicketTeam = TicketTeam;
		params.TicketsToAdd = TicketsToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DD70
	 * 		Name   -> Function HDMain.HDGameState.GetNumPlayersOnTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            TeamToCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AHDGameState::GetNumPlayersOnTeam(EHDTeam TeamToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameState.GetNumPlayersOnTeam");
		
		AHDGameState_GetNumPlayersOnTeam_Params params {};
		params.TeamToCheck = TeamToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DAD0
	 * 		Name   -> Function HDMain.HDGameState.ClearTickets
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AHDGameState::ClearTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGameState.ClearTickets");
		
		AHDGameState_ClearTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPActionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPActionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPActionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPAct_AttackEnemy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPAct_AttackEnemy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPAct_AttackEnemy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPAct_CaptureControlPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPAct_CaptureControlPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPAct_CaptureControlPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPAct_DefendControlPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPAct_DefendControlPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPAct_DefendControlPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPAct_LoadWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPAct_LoadWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPAct_LoadWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPAct_MoveToDesiredLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPAct_MoveToDesiredLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPAct_MoveToDesiredLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPAct_MoveToLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPAct_MoveToLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPAct_MoveToLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPAct_MoveToOrganic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPAct_MoveToOrganic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPAct_MoveToOrganic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079EEC0
	 * 		Name   -> Function HDMain.HDGOAPComponent.TargetPerceptionUpdated
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHDGOAPComponent::TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGOAPComponent.TargetPerceptionUpdated");
		
		UHDGOAPComponent_TargetPerceptionUpdated_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E6A0
	 * 		Name   -> Function HDMain.HDGOAPComponent.ResetPlanningTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHDGOAPComponent::ResetPlanningTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGOAPComponent.ResetPlanningTimer");
		
		UHDGOAPComponent_ResetPlanningTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E070
	 * 		Name   -> Function HDMain.HDGOAPComponent.IsAIActiveInWorld
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDGOAPComponent::IsAIActiveInWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGOAPComponent.IsAIActiveInWorld");
		
		UHDGOAPComponent_IsAIActiveInWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E040
	 * 		Name   -> Function HDMain.HDGOAPComponent.IsAIActive
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDGOAPComponent::IsAIActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGOAPComponent.IsAIActive");
		
		UHDGOAPComponent_IsAIActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DB80
	 * 		Name   -> Function HDMain.HDGOAPComponent.GetAIHandler
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      HandlerClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHDAIHandlerBase* UHDGOAPComponent::GetAIHandler(class UClass* HandlerClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDGOAPComponent.GetAIHandler");
		
		UHDGOAPComponent_GetAIHandler_Params params {};
		params.HandlerClass = HandlerClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPGoalBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPGoalBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPGoalBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPGoal_CaptureControlPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPGoal_CaptureControlPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPGoal_CaptureControlPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDGOAPGoal_EliminateEnemy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDGOAPGoal_EliminateEnemy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDGOAPGoal_EliminateEnemy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079EE00
	 * 		Name   -> Function HDMain.HDServerListView.SortListItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSortAscending                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDServerListSortBy                                SortBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDServerListView::SortListItems(bool bSortAscending, EHDServerListSortBy SortBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListView.SortListItems");
		
		UHDServerListView_SortListItems_Params params {};
		params.bSortAscending = bSortAscending;
		params.SortBy = SortBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079EB80
	 * 		Name   -> Function HDMain.HDServerListView.SetItemSortBy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHDServerListSortBy                                SortBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDServerListView::SetItemSortBy(EHDServerListSortBy SortBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListView.SetItemSortBy");
		
		UHDServerListView_SetItemSortBy_Params params {};
		params.SortBy = SortBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079EAF0
	 * 		Name   -> Function HDMain.HDServerListView.SetItemSortAscending
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSortAscending                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDServerListView::SetItemSortAscending(bool bSortAscending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListView.SetItemSortAscending");
		
		UHDServerListView_SetItemSortAscending_Params params {};
		params.bSortAscending = bSortAscending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E960
	 * 		Name   -> Function HDMain.HDServerListView.SetItemFilterRules
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    FilterRules                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHDServerListView::SetItemFilterRules(TMap<class UClass*, struct FHDFilterRuleParams> FilterRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListView.SetItemFilterRules");
		
		UHDServerListView_SetItemFilterRules_Params params {};
		params.FilterRules = FilterRules;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DCF0
	 * 		Name   -> Function HDMain.HDServerListView.GetEntrySpacing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UHDServerListView::GetEntrySpacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListView.GetEntrySpacing");
		
		UHDServerListView_GetEntrySpacing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DC50
	 * 		Name   -> Function HDMain.HDServerListView.GetDesiredEntryPaddingForItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMargin UHDServerListView::GetDesiredEntryPaddingForItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListView.GetDesiredEntryPaddingForItem");
		
		UHDServerListView_GetDesiredEntryPaddingForItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079DAF0
	 * 		Name   -> Function HDMain.HDServerListView.DoesFilterExcludeListItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDServerListView::DoesFilterExcludeListItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListView.DoesFilterExcludeListItem");
		
		UHDServerListView_DoesFilterExcludeListItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDServerListView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDServerListView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDServerListView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDJoinGameMenu.ReceiveOnRefreshStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHDJoinGameMenu::ReceiveOnRefreshStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDJoinGameMenu.ReceiveOnRefreshStart");
		
		UHDJoinGameMenu_ReceiveOnRefreshStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDJoinGameMenu.ReceiveOnRefreshComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSortAscending                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDServerListSortBy                                SortBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDJoinGameMenu::ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDJoinGameMenu.ReceiveOnRefreshComplete");
		
		UHDJoinGameMenu_ReceiveOnRefreshComplete_Params params {};
		params.bSortAscending = bSortAscending;
		params.SortBy = SortBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E330
	 * 		Name   -> Function HDMain.HDJoinGameMenu.OnRefresh
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSortAscending                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDServerListSortBy                                SortBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDJoinGameMenu::OnRefresh(bool bSortAscending, EHDServerListSortBy SortBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDJoinGameMenu.OnRefresh");
		
		UHDJoinGameMenu_OnRefresh_Params params {};
		params.bSortAscending = bSortAscending;
		params.SortBy = SortBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E230
	 * 		Name   -> Function HDMain.HDJoinGameMenu.JoinGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHDServerListItemData*                       ServerItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JoinPassword                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDJoinGameMenu::JoinGame(class UHDServerListItemData* ServerItem, const class FString& JoinPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDJoinGameMenu.JoinGame");
		
		UHDJoinGameMenu_JoinGame_Params params {};
		params.ServerItem = ServerItem;
		params.JoinPassword = JoinPassword;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079E1C0
	 * 		Name   -> Function HDMain.HDJoinGameMenu.IsUsingDebugServerListings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDJoinGameMenu::IsUsingDebugServerListings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDJoinGameMenu.IsUsingDebugServerListings");
		
		UHDJoinGameMenu_IsUsingDebugServerListings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDJoinGameMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDJoinGameMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDJoinGameMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2F30
	 * 		Name   -> Function HDMain.HDKit.RandomCharacterVariationDataFromKit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDFCharacterVariationDataHandle UHDKit::RandomCharacterVariationDataFromKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.RandomCharacterVariationDataFromKit");
		
		UHDKit_RandomCharacterVariationDataFromKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2E10
	 * 		Name   -> Function HDMain.HDKit.PlayerCanStartWithKit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        OutKitDenialReason                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UHDKit::PlayerCanStartWithKit(class AController* Player, class FText* OutKitDenialReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.PlayerCanStartWithKit");
		
		UHDKit_PlayerCanStartWithKit_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKitDenialReason != nullptr)
			*OutKitDenialReason = params.OutKitDenialReason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2A50
	 * 		Name   -> Function HDMain.HDKit.HasKitRequirements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDKit::HasKitRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.HasKitRequirements");
		
		UHDKit_HasKitRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A28F0
	 * 		Name   -> Function HDMain.HDKit.GetPrimaryItemEntryDisplayIcon
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UTexture2D*                                  OutDisplayIcon                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDKit::GetPrimaryItemEntryDisplayIcon(class UTexture2D** OutDisplayIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.GetPrimaryItemEntryDisplayIcon");
		
		UHDKit_GetPrimaryItemEntryDisplayIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDisplayIcon != nullptr)
			*OutDisplayIcon = params.OutDisplayIcon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2840
	 * 		Name   -> Function HDMain.HDKit.GetPrimaryItemEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FHDItemEntry                                OutPrimaryEntry                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UHDKit::GetPrimaryItemEntry(struct FHDItemEntry* OutPrimaryEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.GetPrimaryItemEntry");
		
		UHDKit_GetPrimaryItemEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPrimaryEntry != nullptr)
			*OutPrimaryEntry = params.OutPrimaryEntry;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2740
	 * 		Name   -> Function HDMain.HDKit.GetPlayersUsingKit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AHDPlayerState*>                      OutPSArray                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UHDKit::GetPlayersUsingKit(class UObject* WorldContextObject, TArray<class AHDPlayerState*>* OutPSArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.GetPlayersUsingKit");
		
		UHDKit_GetPlayersUsingKit_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPSArray != nullptr)
			*OutPSArray = params.OutPSArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A25E0
	 * 		Name   -> Function HDMain.HDKit.GetNumPlayersUsingKit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UHDKit::GetNumPlayersUsingKit(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.GetNumPlayersUsingKit");
		
		UHDKit_GetNumPlayersUsingKit_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2410
	 * 		Name   -> Function HDMain.HDKit.GetItemEntryDisplayIcon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHDItemEntry                                ItemEntry                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  OutDisplayIcon                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDKit::STATIC_GetItemEntryDisplayIcon(const struct FHDItemEntry& ItemEntry, class UTexture2D** OutDisplayIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.GetItemEntryDisplayIcon");
		
		UHDKit_GetItemEntryDisplayIcon_Params params {};
		params.ItemEntry = ItemEntry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDisplayIcon != nullptr)
			*OutDisplayIcon = params.OutDisplayIcon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2320
	 * 		Name   -> Function HDMain.HDKit.GetItemEntryDisplayEquipmentSymbol
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHDItemEntry                                ItemEntry                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  OutDisplayEquipmentSymbol                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDKit::STATIC_GetItemEntryDisplayEquipmentSymbol(const struct FHDItemEntry& ItemEntry, class UTexture2D** OutDisplayEquipmentSymbol)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.GetItemEntryDisplayEquipmentSymbol");
		
		UHDKit_GetItemEntryDisplayEquipmentSymbol_Params params {};
		params.ItemEntry = ItemEntry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDisplayEquipmentSymbol != nullptr)
			*OutDisplayEquipmentSymbol = params.OutDisplayEquipmentSymbol;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2240
	 * 		Name   -> Function HDMain.HDKit.GetItemEntryBySlotNum
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHDItemEntry                                OutEntry                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UHDKit::GetItemEntryBySlotNum(int32_t SlotNum, struct FHDItemEntry* OutEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDKit.GetItemEntryBySlotNum");
		
		UHDKit_GetItemEntryBySlotNum_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEntry != nullptr)
			*OutEntry = params.OutEntry;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisiteBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisiteBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisiteBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_AdminOnly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_AdminOnly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_AdminOnly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_AlwaysDisable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_AlwaysDisable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_AlwaysDisable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_MinSquadMembers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_MinSquadMembers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_MinSquadMembers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_SquadLeaderOnly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_SquadLeaderOnly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_SquadLeaderOnly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_SquadSizeLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_SquadSizeLimit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_SquadSizeLimit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_SquadUsageLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_SquadUsageLimit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_SquadUsageLimit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_TeamSpecific.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_TeamSpecific::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_TeamSpecific");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDKitPrerequisite_TeamUsageLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDKitPrerequisite_TeamUsageLimit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDKitPrerequisite_TeamUsageLimit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1F80
	 * 		Name   -> Function HDMain.HDModData.DoesModPluginUseLegacyMapScanning
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      PluginName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDModData::STATIC_DoesModPluginUseLegacyMapScanning(const class FString& PluginName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDModData.DoesModPluginUseLegacyMapScanning");
		
		UHDModData_DoesModPluginUseLegacyMapScanning_Params params {};
		params.PluginName = PluginName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDModData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDModData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDModData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDNavigationSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDNavigationSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDNavigationSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDNavigationSystemConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDNavigationSystemConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDNavigationSystemConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDOnlineSessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDOptionsMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDOptionsMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDOptionsMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPhysicsCollisionHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPhysicsCollisionHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPhysicsCollisionHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3100
	 * 		Name   -> Function HDMain.HDPlatoonCreationRuleBase.SatisfiesRule
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UHDTeamDefinition*                           TeamDef                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDPlatoonCreationRuleBase::SatisfiesRule(class UHDTeamDefinition* TeamDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonCreationRuleBase.SatisfiesRule");
		
		UHDPlatoonCreationRuleBase_SatisfiesRule_Params params {};
		params.TeamDef = TeamDef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPlatoonCreationRuleBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPlatoonCreationRuleBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlatoonCreationRuleBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3780
	 * 		Name   -> Function HDMain.HDPlatoonInfo.ShouldCreateForTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UHDTeamDefinition*                           TeamDef                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDPlatoonInfo::ShouldCreateForTeam(class UHDTeamDefinition* TeamDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonInfo.ShouldCreateForTeam");
		
		UHDPlatoonInfo_ShouldCreateForTeam_Params params {};
		params.TeamDef = TeamDef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPlatoonInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPlatoonInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlatoonInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPlatoonStateCreationPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPlatoonStateCreationPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlatoonStateCreationPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3810
	 * 		Name   -> Function HDMain.HDPlatoonState.SquadExists
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePendingRemoval                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlatoonState::SquadExists(class AHDSquadState* Squad, bool bIgnorePendingRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.SquadExists");
		
		AHDPlatoonState_SquadExists_Params params {};
		params.Squad = Squad;
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3080
	 * 		Name   -> Function HDMain.HDPlatoonState.RemoveSquadAt
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RemoveIdx                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlatoonState::RemoveSquadAt(int32_t RemoveIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.RemoveSquadAt");
		
		AHDPlatoonState_RemoveSquadAt_Params params {};
		params.RemoveIdx = RemoveIdx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3000
	 * 		Name   -> Function HDMain.HDPlatoonState.RemoveSquad
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDSquadState*                               SquadToRemove                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlatoonState::RemoveSquad(class AHDSquadState* SquadToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.RemoveSquad");
		
		AHDPlatoonState_RemoveSquad_Params params {};
		params.SquadToRemove = SquadToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CF9F0
	 * 		Name   -> Function HDMain.HDPlatoonState.RemoveFromOwner
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AHDPlatoonState::RemoveFromOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.RemoveFromOwner");
		
		AHDPlatoonState_RemoveFromOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlatoonState.ReceiveSquadPreRemove
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlatoonState::ReceiveSquadPreRemove(class AHDSquadState* Squad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.ReceiveSquadPreRemove");
		
		AHDPlatoonState_ReceiveSquadPreRemove_Params params {};
		params.Squad = Squad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlatoonState.ReceiveSquadAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlatoonState::ReceiveSquadAdded(class AHDSquadState* Squad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.ReceiveSquadAdded");
		
		AHDPlatoonState_ReceiveSquadAdded_Params params {};
		params.Squad = Squad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2AF0
	 * 		Name   -> Function HDMain.HDPlatoonState.IsSquadPendingRemovalFromPlatoon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlatoonState::IsSquadPendingRemovalFromPlatoon(class AHDSquadState* Squad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.IsSquadPendingRemovalFromPlatoon");
		
		AHDPlatoonState_IsSquadPendingRemovalFromPlatoon_Params params {};
		params.Squad = Squad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2A70
	 * 		Name   -> Function HDMain.HDPlatoonState.HasReachedMaxSquadLimit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDPlatoonState::HasReachedMaxSquadLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.HasReachedMaxSquadLimit");
		
		AHDPlatoonState_HasReachedMaxSquadLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2990
	 * 		Name   -> Function HDMain.HDPlatoonState.GetSquadAt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePendingRemoval                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHDSquadState* AHDPlatoonState::GetSquadAt(int32_t Index, bool bIgnorePendingRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.GetSquadAt");
		
		AHDPlatoonState_GetSquadAt_Params params {};
		params.Index = Index;
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2670
	 * 		Name   -> Function HDMain.HDPlatoonState.GetNumSquads
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bValidSquadsOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AHDPlatoonState::GetNumSquads(bool bValidSquadsOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.GetNumSquads");
		
		AHDPlatoonState_GetNumSquads_Params params {};
		params.bValidSquadsOnly = bValidSquadsOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A25B0
	 * 		Name   -> Function HDMain.HDPlatoonState.GetMaxSquadLimit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AHDPlatoonState::GetMaxSquadLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.GetMaxSquadLimit");
		
		AHDPlatoonState_GetMaxSquadLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2090
	 * 		Name   -> Function HDMain.HDPlatoonState.FindSquadByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        SquadDisplayName                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AHDSquadState*                               OutFoundSquad                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDPlatoonState::FindSquadByName(const class FText& SquadDisplayName, class AHDSquadState** OutFoundSquad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.FindSquadByName");
		
		AHDPlatoonState_FindSquadByName_Params params {};
		params.SquadDisplayName = SquadDisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundSquad != nullptr)
			*OutFoundSquad = params.OutFoundSquad;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2040
	 * 		Name   -> Function HDMain.HDPlatoonState.DumpSquadState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void AHDPlatoonState::DumpSquadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.DumpSquadState");
		
		AHDPlatoonState_DumpSquadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1E20
	 * 		Name   -> Function HDMain.HDPlatoonState.AddSquad
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        SquadDisplayName                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              SquadLeader                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartLocked                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHDSquadState* AHDPlatoonState::AddSquad(const class FText& SquadDisplayName, class AHDPlayerState* SquadLeader, bool bStartLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlatoonState.AddSquad");
		
		AHDPlatoonState_AddSquad_Params params {};
		params.SquadDisplayName = SquadDisplayName;
		params.SquadLeader = SquadLeader;
		params.bStartLocked = bStartLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDPlatoonState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDPlatoonState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlatoonState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A38D0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.VariationDataChangedInternal
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FDFCharacterVariationDataHandle             PreviousHandle                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::VariationDataChangedInternal(const struct FDFCharacterVariationDataHandle& PreviousHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.VariationDataChangedInternal");
		
		AHDPlayerCharacter_VariationDataChangedInternal_Params params {};
		params.PreviousHandle = PreviousHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3690
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetVariationHandle
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDFCharacterVariationDataHandle             InVariationHandle                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetVariationHandle(const struct FDFCharacterVariationDataHandle& InVariationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetVariationHandle");
		
		AHDPlayerCharacter_SetVariationHandle_Params params {};
		params.InVariationHandle = InVariationHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3610
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetMaxFreeAimYawADS
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewYaw                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetMaxFreeAimYawADS(float NewYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetMaxFreeAimYawADS");
		
		AHDPlayerCharacter_SetMaxFreeAimYawADS_Params params {};
		params.NewYaw = NewYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3590
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetMaxFreeAimYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewYaw                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetMaxFreeAimYaw(float NewYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetMaxFreeAimYaw");
		
		AHDPlayerCharacter_SetMaxFreeAimYaw_Params params {};
		params.NewYaw = NewYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3510
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetMaxFreeAimPitchADS
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewPitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetMaxFreeAimPitchADS(float NewPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetMaxFreeAimPitchADS");
		
		AHDPlayerCharacter_SetMaxFreeAimPitchADS_Params params {};
		params.NewPitch = NewPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3490
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetMaxFreeAimPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewPitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetMaxFreeAimPitch(float NewPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetMaxFreeAimPitch");
		
		AHDPlayerCharacter_SetMaxFreeAimPitch_Params params {};
		params.NewPitch = NewPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3410
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetFreeAimReturnToCenterInterpSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewInterpSpeed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetFreeAimReturnToCenterInterpSpeed");
		
		AHDPlayerCharacter_SetFreeAimReturnToCenterInterpSpeed_Params params {};
		params.NewInterpSpeed = NewInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3390
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetFreeAimDeadzoneCameraSpeedFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewSpeedFactor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetFreeAimDeadzoneCameraSpeedFactor");
		
		AHDPlayerCharacter_SetFreeAimDeadzoneCameraSpeedFactor_Params params {};
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3300
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetAllowFreeAimADS
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetAllowFreeAimADS(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetAllowFreeAimADS");
		
		AHDPlayerCharacter_SetAllowFreeAimADS_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3270
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetAllowFreeAim
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetAllowFreeAim(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetAllowFreeAim");
		
		AHDPlayerCharacter_SetAllowFreeAim_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A31A0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.SetAimStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHDWeaponAimStyle                                  InAimStyle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::SetAimStyle(EHDWeaponAimStyle InAimStyle, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.SetAimStyle");
		
		AHDPlayerCharacter_SetAimStyle_Params params {};
		params.InAimStyle = InAimStyle;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.ReceiveVoipTalkerMsgReceived
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              MsgTalkerChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                MsgTalkerPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMsgIsTalking                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.ReceiveVoipTalkerMsgReceived");
		
		AHDPlayerCharacter_ReceiveVoipTalkerMsgReceived_Params params {};
		params.MsgTalkerChannel = MsgTalkerChannel;
		params.MsgTalkerPS = MsgTalkerPS;
		params.bMsgIsTalking = bMsgIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.ReceiveVariationDataChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDFCharacterVariationData                   NewVariation                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDFCharacterVariationData                   PreviousVariation                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::ReceiveVariationDataChanged(const struct FDFCharacterVariationData& NewVariation, const struct FDFCharacterVariationData& PreviousVariation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.ReceiveVariationDataChanged");
		
		AHDPlayerCharacter_ReceiveVariationDataChanged_Params params {};
		params.NewVariation = NewVariation;
		params.PreviousVariation = PreviousVariation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.ReceiveFreeAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::ReceiveFreeAim(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.ReceiveFreeAim");
		
		AHDPlayerCharacter_ReceiveFreeAim_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.ReceiveCurrentLoadout
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHDPlayerCharacter::ReceiveCurrentLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.ReceiveCurrentLoadout");
		
		AHDPlayerCharacter_ReceiveCurrentLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.ReceiveAimStyleChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHDWeaponAimStyle                                  NewAimStyle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDWeaponAimStyle                                  PrevAimStyle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::ReceiveAimStyleChanged(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.ReceiveAimStyleChanged");
		
		AHDPlayerCharacter_ReceiveAimStyleChanged_Params params {};
		params.NewAimStyle = NewAimStyle;
		params.PrevAimStyle = PrevAimStyle;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2D00
	 * 		Name   -> Function HDMain.HDPlayerCharacter.PlayVocalSoundAI
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class USoundBase*                                  SoundToUse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDAIVocalizationType                              VocalType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::PlayVocalSoundAI(class USoundBase* SoundToUse, EHDAIVocalizationType VocalType, float PitchMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.PlayVocalSoundAI");
		
		AHDPlayerCharacter_PlayVocalSoundAI_Params params {};
		params.SoundToUse = SoundToUse;
		params.VocalType = VocalType;
		params.PitchMultiplier = PitchMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2CE0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.OnRep_CurrentLoadout
	 * 		Flags  -> (Native, Protected)
	 */
	void AHDPlayerCharacter::OnRep_CurrentLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.OnRep_CurrentLoadout");
		
		AHDPlayerCharacter_OnRep_CurrentLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2C50
	 * 		Name   -> Function HDMain.HDPlayerCharacter.OnPickupKit
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDBasePickup_Kit*                           Kit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::OnPickupKit(class AHDBasePickup_Kit* Kit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.OnPickupKit");
		
		AHDPlayerCharacter_OnPickupKit_Params params {};
		params.Kit = Kit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2B80
	 * 		Name   -> Function HDMain.HDPlayerCharacter.NotifyPlayerStateChanged
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                NewPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                OldPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.NotifyPlayerStateChanged");
		
		AHDPlayerCharacter_NotifyPlayerStateChanged_Params params {};
		params.NewPlayerState = NewPlayerState;
		params.OldPlayerState = OldPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2AC0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.IsInVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDPlayerCharacter::IsInVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.IsInVehicle");
		
		AHDPlayerCharacter_IsInVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2AA0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.HeadBob
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AHDPlayerCharacter::HeadBob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.HeadBob");
		
		AHDPlayerCharacter_HeadBob_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2710
	 * 		Name   -> Function HDMain.HDPlayerCharacter.GetPlayerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UHDPlayerComponent* AHDPlayerCharacter::GetPlayerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.GetPlayerComponent");
		
		AHDPlayerCharacter_GetPlayerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2570
	 * 		Name   -> Function HDMain.HDPlayerCharacter.GetMaxFreeAimYawToUse
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AHDPlayerCharacter::GetMaxFreeAimYawToUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.GetMaxFreeAimYawToUse");
		
		AHDPlayerCharacter_GetMaxFreeAimYawToUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2530
	 * 		Name   -> Function HDMain.HDPlayerCharacter.GetMaxFreeAimPitchToUse
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AHDPlayerCharacter::GetMaxFreeAimPitchToUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.GetMaxFreeAimPitchToUse");
		
		AHDPlayerCharacter_GetMaxFreeAimPitchToUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2500
	 * 		Name   -> Function HDMain.HDPlayerCharacter.GetKitClassToUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* AHDPlayerCharacter::GetKitClassToUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.GetKitClassToUse");
		
		AHDPlayerCharacter_GetKitClassToUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A21C0
	 * 		Name   -> Function HDMain.HDPlayerCharacter.FreeAim
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerCharacter::FreeAim(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.FreeAim");
		
		AHDPlayerCharacter_FreeAim_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2060
	 * 		Name   -> Function HDMain.HDPlayerCharacter.EquipPrimaryItem
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	bool AHDPlayerCharacter::EquipPrimaryItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.EquipPrimaryItem");
		
		AHDPlayerCharacter_EquipPrimaryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2020
	 * 		Name   -> Function HDMain.HDPlayerCharacter.DropKit
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 */
	void AHDPlayerCharacter::DropKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerCharacter.DropKit");
		
		AHDPlayerCharacter_DropKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDPlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDPlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPlayerCharacterAnimInstanceBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPlayerCharacterAnimInstanceBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerCharacterAnimInstanceBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPlayerCharacterAnimInst_FPP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPlayerCharacterAnimInst_FPP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerCharacterAnimInst_FPP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPlayerCharacterAnimInst_TPP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPlayerCharacterAnimInst_TPP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerCharacterAnimInst_TPP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7BA0
	 * 		Name   -> Function HDMain.HDPlayerComponent.SwitchTeam
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 */
	void UHDPlayerComponent::SwitchTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerComponent.SwitchTeam");
		
		UHDPlayerComponent_SwitchTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7560
	 * 		Name   -> Function HDMain.HDPlayerComponent.RestartPlayerAtStartSpot
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      DesiredStartSpot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFLoadout*                                  DesiredStartLoadout                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDPlayerComponent::RestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerComponent.RestartPlayerAtStartSpot");
		
		UHDPlayerComponent_RestartPlayerAtStartSpot_Params params {};
		params.DesiredStartSpot = DesiredStartSpot;
		params.DesiredStartLoadout = DesiredStartLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7410
	 * 		Name   -> Function HDMain.HDPlayerComponent.PickTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHDTeam                                            DesiredTeam                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDPlayerComponent::PickTeam(EHDTeam DesiredTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerComponent.PickTeam");
		
		UHDPlayerComponent_PickTeam_Params params {};
		params.DesiredTeam = DesiredTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CEE30
	 * 		Name   -> Function HDMain.HDPlayerStart.K2_GetCapsuleComponent
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCapsuleComponent* AHDPlayerStart::K2_GetCapsuleComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerStart.K2_GetCapsuleComponent");
		
		AHDPlayerStart_K2_GetCapsuleComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDPlayerStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDPlayerStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7C20
	 * 		Name   -> Function HDMain.HDPlayerState.UnregisterFromSquad
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AHDPlayerState::UnregisterFromSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerState.UnregisterFromSquad");
		
		AHDPlayerState_UnregisterFromSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A73B0
	 * 		Name   -> Function HDMain.HDPlayerState.OnRep_SquadInfo
	 * 		Flags  -> (Native, Protected)
	 */
	void AHDPlayerState::OnRep_SquadInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerState.OnRep_SquadInfo");
		
		AHDPlayerState_OnRep_SquadInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7320
	 * 		Name   -> Function HDMain.HDPlayerState.OnRep_SpawnLoadout
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UHDKit*                                      PrevSpawnLoadout                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerState::OnRep_SpawnLoadout(class UHDKit* PrevSpawnLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerState.OnRep_SpawnLoadout");
		
		AHDPlayerState_OnRep_SpawnLoadout_Params params {};
		params.PrevSpawnLoadout = PrevSpawnLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7270
	 * 		Name   -> Function HDMain.HDPlayerState.OnRep_CurrentLoadout
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UHDKit*                                      PrevLoadout                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerState::OnRep_CurrentLoadout(class UHDKit* PrevLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerState.OnRep_CurrentLoadout");
		
		AHDPlayerState_OnRep_CurrentLoadout_Params params {};
		params.PrevLoadout = PrevLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A66B0
	 * 		Name   -> Function HDMain.HDPlayerState.AssignSpawnLoadout
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHDKit*                                      NewSpawnLoadout                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerState::AssignSpawnLoadout(class UHDKit* NewSpawnLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerState.AssignSpawnLoadout");
		
		AHDPlayerState_AssignSpawnLoadout_Params params {};
		params.NewSpawnLoadout = NewSpawnLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6620
	 * 		Name   -> Function HDMain.HDPlayerState.AssignCurrentLoadout
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHDKit*                                      NewCurrentLoadout                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDPlayerState::AssignCurrentLoadout(class UHDKit* NewCurrentLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDPlayerState.AssignCurrentLoadout");
		
		AHDPlayerState_AssignCurrentLoadout_Params params {};
		params.NewCurrentLoadout = NewCurrentLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDProj_Bullet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDProj_Bullet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDProj_Bullet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDProj_Deployable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDProj_Deployable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDProj_Deployable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7300
	 * 		Name   -> Function HDMain.HDProj_Grenade.OnRep_PayloadServerActivationTime
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AHDProj_Grenade::OnRep_PayloadServerActivationTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDProj_Grenade.OnRep_PayloadServerActivationTime");
		
		AHDProj_Grenade_OnRep_PayloadServerActivationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDProj_Grenade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDProj_Grenade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDProj_Grenade");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDProj_SpawnPointDeployable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDProj_SpawnPointDeployable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDProj_SpawnPointDeployable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDRecastNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDRecastNavMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDRecastNavMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDRuleset_AAS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDRuleset_AAS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDRuleset_AAS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6C80
	 * 		Name   -> Function HDMain.HDRuleset_ControlPoint.GetControlPointSettingsForTeam
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            ControlPointTeam                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FControlPointRulesetSettings UHDRuleset_ControlPoint::GetControlPointSettingsForTeam(EHDTeam ControlPointTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_ControlPoint.GetControlPointSettingsForTeam");
		
		UHDRuleset_ControlPoint_GetControlPointSettingsForTeam_Params params {};
		params.ControlPointTeam = ControlPointTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6B40
	 * 		Name   -> Function HDMain.HDRuleset_ControlPoint.ControlPointTeamUpdated
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         ControlPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            PrevTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            NewTeam                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCaptured                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDRuleset_ControlPoint::ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_ControlPoint.ControlPointTeamUpdated");
		
		UHDRuleset_ControlPoint_ControlPointTeamUpdated_Params params {};
		params.ControlPoint = ControlPoint;
		params.PrevTeam = PrevTeam;
		params.NewTeam = NewTeam;
		params.bCaptured = bCaptured;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6A30
	 * 		Name   -> Function HDMain.HDRuleset_ControlPoint.ControlPointCaptureProgressUpdated
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         ControlPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bContested                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDRuleset_ControlPoint::ControlPointCaptureProgressUpdated(class AHDBaseCapturePoint* ControlPoint, bool bContested, int32_t Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_ControlPoint.ControlPointCaptureProgressUpdated");
		
		UHDRuleset_ControlPoint_ControlPointCaptureProgressUpdated_Params params {};
		params.ControlPoint = ControlPoint;
		params.bContested = bContested;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDRuleset_ControlPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDRuleset_ControlPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDRuleset_ControlPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7490
	 * 		Name   -> Function HDMain.HDRuleset_KillDeath.PlayerTeamKilled
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDRuleset_KillDeath::PlayerTeamKilled(class AController* Killer, class AController* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_KillDeath.PlayerTeamKilled");
		
		UHDRuleset_KillDeath_PlayerTeamKilled_Params params {};
		params.Killer = Killer;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6D20
	 * 		Name   -> Function HDMain.HDRuleset_KillDeath.GetKillDeathSettingsForTeam
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            KillDeathTeam                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKillDeathRulesetSettings UHDRuleset_KillDeath::GetKillDeathSettingsForTeam(EHDTeam KillDeathTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_KillDeath.GetKillDeathSettingsForTeam");
		
		UHDRuleset_KillDeath_GetKillDeathSettingsForTeam_Params params {};
		params.KillDeathTeam = KillDeathTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDRuleset_KillDeath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDRuleset_KillDeath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDRuleset_KillDeath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDRuleset_NoPlayerSpawnKitRestrictions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDRuleset_NoPlayerSpawnKitRestrictions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDRuleset_NoPlayerSpawnKitRestrictions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A7C40
	 * 		Name   -> Function HDMain.HDRuleset_TicketBleed.UpdateTicketBleedState
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UHDRuleset_TicketBleed::UpdateTicketBleedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_TicketBleed.UpdateTicketBleedState");
		
		UHDRuleset_TicketBleed_UpdateTicketBleedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6E20
	 * 		Name   -> Function HDMain.HDRuleset_TicketBleed.GetTicketBleedSettingsForTeam
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            TicketBleedTeam                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTicketBleedRulesetSettings UHDRuleset_TicketBleed::GetTicketBleedSettingsForTeam(EHDTeam TicketBleedTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_TicketBleed.GetTicketBleedSettingsForTeam");
		
		UHDRuleset_TicketBleed_GetTicketBleedSettingsForTeam_Params params {};
		params.TicketBleedTeam = TicketBleedTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6B40
	 * 		Name   -> Function HDMain.HDRuleset_TicketBleed.ControlPointTeamUpdated
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         ControlPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            PrevTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            NewTeam                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCaptured                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDRuleset_TicketBleed::ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_TicketBleed.ControlPointTeamUpdated");
		
		UHDRuleset_TicketBleed_ControlPointTeamUpdated_Params params {};
		params.ControlPoint = ControlPoint;
		params.PrevTeam = PrevTeam;
		params.NewTeam = NewTeam;
		params.bCaptured = bCaptured;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A6520
	 * 		Name   -> Function HDMain.HDRuleset_TicketBleed.ApplyTicketBleed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EHDTeam                                            BleedTeam                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TicketBleedMultiplier                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseMercyTicketBleed                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDRuleset_TicketBleed::ApplyTicketBleed(EHDTeam BleedTeam, int32_t TicketBleedMultiplier, bool bUseMercyTicketBleed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDRuleset_TicketBleed.ApplyTicketBleed");
		
		UHDRuleset_TicketBleed_ApplyTicketBleed_Params params {};
		params.BleedTeam = BleedTeam;
		params.TicketBleedMultiplier = TicketBleedMultiplier;
		params.bUseMercyTicketBleed = bUseMercyTicketBleed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDRuleset_TicketBleed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDRuleset_TicketBleed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDRuleset_TicketBleed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDScoreboardBase.ReceiveScoreboardListRowAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDScoreboardListingRowBase*                 NewListEntry                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDScoreboardBase::ReceiveScoreboardListRowAdded(class UHDScoreboardListingRowBase* NewListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardBase.ReceiveScoreboardListRowAdded");
		
		UHDScoreboardBase_ReceiveScoreboardListRowAdded_Params params {};
		params.NewListEntry = NewListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDScoreboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDScoreboardBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDScoreboardBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABB50
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.SetVoiceStateIcon
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  NewIcon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDScoreboardListingRowBase::SetVoiceStateIcon(class UTexture2D* NewIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.SetVoiceStateIcon");
		
		UHDScoreboardListingRowBase_SetVoiceStateIcon_Params params {};
		params.NewIcon = NewIcon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00703390
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.RefreshListing
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UHDScoreboardListingRowBase::RefreshListing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.RefreshListing");
		
		UHDScoreboardListingRowBase_RefreshListing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.ReceivePlayerVoiceStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EPlayerVoiceState                                  NewVoiceState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDScoreboardListingRowBase::ReceivePlayerVoiceStateChanged(EPlayerVoiceState NewVoiceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.ReceivePlayerVoiceStateChanged");
		
		UHDScoreboardListingRowBase_ReceivePlayerVoiceStateChanged_Params params {};
		params.NewVoiceState = NewVoiceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB620
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.OnMutePlayer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHDScoreboardListingRowBase::OnMutePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.OnMutePlayer");
		
		UHDScoreboardListingRowBase_OnMutePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB1C0
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHDScoreboardBase*                           InParentMenu                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBasePlayerState*                          InPlayerState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInRefreshListingOnTick                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDScoreboardListingRowBase::Init(class UHDScoreboardBase* InParentMenu, class ADFBasePlayerState* InPlayerState, bool bInRefreshListingOnTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.Init");
		
		UHDScoreboardListingRowBase_Init_Params params {};
		params.InParentMenu = InParentMenu;
		params.InPlayerState = InPlayerState;
		params.bInRefreshListingOnTick = bInRefreshListingOnTick;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB0C0
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.HasInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHDScoreboardListingRowBase::HasInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.HasInitialized");
		
		UHDScoreboardListingRowBase_HasInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAC90
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.GetIconForVoiceState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EPlayerVoiceState                                  VoiceState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDScoreboardListingRowBase::GetIconForVoiceState(EPlayerVoiceState VoiceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.GetIconForVoiceState");
		
		UHDScoreboardListingRowBase_GetIconForVoiceState_Params params {};
		params.VoiceState = VoiceState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAC60
	 * 		Name   -> Function HDMain.HDScoreboardListingRowBase.GetCurrentPing
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UHDScoreboardListingRowBase::GetCurrentPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDScoreboardListingRowBase.GetCurrentPing");
		
		UHDScoreboardListingRowBase_GetCurrentPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDScoreboardListingRowBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDScoreboardListingRowBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDScoreboardListingRowBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A3100
	 * 		Name   -> Function HDMain.HDServerListFilterRule.MatchesServer
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UHDServerListItemData*                       ListItem                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDServerListFilterRule::MatchesServer(class UHDServerListItemData* ListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListFilterRule.MatchesServer");
		
		UHDServerListFilterRule_MatchesServer_Params params {};
		params.ListItem = ListItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDServerListFilterRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDServerListFilterRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDServerListFilterRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDServerAtCapacityFilterRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDServerAtCapacityFilterRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDServerAtCapacityFilterRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDEmptyServerFilterRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDEmptyServerFilterRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDEmptyServerFilterRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDPasswordProtectedServerFilterRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDPasswordProtectedServerFilterRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDPasswordProtectedServerFilterRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDSupportersOnlyServerFilterRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDSupportersOnlyServerFilterRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDSupportersOnlyServerFilterRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDHasUGCServerFilterRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDHasUGCServerFilterRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDHasUGCServerFilterRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDContainsAddressServerFilterRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDContainsAddressServerFilterRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDContainsAddressServerFilterRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDServerListItemData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDServerListItemData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDServerListItemData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABBD0
	 * 		Name   -> Function HDMain.HDServerListing.SetupListing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHDServerListItemData*                       InServerItemData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDServerListing::SetupListing(class UHDServerListItemData* InServerItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListing.SetupListing");
		
		UHDServerListing_SetupListing_Params params {};
		params.InServerItemData = InServerItemData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDServerListing.OnServerItemDataSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDServerListing::OnServerItemDataSet(bool bIsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDServerListing.OnServerItemDataSet");
		
		UHDServerListing_OnServerItemDataSet_Params params {};
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDServerListing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDServerListing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDServerListing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABC50
	 * 		Name   -> Function HDMain.HDSQCommChannelState.SetupSQChannelState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDSquadState*                               ForSquadState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDSQCommChannelState::SetupSQChannelState(class AHDSquadState* ForSquadState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSQCommChannelState.SetupSQChannelState");
		
		UHDSQCommChannelState_SetupSQChannelState_Params params {};
		params.ForSquadState = ForSquadState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAB40
	 * 		Name   -> Function HDMain.HDSQCommChannelState.GetChannelNameForSquad
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UHDSQCommChannelState::STATIC_GetChannelNameForSquad(class AHDSquadState* Squad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSQCommChannelState.GetChannelNameForSquad");
		
		UHDSQCommChannelState_GetChannelNameForSquad_Params params {};
		params.Squad = Squad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDSQCommChannelState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDSQCommChannelState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDSQCommChannelState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDSquadHiddenState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDSquadHiddenState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDSquadHiddenState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDSquadStateCreationPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDSquadStateCreationPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDSquadStateCreationPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AC0B0
	 * 		Name   -> Function HDMain.HDSquadState.UnregisterSquadMemberAt
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RemoveIdx                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::UnregisterSquadMemberAt(int32_t RemoveIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.UnregisterSquadMemberAt");
		
		AHDSquadState_UnregisterSquadMemberAt_Params params {};
		params.RemoveIdx = RemoveIdx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AC020
	 * 		Name   -> Function HDMain.HDSquadState.UnregisterSquadMember
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDPlayerState*                              MemberPSToRemove                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::UnregisterSquadMember(class AHDPlayerState* MemberPSToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.UnregisterSquadMember");
		
		AHDSquadState_UnregisterSquadMember_Params params {};
		params.MemberPSToRemove = MemberPSToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABF90
	 * 		Name   -> Function HDMain.HDSquadState.UnregisterPlayerSquadMember
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDPlayerController*                         MemberPCToRemove                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::UnregisterPlayerSquadMember(class AHDPlayerController* MemberPCToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.UnregisterPlayerSquadMember");
		
		AHDSquadState_UnregisterPlayerSquadMember_Params params {};
		params.MemberPCToRemove = MemberPCToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABF70
	 * 		Name   -> Function HDMain.HDSquadState.UnlockSquad
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AHDSquadState::UnlockSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.UnlockSquad");
		
		AHDSquadState_UnlockSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABE70
	 * 		Name   -> Function HDMain.HDSquadState.SquadMemberPSTeamUpdated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APlayerState*                                MemberPS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      LastTeamNum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewTeamNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::SquadMemberPSTeamUpdated(class APlayerState* MemberPS, unsigned char LastTeamNum, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.SquadMemberPSTeamUpdated");
		
		AHDSquadState_SquadMemberPSTeamUpdated_Params params {};
		params.MemberPS = MemberPS;
		params.LastTeamNum = LastTeamNum;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABD90
	 * 		Name   -> Function HDMain.HDSquadState.SquadMemberPSSquadUpdated
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AHDPlayerState*                              MemberPS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHDSquadAssignmentInfo                      MemberSQInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::SquadMemberPSSquadUpdated(class AHDPlayerState* MemberPS, const struct FHDSquadAssignmentInfo& MemberSQInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.SquadMemberPSSquadUpdated");
		
		AHDSquadState_SquadMemberPSSquadUpdated_Params params {};
		params.MemberPS = MemberPS;
		params.MemberSQInfo = MemberSQInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABCD0
	 * 		Name   -> Function HDMain.HDSquadState.SquadMemberPSEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::SquadMemberPSEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.SquadMemberPSEndPlay");
		
		AHDSquadState_SquadMemberPSEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABA80
	 * 		Name   -> Function HDMain.HDSquadState.RenameSquad
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewDisplayName                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::RenameSquad(const class FText& NewDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.RenameSquad");
		
		AHDSquadState_RenameSquad_Params params {};
		params.NewDisplayName = NewDisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D3A50
	 * 		Name   -> Function HDMain.HDSquadState.RemoveFromOwner
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AHDSquadState::RemoveFromOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.RemoveFromOwner");
		
		AHDSquadState_RemoveFromOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB8F0
	 * 		Name   -> Function HDMain.HDSquadState.RegisterSquadMember
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDPlayerState*                              NewMemberPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::RegisterSquadMember(class AHDPlayerState* NewMemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.RegisterSquadMember");
		
		AHDSquadState_RegisterSquadMember_Params params {};
		params.NewMemberPS = NewMemberPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB860
	 * 		Name   -> Function HDMain.HDSquadState.RegisterPlayerSquadMember
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDPlayerController*                         NewMemberPC                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::RegisterPlayerSquadMember(class AHDPlayerController* NewMemberPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.RegisterPlayerSquadMember");
		
		AHDSquadState_RegisterPlayerSquadMember_Params params {};
		params.NewMemberPC = NewMemberPC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDSquadState.ReceiveSquadUnlocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHDSquadState::ReceiveSquadUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.ReceiveSquadUnlocked");
		
		AHDSquadState_ReceiveSquadUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDSquadState.ReceiveSquadRenamed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewName                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        PrevName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::ReceiveSquadRenamed(const class FText& NewName, const class FText& PrevName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.ReceiveSquadRenamed");
		
		AHDSquadState_ReceiveSquadRenamed_Params params {};
		params.NewName = NewName;
		params.PrevName = PrevName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDSquadState.ReceiveSquadMemberRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerState*                              MemberPS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::ReceiveSquadMemberRegistered(class AHDPlayerState* MemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.ReceiveSquadMemberRegistered");
		
		AHDSquadState_ReceiveSquadMemberRegistered_Params params {};
		params.MemberPS = MemberPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDSquadState.ReceiveSquadMemberPreUnregister
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerState*                              MemberPS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::ReceiveSquadMemberPreUnregister(class AHDPlayerState* MemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.ReceiveSquadMemberPreUnregister");
		
		AHDSquadState_ReceiveSquadMemberPreUnregister_Params params {};
		params.MemberPS = MemberPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDSquadState.ReceiveSquadLocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHDSquadState::ReceiveSquadLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.ReceiveSquadLocked");
		
		AHDSquadState_ReceiveSquadLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDSquadState.ReceiveSquadLeaderAssigned
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerState*                              NewLeaderPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlayerState*                              PrevLeaderPS                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::ReceiveSquadLeaderAssigned(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.ReceiveSquadLeaderAssigned");
		
		AHDSquadState_ReceiveSquadLeaderAssigned_Params params {};
		params.NewLeaderPS = NewLeaderPS;
		params.PrevLeaderPS = PrevLeaderPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDSquadState.ReceiveInit
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDSquadCreationParams                      CreationParams                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::ReceiveInit(const struct FHDSquadCreationParams& CreationParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.ReceiveInit");
		
		AHDSquadState_ReceiveInit_Params params {};
		params.CreationParams = CreationParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB710
	 * 		Name   -> Function HDMain.HDSquadState.OnRep_SquadLeader
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class AHDPlayerState*                              PrevSquadLeader                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::OnRep_SquadLeader(class AHDPlayerState* PrevSquadLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.OnRep_SquadLeader");
		
		AHDSquadState_OnRep_SquadLeader_Params params {};
		params.PrevSquadLeader = PrevSquadLeader;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CF950
	 * 		Name   -> Function HDMain.HDSquadState.OnRep_SquadHiddenState
	 * 		Flags  -> (Native, Protected)
	 */
	void AHDSquadState::OnRep_SquadHiddenState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.OnRep_SquadHiddenState");
		
		AHDSquadState_OnRep_SquadHiddenState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB640
	 * 		Name   -> Function HDMain.HDSquadState.OnRep_DisplayName
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FText                                        PrevDisplayName                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AHDSquadState::OnRep_DisplayName(const class FText& PrevDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.OnRep_DisplayName");
		
		AHDSquadState_OnRep_DisplayName_Params params {};
		params.PrevDisplayName = PrevDisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CFBF0
	 * 		Name   -> Function HDMain.HDSquadState.OnRep_bLocked
	 * 		Flags  -> (Native, Protected)
	 */
	void AHDSquadState::OnRep_bLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.OnRep_bLocked");
		
		AHDSquadState_OnRep_bLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB600
	 * 		Name   -> Function HDMain.HDSquadState.LockSquad
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AHDSquadState::LockSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.LockSquad");
		
		AHDSquadState_LockSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB540
	 * 		Name   -> Function HDMain.HDSquadState.IsRegisteredSquadMember
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlayerState*                              PS                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePendingRemoval                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::IsRegisteredSquadMember(class AHDPlayerState* PS, bool bIgnorePendingRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.IsRegisteredSquadMember");
		
		AHDSquadState_IsRegisteredSquadMember_Params params {};
		params.PS = PS;
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB480
	 * 		Name   -> Function HDMain.HDSquadState.IsPlayerRegisteredSquadMember
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlayerController*                         PC                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePendingRemoval                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::IsPlayerRegisteredSquadMember(class AHDPlayerController* PC, bool bIgnorePendingRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.IsPlayerRegisteredSquadMember");
		
		AHDSquadState_IsPlayerRegisteredSquadMember_Params params {};
		params.PC = PC;
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB3F0
	 * 		Name   -> Function HDMain.HDSquadState.IsPlayerPendingRemovalFromSquad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlayerController*                         PC                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::IsPlayerPendingRemovalFromSquad(class AHDPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.IsPlayerPendingRemovalFromSquad");
		
		AHDSquadState_IsPlayerPendingRemovalFromSquad_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB2D0
	 * 		Name   -> Function HDMain.HDSquadState.IsPendingRemovalFromSquad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlayerState*                              PS                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::IsPendingRemovalFromSquad(class AHDPlayerState* PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.IsPendingRemovalFromSquad");
		
		AHDSquadState_IsPendingRemovalFromSquad_Params params {};
		params.PS = PS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB160
	 * 		Name   -> Function HDMain.HDSquadState.HasReachedMaxSquadMemberLimit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDSquadState::HasReachedMaxSquadMemberLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.HasReachedMaxSquadMemberLimit");
		
		AHDSquadState_HasReachedMaxSquadMemberLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAFE0
	 * 		Name   -> Function HDMain.HDSquadState.GetSquadMemberAt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePendingRemoval                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHDPlayerState* AHDSquadState::GetSquadMemberAt(int32_t Index, bool bIgnorePendingRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.GetSquadMemberAt");
		
		AHDSquadState_GetSquadMemberAt_Params params {};
		params.Index = Index;
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAE90
	 * 		Name   -> Function HDMain.HDSquadState.GetNumSquadMembersBots
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bValidMembersOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AHDSquadState::GetNumSquadMembersBots(bool bValidMembersOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.GetNumSquadMembersBots");
		
		AHDSquadState_GetNumSquadMembersBots_Params params {};
		params.bValidMembersOnly = bValidMembersOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AADF0
	 * 		Name   -> Function HDMain.HDSquadState.GetNumSquadMembers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bValidMembersOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AHDSquadState::GetNumSquadMembers(bool bValidMembersOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.GetNumSquadMembers");
		
		AHDSquadState_GetNumSquadMembers_Params params {};
		params.bValidMembersOnly = bValidMembersOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA890
	 * 		Name   -> Function HDMain.HDSquadState.DumpSquadMemberState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void AHDSquadState::DumpSquadMemberState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.DumpSquadMemberState");
		
		AHDSquadState_DumpSquadMemberState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA7D0
	 * 		Name   -> Function HDMain.HDSquadState.CanRegisterSquadMember
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlayerState*                              NewMemberPS                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::CanRegisterSquadMember(class AHDPlayerState* NewMemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.CanRegisterSquadMember");
		
		AHDSquadState_CanRegisterSquadMember_Params params {};
		params.NewMemberPS = NewMemberPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA740
	 * 		Name   -> Function HDMain.HDSquadState.CanRegisterPlayerSquadMember
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlayerController*                         NewMemberPC                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::CanRegisterPlayerSquadMember(class AHDPlayerController* NewMemberPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.CanRegisterPlayerSquadMember");
		
		AHDSquadState_CanRegisterPlayerSquadMember_Params params {};
		params.NewMemberPC = NewMemberPC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA6B0
	 * 		Name   -> Function HDMain.HDSquadState.AssignSquadLeader
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDPlayerState*                              NewLeaderPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDSquadState::AssignSquadLeader(class AHDPlayerState* NewLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDSquadState.AssignSquadLeader");
		
		AHDSquadState_AssignSquadLeader_Params params {};
		params.NewLeaderPS = NewLeaderPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDSquadState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDSquadState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDSquadState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABC50
	 * 		Name   -> Function HDMain.HDTeamCommChannelState.SetupTeamChannelState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDTeamState*                                ForTeamState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTeamCommChannelState::SetupTeamChannelState(class AHDTeamState* ForTeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamCommChannelState.SetupTeamChannelState");
		
		UHDTeamCommChannelState_SetupTeamChannelState_Params params {};
		params.ForTeamState = ForTeamState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AABD0
	 * 		Name   -> Function HDMain.HDTeamCommChannelState.GetChannelNameForTeam
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AHDTeamState*                                Team                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UHDTeamCommChannelState::STATIC_GetChannelNameForTeam(class AHDTeamState* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamCommChannelState.GetChannelNameForTeam");
		
		UHDTeamCommChannelState_GetChannelNameForTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAAB0
	 * 		Name   -> Function HDMain.HDTeamCommChannelState.GetChannelNameForCommand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AHDTeamState*                                CmdTeam                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UHDTeamCommChannelState::STATIC_GetChannelNameForCommand(class AHDTeamState* CmdTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamCommChannelState.GetChannelNameForCommand");
		
		UHDTeamCommChannelState_GetChannelNameForCommand_Params params {};
		params.CmdTeam = CmdTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDTeamCommChannelState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDTeamCommChannelState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDTeamCommChannelState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDTeamDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDTeamDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDTeamDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ABA00
	 * 		Name   -> Function HDMain.HDTeamState.RemovePlatoonAt
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RemoveIdx                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDTeamState::RemovePlatoonAt(int32_t RemoveIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.RemovePlatoonAt");
		
		AHDTeamState_RemovePlatoonAt_Params params {};
		params.RemoveIdx = RemoveIdx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB980
	 * 		Name   -> Function HDMain.HDTeamState.RemovePlatoon
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHDPlatoonState*                             PlatoonToRemove                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDTeamState::RemovePlatoon(class AHDPlatoonState* PlatoonToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.RemovePlatoon");
		
		AHDTeamState_RemovePlatoon_Params params {};
		params.PlatoonToRemove = PlatoonToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTeamState.ReceivePlatoonPreRemove
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlatoonState*                             Platoon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDTeamState::ReceivePlatoonPreRemove(class AHDPlatoonState* Platoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.ReceivePlatoonPreRemove");
		
		AHDTeamState_ReceivePlatoonPreRemove_Params params {};
		params.Platoon = Platoon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTeamState.ReceivePlatoonAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlatoonState*                             Platoon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHDTeamState::ReceivePlatoonAdded(class AHDPlatoonState* Platoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.ReceivePlatoonAdded");
		
		AHDTeamState_ReceivePlatoonAdded_Params params {};
		params.Platoon = Platoon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB7A0
	 * 		Name   -> Function HDMain.HDTeamState.PlatoonExists
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlatoonState*                             Platoon                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePendingRemoval                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDTeamState::PlatoonExists(class AHDPlatoonState* Platoon, bool bIgnorePendingRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.PlatoonExists");
		
		AHDTeamState_PlatoonExists_Params params {};
		params.Platoon = Platoon;
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB360
	 * 		Name   -> Function HDMain.HDTeamState.IsPlatoonPendingRemovalFromTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDPlatoonState*                             Platoon                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDTeamState::IsPlatoonPendingRemovalFromTeam(class AHDPlatoonState* Platoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.IsPlatoonPendingRemovalFromTeam");
		
		AHDTeamState_IsPlatoonPendingRemovalFromTeam_Params params {};
		params.Platoon = Platoon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB100
	 * 		Name   -> Function HDMain.HDTeamState.HasReachedMaxPlatoonLimit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHDTeamState::HasReachedMaxPlatoonLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.HasReachedMaxPlatoonLimit");
		
		AHDTeamState_HasReachedMaxPlatoonLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AB0A0
	 * 		Name   -> Function HDMain.HDTeamState.GetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EHDTeam AHDTeamState::GetTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.GetTeam");
		
		AHDTeamState_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAF20
	 * 		Name   -> Function HDMain.HDTeamState.GetPlatoonAt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnorePendingRemoval                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHDPlatoonState* AHDTeamState::GetPlatoonAt(int32_t Index, bool bIgnorePendingRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.GetPlatoonAt");
		
		AHDTeamState_GetPlatoonAt_Params params {};
		params.Index = Index;
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AAD50
	 * 		Name   -> Function HDMain.HDTeamState.GetNumPlatoons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bValidPlatoonsOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AHDTeamState::GetNumPlatoons(bool bValidPlatoonsOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.GetNumPlatoons");
		
		AHDTeamState_GetNumPlatoons_Params params {};
		params.bValidPlatoonsOnly = bValidPlatoonsOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA980
	 * 		Name   -> Function HDMain.HDTeamState.FindPlatoonByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        PlatoonDisplayName                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AHDPlatoonState*                             OutFoundPlatoon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDTeamState::FindPlatoonByName(const class FText& PlatoonDisplayName, class AHDPlatoonState** OutFoundPlatoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.FindPlatoonByName");
		
		AHDTeamState_FindPlatoonByName_Params params {};
		params.PlatoonDisplayName = PlatoonDisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundPlatoon != nullptr)
			*OutFoundPlatoon = params.OutFoundPlatoon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA8B0
	 * 		Name   -> Function HDMain.HDTeamState.FindPlatoonByDefinition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UHDPlatoonInfo*                              PlatoonDef                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDPlatoonState*                             OutFoundPlatoon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHDTeamState::FindPlatoonByDefinition(class UHDPlatoonInfo* PlatoonDef, class AHDPlatoonState** OutFoundPlatoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.FindPlatoonByDefinition");
		
		AHDTeamState_FindPlatoonByDefinition_Params params {};
		params.PlatoonDef = PlatoonDef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundPlatoon != nullptr)
			*OutFoundPlatoon = params.OutFoundPlatoon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA870
	 * 		Name   -> Function HDMain.HDTeamState.DumpPlatoonState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void AHDTeamState::DumpPlatoonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.DumpPlatoonState");
		
		AHDTeamState_DumpPlatoonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AA620
	 * 		Name   -> Function HDMain.HDTeamState.AddPlatoon
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHDPlatoonInfo*                              PlatoonInfo                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHDPlatoonState* AHDTeamState::AddPlatoon(class UHDPlatoonInfo* PlatoonInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTeamState.AddPlatoon");
		
		AHDTeamState_AddPlatoon_Params params {};
		params.PlatoonInfo = PlatoonInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDTeamState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDTeamState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDTeamState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0AC0
	 * 		Name   -> Function HDMain.HDTextChatInputWidgetBase.SubmitChatMessage
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        ChatMsgText                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatInputWidgetBase::SubmitChatMessage(const class FText& ChatMsgText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatInputWidgetBase.SubmitChatMessage");
		
		UHDTextChatInputWidgetBase_SubmitChatMessage_Params params {};
		params.ChatMsgText = ChatMsgText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0AA0
	 * 		Name   -> Function HDMain.HDTextChatInputWidgetBase.StopTalkingOnCurrentChannel
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UHDTextChatInputWidgetBase::StopTalkingOnCurrentChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatInputWidgetBase.StopTalkingOnCurrentChannel");
		
		UHDTextChatInputWidgetBase_StopTalkingOnCurrentChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTextChatInputWidgetBase.StopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CurrentChannel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatInputWidgetBase::StopTalking(class UDFCommChannel* CurrentChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatInputWidgetBase.StopTalking");
		
		UHDTextChatInputWidgetBase_StopTalking_Params params {};
		params.CurrentChannel = CurrentChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0A20
	 * 		Name   -> Function HDMain.HDTextChatInputWidgetBase.StartTalkingOnChannel
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFCommChannel*                              TalkChannel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatInputWidgetBase::StartTalkingOnChannel(class UDFCommChannel* TalkChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatInputWidgetBase.StartTalkingOnChannel");
		
		UHDTextChatInputWidgetBase_StartTalkingOnChannel_Params params {};
		params.TalkChannel = TalkChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTextChatInputWidgetBase.StartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              NewTalkChannel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatInputWidgetBase::StartTalking(class UDFCommChannel* NewTalkChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatInputWidgetBase.StartTalking");
		
		UHDTextChatInputWidgetBase_StartTalking_Params params {};
		params.NewTalkChannel = NewTalkChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTextChatInputWidgetBase.OnChatMessageSubmitted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDTextChatMsgInfo*                          SubmittedChatMsg                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatInputWidgetBase::OnChatMessageSubmitted(class UHDTextChatMsgInfo* SubmittedChatMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatInputWidgetBase.OnChatMessageSubmitted");
		
		UHDTextChatInputWidgetBase_OnChatMessageSubmitted_Params params {};
		params.SubmittedChatMsg = SubmittedChatMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDTextChatInputWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDTextChatInputWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDTextChatInputWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDTextChatMsgInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDTextChatMsgInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDTextChatMsgInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.StopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UHDTextChatWidgetBase::StopTalking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.StopTalking");
		
		UHDTextChatWidgetBase_StopTalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.StartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              TalkChannel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatWidgetBase::StartTalking(class UDFCommChannel* TalkChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.StartTalking");
		
		UHDTextChatWidgetBase_StartTalking_Params params {};
		params.TalkChannel = TalkChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B09A0
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.SetMaxChatMsgsToCache
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumChatMsgsToCache                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatWidgetBase::SetMaxChatMsgsToCache(int32_t NumChatMsgsToCache)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.SetMaxChatMsgsToCache");
		
		UHDTextChatWidgetBase_SetMaxChatMsgsToCache_Params params {};
		params.NumChatMsgsToCache = NumChatMsgsToCache;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0980
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.SayTeamActionPressed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHDTextChatWidgetBase::SayTeamActionPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.SayTeamActionPressed");
		
		UHDTextChatWidgetBase_SayTeamActionPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0960
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.SaySquadActionPressed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHDTextChatWidgetBase::SaySquadActionPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.SaySquadActionPressed");
		
		UHDTextChatWidgetBase_SaySquadActionPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0940
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.SayAllActionPressed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHDTextChatWidgetBase::SayAllActionPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.SayAllActionPressed");
		
		UHDTextChatWidgetBase_SayAllActionPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFB60
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.GetNumCachedChatMsgs
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UHDTextChatWidgetBase::GetNumCachedChatMsgs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.GetNumCachedChatMsgs");
		
		UHDTextChatWidgetBase_GetNumCachedChatMsgs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AF890
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.GetCachedChatMsgAt
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MsgIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHDTextChatMsgInfo*                          OutFoundMsg                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHDTextChatWidgetBase::GetCachedChatMsgAt(int32_t MsgIndex, class UHDTextChatMsgInfo** OutFoundMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.GetCachedChatMsgAt");
		
		UHDTextChatWidgetBase_GetCachedChatMsgAt_Params params {};
		params.MsgIndex = MsgIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundMsg != nullptr)
			*OutFoundMsg = params.OutFoundMsg;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDTextChatWidgetBase.DisplayChatMessage
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDTextChatMsgInfo*                          NewChatMsg                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDTextChatWidgetBase::DisplayChatMessage(class UHDTextChatMsgInfo* NewChatMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDTextChatWidgetBase.DisplayChatMessage");
		
		UHDTextChatWidgetBase_DisplayChatMessage_Params params {};
		params.NewChatMsg = NewChatMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDTextChatWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDTextChatWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDTextChatWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFB80
	 * 		Name   -> Function HDMain.HDURLStatics.GetNumTicketsOptionName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHDURLStatics::STATIC_GetNumTicketsOptionName(EHDTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDURLStatics.GetNumTicketsOptionName");
		
		UHDURLStatics_GetNumTicketsOptionName_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFAA0
	 * 		Name   -> Function HDMain.HDURLStatics.GetNumBotsOptionName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHDURLStatics::STATIC_GetNumBotsOptionName(EHDTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDURLStatics.GetNumBotsOptionName");
		
		UHDURLStatics_GetNumBotsOptionName_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AF9E0
	 * 		Name   -> Function HDMain.HDURLStatics.GetFactionOptionName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHDURLStatics::STATIC_GetFactionOptionName(EHDTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDURLStatics.GetFactionOptionName");
		
		UHDURLStatics_GetFactionOptionName_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AF960
	 * 		Name   -> Function HDMain.HDURLStatics.GetDisableKitRestrictionsOptionName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UHDURLStatics::STATIC_GetDisableKitRestrictionsOptionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDURLStatics.GetDisableKitRestrictionsOptionName");
		
		UHDURLStatics_GetDisableKitRestrictionsOptionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDURLStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDURLStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDURLStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0020
	 * 		Name   -> Function HDMain.HDUIStatics.GetServerPort
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHDServerInfo                               InServerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UHDUIStatics::STATIC_GetServerPort(const struct FHDServerInfo& InServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIStatics.GetServerPort");
		
		UHDUIStatics_GetServerPort_Params params {};
		params.InServerInfo = InServerInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFEC0
	 * 		Name   -> Function HDMain.HDUIStatics.GetServerIpPort
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHDServerInfo                               InServerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UHDUIStatics::STATIC_GetServerIpPort(const struct FHDServerInfo& InServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIStatics.GetServerIpPort");
		
		UHDUIStatics_GetServerIpPort_Params params {};
		params.InServerInfo = InServerInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFD60
	 * 		Name   -> Function HDMain.HDUIStatics.GetServerIp
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHDServerInfo                               InServerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UHDUIStatics::STATIC_GetServerIp(const struct FHDServerInfo& InServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIStatics.GetServerIp");
		
		UHDUIStatics_GetServerIp_Params params {};
		params.InServerInfo = InServerInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDUIStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDUIStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDUIStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B08C0
	 * 		Name   -> Function HDMain.HDUIUserWidget.OwnerUnpossessPawn
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::OwnerUnpossessPawn(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.OwnerUnpossessPawn");
		
		UHDUIUserWidget_OwnerUnpossessPawn_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0770
	 * 		Name   -> Function HDMain.HDUIUserWidget.OwnerPossessPawn
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::OwnerPossessPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.OwnerPossessPawn");
		
		UHDUIUserWidget_OwnerPossessPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0570
	 * 		Name   -> Function HDMain.HDUIUserWidget.OwnerEquippedItemChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 NewEquippedItem                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 PrevEquippedItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::OwnerEquippedItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.OwnerEquippedItemChanged");
		
		UHDUIUserWidget_OwnerEquippedItemChanged_Params params {};
		params.Character = Character;
		params.NewEquippedItem = NewEquippedItem;
		params.PrevEquippedItem = PrevEquippedItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B02D0
	 * 		Name   -> Function HDMain.HDUIUserWidget.OwnerDeath
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 VictimController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::OwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.OwnerDeath");
		
		UHDUIUserWidget_OwnerDeath_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFD30
	 * 		Name   -> Function HDMain.HDUIUserWidget.GetOwningPlayerHUD
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHUD* UHDUIUserWidget::GetOwningPlayerHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.GetOwningPlayerHUD");
		
		UHDUIUserWidget_GetOwningPlayerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFD00
	 * 		Name   -> Function HDMain.HDUIUserWidget.GetOwningHDPlayerHUD
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDHUD* UHDUIUserWidget::GetOwningHDPlayerHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.GetOwningHDPlayerHUD");
		
		UHDUIUserWidget_GetOwningHDPlayerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFCD0
	 * 		Name   -> Function HDMain.HDUIUserWidget.GetOwningHDPlayerCharacterMovement
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFCharacterMovementComponent* UHDUIUserWidget::GetOwningHDPlayerCharacterMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.GetOwningHDPlayerCharacterMovement");
		
		UHDUIUserWidget_GetOwningHDPlayerCharacterMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFCA0
	 * 		Name   -> Function HDMain.HDUIUserWidget.GetOwningHDPlayerCharacter
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlayerCharacter* UHDUIUserWidget::GetOwningHDPlayerCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.GetOwningHDPlayerCharacter");
		
		UHDUIUserWidget_GetOwningHDPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFC70
	 * 		Name   -> Function HDMain.HDUIUserWidget.GetOwningHDPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlayerController* UHDUIUserWidget::GetOwningHDPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.GetOwningHDPlayer");
		
		UHDUIUserWidget_GetOwningHDPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AFC40
	 * 		Name   -> Function HDMain.HDUIUserWidget.GetOwnerEquippedWeapon
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDBaseWeapon* UHDUIUserWidget::GetOwnerEquippedWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.GetOwnerEquippedWeapon");
		
		UHDUIUserWidget_GetOwnerEquippedWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPOwnerWeaponChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseWeapon*                               NewWeap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AHDBaseWeapon*                               PrevWeap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPOwnerWeaponChanged(class AHDBaseWeapon* NewWeap, class AHDBaseWeapon* PrevWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPOwnerWeaponChanged");
		
		UHDUIUserWidget_BPOwnerWeaponChanged_Params params {};
		params.NewWeap = NewWeap;
		params.PrevWeap = PrevWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPOwnerUnpossessPawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPOwnerUnpossessPawn(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPOwnerUnpossessPawn");
		
		UHDUIUserWidget_BPOwnerUnpossessPawn_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPOwnerPossessPawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPOwnerPossessPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPOwnerPossessPawn");
		
		UHDUIUserWidget_BPOwnerPossessPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPOwnerDeath
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 VictimController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPOwnerDeath");
		
		UHDUIUserWidget_BPOwnerDeath_Params params {};
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
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPInitializeForOwnerWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseWeapon*                               OwnerWeap                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPInitializeForOwnerWeapon(class AHDBaseWeapon* OwnerWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPInitializeForOwnerWeapon");
		
		UHDUIUserWidget_BPInitializeForOwnerWeapon_Params params {};
		params.OwnerWeap = OwnerWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPInitializeForOwnerPlayerCharacter
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerCharacter*                          OwnerPlyChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPInitializeForOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPInitializeForOwnerPlayerCharacter");
		
		UHDUIUserWidget_BPInitializeForOwnerPlayerCharacter_Params params {};
		params.OwnerPlyChar = OwnerPlyChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPDeinitializeFromOwnerWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseWeapon*                               OwnerWeap                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPDeinitializeFromOwnerWeapon(class AHDBaseWeapon* OwnerWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPDeinitializeFromOwnerWeapon");
		
		UHDUIUserWidget_BPDeinitializeFromOwnerWeapon_Params params {};
		params.OwnerWeap = OwnerWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUserWidget.BPDeinitializeFromOwnerPlayerCharacter
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerCharacter*                          OwnerPlyChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUserWidget::BPDeinitializeFromOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUserWidget.BPDeinitializeFromOwnerPlayerCharacter");
		
		UHDUIUserWidget_BPDeinitializeFromOwnerPlayerCharacter_Params params {};
		params.OwnerPlyChar = OwnerPlyChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDUIUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDUIUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDUIUserWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.OwnerTouchingControlPoint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         OverlappingCP                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::OwnerTouchingControlPoint(class AHDBaseCapturePoint* OverlappingCP, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.OwnerTouchingControlPoint");
		
		UHDUIUWCaptureStatus_OwnerTouchingControlPoint_Params params {};
		params.OverlappingCP = OverlappingCP;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.OwnerNoControlPoint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHDUIUWCaptureStatus::OwnerNoControlPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.OwnerNoControlPoint");
		
		UHDUIUWCaptureStatus_OwnerNoControlPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B04B0
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.OwnerEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      OverlappedOwnerChar                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::OwnerEndOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.OwnerEndOverlap");
		
		UHDUIUWCaptureStatus_OwnerEndOverlap_Params params {};
		params.OverlappedOwnerChar = OverlappedOwnerChar;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0210
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.OwnerBeginOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      OverlappedOwnerChar                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::OwnerBeginOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.OwnerBeginOverlap");
		
		UHDUIUWCaptureStatus_OwnerBeginOverlap_Params params {};
		params.OverlappedOwnerChar = OverlappedOwnerChar;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AF680
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.CPOwnershipUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         ControlPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            PrevOwningTeam                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            NewOwningTeam                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCaptured                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::CPOwnershipUpdate(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevOwningTeam, EHDTeam NewOwningTeam, bool bCaptured)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.CPOwnershipUpdate");
		
		UHDUIUWCaptureStatus_CPOwnershipUpdate_Params params {};
		params.ControlPoint = ControlPoint;
		params.PrevOwningTeam = PrevOwningTeam;
		params.NewOwningTeam = NewOwningTeam;
		params.bCaptured = bCaptured;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AF500
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.CPCaptureProgressUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         ControlPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInCaptureContested                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InCaptureProgress                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::CPCaptureProgressUpdate(class AHDBaseCapturePoint* ControlPoint, bool bInCaptureContested, int32_t InCaptureProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.CPCaptureProgressUpdate");
		
		UHDUIUWCaptureStatus_CPCaptureProgressUpdate_Params params {};
		params.ControlPoint = ControlPoint;
		params.bInCaptureContested = bInCaptureContested;
		params.InCaptureProgress = InCaptureProgress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AF440
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.CPBeginEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      OverlappedControlPointActor                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::CPBeginEndOverlap(class AActor* OverlappedControlPointActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.CPBeginEndOverlap");
		
		UHDUIUWCaptureStatus_CPBeginEndOverlap_Params params {};
		params.OverlappedControlPointActor = OverlappedControlPointActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.ControlPointSetOwnershipState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCaptured                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            NewOwningTeam                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDTeam                                            OldOwningTeam                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.ControlPointSetOwnershipState");
		
		UHDUIUWCaptureStatus_ControlPointSetOwnershipState_Params params {};
		params.bCaptured = bCaptured;
		params.NewOwningTeam = NewOwningTeam;
		params.OldOwningTeam = OldOwningTeam;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.ControlPointSetGarrisonedPlayerCount
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumFriendlies                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumEnemies                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinNumRequiredForCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::ControlPointSetGarrisonedPlayerCount(int32_t NumFriendlies, int32_t NumEnemies, int32_t MinNumRequiredForCapture, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.ControlPointSetGarrisonedPlayerCount");
		
		UHDUIUWCaptureStatus_ControlPointSetGarrisonedPlayerCount_Params params {};
		params.NumFriendlies = NumFriendlies;
		params.NumEnemies = NumEnemies;
		params.MinNumRequiredForCapture = MinNumRequiredForCapture;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWCaptureStatus.ControlPointSetCaptureProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bContested                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWCaptureStatus::ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWCaptureStatus.ControlPointSetCaptureProgress");
		
		UHDUIUWCaptureStatus_ControlPointSetCaptureProgress_Params params {};
		params.bContested = bContested;
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDUIUWCaptureStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDUIUWCaptureStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDUIUWCaptureStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDUIUWHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDUIUWHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDUIUWHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerUpdateStamina
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SprintValueNorm                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              JumpValueNorm                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerUpdateStamina");
		
		UHDUIUWPlayerStatus_OwnerUpdateStamina_Params params {};
		params.SprintValueNorm = SprintValueNorm;
		params.JumpValueNorm = JumpValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerStartSprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHDUIUWPlayerStatus::OwnerStartSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerStartSprint");
		
		UHDUIUWPlayerStatus_OwnerStartSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerStartAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHDUIUWPlayerStatus::OwnerStartAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerStartAim");
		
		UHDUIUWPlayerStatus_OwnerStartAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B07F0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerSprintTransitionUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bIsSprinting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerSprintTransitionUpdate(bool bIsSprinting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerSprintTransitionUpdate");
		
		UHDUIUWPlayerStatus_OwnerSprintTransitionUpdate_Params params {};
		params.bIsSprinting = bIsSprinting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerSetStanceState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHDUICharacterStanceState                          NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDUICharacterStanceState                          OldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerSetStanceState");
		
		UHDUIUWPlayerStatus_OwnerSetStanceState_Params params {};
		params.NewState = NewState;
		params.OldState = OldState;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerSetStance
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterStance                                   NewStance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterStance                                   OldStance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerSetStance(ECharacterStance NewStance, ECharacterStance OldStance, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerSetStance");
		
		UHDUIUWPlayerStatus_OwnerSetStance_Params params {};
		params.NewStance = NewStance;
		params.OldStance = OldStance;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerSetSprintStamina
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerSetSprintStamina");
		
		UHDUIUWPlayerStatus_OwnerSetSprintStamina_Params params {};
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerSetJumpStamina
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerSetJumpStamina");
		
		UHDUIUWPlayerStatus_OwnerSetJumpStamina_Params params {};
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerSetHealth
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValueNorm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerSetHealth");
		
		UHDUIUWPlayerStatus_OwnerSetHealth_Params params {};
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0670
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerHealthUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewHealthTotal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PrevHealthTotal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerHealthUpdate(class ADFBaseCharacter* Character, float NewHealthTotal, float PrevHealthTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerHealthUpdate");
		
		UHDUIUWPlayerStatus_OwnerHealthUpdate_Params params {};
		params.Character = Character;
		params.NewHealthTotal = NewHealthTotal;
		params.PrevHealthTotal = PrevHealthTotal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerEndSprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHDUIUWPlayerStatus::OwnerEndSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerEndSprint");
		
		UHDUIUWPlayerStatus_OwnerEndSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerEndAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHDUIUWPlayerStatus::OwnerEndAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerEndAim");
		
		UHDUIUWPlayerStatus_OwnerEndAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0140
	 * 		Name   -> Function HDMain.HDUIUWPlayerStatus.OwnerAimTransitionUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bIsAiming                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWPlayerStatus::OwnerAimTransitionUpdate(bool bIsAiming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWPlayerStatus.OwnerAimTransitionUpdate");
		
		UHDUIUWPlayerStatus_OwnerAimTransitionUpdate_Params params {};
		params.bIsAiming = bIsAiming;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDUIUWPlayerStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDUIUWPlayerStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDUIUWPlayerStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2600
	 * 		Name   -> Function HDMain.HDUIUWWeaponStatus.OwnerWeaponFireModeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADFBaseGun*                                  Gun                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFireMode                                          NewFireMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFireMode                                          PrevFireMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWWeaponStatus::OwnerWeaponFireModeChanged(class ADFBaseGun* Gun, EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWWeaponStatus.OwnerWeaponFireModeChanged");
		
		UHDUIUWWeaponStatus_OwnerWeaponFireModeChanged_Params params {};
		params.Gun = Gun;
		params.NewFireMode = NewFireMode;
		params.PrevFireMode = PrevFireMode;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWWeaponStatus.OwnerSetAimStyle
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHDWeaponAimStyle                                  NewAimStyle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDWeaponAimStyle                                  PrevAimStyle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWWeaponStatus::OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWWeaponStatus.OwnerSetAimStyle");
		
		UHDUIUWWeaponStatus_OwnerSetAimStyle_Params params {};
		params.NewAimStyle = NewAimStyle;
		params.PrevAimStyle = PrevAimStyle;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B24B0
	 * 		Name   -> Function HDMain.HDUIUWWeaponStatus.OwnerAimStyleChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AHDPlayerCharacter*                          Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDWeaponAimStyle                                  NewAimStyle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHDWeaponAimStyle                                  PrevAimStyle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWWeaponStatus::OwnerAimStyleChanged(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWWeaponStatus.OwnerAimStyleChanged");
		
		UHDUIUWWeaponStatus_OwnerAimStyleChanged_Params params {};
		params.Character = Character;
		params.NewAimStyle = NewAimStyle;
		params.PrevAimStyle = PrevAimStyle;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWWeaponStatus.BPOwnerWeaponSetFireMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EFireMode                                          NewFireMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFireMode                                          PreviousFireMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWWeaponStatus::BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWWeaponStatus.BPOwnerWeaponSetFireMode");
		
		UHDUIUWWeaponStatus_BPOwnerWeaponSetFireMode_Params params {};
		params.NewFireMode = NewFireMode;
		params.PreviousFireMode = PreviousFireMode;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDUIUWWeaponStatus.BPOwnerWeaponAmmoUpdated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDUIWeaponAmmoState                        AmmoState                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromReload                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTotalFreeAmmoUpdated                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNumFreeAmmoClipsUpdated                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDUIUWWeaponStatus::BPOwnerWeaponAmmoUpdated(const struct FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDUIUWWeaponStatus.BPOwnerWeaponAmmoUpdated");
		
		UHDUIUWWeaponStatus_BPOwnerWeaponAmmoUpdated_Params params {};
		params.AmmoState = AmmoState;
		params.bFromReload = bFromReload;
		params.bTotalFreeAmmoUpdated = bTotalFreeAmmoUpdated;
		params.bNumFreeAmmoClipsUpdated = bNumFreeAmmoClipsUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDUIUWWeaponStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDUIUWWeaponStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDUIUWWeaponStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDVehiclePlayerSeatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDVehiclePlayerSeatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDVehiclePlayerSeatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDVoiceChatMsgInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDVoiceChatMsgInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDVoiceChatMsgInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2750
	 * 		Name   -> Function HDMain.HDVoipIndicatorListingWidgetBase.SetupVoiceListing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         InVoiceMsgInfo                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDVoipIndicatorListingWidgetBase::SetupVoiceListing(class UHDVoiceChatMsgInfo* InVoiceMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDVoipIndicatorListingWidgetBase.SetupVoiceListing");
		
		UHDVoipIndicatorListingWidgetBase_SetupVoiceListing_Params params {};
		params.InVoiceMsgInfo = InVoiceMsgInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDVoipIndicatorListingWidgetBase.OnVoiceMsgInfoSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDVoipIndicatorListingWidgetBase::OnVoiceMsgInfoSet(bool bIsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDVoipIndicatorListingWidgetBase.OnVoiceMsgInfoSet");
		
		UHDVoipIndicatorListingWidgetBase_OnVoiceMsgInfoSet_Params params {};
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDVoipIndicatorListingWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDVoipIndicatorListingWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDVoipIndicatorListingWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDVoipIndicatorWidgetBase.OnPlayerStopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         TalkerMsgInfo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDVoipIndicatorWidgetBase::OnPlayerStopTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDVoipIndicatorWidgetBase.OnPlayerStopTalking");
		
		UHDVoipIndicatorWidgetBase_OnPlayerStopTalking_Params params {};
		params.TalkerMsgInfo = TalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDVoipIndicatorWidgetBase.OnPlayerStartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         TalkerMsgInfo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDVoipIndicatorWidgetBase::OnPlayerStartTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDVoipIndicatorWidgetBase.OnPlayerStartTalking");
		
		UHDVoipIndicatorWidgetBase_OnPlayerStartTalking_Params params {};
		params.TalkerMsgInfo = TalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDVoipIndicatorWidgetBase.OnOwningPlayerStopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         LocalTalkerMsgInfo                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDVoipIndicatorWidgetBase::OnOwningPlayerStopTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDVoipIndicatorWidgetBase.OnOwningPlayerStopTalking");
		
		UHDVoipIndicatorWidgetBase_OnOwningPlayerStopTalking_Params params {};
		params.LocalTalkerMsgInfo = LocalTalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.HDVoipIndicatorWidgetBase.OnOwningPlayerStartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         LocalTalkerMsgInfo                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHDVoipIndicatorWidgetBase::OnOwningPlayerStartTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.HDVoipIndicatorWidgetBase.OnOwningPlayerStartTalking");
		
		UHDVoipIndicatorWidgetBase_OnOwningPlayerStartTalking_Params params {};
		params.LocalTalkerMsgInfo = LocalTalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDVoipIndicatorWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDVoipIndicatorWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDVoipIndicatorWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDWeaponAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDWeaponAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDWeaponAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDWeaponScopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDWeaponScopeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDWeaponScopeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHDWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHDWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.HDWorldSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatoonListEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatoonListEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.PlatoonListEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2360
	 * 		Name   -> Function HDMain.SquadListEntry.GetParentPlatoonState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlatoonState* USquadListEntry::GetParentPlatoonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.SquadListEntry.GetParentPlatoonState");
		
		USquadListEntry_GetParentPlatoonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USquadListEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USquadListEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.SquadListEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2390
	 * 		Name   -> Function HDMain.SquadMemberInfo.GetParentSquadState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDSquadState* USquadMemberInfo::GetParentSquadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.SquadMemberInfo.GetParentSquadState");
		
		USquadMemberInfo_GetParentSquadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2360
	 * 		Name   -> Function HDMain.SquadMemberInfo.GetParentPlatoonState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHDPlatoonState* USquadMemberInfo::GetParentPlatoonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.SquadMemberInfo.GetParentPlatoonState");
		
		USquadMemberInfo_GetParentPlatoonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USquadMemberInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USquadMemberInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.SquadMemberInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC54E0
	 * 		Name   -> Function HDMain.VictoryMenu.OnVictoryInit
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UVictoryMenu::OnVictoryInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.VictoryMenu.OnVictoryInit");
		
		UVictoryMenu_OnVictoryInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B23C0
	 * 		Name   -> Function HDMain.VictoryMenu.Init
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHDGameRoundEndEventDetails                 InRoundDetails                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInWinner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryMenu::Init(const struct FHDGameRoundEndEventDetails& InRoundDetails, bool bInWinner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HDMain.VictoryMenu.Init");
		
		UVictoryMenu_Init_Params params {};
		params.InRoundDetails = InRoundDetails;
		params.bInWinner = bInWinner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVictoryMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDMain.VictoryMenu");
		return ptr;
	}

}


