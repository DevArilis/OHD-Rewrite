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
	 * Class Tinkerbox.TBGameInstance
	 * Size -> 0x0050 (FullSize[0x02A0] - InheritedSize[0x0250])
	 */
	class UTBGameInstance : public UDFBaseGameInstance
	{
	public:
		class UDFBaseMenu*                                         MainMenu;                                                // 0x0250(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MainMenuClass;                                           // 0x0258(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      MenuGameMode;                                            // 0x0260(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHidePlayerHUDInMainMenu : 1;                            // 0x0278(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMenuBackgroundMaps : 1;                              // 0x0278(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HP6G[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             MenuBackgroundMaps;                                      // 0x0280(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D7J2[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URCONServerSystem*                                   RCONServerSystem;                                        // 0x0298(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UnloadMainMenu();
		void LoadMainMenu(bool bExclusive);
		void HandleGoToMainMenu();
		void GoToMainMenu();
		void GetGameBuildInfo();
		bool GetCurrentSessionHostAddressStr(class FString* OutHostAddrStr, bool bPreferSteamP2PAddr, bool bAppendPort);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBWorldSettings
	 * Size -> 0x0050 (FullSize[0x0518] - InheritedSize[0x04C8])
	 */
	class ATBWorldSettings : public ADFWorldSettings
	{
	public:
		struct FMinimapGenerationSettings                          MinimapSettings;                                         // 0x04C8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              MinimapImg[0x28];                                        // 0x04F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameUserDeveloperSettings
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UTBGameUserDeveloperSettings : public UDeveloperSettings
	{
	public:
		struct FSoftObjectPath                                     SFXSoundMix;                                             // 0x0038(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     MusicSoundMix;                                           // 0x0050(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     VOSoundMix;                                              // 0x0068(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     VoiPSoundMix;                                            // 0x0080(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameUserSettings
	 * Size -> 0x0920 (FullSize[0x0A40] - InheritedSize[0x0120])
	 */
	class UTBGameUserSettings : public UGameUserSettings
	{
	public:
		uint32_t                                                   CustomVersion;                                           // 0x0120(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseSmoothFrameRate;                                     // 0x0124(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FPCC[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredDisplayGamma;                                     // 0x0128(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredFOV;                                              // 0x012C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMotionBlur;                                          // 0x0130(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N7Q2[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredMouseSensitivityX;                                // 0x0134(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredMouseSensitivityY;                                // 0x0138(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInvertMousePitch;                                       // 0x013C(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMouseSmoothing;                                      // 0x013D(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DesiredSwitchFireModeOnReselect;                         // 0x013E(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       LastConfirmedSwitchFireModeOnReselect;                   // 0x013F(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseHeadphoneMode;                                       // 0x0140(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowSoundInBackground;                                 // 0x0141(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UZQI[0x2];                                   // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredMasterVolumeLevel;                                // 0x0144(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedMasterVolumeLevel;                          // 0x0148(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredSFXVolumeLevel;                                   // 0x014C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedSFXVolumeLevel;                             // 0x0150(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredMusicVolumeLevel;                                 // 0x0154(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedMusicVolumeLevel;                           // 0x0158(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredVOVolumeLevel;                                    // 0x015C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedVOVolumeLevel;                              // 0x0160(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredVoiPVolumeLevel;                                  // 0x0164(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedVoiPVolumeLevel;                            // 0x0168(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayerIsChangingKeyBindings;                            // 0x016C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0X6N[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                DesiredMoveForwardKey;                                   // 0x0170(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveForwardKey;                             // 0x0188(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredMoveBackwardKey;                                  // 0x01A0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveBackwardKey;                            // 0x01B8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredMoveLeftKey;                                      // 0x01D0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveLeftKey;                                // 0x01E8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredMoveRightKey;                                     // 0x0200(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveRightKey;                               // 0x0218(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredLeanLeftKey;                                      // 0x0230(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedLeanLeftKey;                                // 0x0248(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredLeanLeftToggleKey;                                // 0x0260(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedLeanLeftToggleKey;                          // 0x0278(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredLeanRightKey;                                     // 0x0290(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedLeanRightKey;                               // 0x02A8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredLeanRightToggleKey;                               // 0x02C0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedLeanRightToggleKey;                         // 0x02D8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSprintKey;                                        // 0x02F0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSprintKey;                                  // 0x0308(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSprintToggleKey;                                  // 0x0320(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSprintToggleKey;                            // 0x0338(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredCrouchKey;                                        // 0x0350(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedCrouchKey;                                  // 0x0368(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredCrouchToggleKey;                                  // 0x0380(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedCrouchToggleKey;                            // 0x0398(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredProneKey;                                         // 0x03B0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedProneKey;                                   // 0x03C8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredJumpVaultKey;                                     // 0x03E0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedJumpVaultKey;                               // 0x03F8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredJumpKey;                                          // 0x0410(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedJumpKey;                                    // 0x0428(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredVaultKey;                                         // 0x0440(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedVaultKey;                                   // 0x0458(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredFireKey;                                          // 0x0470(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedFireKey;                                    // 0x0488(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSwitchFireModeKey;                                // 0x04A0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSwitchFireModeKey;                          // 0x04B8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredReloadKey;                                        // 0x04D0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedReloadKey;                                  // 0x04E8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredAimKey;                                           // 0x0500(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedAimKey;                                     // 0x0518(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredAimToggleKey;                                     // 0x0530(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedAimToggleKey;                               // 0x0548(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPointAimToggleKey;                                // 0x0560(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPointAimToggleKey;                          // 0x0578(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredCycleWeaponSightsKey;                             // 0x0590(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedCycleWeaponSightsKey;                       // 0x05A8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredNextItemKey;                                      // 0x05C0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedNextItemKey;                                // 0x05D8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPreviousItemKey;                                  // 0x05F0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPreviousItemKey;                            // 0x0608(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot0Key;                                     // 0x0620(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot0Key;                               // 0x0638(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot1Key;                                     // 0x0650(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot1Key;                               // 0x0668(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot2Key;                                     // 0x0680(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot2Key;                               // 0x0698(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot3Key;                                     // 0x06B0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot3Key;                               // 0x06C8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot4Key;                                     // 0x06E0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot4Key;                               // 0x06F8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot5Key;                                     // 0x0710(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot5Key;                               // 0x0728(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot6Key;                                     // 0x0740(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot6Key;                               // 0x0758(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot7Key;                                     // 0x0770(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot7Key;                               // 0x0788(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot8Key;                                     // 0x07A0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot8Key;                               // 0x07B8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot9Key;                                     // 0x07D0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot9Key;                               // 0x07E8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPushToTalkLocalKey;                               // 0x0800(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPushToTalkLocalKey;                         // 0x0818(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPushToTalkSquadKey;                               // 0x0830(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPushToTalkSquadKey;                         // 0x0848(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPushToTalkCommandKey;                             // 0x0860(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPushToTalkCommandKey;                       // 0x0878(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSayAllKey;                                        // 0x0890(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSayAllKey;                                  // 0x08A8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSayTeamKey;                                       // 0x08C0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSayTeamKey;                                 // 0x08D8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSaySquadKey;                                      // 0x08F0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSaySquadKey;                                // 0x0908(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredUseKey;                                           // 0x0920(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedUseKey;                                     // 0x0938(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredShowScoreboardKey;                                // 0x0950(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedShowScoreboardKey;                          // 0x0968(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredDeployMenuKey;                                    // 0x0980(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedDeployMenuKey;                              // 0x0998(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredRadialMenuKey;                                    // 0x09B0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedRadialMenuKey;                              // 0x09C8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredCameraToggleKey;                                  // 0x09E0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedCameraToggleKey;                            // 0x09F8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredConsoleKey;                                       // 0x0A10(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedConsoleKey;                                 // 0x0A28(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetWeaponSlot9KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot8KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot7KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot6KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot5KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot4KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot3KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot2KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot1KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot0KeyBinding(const struct FInputChord& NewKey);
		void SetVoiceVolumeLevelNormalized(float NormVoiceVolume);
		void SetVoiceVolumeLevel(float VoiceVolume);
		void SetVaultKeyBinding(const struct FInputChord& NewKey);
		void SetUseKeyBinding(const struct FInputChord& NewKey);
		void SetSwitchFireModeOnReselect(bool bEnable);
		void SetSwitchFireModeKeyBinding(const struct FInputChord& NewKey);
		void SetSprintToggleKeyBinding(const struct FInputChord& NewKey);
		void SetSprintKeyBinding(const struct FInputChord& NewKey);
		void SetSoundEffectsVolumeLevelNormalized(float NormSFXVolume);
		void SetSoundEffectsVolumeLevel(float SFXVolume);
		void SetSmoothMouseEnabled(bool bEnable);
		void SetSmoothFrameRateEnabled(bool bEnabled);
		void SetShowScoreboardKeyBinding(const struct FInputChord& NewKey);
		void SetSayTeamKeyBinding(const struct FInputChord& NewKey);
		void SetSaySquadKeyBinding(const struct FInputChord& NewKey);
		void SetSayAllKeyBinding(const struct FInputChord& NewKey);
		void SetReloadKeyBinding(const struct FInputChord& NewKey);
		void SetRadialMenuKeyBinding(const struct FInputChord& NewKey);
		void SetPushToTalkSquadKeyBinding(const struct FInputChord& NewKey);
		void SetPushToTalkLocalKeyBinding(const struct FInputChord& NewKey);
		void SetPushToTalkCommandKeyBinding(const struct FInputChord& NewKey);
		void SetProneKeyBinding(const struct FInputChord& NewKey);
		void SetPreviousItemKeyBinding(const struct FInputChord& NewKey);
		void SetPointAimToggleKeyBinding(const struct FInputChord& NewKey);
		void SetPlayerIsChangingKeyBindings(bool NewValue);
		void SetNextItemKeyBinding(const struct FInputChord& NewKey);
		void SetMusicVolumeLevelNormalized(float NormMusicVolume);
		void SetMusicVolumeLevel(float MusicVolume);
		void SetMoveRightKeyBinding(const struct FInputChord& NewKey);
		void SetMoveLeftKeyBinding(const struct FInputChord& NewKey);
		void SetMoveForwardKeyBinding(const struct FInputChord& NewKey);
		void SetMoveBackwardKeyBinding(const struct FInputChord& NewKey);
		void SetMouseSensitivityNormalized(float NormSensitivityX, float NormSensitivityY);
		void SetMouseSensitivity(float SensitivityX, float SensitivityY);
		void SetMotionBlurEnabled(bool bEnabled);
		void SetMasterVolumeLevelNormalized(float NormMasterVolume);
		void SetMasterVolumeLevel(float MasterVolume);
		void SetLeanRightToggleKeyBinding(const struct FInputChord& NewKey);
		void SetLeanRightKeyBinding(const struct FInputChord& NewKey);
		void SetLeanLeftToggleKeyBinding(const struct FInputChord& NewKey);
		void SetLeanLeftKeyBinding(const struct FInputChord& NewKey);
		void SetJumpVaultKeyBinding(const struct FInputChord& NewKey);
		void SetJumpKeyBinding(const struct FInputChord& NewKey);
		void SetInvertMousePitch(bool bInvertPitch);
		void SetFireKeyBinding(const struct FInputChord& NewKey);
		void SetFieldOfView(float NewFOV);
		void SetDisplayGamma(float NewGamma);
		void SetDialogueVolumeLevelNormalized(float NormDialogueVolume);
		void SetDialogueVolumeLevel(float DialogueVolume);
		void SetDeployMenuKeyBinding(const struct FInputChord& NewKey);
		void SetCycleWeaponSightsKeyBinding(const struct FInputChord& NewKey);
		void SetCrouchToggleKeyBinding(const struct FInputChord& NewKey);
		void SetCrouchKeyBinding(const struct FInputChord& NewKey);
		void SetConsoleKeyBinding(const struct FInputChord& NewKey);
		void SetCameraToggleKeyBinding(const struct FInputChord& NewKey);
		void SetAllowSoundInBackground(bool bAllow);
		void SetAimDownSightsToggleKeyBinding(const struct FInputChord& NewKey);
		void SetAimDownSightsKeyBinding(const struct FInputChord& NewKey);
		bool IsVoiceVolumeLevelDirty();
		bool IsSwitchFireModeOnReselectDirty();
		bool IsSoundInBackgroundAllowed();
		bool IsSoundEffectsVolumeLevelDirty();
		bool IsSmoothMouseEnabled();
		bool IsSmoothMouseDirty();
		bool IsSmoothFrameRateEnabled();
		bool IsSmoothFrameRateDirty();
		bool IsPlayerChangingKeyBindings();
		bool IsMusicVolumeLevelDirty();
		bool IsMouseSensitivityDirty();
		bool IsMotionBlurEnabled();
		bool IsMotionBlurDirty();
		bool IsMasterVolumeLevelDirty();
		bool IsInvertMouseDirty();
		bool IsHeadphoneModeEnabled();
		bool IsHeadphoneModeDirty();
		bool IsFrameRateLimitDirty();
		bool IsFieldOfViewDirty();
		bool IsDisplayGammaDirty();
		bool IsDialogueVolumeLevelDirty();
		bool IsAudioQualityDirty();
		bool IsAnyInputKeyBindingDirty();
		bool IsAllowSoundInBackgroundDirty();
		struct FKey GetWeaponSlot9KeyBinding();
		struct FKey GetWeaponSlot8KeyBinding();
		struct FKey GetWeaponSlot7KeyBinding();
		struct FKey GetWeaponSlot6KeyBinding();
		struct FKey GetWeaponSlot5KeyBinding();
		struct FKey GetWeaponSlot4KeyBinding();
		struct FKey GetWeaponSlot3KeyBinding();
		struct FKey GetWeaponSlot2KeyBinding();
		struct FKey GetWeaponSlot1KeyBinding();
		struct FKey GetWeaponSlot0KeyBinding();
		float GetVoiceVolumeLevelNormalized();
		float GetVoiceVolumeLevel();
		struct FKey GetVaultKeyBinding();
		struct FKey GetUseKeyBinding();
		bool GetSwitchFireModeOnReselect(bool bLastConfirmed);
		struct FKey GetSwitchFireModeKeyBinding();
		struct FKey GetSprintToggleKeyBinding();
		struct FKey GetSprintKeyBinding();
		float GetSoundEffectsVolumeLevelNormalized();
		float GetSoundEffectsVolumeLevel();
		struct FKey GetShowScoreboardKeyBinding();
		struct FKey GetSayTeamKeyBinding();
		struct FKey GetSaySquadKeyBinding();
		struct FKey GetSayAllKeyBinding();
		struct FKey GetReloadKeyBinding();
		struct FKey GetRadialMenuKeyBinding();
		struct FKey GetPushToTalkSquadKeyBinding();
		struct FKey GetPushToTalkLocalKeyBinding();
		struct FKey GetPushToTalkCommandKeyBinding();
		struct FKey GetProneKeyBinding();
		struct FKey GetPreviousItemKeyBinding();
		struct FKey GetPointAimToggleKeyBinding();
		struct FKey GetNextItemKeyBinding();
		float GetMusicVolumeLevelNormalized();
		float GetMusicVolumeLevel();
		struct FKey GetMoveRightKeyBinding();
		struct FKey GetMoveLeftKeyBinding();
		struct FKey GetMoveForwardKeyBinding();
		struct FKey GetMoveBackwardKeyBinding();
		float GetMouseSensitivityYNormalized();
		float GetMouseSensitivityY();
		float GetMouseSensitivityXNormalized();
		float GetMouseSensitivityX();
		float GetMasterVolumeLevelNormalized();
		float GetMasterVolumeLevel();
		class APlayerController* GetLocalPlayerControllerBP();
		struct FKey GetLeanRightKeyToggleBinding();
		struct FKey GetLeanRightKeyBinding();
		struct FKey GetLeanLeftToggleKeyBinding();
		struct FKey GetLeanLeftKeyBinding();
		float GetLastConfirmedMasterVolumeLevelNormalized();
		float GetLastConfirmedMasterVolumeLevel();
		struct FKey GetJumpVaultKeyBinding();
		struct FKey GetJumpKeyBinding();
		bool GetInvertMousePitch();
		float GetFrameRateLimitCurrent();
		struct FKey GetFireKeyBinding();
		float GetFieldOfView();
		float GetDisplayGamma();
		float GetDialogueVolumeLevelNormalized();
		float GetDialogueVolumeLevel();
		struct FKey GetDeployMenuKeyBinding();
		struct FKey GetCycleWeaponSightsKeyBinding();
		struct FKey GetCrouchToggleKeyBinding();
		struct FKey GetCrouchKeyBinding();
		struct FKey GetConsoleKeyBinding();
		struct FKey GetCameraToggleKeyBinding();
		struct FKey GetAimDownSightsToggleKeyBinding();
		struct FKey GetAimDownSightsKeyBinding();
		bool FirstRunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier);
		void EnableHeadphoneMode(bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBLevelScriptActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ATBLevelScriptActor : public ADFLevelScriptActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBVoiceIndicator
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UTBVoiceIndicator : public UUserWidget
	{
	public:
		class UClass*                                              VoiceListingClass;                                       // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        ActiveVoiceList;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxActiveVoices;                                         // 0x0240(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ActiveVoices;                                            // 0x0244(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ActiveVoiceRemoved(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget);
		void ActiveVoiceAdded(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBVoiceIndicatorListing
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class UTBVoiceIndicatorListing : public UUserWidget
	{
	public:
		class UTextBlock*                                          PlayerName;                                              // 0x0230(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTBVoiceIndicator*                                   ParentMenu;                                              // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RG5E[0x18];                                  // 0x0240(0x0018) MISSED OFFSET (PADDING)

	public:
		void Init(class UTBVoiceIndicator* InParentMenu, const struct FUniqueNetIdRepl& InUniqueNetId, class FString* InPlayerName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
