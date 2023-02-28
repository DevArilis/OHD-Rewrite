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
	 * 		Name   -> PredefinedFunction UCS_FiringCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_FiringCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_FiringCameraShake.CS_FiringCameraShake_C");
		return ptr;
	}

}


