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
	 * WidgetBlueprintGeneratedClass WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C
	 * Size -> 0x0070 (FullSize[0x02A0] - InheritedSize[0x0230])
	 */
	class UWBP_ServerListModifierSettings_BasicFilters_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ServerListModifierSetting_FilterRule_C*         ModdedFilter;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListModifierSetting_FilterRule_Toggle_C*  NoPasswordToggle;                                        // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListModifierSetting_FilterRule_Toggle_C*  NotFullToggle;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListModifierSetting_FilterRule_Toggle_C*  SameVersionToggle;                                       // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_GameModifierSettingsSection_C*                  SectionContainer;                                        // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SettingsListVBox;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSetting_ComboBox_C*                     SortByOrder;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSetting_ComboBox_C*                     SortByPreference;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListModifierSetting_FilterRule_C*         SupporterOnlyFilter;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFilterSettingsChanged;                                 // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSortPreferenceChanged;                                 // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules);
		void GetSelectedServerSortPreference(struct FFServerSortPreference* SortPreference);
		void BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature();
		void BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature();
		void BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnInitialized();
		void FilterSettingChanged(class UClass* Rule, const struct FHDFilterRuleParams& RuleParams);
		void ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters(int32_t EntryPoint);
		void OnFilterSettingsChanged__DelegateSignature(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters);
		void OnSortPreferenceChanged__DelegateSignature(const struct FFServerSortPreference& SortPreference);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
