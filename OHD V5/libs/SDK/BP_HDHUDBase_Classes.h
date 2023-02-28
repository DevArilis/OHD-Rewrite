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
	 * BlueprintGeneratedClass BP_HDHUDBase.BP_HDHUDBase_C
	 * Size -> 0x0184 (FullSize[0x0494] - InheritedSize[0x0310])
	 */
	class ABP_HDHUDBase_C : public AHDHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bDrawCrosshair;                                          // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowCompass;                                            // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowPlayerStatus;                                       // 0x0322(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowWeaponStatus;                                       // 0x0323(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowCaptureStatus;                                      // 0x0324(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowEquipmentSelect;                                    // 0x0325(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowWatermark;                                          // 0x0326(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInitialized;                                            // 0x0327(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CrosshairWidth;                                          // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrosshairHeight;                                         // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              HUDContainerUWClass;                                     // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateVisibility                                           HUDContainerUWVisibilityOverride;                        // 0x0338(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       bHUDWidgetShown;                                         // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RIS6[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               LastOwningPawn;                                          // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerControllerBase_C*                        OwningHDPC;                                              // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerCharacterBase_C*                         OwningHDPawn;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADFBaseItem*                                         OwningPawnEquippedItem;                                  // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDrawNametags;                                           // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B0SM[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawNametagDistanceMin;                                  // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawNametagDistanceMax;                                  // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2TN5[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_HUD_C*                                          HUDContainerUW;                                          // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawDotsDistanceMin;                                     // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawDotsDistanceMax;                                     // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               NametagFont;                                             // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagTextVerticalOffset;                               // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NametagTextLengthMax;                                    // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNametagUseTextScaling;                                  // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5TYM[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NametagTextScaleMin;                                     // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagTextScaleMax;                                     // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableNametagTextFade;                                  // 0x039C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XI0K[0x3];                                   // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NametagTextFadeRangeNear;                                // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotVerticalOffset;                                // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNametagUseDotSymbolScaling;                             // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E44G[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NametagDotScaleMin;                                      // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotScaleMax;                                      // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableNametagDotFade;                                   // 0x03B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AL85[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NametagDotFadeRangeNear;                                 // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotFadeRangeFar;                                  // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NametagTextColorSquad;                                   // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          NametagDotSymbolSquad;                                   // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NametagDotSymbolSquadColor;                              // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotSymbolSquadWidth;                              // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotSymbolSquadHeight;                             // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NametagTextColorOther;                                   // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          NametagDotSymbolOther;                                   // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NametagDotSymbolOtherColor;                              // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotSymbolOtherWidth;                              // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotSymbolOtherHeight;                             // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NametagTextColorDefault;                                 // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          NametagDotSymbolDefault;                                 // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NametagDotSymbolDefaultColor;                            // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotSymbolDefaultWidth;                            // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotSymbolDefaultHeight;                           // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNametagUseLineTraces;                                   // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MXLB[0x3];                                   // 0x0451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           NametagReferenceResolution;                              // 0x0454(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      NametagLineTraceOffsetTop;                               // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       bNametagUseAdditionalLineTraces;                         // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_UX0H[0x3];                                   // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NametagAdditionalLineTraceOffsetSides;                   // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      NametagTextFadeRangeFar;                                 // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableNametagTextFrame;                                 // 0x046C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94P4[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NametagTextFrameHorizontalMargin;                        // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagTextFrameHorizontalFade;                          // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagTextFrameVerticalMargin;                          // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagTextFrameVerticalFade;                            // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableNametagDotFrame;                                  // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PYRJ[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NametagDotFrameHorizontalMargin;                         // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotFrameHorizontalFade;                           // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotFrameVerticalMargin;                           // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NametagDotFrameVerticalFade;                             // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool NametagsSingleLinetrace(const struct FVector& Start, const struct FVector& End, class ABP_HDPlayerCharacterBase_C* OtherPlayer);
		void CanDrawNametag(class ABP_HDPlayerCharacterBase_C* InOtherPawn, float InVerticalOffset, const struct FVector& InOwnerCameraLocation, bool* bCanDrawNametag, struct FVector2D* NametagScreenPosition);
		void DrawNametags(int32_t SizeX, int32_t SizeY);
		void DrawCrosshair(int32_t SizeX, int32_t SizeY);
		void IsTextChatHistoryVisible(bool* bVisible);
		void SetTextChatHistoryVisibility(bool bVisible);
		void SetMedicHealingEffectVisibility(bool bVisible);
		void SetAmmoResupplyEffectVisibility(bool bVisible);
		void ResetPlayerStatusEffectsUI();
		void ClearOwningPawnReferences();
		void ForceUpdateOwningPawnReferences();
		void ClearAllOwningPlayerReferences();
		void ForceUpdateAllOwningPlayerReferences();
		void CleanupDelegatesForHDPawn(class ABP_HDPlayerCharacterBase_C* PlayerChar);
		void InitOwningHDPawnDelegates();
		void CleanupOwningHDPCDelegates();
		void InitOwningHDPCDelegates();
		void UpdateHUDVisibility(bool bDestroyOnHide);
		void HideHUDWidget(bool bDestroyWidgetOnHide);
		void ShowHUDWidget();
		void EquipmentSelectEquippedItem(class UHDKit* CurrentLoadout, class AHDBaseWeapon* EquippedItem);
		void EquipmentSelectItemBySlotNum(int32_t SlotNum, bool* bOutNewSelection);
		void EquipmentGetSelectedItemSlotNum(int32_t* OutSlotNum, bool* bFoundItem);
		void EquipmentGetSelectedItem(class AHDBaseWeapon** OutItemToEquip, bool* bFoundItem);
		void EquipmentAddItemsFromLoadout(class UHDKit* NewLoadout, class UDFInventoryComponent* PlayerInventory, class ADFBaseWeapon* EquippedItem);
		void EquipmentSelectItem(int32_t ItemIndex);
		void EquipmentSelectPrevItem();
		void EquipmentSelectNextItem();
		void ToggleWeaponStatusUI(bool bShown);
		void ToggleEquipmentUI(bool bShown);
		void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void OwningPawnUpdated(class APawn* NewOwningPawn, class APawn* PrevOwningPawn);
		void OwningPawnEquipmentItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void OwningPlayerPossessPawn(class APawn* Pawn);
		void OwningPlayerUnpossessPawn(class APawn* Pawn);
		void ExecuteUbergraph_BP_HDHUDBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
