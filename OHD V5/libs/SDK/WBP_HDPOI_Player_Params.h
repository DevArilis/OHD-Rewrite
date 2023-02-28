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
	 * Function WBP_HDPOI_Player.WBP_HDPOI_Player_C.ReceivePOISelected
	 */
	struct UWBP_HDPOI_Player_C_ReceivePOISelected_Params
	{	};

	/**
	 * Function WBP_HDPOI_Player.WBP_HDPOI_Player_C.ReceivePOIDeselected
	 */
	struct UWBP_HDPOI_Player_C_ReceivePOIDeselected_Params
	{	};

	/**
	 * Function WBP_HDPOI_Player.WBP_HDPOI_Player_C.PreConstruct
	 */
	struct UWBP_HDPOI_Player_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDPOI_Player.WBP_HDPOI_Player_C.Construct
	 */
	struct UWBP_HDPOI_Player_C_Construct_Params
	{	};

	/**
	 * Function WBP_HDPOI_Player.WBP_HDPOI_Player_C.SetIconBrush
	 */
	struct UWBP_HDPOI_Player_C_SetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         NewIconBrush;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_HDPOI_Player.WBP_HDPOI_Player_C.Tick
	 */
	struct UWBP_HDPOI_Player_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_Player.WBP_HDPOI_Player_C.ExecuteUbergraph_WBP_HDPOI_Player
	 */
	struct UWBP_HDPOI_Player_C_ExecuteUbergraph_WBP_HDPOI_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
