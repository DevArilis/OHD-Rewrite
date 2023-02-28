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
	 * Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.IsEntitledToBadge
	 */
	struct UWBP_OptionMenu_Home_C_IsEntitledToBadge_Params
	{
	public:
		TArray<struct FFEntitlementDefinition>                     Entitlements;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bEntitled;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.GetMaxGridSize
	 */
	struct UWBP_OptionMenu_Home_C_GetMaxGridSize_Params
	{
	public:
		int32_t                                                    MaxSize;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.InsertMediaLink
	 */
	struct UWBP_OptionMenu_Home_C_InsertMediaLink_Params
	{
	public:
		struct FFCommunityMediaLinkUIDefinition                    LinkUIDef;                                               // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.InsertEntitlementBadge
	 */
	struct UWBP_OptionMenu_Home_C_InsertEntitlementBadge_Params
	{
	public:
		struct FFEntitlementBadgeUIDefinition                      EntitlementUIDef;                                        // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.PreConstruct
	 */
	struct UWBP_OptionMenu_Home_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.OnInitialized
	 */
	struct UWBP_OptionMenu_Home_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Home.WBP_OptionMenu_Home_C.ExecuteUbergraph_WBP_OptionMenu_Home
	 */
	struct UWBP_OptionMenu_Home_C_ExecuteUbergraph_WBP_OptionMenu_Home_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
