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
	 * WidgetBlueprintGeneratedClass WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C
	 * Size -> 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
	 */
	class UWBP_ServerListModifierSetting_FilterRule_Toggle_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ModifierSetting_CheckBox_C*                     FilterSetting;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0240(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bDefaultIsCheckedOverride;                               // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FHDFilterRuleParams                                 CheckedRuleParams;                                       // 0x0259(0x0002) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_T955[0x5];                                   // 0x025B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Rule;                                                    // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBoolSettingChanged;                                    // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsFilterEnabled(bool* bActive);
		void GetFilterRulePair(class UClass** Rule, struct FHDFilterRuleParams* RuleParams);
		void GetCheckedRuleParams(struct FHDFilterRuleParams* Params);
		void SetCheckedRuleParams(const struct FHDFilterRuleParams& NewParams);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
		void OnInitialized();
		void ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle(int32_t EntryPoint);
		void OnBoolSettingChanged__DelegateSignature(class UClass* Rule, const struct FHDFilterRuleParams& RuleParams);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
