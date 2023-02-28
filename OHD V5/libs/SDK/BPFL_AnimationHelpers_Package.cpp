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
	 * 		Name   -> Function BPFL_AnimationHelpers.BPFL_AnimationHelpers_C.RInterp To Smooth
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InterpSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_AnimationHelpers_C::STATIC_RInterpToSmooth(const struct FRotator& A, const struct FRotator& B, float DeltaTime, float InterpSpeed, class UObject* __WorldContext, struct FRotator* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AnimationHelpers.BPFL_AnimationHelpers_C.RInterp To Smooth");
		
		UBPFL_AnimationHelpers_C_RInterpToSmooth_Params params {};
		params.A = A;
		params.B = B;
		params.DeltaTime = DeltaTime;
		params.InterpSpeed = InterpSpeed;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function BPFL_AnimationHelpers.BPFL_AnimationHelpers_C.VInterp To Smooth
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InterpSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_AnimationHelpers_C::STATIC_VInterpToSmooth(const struct FVector& A, const struct FVector& B, float DeltaTime, float InterpSpeed, class UObject* __WorldContext, struct FVector* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AnimationHelpers.BPFL_AnimationHelpers_C.VInterp To Smooth");
		
		UBPFL_AnimationHelpers_C_VInterpToSmooth_Params params {};
		params.A = A;
		params.B = B;
		params.DeltaTime = DeltaTime;
		params.InterpSpeed = InterpSpeed;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_AnimationHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_AnimationHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_AnimationHelpers.BPFL_AnimationHelpers_C");
		return ptr;
	}

}


