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
	 * 		Name   -> Function WBP_ServerBadge.WBP_ServerBadge_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ServerBadge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerBadge.WBP_ServerBadge_C.PreConstruct");
		
		UWBP_ServerBadge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_ServerBadge.WBP_ServerBadge_C.ExecuteUbergraph_WBP_ServerBadge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerBadge_C::ExecuteUbergraph_WBP_ServerBadge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerBadge.WBP_ServerBadge_C.ExecuteUbergraph_WBP_ServerBadge");
		
		UWBP_ServerBadge_C_ExecuteUbergraph_WBP_ServerBadge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ServerBadge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ServerBadge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ServerBadge.WBP_ServerBadge_C");
		return ptr;
	}

}


