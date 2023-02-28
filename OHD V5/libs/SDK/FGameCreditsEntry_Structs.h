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
	 * UserDefinedStruct FGameCreditsEntry.FGameCreditsEntry
	 * Size -> 0x002C
	 */
	struct FFGameCreditsEntry
	{
	public:
		EGameCreditsEntryType                                      EntryType_6_793CFEE04DA4AF9360FD6A8A9B1C6812;            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YGZQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text_5_DFA977D64EC46726AC35AE9CDF6FB11A;                 // 0x0008(0x0018) Edit, BlueprintVisible
		class FName                                                HeaderRowName_9_808E074444E26274A7D579AC4B409585;        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeaderDividerWidth_13_DE3954594351434E75DE5D882ACEC8C0;  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
