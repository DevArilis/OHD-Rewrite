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
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapBgImage
	 */
	struct UWBP_HDLoadingScreenBase_C_SetMapBgImage_Params
	{
	public:
		unsigned char                                              UnknownData_SIRD[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetOpforStartingTicketCount
	 */
	struct UWBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount_Params
	{
	public:
		int32_t                                                    TicketCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2OEZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetBluforStartingTicketCount
	 */
	struct UWBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount_Params
	{
	public:
		int32_t                                                    TicketCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_22MJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapElementVisibility
	 */
	struct UWBP_HDLoadingScreenBase_C_SetMapElementVisibility_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLoadingScreenDescription
	 */
	struct UWBP_HDLoadingScreenBase_C_SetLoadingScreenDescription_Params
	{
	public:
		struct FLoadingScreenDescription                           Description;                                             // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLevelLoadData
	 */
	struct UWBP_HDLoadingScreenBase_C_SetLevelLoadData_Params
	{
	public:
		struct FLoadScreenLevelData                                LevelData;                                               // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.PreConstruct
	 */
	struct UWBP_HDLoadingScreenBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.OnInitialized
	 */
	struct UWBP_HDLoadingScreenBase_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.ExecuteUbergraph_WBP_HDLoadingScreenBase
	 */
	struct UWBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NN0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
