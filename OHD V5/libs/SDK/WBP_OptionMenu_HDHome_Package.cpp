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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionMenu_HDHome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionMenu_HDHome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionMenu_HDHome.WBP_OptionMenu_HDHome_C");
		return ptr;
	}

}


