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
	 * 		Name   -> Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.GetFilterRules
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bActiveOnly                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    FilterRules                                                (Parm, OutParm)
	 */
	void UWBP_JoinServerFiltersPanel_C::GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.GetFilterRules");
		
		UWBP_JoinServerFiltersPanel_C_GetFilterRules_Params params {};
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
	 * 		Name   -> Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_JoinServerFiltersPanel_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnInitialized");
		
		UWBP_JoinServerFiltersPanel_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.FilterSettingsChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    ActiveFilters                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_JoinServerFiltersPanel_C::FilterSettingsChanged(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.FilterSettingsChanged");
		
		UWBP_JoinServerFiltersPanel_C_FilterSettingsChanged_Params params {};
		params.ActiveFilters = ActiveFilters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.ExecuteUbergraph_WBP_JoinServerFiltersPanel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerFiltersPanel_C::ExecuteUbergraph_WBP_JoinServerFiltersPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.ExecuteUbergraph_WBP_JoinServerFiltersPanel");
		
		UWBP_JoinServerFiltersPanel_C_ExecuteUbergraph_WBP_JoinServerFiltersPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnServerFiltersChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    ActiveFilters                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_JoinServerFiltersPanel_C::OnServerFiltersChanged__DelegateSignature(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnServerFiltersChanged__DelegateSignature");
		
		UWBP_JoinServerFiltersPanel_C_OnServerFiltersChanged__DelegateSignature_Params params {};
		params.ActiveFilters = ActiveFilters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_JoinServerFiltersPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_JoinServerFiltersPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C");
		return ptr;
	}

}


