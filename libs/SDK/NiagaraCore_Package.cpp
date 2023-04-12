﻿/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.25.4
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
	 * 		Name   -> PredefinedFunction UNiagaraMergeable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraMergeable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		return ptr;
	}

}

