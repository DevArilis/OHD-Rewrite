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
	 * 		Name   -> Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.IsFilterEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ServerFilterRuleSetting_C::IsFilterEnabled(bool* bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.IsFilterEnabled");
		
		UBPI_ServerFilterRuleSetting_C_IsFilterEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bActive != nullptr)
			*bActive = params.bActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.GetFilterRulePair
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UClass*                                      Rule                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHDFilterRuleParams                         RuleParams                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ServerFilterRuleSetting_C::GetFilterRulePair(class UClass** Rule, struct FHDFilterRuleParams* RuleParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.GetFilterRulePair");
		
		UBPI_ServerFilterRuleSetting_C_GetFilterRulePair_Params params {};
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ServerFilterRuleSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ServerFilterRuleSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C");
		return ptr;
	}

}


