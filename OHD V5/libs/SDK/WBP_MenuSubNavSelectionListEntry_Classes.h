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
	 * WidgetBlueprintGeneratedClass WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C
	 * Size -> 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
	 */
	class UWBP_MenuSubNavSelectionListEntry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_CreateGameSelectionListEntry_C*                 SelectionEntry;                                          // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ItemText;                                                // 0x0240(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    SubMenuIndex;                                            // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5RDK[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ButtonClicked;                                           // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetSubMenuIndex(int32_t Idx);
		void PreConstruct(bool IsDesignTime);
		void OnItemSelectionChanged(bool bIsSelected);
		void BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
		void ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry(int32_t EntryPoint);
		void ButtonClicked__DelegateSignature(class UWBP_MenuSubNavSelectionListEntry_C* ClickedBtn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
