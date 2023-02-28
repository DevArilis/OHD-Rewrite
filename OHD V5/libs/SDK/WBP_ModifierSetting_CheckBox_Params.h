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
	 * Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.GetSettingText
	 */
	struct UWBP_ModifierSetting_CheckBox_C_GetSettingText_Params
	{
	public:
		class FText                                                SettingText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.SetSettingText
	 */
	struct UWBP_ModifierSetting_CheckBox_C_SetSettingText_Params
	{
	public:
		class FText                                                InSettingText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.PreConstruct
	 */
	struct UWBP_ModifierSetting_CheckBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_ModifierSetting_CheckBox_C_BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.OnInitialized
	 */
	struct UWBP_ModifierSetting_CheckBox_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.ExecuteUbergraph_WBP_ModifierSetting_CheckBox
	 */
	struct UWBP_ModifierSetting_CheckBox_C_ExecuteUbergraph_WBP_ModifierSetting_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LLVD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.OnCheckStateChanged__DelegateSignature
	 */
	struct UWBP_ModifierSetting_CheckBox_C_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
