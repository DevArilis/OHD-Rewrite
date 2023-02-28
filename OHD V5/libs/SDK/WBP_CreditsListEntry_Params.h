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
	 * Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.CombineBodyText
	 */
	struct UWBP_CreditsListEntry_C_CombineBodyText_Params
	{
	public:
		class FString                                              BodyCombinedStr;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.PreConstruct
	 */
	struct UWBP_CreditsListEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreditsListEntry.WBP_CreditsListEntry_C.ExecuteUbergraph_WBP_CreditsListEntry
	 */
	struct UWBP_CreditsListEntry_C_ExecuteUbergraph_WBP_CreditsListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
