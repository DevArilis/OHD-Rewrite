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
	 * 		Name   -> Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.GetCreditEntriesForHeader
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        HeaderRowName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFGameCreditsEntry>                  CreditEntries                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Credits_C::GetCreditEntriesForHeader(const class FName& HeaderRowName, TArray<struct FFGameCreditsEntry>* CreditEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.GetCreditEntriesForHeader");
		
		UWBP_OptionMenu_Credits_C_GetCreditEntriesForHeader_Params params {};
		params.HeaderRowName = HeaderRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreditEntries != nullptr)
			*CreditEntries = params.CreditEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Credits_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.PreConstruct");
		
		UWBP_OptionMenu_Credits_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Credits_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.Tick");
		
		UWBP_OptionMenu_Credits_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.ExecuteUbergraph_WBP_OptionMenu_Credits
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Credits_C::ExecuteUbergraph_WBP_OptionMenu_Credits(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.ExecuteUbergraph_WBP_OptionMenu_Credits");
		
		UWBP_OptionMenu_Credits_C_ExecuteUbergraph_WBP_OptionMenu_Credits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionMenu_Credits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionMenu_Credits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C");
		return ptr;
	}

}


