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
	 * WidgetBlueprintGeneratedClass WBP_HDPOI_Player.WBP_HDPOI_Player_C
	 * Size -> 0x0070 (FullSize[0x0410] - InheritedSize[0x03A0])
	 */
	class UWBP_HDPOI_Player_C : public UDFPOIWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              PlayerIcon;                                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SquadNumberText;                                         // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       POIWidgetInitialized;                                    // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SOKD[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         SelectedTintColor;                                       // 0x03C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         DeselectedTintColor;                                     // 0x03E8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceivePOISelected();
		void ReceivePOIDeselected();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void SetIconBrush(const struct FSlateBrush& NewIconBrush);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_WBP_HDPOI_Player(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
