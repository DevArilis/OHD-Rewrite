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
	 * 		Name   -> Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.SetCreditsEntry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGameCreditsEntry                          Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FMargin                                     HeaderPadding                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreditsListHeader_C::SetCreditsEntry(struct FFGameCreditsEntry* Entry, const struct FMargin& HeaderPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.SetCreditsEntry");
		
		UWBP_CreditsListHeader_C_SetCreditsEntry_Params params {};
		params.HeaderPadding = HeaderPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entry != nullptr)
			*Entry = params.Entry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreditsListHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.PreConstruct");
		
		UWBP_CreditsListHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.ExecuteUbergraph_WBP_CreditsListHeader
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreditsListHeader_C::ExecuteUbergraph_WBP_CreditsListHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.ExecuteUbergraph_WBP_CreditsListHeader");
		
		UWBP_CreditsListHeader_C_ExecuteUbergraph_WBP_CreditsListHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CreditsListHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CreditsListHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CreditsListHeader.WBP_CreditsListHeader_C");
		return ptr;
	}

}


