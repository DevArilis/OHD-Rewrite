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
	 * 		Name   -> Function BPI_ServerFilterRules.BPI_ServerFilterRules_C.GetFilterRules
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bActiveOnly                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TMap<class UClass*, struct FHDFilterRuleParams>    FilterRules                                                (Parm, OutParm)
	 */
	void UBPI_ServerFilterRules_C::GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ServerFilterRules.BPI_ServerFilterRules_C.GetFilterRules");
		
		UBPI_ServerFilterRules_C_GetFilterRules_Params params {};
		params.bActiveOnly = bActiveOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterRules != nullptr)
			*FilterRules = params.FilterRules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ServerFilterRules_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ServerFilterRules_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ServerFilterRules.BPI_ServerFilterRules_C");
		return ptr;
	}

}


