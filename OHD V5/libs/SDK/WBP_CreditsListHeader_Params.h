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
	 * Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.SetCreditsEntry
	 */
	struct UWBP_CreditsListHeader_C_SetCreditsEntry_Params
	{
	public:
		struct FFGameCreditsEntry                                  Entry;                                                   // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FMargin                                             HeaderPadding;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.PreConstruct
	 */
	struct UWBP_CreditsListHeader_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreditsListHeader.WBP_CreditsListHeader_C.ExecuteUbergraph_WBP_CreditsListHeader
	 */
	struct UWBP_CreditsListHeader_C_ExecuteUbergraph_WBP_CreditsListHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
