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
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.IsFilterEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::IsFilterEnabled(bool* bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.IsFilterEnabled");
		
		UWBP_ServerListModifierSetting_FilterRule_C_IsFilterEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bActive != nullptr)
			*bActive = params.bActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.GetFilterRulePair
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UClass*                                      Rule                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHDFilterRuleParams                         RuleParams                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::GetFilterRulePair(class UClass** Rule, struct FHDFilterRuleParams* RuleParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.GetFilterRulePair");
		
		UWBP_ServerListModifierSetting_FilterRule_C_GetFilterRulePair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rule != nullptr)
			*Rule = params.Rule;
		if (RuleParams != nullptr)
			*RuleParams = params.RuleParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.GetRuleParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FHDFilterRuleParams                         Params                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::GetRuleParams(struct FHDFilterRuleParams* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.GetRuleParams");
		
		UWBP_ServerListModifierSetting_FilterRule_C_GetRuleParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Params != nullptr)
			*Params = params.Params;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.SetRuleParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDFilterRuleParams                         NewParams                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::SetRuleParams(const struct FHDFilterRuleParams& NewParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.SetRuleParams");
		
		UWBP_ServerListModifierSetting_FilterRule_C_SetRuleParams_Params params {};
		params.NewParams = NewParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.PreConstruct");
		
		UWBP_ServerListModifierSetting_FilterRule_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UWBP_ServerListModifierSetting_FilterRule_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule");
		
		UWBP_ServerListModifierSetting_FilterRule_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.OnDropdownSettingChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Rule                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHDFilterRuleParams                         RuleParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerListModifierSetting_FilterRule_C::OnDropdownSettingChanged__DelegateSignature(class UClass* Rule, const struct FHDFilterRuleParams& RuleParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.OnDropdownSettingChanged__DelegateSignature");
		
		UWBP_ServerListModifierSetting_FilterRule_C_OnDropdownSettingChanged__DelegateSignature_Params params {};
		params.Rule = Rule;
		params.RuleParams = RuleParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ServerListModifierSetting_FilterRule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ServerListModifierSetting_FilterRule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C");
		return ptr;
	}

}


