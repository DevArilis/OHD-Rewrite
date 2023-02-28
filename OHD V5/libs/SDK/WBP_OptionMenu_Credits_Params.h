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
	 * Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.GetCreditEntriesForHeader
	 */
	struct UWBP_OptionMenu_Credits_C_GetCreditEntriesForHeader_Params
	{
	public:
		class FName                                                HeaderRowName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FFGameCreditsEntry>                          CreditEntries;                                           // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.PreConstruct
	 */
	struct UWBP_OptionMenu_Credits_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.Tick
	 */
	struct UWBP_OptionMenu_Credits_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C.ExecuteUbergraph_WBP_OptionMenu_Credits
	 */
	struct UWBP_OptionMenu_Credits_C_ExecuteUbergraph_WBP_OptionMenu_Credits_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
