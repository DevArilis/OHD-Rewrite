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
	 * Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.GetFilterRules
	 */
	struct UWBP_JoinServerFiltersPanel_C_GetFilterRules_Params
	{
	public:
		bool                                                       bActiveOnly;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7AM1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class UClass*, struct FHDFilterRuleParams>            FilterRules;                                             // 0x0008(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnInitialized
	 */
	struct UWBP_JoinServerFiltersPanel_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.FilterSettingsChanged
	 */
	struct UWBP_JoinServerFiltersPanel_C_FilterSettingsChanged_Params
	{
	public:
		TMap<class UClass*, struct FHDFilterRuleParams>            ActiveFilters;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.ExecuteUbergraph_WBP_JoinServerFiltersPanel
	 */
	struct UWBP_JoinServerFiltersPanel_C_ExecuteUbergraph_WBP_JoinServerFiltersPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CWA4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnServerFiltersChanged__DelegateSignature
	 */
	struct UWBP_JoinServerFiltersPanel_C_OnServerFiltersChanged__DelegateSignature_Params
	{
	public:
		TMap<class UClass*, struct FHDFilterRuleParams>            ActiveFilters;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
