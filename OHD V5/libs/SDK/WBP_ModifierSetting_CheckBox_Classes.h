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
	 * WidgetBlueprintGeneratedClass WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C
	 * Size -> 0x00D0 (FullSize[0x0300] - InheritedSize[0x0230])
	 */
	class UWBP_ModifierSetting_CheckBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBox*                                           ModifierCheckBox;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ModifierSBox;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSettingBox_C*                           ModifierSetting;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bDefaultIsChecked;                                       // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_IPCC[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SettingText;                                             // 0x0258(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FFModifierTextStyle                                 SettingTextStyle;                                        // 0x0280(0x0078) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           CheckBoxMinSize;                                         // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetSettingText(class FText* SettingText);
		void SetSettingText(const class FText& InSettingText);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnInitialized();
		void ExecuteUbergraph_WBP_ModifierSetting_CheckBox(int32_t EntryPoint);
		void OnCheckStateChanged__DelegateSignature(bool bIsChecked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
