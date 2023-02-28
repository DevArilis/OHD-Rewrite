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
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.GetSettingLabel
	 */
	struct UWBP_ModifierSetting_EditableText_C_GetSettingLabel_Params
	{
	public:
		class FText                                                SettingText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.SetSettingLabel
	 */
	struct UWBP_ModifierSetting_EditableText_C_SetSettingLabel_Params
	{
	public:
		class FText                                                InSettingText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.PreConstruct
	 */
	struct UWBP_ModifierSetting_EditableText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnInitialized
	 */
	struct UWBP_ModifierSetting_EditableText_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UWBP_ModifierSetting_EditableText_C_BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWBP_ModifierSetting_EditableText_C_BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.ExecuteUbergraph_WBP_ModifierSetting_EditableText
	 */
	struct UWBP_ModifierSetting_EditableText_C_ExecuteUbergraph_WBP_ModifierSetting_EditableText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnTextCommitted__DelegateSignature
	 */
	struct UWBP_ModifierSetting_EditableText_C_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C.OnTextChanged__DelegateSignature
	 */
	struct UWBP_ModifierSetting_EditableText_C_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
