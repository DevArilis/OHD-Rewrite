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
	 * WidgetBlueprintGeneratedClass WBP_OptionMenu_HDCredits.WBP_OptionMenu_HDCredits_C
	 * Size -> 0x000C (FullSize[0x0270] - InheritedSize[0x0264])
	 */
	class UWBP_OptionMenu_HDCredits_C : public UWBP_OptionMenu_Credits_C
	{
	public:
		unsigned char                                              UnknownData_N6DC[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_WBP_OptionMenu_HDCredits(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
