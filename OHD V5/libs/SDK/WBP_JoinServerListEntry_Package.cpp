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
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.AddBadgeDefinitionToListIfFound
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TableRowName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFServerBadgeUIDefinition>           BadgeArr                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::AddBadgeDefinitionToListIfFound(const class FName& TableRowName, TArray<struct FFServerBadgeUIDefinition>* BadgeArr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.AddBadgeDefinitionToListIfFound");
		
		UWBP_JoinServerListEntry_C_AddBadgeDefinitionToListIfFound_Params params {};
		params.TableRowName = TableRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BadgeArr != nullptr)
			*BadgeArr = params.BadgeArr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.CreateAndAddBadgeWidgetFromDefinition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFServerBadgeUIDefinition                   BadgeUIDef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::CreateAndAddBadgeWidgetFromDefinition(struct FFServerBadgeUIDefinition* BadgeUIDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.CreateAndAddBadgeWidgetFromDefinition");
		
		UWBP_JoinServerListEntry_C_CreateAndAddBadgeWidgetFromDefinition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BadgeUIDef != nullptr)
			*BadgeUIDef = params.BadgeUIDef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBadgeDefinitionFromTable
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FFServerBadgeUIDefinition                   BadgeUIDef                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::GetBadgeDefinitionFromTable(const struct FDataTableRowHandle& RowHandle, bool* bFound, struct FFServerBadgeUIDefinition* BadgeUIDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBadgeDefinitionFromTable");
		
		UWBP_JoinServerListEntry_C_GetBadgeDefinitionFromTable_Params params {};
		params.RowHandle = RowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFound != nullptr)
			*bFound = params.bFound;
		if (BadgeUIDef != nullptr)
			*BadgeUIDef = params.BadgeUIDef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.HideAllBadges
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_JoinServerListEntry_C::HideAllBadges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.HideAllBadges");
		
		UWBP_JoinServerListEntry_C_HideAllBadges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetBadgeVisibilityFromServerData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_JoinServerListEntry_C::SetBadgeVisibilityFromServerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetBadgeVisibilityFromServerData");
		
		UWBP_JoinServerListEntry_C_SetBadgeVisibilityFromServerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.PopulateBadges
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFServerBadgeUIDefinition>           BadgeDefs                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::PopulateBadges(TArray<struct FFServerBadgeUIDefinition>* BadgeDefs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.PopulateBadges");
		
		UWBP_JoinServerListEntry_C_PopulateBadges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BadgeDefs != nullptr)
			*BadgeDefs = params.BadgeDefs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBrushWithItemDimensions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSlateBrush                                 OutBrush                                                   (Parm, OutParm)
	 */
	void UWBP_JoinServerListEntry_C::GetBrushWithItemDimensions(struct FSlateBrush* InBrush, struct FSlateBrush* OutBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBrushWithItemDimensions");
		
		UWBP_JoinServerListEntry_C_GetBrushWithItemDimensions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InBrush != nullptr)
			*InBrush = params.InBrush;
		if (OutBrush != nullptr)
			*OutBrush = params.OutBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBrushWithImageTexture
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTexture2D*                                  Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 UpdatedBrush                                               (Parm, OutParm)
	 */
	void UWBP_JoinServerListEntry_C::GetBrushWithImageTexture(struct FSlateBrush* Brush, class UTexture2D* Image, struct FSlateBrush* UpdatedBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBrushWithImageTexture");
		
		UWBP_JoinServerListEntry_C_GetBrushWithImageTexture_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
		if (UpdatedBrush != nullptr)
			*UpdatedBrush = params.UpdatedBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.InternalRefreshDimensions
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_JoinServerListEntry_C::InternalRefreshDimensions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.InternalRefreshDimensions");
		
		UWBP_JoinServerListEntry_C_InternalRefreshDimensions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemMinHeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::GetItemMinHeight(int32_t* MinHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemMinHeight");
		
		UWBP_JoinServerListEntry_C_GetItemMinHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinHeight != nullptr)
			*MinHeight = params.MinHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemMinWidth
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::GetItemMinWidth(int32_t* MinWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemMinWidth");
		
		UWBP_JoinServerListEntry_C_GetItemMinWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinWidth != nullptr)
			*MinWidth = params.MinWidth;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemMinDimensions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InMinWidth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMinHeight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::SetItemMinDimensions(int32_t InMinWidth, int32_t InMinHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemMinDimensions");
		
		UWBP_JoinServerListEntry_C_SetItemMinDimensions_Params params {};
		params.InMinWidth = InMinWidth;
		params.InMinHeight = InMinHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemStyle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FCheckBoxStyle                              ItemStyle                                                  (Parm, OutParm)
	 */
	void UWBP_JoinServerListEntry_C::GetItemStyle(struct FCheckBoxStyle* ItemStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemStyle");
		
		UWBP_JoinServerListEntry_C_GetItemStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemStyle != nullptr)
			*ItemStyle = params.ItemStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  InItemImg                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::SetItemImage(class UTexture2D* InItemImg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemImage");
		
		UWBP_JoinServerListEntry_C_SetItemImage_Params params {};
		params.InItemImg = InItemImg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCheckBoxStyle                              InItemStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_JoinServerListEntry_C::SetItemStyle(const struct FCheckBoxStyle& InItemStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemStyle");
		
		UWBP_JoinServerListEntry_C_SetItemStyle_Params params {};
		params.InItemStyle = InItemStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.InternalUpdateItemBgTintColor
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::InternalUpdateItemBgTintColor(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.InternalUpdateItemBgTintColor");
		
		UWBP_JoinServerListEntry_C_InternalUpdateItemBgTintColor_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.IsItemSelected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::IsItemSelected(bool* bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.IsItemSelected");
		
		UWBP_JoinServerListEntry_C_IsItemSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelected != nullptr)
			*bSelected = params.bSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemSelectionState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECheckBoxState                                     SelectionState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::GetItemSelectionState(ECheckBoxState* SelectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemSelectionState");
		
		UWBP_JoinServerListEntry_C_GetItemSelectionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectionState != nullptr)
			*SelectionState = params.SelectionState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemIsSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::SetItemIsSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemIsSelected");
		
		UWBP_JoinServerListEntry_C_SetItemIsSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemSelectionState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECheckBoxState                                     InSelectionState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::SetItemSelectionState(ECheckBoxState InSelectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemSelectionState");
		
		UWBP_JoinServerListEntry_C_SetItemSelectionState_Params params {};
		params.InSelectionState = InSelectionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.PreConstruct");
		
		UWBP_JoinServerListEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_JoinServerListEntry_C_BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnItemSelectionChanged");
		
		UWBP_JoinServerListEntry_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.On Selection State Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::OnSelectionStateChanged(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.On Selection State Changed");
		
		UWBP_JoinServerListEntry_C_OnSelectionStateChanged_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnListItemObjectSet");
		
		UWBP_JoinServerListEntry_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnServerItemDataSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::OnServerItemDataSet(bool bIsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnServerItemDataSet");
		
		UWBP_JoinServerListEntry_C_OnServerItemDataSet_Params params {};
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_JoinServerListEntry_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnEntryReleased");
		
		UWBP_JoinServerListEntry_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnItemExpansionChanged");
		
		UWBP_JoinServerListEntry_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.ExecuteUbergraph_WBP_JoinServerListEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerListEntry_C::ExecuteUbergraph_WBP_JoinServerListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.ExecuteUbergraph_WBP_JoinServerListEntry");
		
		UWBP_JoinServerListEntry_C_ExecuteUbergraph_WBP_JoinServerListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnSelectionStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_JoinServerListEntry_C*                  Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerListEntry_C::OnSelectionStateChanged__DelegateSignature(class UWBP_JoinServerListEntry_C* Item, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnSelectionStateChanged__DelegateSignature");
		
		UWBP_JoinServerListEntry_C_OnSelectionStateChanged__DelegateSignature_Params params {};
		params.Item = Item;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_JoinServerListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_JoinServerListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_JoinServerListEntry.WBP_JoinServerListEntry_C");
		return ptr;
	}

}


