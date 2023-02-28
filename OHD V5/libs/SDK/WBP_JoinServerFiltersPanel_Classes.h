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
	 * WidgetBlueprintGeneratedClass WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UWBP_JoinServerFiltersPanel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ServerListModifierSettings_AdvancedFilters_C*   AdvancedFilterSettings;                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListModifierSettings_BasicFilters_C*      BasicFilterSettings;                                     // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        FiltersVBox;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnServerFiltersChanged;                                  // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules);
		void OnInitialized();
		void FilterSettingsChanged(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters);
		void ExecuteUbergraph_WBP_JoinServerFiltersPanel(int32_t EntryPoint);
		void OnServerFiltersChanged__DelegateSignature(TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
