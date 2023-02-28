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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_ServerFilterRuleSetting_C : public UInterface
	{
	public:
		void IsFilterEnabled(bool* bActive);
		void GetFilterRulePair(class UClass** Rule, struct FHDFilterRuleParams* RuleParams);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
