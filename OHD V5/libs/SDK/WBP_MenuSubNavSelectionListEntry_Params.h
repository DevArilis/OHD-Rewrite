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
	 * Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.SetSubMenuIndex
	 */
	struct UWBP_MenuSubNavSelectionListEntry_C_SetSubMenuIndex_Params
	{
	public:
		int32_t                                                    Idx;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.PreConstruct
	 */
	struct UWBP_MenuSubNavSelectionListEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.OnItemSelectionChanged
	 */
	struct UWBP_MenuSubNavSelectionListEntry_C_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature
	 */
	struct UWBP_MenuSubNavSelectionListEntry_C_BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature_Params
	{
	public:
		class UWBP_CreateGameSelectionListEntry_C*                 Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry
	 */
	struct UWBP_MenuSubNavSelectionListEntry_C_ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ButtonClicked__DelegateSignature
	 */
	struct UWBP_MenuSubNavSelectionListEntry_C_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_MenuSubNavSelectionListEntry_C*                 ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
