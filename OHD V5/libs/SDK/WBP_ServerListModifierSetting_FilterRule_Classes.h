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
	 * WidgetBlueprintGeneratedClass WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C
	 * Size -> 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
	 */
	class UWBP_ServerListModifierSetting_FilterRule_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ModifierSetting_ComboBox_C*                     FilterSetting;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0240(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FHDFilterRuleParams                                 RuleParams;                                              // 0x0258(0x0002) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_UDRX[0x6];                                   // 0x025A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Rule;                                                    // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDropdownSettingChanged;                                // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsFilterEnabled(bool* bActive);
		void GetFilterRulePair(class UClass** Rule, struct FHDFilterRuleParams* RuleParams);
		void GetRuleParams(struct FHDFilterRuleParams* Params);
		void SetRuleParams(const struct FHDFilterRuleParams& NewParams);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule(int32_t EntryPoint);
		void OnDropdownSettingChanged__DelegateSignature(class UClass* Rule, const struct FHDFilterRuleParams& RuleParams);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
