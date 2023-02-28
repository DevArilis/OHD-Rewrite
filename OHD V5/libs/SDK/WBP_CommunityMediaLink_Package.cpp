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
	 * 		Name   -> Function WBP_CommunityMediaLink.WBP_CommunityMediaLink_C.BndEvt__LinkBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_CommunityMediaLink_C::BndEvt__LinkBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommunityMediaLink.WBP_CommunityMediaLink_C.BndEvt__LinkBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_CommunityMediaLink_C_BndEvt__LinkBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_CommunityMediaLink.WBP_CommunityMediaLink_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommunityMediaLink_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommunityMediaLink.WBP_CommunityMediaLink_C.PreConstruct");
		
		UWBP_CommunityMediaLink_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_CommunityMediaLink.WBP_CommunityMediaLink_C.ExecuteUbergraph_WBP_CommunityMediaLink
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommunityMediaLink_C::ExecuteUbergraph_WBP_CommunityMediaLink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommunityMediaLink.WBP_CommunityMediaLink_C.ExecuteUbergraph_WBP_CommunityMediaLink");
		
		UWBP_CommunityMediaLink_C_ExecuteUbergraph_WBP_CommunityMediaLink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CommunityMediaLink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CommunityMediaLink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CommunityMediaLink.WBP_CommunityMediaLink_C");
		return ptr;
	}

}


