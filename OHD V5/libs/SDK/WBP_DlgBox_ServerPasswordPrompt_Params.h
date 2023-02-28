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
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnPreviewKeyDown
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnMouseButtonDown
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.Construct
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_Construct_Params
	{	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.DummyInput
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_DummyInput_Params
	{	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ConfirmInput
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_ConfirmInput_Params
	{	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.CancelInput
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_CancelInput_Params
	{	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnRemovedFromFocusPath
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnCancelInput__DelegateSignature
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_OnCancelInput__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnConfirmInput__DelegateSignature
	 */
	struct UWBP_DlgBox_ServerPasswordPrompt_C_OnConfirmInput__DelegateSignature_Params
	{
	public:
		class FText                                                InputText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
