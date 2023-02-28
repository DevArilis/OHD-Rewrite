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
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceChaosDestruction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceChaosDestruction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction");
		return ptr;
	}

}


