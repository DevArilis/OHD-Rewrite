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
	 * WidgetBlueprintGeneratedClass WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C
	 * Size -> 0x0070 (FullSize[0x02A0] - InheritedSize[0x0230])
	 */
	class UWBP_GameModifierSettingsSection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNamedSlot*                                          Content;                                                 // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           SectionActiveToggleChkBox;                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SectionExpansionArrow;                                   // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SectionExpansionToggleBtn;                               // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SectionTitleText;                                        // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                TitleText;                                               // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bShowToggleBtn;                                          // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bExpanded;                                               // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bActive;                                                 // 0x027A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_WYBQ[0x5];                                   // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActivated;                                             // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDeactivated;                                           // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void InternalRecursiveSetContentIsEnabled(bool bInIsEnabled);
		void IsActive(bool* bActive);
		void IsExpanded(bool* bExpanded);
		void GetTitleText(class FText* TitleText);
		void SetIsActive(bool bActive);
		void SetExpansionState(bool bExpanded);
		void SetTitleText(const class FText& InTitleText);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_WBP_GameModifierSettingsSection(int32_t EntryPoint);
		void OnDeactivated__DelegateSignature();
		void OnActivated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
