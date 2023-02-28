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
	 * WidgetBlueprintGeneratedClass WBP_EntitlementBadge.WBP_EntitlementBadge_C
	 * Size -> 0x00A8 (FullSize[0x02D8] - InheritedSize[0x0230])
	 */
	class UWBP_EntitlementBadge_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BadgeIcon;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFEntitlementBadgeUIDefinition                      BadgeUIDefinition;                                       // 0x0240(0x0098) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_EntitlementBadge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
