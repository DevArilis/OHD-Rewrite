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
	 * WidgetBlueprintGeneratedClass WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C
	 * Size -> 0x00A9 (FullSize[0x0329] - InheritedSize[0x0280])
	 */
	class UWBP_OptionMenu_JoinGame_C : public UHDJoinGameMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_JoinServerDetailsPanel_C*                       DetailsPanel;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             FiltersOpenCloseBtn;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServerFiltersPanel_C*                       FiltersPanel;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            FiltersPanelOpenCloseBox;                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            GameModeHeader;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            MapHeader;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            ModHeader;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            PingHeader;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            PlayersHeader;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RefreshListBtn;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   RefreshListThrobber;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerDetails_C*                                ServerDetails;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ServerDetailsContainer;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ServerListBox;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            ServerNameHeader;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHDServerListItemData*                               SelectedServerListItem;                                  // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowServerDetailsInDesigner;                            // 0x0308(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EAIU[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ServerBadgeTable;                                        // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FFServerBadgeUIDefinition>                   ServerBadgeDefs;                                         // 0x0318(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bDesignTime;                                             // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HasSubMenus(bool* bSubMenuOptions);
		void GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions);
		void GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment);
		void GetDesiredVerticalAlignment(EVerticalAlignment* Alignment);
		void OpenPasswordPrompt();
		void ApplyActiveServerFilters();
		void RefreshServerList();
		void ToggleServerDetails(bool bShown);
		void GetServerListSortPreference(struct FFServerSortPreference* SortPreference);
		void IsValidServerListItemIndex(int32_t IndexToTest, bool* bValidIndex);
		void GetSelectedServerListItem(class UHDServerListItemData** ServerItem);
		void ClearServerListItemSelection();
		void ServerListItemSelectionCleared();
		void ServerListItemSelectionUpdated(class UHDServerListItemData* InSelectedServerListItem);
		void SetActiveSubMenuByIndex(int32_t SubMenuIndex);
		void ReceiveOnRefreshStart();
		void ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy);
		void BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature();
		void OnInitialized();
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters);
		void SortPreferenceChanged(const struct FFServerSortPreference& SortPreference);
		void ConfirmServerPasswordInput(const class FText& InputText);
		void ExecuteUbergraph_WBP_OptionMenu_JoinGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
