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
	 * WidgetBlueprintGeneratedClass WBP_CreditsListEntry.WBP_CreditsListEntry_C
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class UWBP_CreditsListEntry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          EntryBodyText;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CreditsListHeader_C*                            EntryHeader;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFGameCreditsEntry                                  Header;                                                  // 0x0248(0x0030) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FMargin                                             HeaderPadding;                                           // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		TArray<struct FFGameCreditsEntry>                          BodyEntries;                                             // 0x0288(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void CombineBodyText(class FString* BodyCombinedStr);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_CreditsListEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
