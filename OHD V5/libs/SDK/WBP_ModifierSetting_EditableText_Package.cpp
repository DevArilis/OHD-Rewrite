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
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.GetSettingLabel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        SettingText                                                (Parm, OutParm)
	 */
	void UWBP_ModifierSetting_EditableText_C::GetSettingLabel(class FText* SettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.GetSettingLabel");
		
		UWBP_ModifierSetting_EditableText_C_GetSettingLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SettingText != nullptr)
			*SettingText = params.SettingText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.SetSettingLabel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InSettingText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ModifierSetting_EditableText_C::SetSettingLabel(const class FText& InSettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.SetSettingLabel");
		
		UWBP_ModifierSetting_EditableText_C_SetSettingLabel_Params params {};
		params.InSettingText = InSettingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ModifierSetting_EditableText_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.PreConstruct");
		
		UWBP_ModifierSetting_EditableText_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_ModifierSetting_EditableText_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnInitialized");
		
		UWBP_ModifierSetting_EditableText_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ModifierSetting_EditableText_C::BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");
		
		UWBP_ModifierSetting_EditableText_C_BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_EditableText_C::BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
		
		UWBP_ModifierSetting_EditableText_C_BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.ExecuteUbergraph_WBP_ModifierSetting_EditableText
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_EditableText_C::ExecuteUbergraph_WBP_ModifierSetting_EditableText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.ExecuteUbergraph_WBP_ModifierSetting_EditableText");
		
		UWBP_ModifierSetting_EditableText_C_ExecuteUbergraph_WBP_ModifierSetting_EditableText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnTextCommitted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_EditableText_C::OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnTextCommitted__DelegateSignature");
		
		UWBP_ModifierSetting_EditableText_C_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnTextChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ModifierSetting_EditableText_C::OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnTextChanged__DelegateSignature");
		
		UWBP_ModifierSetting_EditableText_C_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ModifierSetting_EditableText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ModifierSetting_EditableText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C");
		return ptr;
	}

}


