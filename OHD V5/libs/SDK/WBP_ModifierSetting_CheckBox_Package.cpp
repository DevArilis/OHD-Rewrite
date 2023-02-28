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
	 * 		Name   -> Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.GetSettingText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        SettingText                                                (Parm, OutParm)
	 */
	void UWBP_ModifierSetting_CheckBox_C::GetSettingText(class FText* SettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.GetSettingText");
		
		UWBP_ModifierSetting_CheckBox_C_GetSettingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SettingText != nullptr)
			*SettingText = params.SettingText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.SetSettingText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InSettingText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ModifierSetting_CheckBox_C::SetSettingText(const class FText& InSettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.SetSettingText");
		
		UWBP_ModifierSetting_CheckBox_C_SetSettingText_Params params {};
		params.InSettingText = InSettingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ModifierSetting_CheckBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.PreConstruct");
		
		UWBP_ModifierSetting_CheckBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ModifierSetting_CheckBox_C::BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_ModifierSetting_CheckBox_C_BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_ModifierSetting_CheckBox_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.OnInitialized");
		
		UWBP_ModifierSetting_CheckBox_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.ExecuteUbergraph_WBP_ModifierSetting_CheckBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_CheckBox_C::ExecuteUbergraph_WBP_ModifierSetting_CheckBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.ExecuteUbergraph_WBP_ModifierSetting_CheckBox");
		
		UWBP_ModifierSetting_CheckBox_C_ExecuteUbergraph_WBP_ModifierSetting_CheckBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ModifierSetting_CheckBox_C::OnCheckStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.OnCheckStateChanged__DelegateSignature");
		
		UWBP_ModifierSetting_CheckBox_C_OnCheckStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ModifierSetting_CheckBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ModifierSetting_CheckBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C");
		return ptr;
	}

}


