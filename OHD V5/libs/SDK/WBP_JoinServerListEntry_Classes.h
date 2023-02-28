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
	 * WidgetBlueprintGeneratedClass WBP_JoinServerListEntry.WBP_JoinServerListEntry_C
	 * Size -> 0x0615 (FullSize[0x0885] - InheritedSize[0x0270])
	 */
	class UWBP_JoinServerListEntry_C : public UHDServerListing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ServerListEntryColumn_C*                        GameVersionCol;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListEntryColumn_C*                        GMNameCol;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemBg;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ItemBox;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ItemCheckBox;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemSelectionHighlight;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListEntryColumn_C*                        MapNameCol;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListEntryColumn_C*                        PingCol;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListEntryColumn_C*                        PlayerCountCol;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ServerBadgeHBox;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListEntryColumn_C*                        ServerNameCol;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectionStateChanged;                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UTexture2D*                                          PlaceholderMapBannerImg;                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             BadgePadding;                                            // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FCheckBoxStyle                                      ItemStyle;                                               // 0x02F8(0x0580) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bSelectionToggle;                                        // 0x0878(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_CY5G[0x3];                                   // 0x0879(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemMinWidth;                                            // 0x087C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    ItemMinHeight;                                           // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bBadgesInitialized;                                      // 0x0884(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AddBadgeDefinitionToListIfFound(const class FName& TableRowName, TArray<struct FFServerBadgeUIDefinition>* BadgeArr);
		void CreateAndAddBadgeWidgetFromDefinition(struct FFServerBadgeUIDefinition* BadgeUIDef);
		void GetBadgeDefinitionFromTable(const struct FDataTableRowHandle& RowHandle, bool* bFound, struct FFServerBadgeUIDefinition* BadgeUIDef);
		void HideAllBadges();
		void SetBadgeVisibilityFromServerData();
		void PopulateBadges(TArray<struct FFServerBadgeUIDefinition>* BadgeDefs);
		void GetBrushWithItemDimensions(struct FSlateBrush* InBrush, struct FSlateBrush* OutBrush);
		void GetBrushWithImageTexture(struct FSlateBrush* Brush, class UTexture2D* Image, struct FSlateBrush* UpdatedBrush);
		void InternalRefreshDimensions();
		void GetItemMinHeight(int32_t* MinHeight);
		void GetItemMinWidth(int32_t* MinWidth);
		void SetItemMinDimensions(int32_t InMinWidth, int32_t InMinHeight);
		void GetItemStyle(struct FCheckBoxStyle* ItemStyle);
		void SetItemImage(class UTexture2D* InItemImg);
		void SetItemStyle(const struct FCheckBoxStyle& InItemStyle);
		void InternalUpdateItemBgTintColor(bool bSelected);
		void IsItemSelected(bool* bSelected);
		void GetItemSelectionState(ECheckBoxState* SelectionState);
		void SetItemIsSelected(bool bSelected);
		void SetItemSelectionState(ECheckBoxState InSelectionState);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		
		void OnListItemObjectSet(class UObject* ListItemObject);
		void OnServerItemDataSet(bool bIsDesignTime);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void ExecuteUbergraph_WBP_JoinServerListEntry(int32_t EntryPoint);
		void OnSelectionStateChanged__DelegateSignature(class UWBP_JoinServerListEntry_C* Item, bool bSelected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
