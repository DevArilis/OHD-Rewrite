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
	 * WidgetBlueprintGeneratedClass WBP_CommunityMediaLink.WBP_CommunityMediaLink_C
	 * Size -> 0x00E0 (FullSize[0x0310] - InheritedSize[0x0230])
	 */
	class UWBP_CommunityMediaLink_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             LinkBtn;                                                 // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LinkIcon;                                                // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LinkText;                                                // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFCommunityMediaLinkUIDefinition                    LinkUIDefinition;                                        // 0x0250(0x00C0) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void BndEvt__LinkBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_CommunityMediaLink(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
