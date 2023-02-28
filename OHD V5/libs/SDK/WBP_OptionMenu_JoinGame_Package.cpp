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
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.HasSubMenus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSubMenuOptions                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_JoinGame_C::HasSubMenus(bool* bSubMenuOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.HasSubMenus");
		
		UWBP_OptionMenu_JoinGame_C_HasSubMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSubMenuOptions != nullptr)
			*bSubMenuOptions = params.bSubMenuOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSubMenuOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFSubMenuOption>                     SubOptions                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSubMenuOptions");
		
		UWBP_OptionMenu_JoinGame_C_GetSubMenuOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubOptions != nullptr)
			*SubOptions = params.SubOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredHorizontalAlignment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHorizontalAlignment                               Alignment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredHorizontalAlignment");
		
		UWBP_OptionMenu_JoinGame_C_GetDesiredHorizontalAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alignment != nullptr)
			*Alignment = params.Alignment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredVerticalAlignment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EVerticalAlignment                                 Alignment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::GetDesiredVerticalAlignment(EVerticalAlignment* Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredVerticalAlignment");
		
		UWBP_OptionMenu_JoinGame_C_GetDesiredVerticalAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alignment != nullptr)
			*Alignment = params.Alignment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OpenPasswordPrompt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::OpenPasswordPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OpenPasswordPrompt");
		
		UWBP_OptionMenu_JoinGame_C_OpenPasswordPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ApplyActiveServerFilters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::ApplyActiveServerFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ApplyActiveServerFilters");
		
		UWBP_OptionMenu_JoinGame_C_ApplyActiveServerFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.RefreshServerList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::RefreshServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.RefreshServerList");
		
		UWBP_OptionMenu_JoinGame_C_RefreshServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ToggleServerDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShown                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_JoinGame_C::ToggleServerDetails(bool bShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ToggleServerDetails");
		
		UWBP_OptionMenu_JoinGame_C_ToggleServerDetails_Params params {};
		params.bShown = bShown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetServerListSortPreference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFServerSortPreference                      SortPreference                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::GetServerListSortPreference(struct FFServerSortPreference* SortPreference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetServerListSortPreference");
		
		UWBP_OptionMenu_JoinGame_C_GetServerListSortPreference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortPreference != nullptr)
			*SortPreference = params.SortPreference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.IsValidServerListItemIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            IndexToTest                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValidIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_JoinGame_C::IsValidServerListItemIndex(int32_t IndexToTest, bool* bValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.IsValidServerListItemIndex");
		
		UWBP_OptionMenu_JoinGame_C_IsValidServerListItemIndex_Params params {};
		params.IndexToTest = IndexToTest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidIndex != nullptr)
			*bValidIndex = params.bValidIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSelectedServerListItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDServerListItemData*                       ServerItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::GetSelectedServerListItem(class UHDServerListItemData** ServerItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSelectedServerListItem");
		
		UWBP_OptionMenu_JoinGame_C_GetSelectedServerListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServerItem != nullptr)
			*ServerItem = params.ServerItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ClearServerListItemSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::ClearServerListItemSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ClearServerListItemSelection");
		
		UWBP_OptionMenu_JoinGame_C_ClearServerListItemSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionCleared
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::ServerListItemSelectionCleared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionCleared");
		
		UWBP_OptionMenu_JoinGame_C_ServerListItemSelectionCleared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionUpdated
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDServerListItemData*                       InSelectedServerListItem                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::ServerListItemSelectionUpdated(class UHDServerListItemData* InSelectedServerListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionUpdated");
		
		UWBP_OptionMenu_JoinGame_C_ServerListItemSelectionUpdated_Params params {};
		params.InSelectedServerListItem = InSelectedServerListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SetActiveSubMenuByIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SubMenuIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::SetActiveSubMenuByIndex(int32_t SubMenuIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SetActiveSubMenuByIndex");
		
		UWBP_OptionMenu_JoinGame_C_SetActiveSubMenuByIndex_Params params {};
		params.SubMenuIndex = SubMenuIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::ReceiveOnRefreshStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshStart");
		
		UWBP_OptionMenu_JoinGame_C_ReceiveOnRefreshStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSortAscending                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHDServerListSortBy                                SortBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshComplete");
		
		UWBP_OptionMenu_JoinGame_C_ReceiveOnRefreshComplete_Params params {};
		params.bSortAscending = bSortAscending;
		params.SortBy = SortBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_OptionMenu_JoinGame_C_BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature");
		
		UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature");
		
		UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature");
		
		UWBP_OptionMenu_JoinGame_C_BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_OptionMenu_JoinGame_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OnInitialized");
		
		UWBP_OptionMenu_JoinGame_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature");
		
		UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_JoinGame_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.PreConstruct");
		
		UWBP_OptionMenu_JoinGame_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    ActiveFilters                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_OptionMenu_JoinGame_C::BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature");
		
		UWBP_OptionMenu_JoinGame_C_BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature_Params params {};
		params.ActiveFilters = ActiveFilters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SortPreferenceChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFServerSortPreference                      SortPreference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::SortPreferenceChanged(const struct FFServerSortPreference& SortPreference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SortPreferenceChanged");
		
		UWBP_OptionMenu_JoinGame_C_SortPreferenceChanged_Params params {};
		params.SortPreference = SortPreference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ConfirmServerPasswordInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InputText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_OptionMenu_JoinGame_C::ConfirmServerPasswordInput(const class FText& InputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ConfirmServerPasswordInput");
		
		UWBP_OptionMenu_JoinGame_C_ConfirmServerPasswordInput_Params params {};
		params.InputText = InputText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ExecuteUbergraph_WBP_OptionMenu_JoinGame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_JoinGame_C::ExecuteUbergraph_WBP_OptionMenu_JoinGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ExecuteUbergraph_WBP_OptionMenu_JoinGame");
		
		UWBP_OptionMenu_JoinGame_C_ExecuteUbergraph_WBP_OptionMenu_JoinGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionMenu_JoinGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionMenu_JoinGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C");
		return ptr;
	}

}


