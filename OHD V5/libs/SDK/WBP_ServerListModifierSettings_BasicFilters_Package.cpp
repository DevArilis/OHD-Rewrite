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
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetFilterRules
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bActiveOnly                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    FilterRules                                                (Parm, OutParm)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetFilterRules");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_GetFilterRules_Params params {};
		params.bActiveOnly = bActiveOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterRules != nullptr)
			*FilterRules = params.FilterRules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetSelectedServerSortPreference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFServerSortPreference                      SortPreference                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::GetSelectedServerSortPreference(struct FFServerSortPreference* SortPreference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetSelectedServerSortPreference");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_GetSelectedServerSortPreference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortPreference != nullptr)
			*SortPreference = params.SortPreference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnInitialized");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.FilterSettingChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Rule                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHDFilterRuleParams                         RuleParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::FilterSettingChanged(class UClass* Rule, const struct FHDFilterRuleParams& RuleParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.FilterSettingChanged");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_FilterSettingChanged_Params params {};
		params.Rule = Rule;
		params.RuleParams = RuleParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnFilterSettingsChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    ActiveFilters                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::OnFilterSettingsChanged__DelegateSignature(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnFilterSettingsChanged__DelegateSignature");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_OnFilterSettingsChanged__DelegateSignature_Params params {};
		params.ActiveFilters = ActiveFilters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnSortPreferenceChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFServerSortPreference                      SortPreference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerListModifierSettings_BasicFilters_C::OnSortPreferenceChanged__DelegateSignature(const struct FFServerSortPreference& SortPreference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnSortPreferenceChanged__DelegateSignature");
		
		UWBP_ServerListModifierSettings_BasicFilters_C_OnSortPreferenceChanged__DelegateSignature_Params params {};
		params.SortPreference = SortPreference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ServerListModifierSettings_BasicFilters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ServerListModifierSettings_BasicFilters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C");
		return ptr;
	}

}


