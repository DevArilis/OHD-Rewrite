#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.25.4
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
	 * Function BPI_ServerFilterRules.BPI_ServerFilterRules_C.GetFilterRules
	 */
	struct UBPI_ServerFilterRules_C_GetFilterRules_Params
	{
	public:
		bool                                                       bActiveOnly;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4REM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class UClass*, struct FHDFilterRuleParams>            FilterRules;                                             // 0x0008(0x0050)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
