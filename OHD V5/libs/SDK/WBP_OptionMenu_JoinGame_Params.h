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
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.HasSubMenus
	 */
	struct UWBP_OptionMenu_JoinGame_C_HasSubMenus_Params
	{
	public:
		bool                                                       bSubMenuOptions;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSubMenuOptions
	 */
	struct UWBP_OptionMenu_JoinGame_C_GetSubMenuOptions_Params
	{
	public:
		TArray<struct FFSubMenuOption>                             SubOptions;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredHorizontalAlignment
	 */
	struct UWBP_OptionMenu_JoinGame_C_GetDesiredHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       Alignment;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredVerticalAlignment
	 */
	struct UWBP_OptionMenu_JoinGame_C_GetDesiredVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         Alignment;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OpenPasswordPrompt
	 */
	struct UWBP_OptionMenu_JoinGame_C_OpenPasswordPrompt_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ApplyActiveServerFilters
	 */
	struct UWBP_OptionMenu_JoinGame_C_ApplyActiveServerFilters_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.RefreshServerList
	 */
	struct UWBP_OptionMenu_JoinGame_C_RefreshServerList_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ToggleServerDetails
	 */
	struct UWBP_OptionMenu_JoinGame_C_ToggleServerDetails_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetServerListSortPreference
	 */
	struct UWBP_OptionMenu_JoinGame_C_GetServerListSortPreference_Params
	{
	public:
		struct FFServerSortPreference                              SortPreference;                                          // 0x0000(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.IsValidServerListItemIndex
	 */
	struct UWBP_OptionMenu_JoinGame_C_IsValidServerListItemIndex_Params
	{
	public:
		int32_t                                                    IndexToTest;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bValidIndex;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSelectedServerListItem
	 */
	struct UWBP_OptionMenu_JoinGame_C_GetSelectedServerListItem_Params
	{
	public:
		class UHDServerListItemData*                               ServerItem;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ClearServerListItemSelection
	 */
	struct UWBP_OptionMenu_JoinGame_C_ClearServerListItemSelection_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionCleared
	 */
	struct UWBP_OptionMenu_JoinGame_C_ServerListItemSelectionCleared_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionUpdated
	 */
	struct UWBP_OptionMenu_JoinGame_C_ServerListItemSelectionUpdated_Params
	{
	public:
		class UHDServerListItemData*                               InSelectedServerListItem;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SetActiveSubMenuByIndex
	 */
	struct UWBP_OptionMenu_JoinGame_C_SetActiveSubMenuByIndex_Params
	{
	public:
		int32_t                                                    SubMenuIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshStart
	 */
	struct UWBP_OptionMenu_JoinGame_C_ReceiveOnRefreshStart_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshComplete
	 */
	struct UWBP_OptionMenu_JoinGame_C_ReceiveOnRefreshComplete_Params
	{
	public:
		bool                                                       bSortAscending;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHDServerListSortBy                                        SortBy;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_OptionMenu_JoinGame_C_BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_JoinGame_C_BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OnInitialized
	 */
	struct UWBP_OptionMenu_JoinGame_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.PreConstruct
	 */
	struct UWBP_OptionMenu_JoinGame_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_JoinGame_C_BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature_Params
	{
	public:
		TMap<class UClass*, struct FHDFilterRuleParams>            ActiveFilters;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SortPreferenceChanged
	 */
	struct UWBP_OptionMenu_JoinGame_C_SortPreferenceChanged_Params
	{
	public:
		struct FFServerSortPreference                              SortPreference;                                          // 0x0000(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ConfirmServerPasswordInput
	 */
	struct UWBP_OptionMenu_JoinGame_C_ConfirmServerPasswordInput_Params
	{
	public:
		class FText                                                InputText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ExecuteUbergraph_WBP_OptionMenu_JoinGame
	 */
	struct UWBP_OptionMenu_JoinGame_C_ExecuteUbergraph_WBP_OptionMenu_JoinGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PG8A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
