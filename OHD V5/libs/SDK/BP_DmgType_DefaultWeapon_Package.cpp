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
	 * 		Name   -> PredefinedFunction UBP_DmgType_DefaultWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DmgType_DefaultWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DmgType_DefaultWeapon.BP_DmgType_DefaultWeapon_C");
		return ptr;
	}

}


