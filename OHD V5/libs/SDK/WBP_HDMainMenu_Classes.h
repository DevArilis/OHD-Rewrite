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
	 * WidgetBlueprintGeneratedClass WBP_HDMainMenu.WBP_HDMainMenu_C
	 * Size -> 0x000C (FullSize[0x03F8] - InheritedSize[0x03EC])
	 */
	class UWBP_HDMainMenu_C : public UWBP_MainMenu_C
	{
	public:
		unsigned char                                              UnknownData_8ZE2[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_HDMainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
