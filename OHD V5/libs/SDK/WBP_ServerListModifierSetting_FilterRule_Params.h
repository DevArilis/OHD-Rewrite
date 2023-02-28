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
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.IsFilterEnabled
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_IsFilterEnabled_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.GetFilterRulePair
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_GetFilterRulePair_Params
	{
	public:
		class UClass*                                              Rule;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHDFilterRuleParams                                 RuleParams;                                              // 0x0008(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.GetRuleParams
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_GetRuleParams_Params
	{
	public:
		struct FHDFilterRuleParams                                 Params;                                                  // 0x0000(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.SetRuleParams
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_SetRuleParams_Params
	{
	public:
		struct FHDFilterRuleParams                                 NewParams;                                               // 0x0000(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_54G1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.PreConstruct
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C.OnDropdownSettingChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_C_OnDropdownSettingChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              Rule;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHDFilterRuleParams                                 RuleParams;                                              // 0x0008(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
