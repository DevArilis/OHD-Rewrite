#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.SetMapPreviewImage
	 */
	struct UWBP_JoinServerDetailsPanel_C_SetMapPreviewImage_Params
	{
	public:
		class UTexture2D*                                          NewImg;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.HideServerDetails
	 */
	struct UWBP_JoinServerDetailsPanel_C_HideServerDetails_Params
	{	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.ShowServerDetails
	 */
	struct UWBP_JoinServerDetailsPanel_C_ShowServerDetails_Params
	{	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.UpdateServerMetaData
	 */
	struct UWBP_JoinServerDetailsPanel_C_UpdateServerMetaData_Params
	{
	public:
		struct FHDServerInfo                                       ServerData;                                              // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.UpdateServerData
	 */
	struct UWBP_JoinServerDetailsPanel_C_UpdateServerData_Params
	{
	public:
		struct FHDServerInfo                                       ServerData;                                              // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.SetupServerDetails
	 */
	struct UWBP_JoinServerDetailsPanel_C_SetupServerDetails_Params
	{
	public:
		struct FHDServerInfo                                       ServerInfo;                                              // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_JoinServerDetailsPanel_C_BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.OnInitialized
	 */
	struct UWBP_JoinServerDetailsPanel_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.PreConstruct
	 */
	struct UWBP_JoinServerDetailsPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.ExecuteUbergraph_WBP_JoinServerDetailsPanel
	 */
	struct UWBP_JoinServerDetailsPanel_C_ExecuteUbergraph_WBP_JoinServerDetailsPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C.OnJoinServerBtnClicked__DelegateSignature
	 */
	struct UWBP_JoinServerDetailsPanel_C_OnJoinServerBtnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
