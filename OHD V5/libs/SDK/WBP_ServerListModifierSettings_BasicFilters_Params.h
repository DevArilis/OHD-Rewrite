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
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetFilterRules
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_GetFilterRules_Params
	{
	public:
		bool                                                       bActiveOnly;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6QU6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class UClass*, struct FHDFilterRuleParams>            FilterRules;                                             // 0x0008(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetSelectedServerSortPreference
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_GetSelectedServerSortPreference_Params
	{
	public:
		struct FFServerSortPreference                              SortPreference;                                          // 0x0000(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnInitialized
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.FilterSettingChanged
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_FilterSettingChanged_Params
	{
	public:
		class UClass*                                              Rule;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHDFilterRuleParams                                 RuleParams;                                              // 0x0008(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FF3K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnFilterSettingsChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_OnFilterSettingsChanged__DelegateSignature_Params
	{
	public:
		TMap<class UClass*, struct FHDFilterRuleParams>            ActiveFilters;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnSortPreferenceChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSettings_BasicFilters_C_OnSortPreferenceChanged__DelegateSignature_Params
	{
	public:
		struct FFServerSortPreference                              SortPreference;                                          // 0x0000(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
