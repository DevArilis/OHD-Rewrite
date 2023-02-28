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
	 * 		Name   -> Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.IsEntitledToBadge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FFEntitlementDefinition>             Entitlements                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               bEntitled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Home_C::IsEntitledToBadge(TArray<struct FFEntitlementDefinition>* Entitlements, bool* bEntitled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.IsEntitledToBadge");
		
		UWBP_OptionMenu_Home_C_IsEntitledToBadge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entitlements != nullptr)
			*Entitlements = params.Entitlements;
		if (bEntitled != nullptr)
			*bEntitled = params.bEntitled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.GetMaxGridSize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MaxSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Home_C::GetMaxGridSize(int32_t* MaxSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.GetMaxGridSize");
		
		UWBP_OptionMenu_Home_C_GetMaxGridSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxSize != nullptr)
			*MaxSize = params.MaxSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.InsertMediaLink
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFCommunityMediaLinkUIDefinition            LinkUIDef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Home_C::InsertMediaLink(struct FFCommunityMediaLinkUIDefinition* LinkUIDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.InsertMediaLink");
		
		UWBP_OptionMenu_Home_C_InsertMediaLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkUIDef != nullptr)
			*LinkUIDef = params.LinkUIDef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.InsertEntitlementBadge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFEntitlementBadgeUIDefinition              EntitlementUIDef                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Home_C::InsertEntitlementBadge(struct FFEntitlementBadgeUIDefinition* EntitlementUIDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.InsertEntitlementBadge");
		
		UWBP_OptionMenu_Home_C_InsertEntitlementBadge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntitlementUIDef != nullptr)
			*EntitlementUIDef = params.EntitlementUIDef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Home_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.PreConstruct");
		
		UWBP_OptionMenu_Home_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Home_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.OnInitialized");
		
		UWBP_OptionMenu_Home_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.ExecuteUbergraph_WBP_OptionMenu_Home
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Home_C::ExecuteUbergraph_WBP_OptionMenu_Home(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.ExecuteUbergraph_WBP_OptionMenu_Home");
		
		UWBP_OptionMenu_Home_C_ExecuteUbergraph_WBP_OptionMenu_Home_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionMenu_Home_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionMenu_Home_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionMenu_Home.WBP_OptionMenu_Home_C");
		return ptr;
	}

}


