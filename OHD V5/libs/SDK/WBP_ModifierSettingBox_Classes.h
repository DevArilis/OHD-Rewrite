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
	 * WidgetBlueprintGeneratedClass WBP_ModifierSettingBox.WBP_ModifierSettingBox_C
	 * Size -> 0x00A8 (FullSize[0x02D8] - InheritedSize[0x0230])
	 */
	class UWBP_ModifierSettingBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNamedSlot*                                          Content;                                                 // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SettingLabel;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SettingText;                                             // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FFModifierTextStyle                                 SettingTextStyle;                                        // 0x0260(0x0078) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetSettingTextStyle(struct FFModifierTextStyle* InSettingTextStyle);
		void GetSettingText(class FText* SettingText);
		void SetSettingText(const class FText& InSettingText);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_ModifierSettingBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
