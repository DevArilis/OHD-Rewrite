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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Tinkerbox.EMinimapCaptureResolution
	 */
	enum class EMinimapCaptureResolution : uint8_t
	{
		Size1024 = 0,
		Size2048 = 1,
		Size4096 = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Tinkerbox.MinimapGenerationSettings
	 * Size -> 0x0028
	 */
	struct FMinimapGenerationSettings
	{
	public:
		class AActor*                                              BoundaryMarkerA;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              BoundaryMarkerB;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundaryMidPointLoc;                                     // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMinimapCaptureResolution                                  CaptureResolution;                                       // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VF7B[0x1];                                   // 0x001D(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_2R4G[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayableBoundaryLength;                                  // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGF4[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
