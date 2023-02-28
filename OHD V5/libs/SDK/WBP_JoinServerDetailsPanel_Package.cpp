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
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.SetMapPreviewImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  NewImg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerDetailsPanel_C::SetMapPreviewImage(class UTexture2D* NewImg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.SetMapPreviewImage");
		
		UWBP_JoinServerDetailsPanel_C_SetMapPreviewImage_Params params {};
		params.NewImg = NewImg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.HideServerDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_JoinServerDetailsPanel_C::HideServerDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.HideServerDetails");
		
		UWBP_JoinServerDetailsPanel_C_HideServerDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.ShowServerDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_JoinServerDetailsPanel_C::ShowServerDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.ShowServerDetails");
		
		UWBP_JoinServerDetailsPanel_C_ShowServerDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.UpdateServerMetaData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDServerInfo                               ServerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_JoinServerDetailsPanel_C::UpdateServerMetaData(struct FHDServerInfo* ServerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.UpdateServerMetaData");
		
		UWBP_JoinServerDetailsPanel_C_UpdateServerMetaData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServerData != nullptr)
			*ServerData = params.ServerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.UpdateServerData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDServerInfo                               ServerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_JoinServerDetailsPanel_C::UpdateServerData(struct FHDServerInfo* ServerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.UpdateServerData");
		
		UWBP_JoinServerDetailsPanel_C_UpdateServerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServerData != nullptr)
			*ServerData = params.ServerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.SetupServerDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDServerInfo                               ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_JoinServerDetailsPanel_C::SetupServerDetails(const struct FHDServerInfo& ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.SetupServerDetails");
		
		UWBP_JoinServerDetailsPanel_C_SetupServerDetails_Params params {};
		params.ServerInfo = ServerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_JoinServerDetailsPanel_C::BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_JoinServerDetailsPanel_C_BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_JoinServerDetailsPanel_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.OnInitialized");
		
		UWBP_JoinServerDetailsPanel_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_JoinServerDetailsPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.PreConstruct");
		
		UWBP_JoinServerDetailsPanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.ExecuteUbergraph_WBP_JoinServerDetailsPanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_JoinServerDetailsPanel_C::ExecuteUbergraph_WBP_JoinServerDetailsPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.ExecuteUbergraph_WBP_JoinServerDetailsPanel");
		
		UWBP_JoinServerDetailsPanel_C_ExecuteUbergraph_WBP_JoinServerDetailsPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.OnJoinServerBtnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_JoinServerDetailsPanel_C::OnJoinServerBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.OnJoinServerBtnClicked__DelegateSignature");
		
		UWBP_JoinServerDetailsPanel_C_OnJoinServerBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_JoinServerDetailsPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_JoinServerDetailsPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C");
		return ptr;
	}

}


