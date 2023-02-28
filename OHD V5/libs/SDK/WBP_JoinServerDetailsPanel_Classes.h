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
	 * WidgetBlueprintGeneratedClass WBP_JoinServerDetailsPanel.WBP_JoinServerDetailsPanel_C
	 * Size -> 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
	 */
	class UWBP_JoinServerDetailsPanel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ServerListModifierSettings_AdvancedServerData_C* AdvancedServerData;                                      // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerListModifierSettings_BasicServerData_C*   BasicServerData;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             JoinGameBtn;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MapPreviewImg;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnJoinServerBtnClicked;                                  // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UTexture2D*                                          PlaceholderMapPreviewImg;                                // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetMapPreviewImage(class UTexture2D* NewImg);
		void HideServerDetails();
		void ShowServerDetails();
		void UpdateServerMetaData(struct FHDServerInfo* ServerData);
		void UpdateServerData(struct FHDServerInfo* ServerData);
		void SetupServerDetails(const struct FHDServerInfo& ServerInfo);
		void BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnInitialized();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_JoinServerDetailsPanel(int32_t EntryPoint);
		void OnJoinServerBtnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
