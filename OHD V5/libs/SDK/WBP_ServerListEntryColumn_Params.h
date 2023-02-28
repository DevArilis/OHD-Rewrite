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
	 * Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.SetItemSubText
	 */
	struct UWBP_ServerListEntryColumn_C_SetItemSubText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.SetItemText
	 */
	struct UWBP_ServerListEntryColumn_C_SetItemText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.PreConstruct
	 */
	struct UWBP_ServerListEntryColumn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.ExecuteUbergraph_WBP_ServerListEntryColumn
	 */
	struct UWBP_ServerListEntryColumn_C_ExecuteUbergraph_WBP_ServerListEntryColumn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
