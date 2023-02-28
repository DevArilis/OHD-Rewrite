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
	 * 		Name   -> Function WBP_OptionMenu_HDCredits.WBP_OptionMenu_HDCredits_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_HDCredits_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_HDCredits.WBP_OptionMenu_HDCredits_C.Tick");
		
		UWBP_OptionMenu_HDCredits_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_HDCredits.WBP_OptionMenu_HDCredits_C.ExecuteUbergraph_WBP_OptionMenu_HDCredits
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_HDCredits_C::ExecuteUbergraph_WBP_OptionMenu_HDCredits(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_HDCredits.WBP_OptionMenu_HDCredits_C.ExecuteUbergraph_WBP_OptionMenu_HDCredits");
		
		UWBP_OptionMenu_HDCredits_C_ExecuteUbergraph_WBP_OptionMenu_HDCredits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionMenu_HDCredits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionMenu_HDCredits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionMenu_HDCredits.WBP_OptionMenu_HDCredits_C");
		return ptr;
	}

}


