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
	 * UserDefinedStruct FServerBadgeUIDefinition.FServerBadgeUIDefinition
	 * Size -> 0x0094
	 */
	struct FFServerBadgeUIDefinition
	{
	public:
		EServerBadgeType                                           Type_11_EDB490C54973A52E253141B62C748510;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JGT7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Icon_3_FCCFEB524CD1FF61B4B6B8AB1739316E;                 // 0x0008(0x0088) Edit, BlueprintVisible
		int32_t                                                    OrderingIdx_8_900B3535409A63FA032C5D866D3A48AF;          // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
