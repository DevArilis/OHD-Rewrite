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
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.IsFilterEnabled
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.GetFilterRulePair
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair_Params
	{
	public:
		class UClass*                                              Rule;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHDFilterRuleParams                                 RuleParams;                                              // 0x0008(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.GetCheckedRuleParams
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams_Params
	{
	public:
		struct FHDFilterRuleParams                                 Params;                                                  // 0x0000(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.SetCheckedRuleParams
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams_Params
	{
	public:
		struct FHDFilterRuleParams                                 NewParams;                                               // 0x0000(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.PreConstruct
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.OnInitialized
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.OnBoolSettingChanged__DelegateSignature
	 */
	struct UWBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              Rule;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHDFilterRuleParams                                 RuleParams;                                              // 0x0008(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
