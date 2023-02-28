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
	 * 		Name   -> Function BPI_RadialSlot.BPI_RadialSlot_C.OnUnhighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_RadialSlot_C::OnUnhighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_RadialSlot.BPI_RadialSlot_C.OnUnhighlight");
		
		UBPI_RadialSlot_C_OnUnhighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BPI_RadialSlot.BPI_RadialSlot_C.OnHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_RadialSlot_C::OnHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_RadialSlot.BPI_RadialSlot_C.OnHighlight");
		
		UBPI_RadialSlot_C_OnHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_RadialSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_RadialSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RadialSlot.BPI_RadialSlot_C");
		return ptr;
	}

}


