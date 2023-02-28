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
	 * 		Name   -> Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.SetSubMenuIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MenuSubNavSelectionListEntry_C::SetSubMenuIndex(int32_t Idx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.SetSubMenuIndex");
		
		UWBP_MenuSubNavSelectionListEntry_C_SetSubMenuIndex_Params params {};
		params.Idx = Idx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MenuSubNavSelectionListEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.PreConstruct");
		
		UWBP_MenuSubNavSelectionListEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.OnItemSelectionChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MenuSubNavSelectionListEntry_C::OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.OnItemSelectionChanged");
		
		UWBP_MenuSubNavSelectionListEntry_C_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_CreateGameSelectionListEntry_C*         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MenuSubNavSelectionListEntry_C::BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature");
		
		UWBP_MenuSubNavSelectionListEntry_C_BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature_Params params {};
		params.Item = Item;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MenuSubNavSelectionListEntry_C::ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry");
		
		UWBP_MenuSubNavSelectionListEntry_C_ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MenuSubNavSelectionListEntry_C*         ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MenuSubNavSelectionListEntry_C::ButtonClicked__DelegateSignature(class UWBP_MenuSubNavSelectionListEntry_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ButtonClicked__DelegateSignature");
		
		UWBP_MenuSubNavSelectionListEntry_C_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MenuSubNavSelectionListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MenuSubNavSelectionListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C");
		return ptr;
	}

}


