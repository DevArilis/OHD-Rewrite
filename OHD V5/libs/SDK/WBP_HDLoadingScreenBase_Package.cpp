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
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapBgImage
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDLoadingScreenBase_C::SetMapBgImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapBgImage");
		
		UWBP_HDLoadingScreenBase_C_SetMapBgImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetOpforStartingTicketCount
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TicketCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDLoadingScreenBase_C::SetOpforStartingTicketCount(int32_t TicketCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetOpforStartingTicketCount");
		
		UWBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount_Params params {};
		params.TicketCount = TicketCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetBluforStartingTicketCount
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TicketCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDLoadingScreenBase_C::SetBluforStartingTicketCount(int32_t TicketCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetBluforStartingTicketCount");
		
		UWBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount_Params params {};
		params.TicketCount = TicketCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapElementVisibility
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDLoadingScreenBase_C::SetMapElementVisibility(ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapElementVisibility");
		
		UWBP_HDLoadingScreenBase_C_SetMapElementVisibility_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLoadingScreenDescription
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLoadingScreenDescription                   Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_HDLoadingScreenBase_C::SetLoadingScreenDescription(const struct FLoadingScreenDescription& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLoadingScreenDescription");
		
		UWBP_HDLoadingScreenBase_C_SetLoadingScreenDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLevelLoadData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLoadScreenLevelData                        LevelData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_HDLoadingScreenBase_C::SetLevelLoadData(const struct FLoadScreenLevelData& LevelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLevelLoadData");
		
		UWBP_HDLoadingScreenBase_C_SetLevelLoadData_Params params {};
		params.LevelData = LevelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HDLoadingScreenBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.PreConstruct");
		
		UWBP_HDLoadingScreenBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HDLoadingScreenBase_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.OnInitialized");
		
		UWBP_HDLoadingScreenBase_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.ExecuteUbergraph_WBP_HDLoadingScreenBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDLoadingScreenBase_C::ExecuteUbergraph_WBP_HDLoadingScreenBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.ExecuteUbergraph_WBP_HDLoadingScreenBase");
		
		UWBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HDLoadingScreenBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDLoadingScreenBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C");
		return ptr;
	}

}


