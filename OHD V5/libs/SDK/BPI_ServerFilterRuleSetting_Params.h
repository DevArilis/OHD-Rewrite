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
	 * Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.IsFilterEnabled
	 */
	struct UBPI_ServerFilterRuleSetting_C_IsFilterEnabled_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.GetFilterRulePair
	 */
	struct UBPI_ServerFilterRuleSetting_C_GetFilterRulePair_Params
	{
	public:
		class UClass*                                              Rule;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHDFilterRuleParams                                 RuleParams;                                              // 0x0008(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
