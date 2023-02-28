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
	 * 		Name   -> Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.CombineBodyText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      BodyCombinedStr                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_CreditsListEntry_C::CombineBodyText(class FString* BodyCombinedStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.CombineBodyText");
		
		UWBP_CreditsListEntry_C_CombineBodyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BodyCombinedStr != nullptr)
			*BodyCombinedStr = params.BodyCombinedStr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreditsListEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.PreConstruct");
		
		UWBP_CreditsListEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.ExecuteUbergraph_WBP_CreditsListEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreditsListEntry_C::ExecuteUbergraph_WBP_CreditsListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.ExecuteUbergraph_WBP_CreditsListEntry");
		
		UWBP_CreditsListEntry_C_ExecuteUbergraph_WBP_CreditsListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CreditsListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CreditsListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CreditsListEntry.WBP_CreditsListEntry_C");
		return ptr;
	}

}


