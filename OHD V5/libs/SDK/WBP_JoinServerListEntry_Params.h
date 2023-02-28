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
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.AddBadgeDefinitionToListIfFound
	 */
	struct UWBP_JoinServerListEntry_C_AddBadgeDefinitionToListIfFound_Params
	{
	public:
		class FName                                                TableRowName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FFServerBadgeUIDefinition>                   BadgeArr;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.CreateAndAddBadgeWidgetFromDefinition
	 */
	struct UWBP_JoinServerListEntry_C_CreateAndAddBadgeWidgetFromDefinition_Params
	{
	public:
		struct FFServerBadgeUIDefinition                           BadgeUIDef;                                              // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBadgeDefinitionFromTable
	 */
	struct UWBP_JoinServerListEntry_C_GetBadgeDefinitionFromTable_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bFound;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JW5R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFServerBadgeUIDefinition                           BadgeUIDef;                                              // 0x0018(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.HideAllBadges
	 */
	struct UWBP_JoinServerListEntry_C_HideAllBadges_Params
	{	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetBadgeVisibilityFromServerData
	 */
	struct UWBP_JoinServerListEntry_C_SetBadgeVisibilityFromServerData_Params
	{	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.PopulateBadges
	 */
	struct UWBP_JoinServerListEntry_C_PopulateBadges_Params
	{
	public:
		TArray<struct FFServerBadgeUIDefinition>                   BadgeDefs;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBrushWithItemDimensions
	 */
	struct UWBP_JoinServerListEntry_C_GetBrushWithItemDimensions_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSlateBrush                                         OutBrush;                                                // 0x0088(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetBrushWithImageTexture
	 */
	struct UWBP_JoinServerListEntry_C_GetBrushWithImageTexture_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTexture2D*                                          Image;                                                   // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         UpdatedBrush;                                            // 0x0090(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.InternalRefreshDimensions
	 */
	struct UWBP_JoinServerListEntry_C_InternalRefreshDimensions_Params
	{	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemMinHeight
	 */
	struct UWBP_JoinServerListEntry_C_GetItemMinHeight_Params
	{
	public:
		int32_t                                                    MinHeight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemMinWidth
	 */
	struct UWBP_JoinServerListEntry_C_GetItemMinWidth_Params
	{
	public:
		int32_t                                                    MinWidth;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemMinDimensions
	 */
	struct UWBP_JoinServerListEntry_C_SetItemMinDimensions_Params
	{
	public:
		int32_t                                                    InMinWidth;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMinHeight;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemStyle
	 */
	struct UWBP_JoinServerListEntry_C_GetItemStyle_Params
	{
	public:
		struct FCheckBoxStyle                                      ItemStyle;                                               // 0x0000(0x0580)  (Parm, OutParm)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemImage
	 */
	struct UWBP_JoinServerListEntry_C_SetItemImage_Params
	{
	public:
		class UTexture2D*                                          InItemImg;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemStyle
	 */
	struct UWBP_JoinServerListEntry_C_SetItemStyle_Params
	{
	public:
		struct FCheckBoxStyle                                      InItemStyle;                                             // 0x0000(0x0580)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.InternalUpdateItemBgTintColor
	 */
	struct UWBP_JoinServerListEntry_C_InternalUpdateItemBgTintColor_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.IsItemSelected
	 */
	struct UWBP_JoinServerListEntry_C_IsItemSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.GetItemSelectionState
	 */
	struct UWBP_JoinServerListEntry_C_GetItemSelectionState_Params
	{
	public:
		ECheckBoxState                                             SelectionState;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemIsSelected
	 */
	struct UWBP_JoinServerListEntry_C_SetItemIsSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.SetItemSelectionState
	 */
	struct UWBP_JoinServerListEntry_C_SetItemSelectionState_Params
	{
	public:
		ECheckBoxState                                             InSelectionState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.PreConstruct
	 */
	struct UWBP_JoinServerListEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_JoinServerListEntry_C_BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnItemSelectionChanged
	 */
	struct UWBP_JoinServerListEntry_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.On Selection State Changed
	 */
	struct UWBP_JoinServerListEntry_C_OnSelectionStateChanged_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnListItemObjectSet
	 */
	struct UWBP_JoinServerListEntry_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnServerItemDataSet
	 */
	struct UWBP_JoinServerListEntry_C_OnServerItemDataSet_Params
	{
	public:
		bool                                                       bIsDesignTime;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnEntryReleased
	 */
	struct UWBP_JoinServerListEntry_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.BP_OnItemExpansionChanged
	 */
	struct UWBP_JoinServerListEntry_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.ExecuteUbergraph_WBP_JoinServerListEntry
	 */
	struct UWBP_JoinServerListEntry_C_ExecuteUbergraph_WBP_JoinServerListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListEntry.WBP_JoinServerListEntry_C.OnSelectionStateChanged__DelegateSignature
	 */
	struct UWBP_JoinServerListEntry_C_OnSelectionStateChanged__DelegateSignature_Params
	{
	public:
		class UWBP_JoinServerListEntry_C*                          Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
