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
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_DlgBox_ServerPasswordPrompt_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnPreviewKeyDown");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DlgBox_ServerPasswordPrompt_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnMouseButtonDown");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.Construct");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.DummyInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::DummyInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.DummyInput");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_DummyInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ConfirmInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::ConfirmInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ConfirmInput");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_ConfirmInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.CancelInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::CancelInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.CancelInput");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_CancelInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnRemovedFromFocusPath");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnCancelInput__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::OnCancelInput__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnCancelInput__DelegateSignature");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_OnCancelInput__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnConfirmInput__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InputText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_DlgBox_ServerPasswordPrompt_C::OnConfirmInput__DelegateSignature(const class FText& InputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnConfirmInput__DelegateSignature");
		
		UWBP_DlgBox_ServerPasswordPrompt_C_OnConfirmInput__DelegateSignature_Params params {};
		params.InputText = InputText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DlgBox_ServerPasswordPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DlgBox_ServerPasswordPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C");
		return ptr;
	}

}


