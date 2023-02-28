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
	 * WidgetBlueprintGeneratedClass WBP_ModifierSetting_EditableText.WBP_ModifierSetting_EditableText_C
	 * Size -> 0x0110 (FullSize[0x0340] - InheritedSize[0x0230])
	 */
	class UWBP_ModifierSetting_EditableText_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEditableText*                                       ModifierEditableText;                                    // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSettingBox_C*                           ModifierSetting;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SettingLabelText;                                        // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FFModifierTextStyle                                 SettingLabelTextStyle;                                   // 0x0260(0x0078) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                DefaultText;                                             // 0x02D8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                DefaultHintText;                                         // 0x02F0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FString>                                      DefaultOptions;                                          // 0x0308(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    DefaultSelectedOptionIdx;                                // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_7K67[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetSettingLabel(class FText* SettingText);
		void SetSettingLabel(const class FText& InSettingText);
		void PreConstruct(bool IsDesignTime);
		void OnInitialized();
		void BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void ExecuteUbergraph_WBP_ModifierSetting_EditableText(int32_t EntryPoint);
		void OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnTextChanged__DelegateSignature(const class FText& Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
