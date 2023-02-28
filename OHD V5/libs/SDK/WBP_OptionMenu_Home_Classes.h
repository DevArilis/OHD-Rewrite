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
	 * WidgetBlueprintGeneratedClass WBP_OptionMenu_Home.WBP_OptionMenu_Home_C
	 * Size -> 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
	 */
	class UWBP_OptionMenu_Home_C : public UDFBaseMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   EntitlementBadgeGrid;                                    // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MediaLinkVBox;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          EntitlementBadgeDefinitionSource;                        // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UDataTable*                                          MediaLinkDefinitionSource;                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    BadgeMaxRows;                                            // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    BadgeMaxColumns;                                         // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FMargin                                             BadgeSlotPadding;                                        // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      BadgeMinDesiredSlotWidth;                                // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      BadgeMinDesiredSlotHeight;                               // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void IsEntitledToBadge(TArray<struct FFEntitlementDefinition>* Entitlements, bool* bEntitled);
		void GetMaxGridSize(int32_t* MaxSize);
		void InsertMediaLink(struct FFCommunityMediaLinkUIDefinition* LinkUIDef);
		void InsertEntitlementBadge(struct FFEntitlementBadgeUIDefinition* EntitlementUIDef);
		void PreConstruct(bool IsDesignTime);
		void OnInitialized();
		void ExecuteUbergraph_WBP_OptionMenu_Home(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
