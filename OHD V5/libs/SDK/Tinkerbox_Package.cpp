/**
 * Name: Operation__Harsh_Doorstop
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x007D3290
	 * 		Name   -> Function Tinkerbox.TBGameInstance.UnloadMainMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTBGameInstance::UnloadMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.UnloadMainMenu");
		
		UTBGameInstance_UnloadMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF4A0
	 * 		Name   -> Function Tinkerbox.TBGameInstance.LoadMainMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bExclusive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameInstance::LoadMainMenu(bool bExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.LoadMainMenu");
		
		UTBGameInstance_LoadMainMenu_Params params {};
		params.bExclusive = bExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF020
	 * 		Name   -> Function Tinkerbox.TBGameInstance.HandleGoToMainMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTBGameInstance::HandleGoToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.HandleGoToMainMenu");
		
		UTBGameInstance_HandleGoToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF000
	 * 		Name   -> Function Tinkerbox.TBGameInstance.GoToMainMenu
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UTBGameInstance::GoToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.GoToMainMenu");
		
		UTBGameInstance_GoToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDB30
	 * 		Name   -> Function Tinkerbox.TBGameInstance.GetGameBuildInfo
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UTBGameInstance::GetGameBuildInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.GetGameBuildInfo");
		
		UTBGameInstance_GetGameBuildInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD7B0
	 * 		Name   -> Function Tinkerbox.TBGameInstance.GetCurrentSessionHostAddressStr
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      OutHostAddrStr                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreferSteamP2PAddr                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAppendPort                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBGameInstance::GetCurrentSessionHostAddressStr(class FString* OutHostAddrStr, bool bPreferSteamP2PAddr, bool bAppendPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.GetCurrentSessionHostAddressStr");
		
		UTBGameInstance_GetCurrentSessionHostAddressStr_Params params {};
		params.bPreferSteamP2PAddr = bPreferSteamP2PAddr;
		params.bAppendPort = bAppendPort;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHostAddrStr != nullptr)
			*OutHostAddrStr = params.OutHostAddrStr;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBWorldSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameUserDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameUserDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameUserDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D3180
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot9KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot9KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot9KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot9KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D3070
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot8KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot8KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot8KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot8KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2F60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot7KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot7KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot7KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot7KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2E50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot6KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot6KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot6KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot6KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2D40
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot5KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot5KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot5KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot5KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2C30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot4KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot4KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot4KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot4KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2B20
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot3KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot3KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot3KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot3KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2A10
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot2KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot2KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot2KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot2KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2900
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot1KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot1KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot1KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot1KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D27F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot0KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot0KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot0KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot0KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2770
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormVoiceVolume                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetVoiceVolumeLevelNormalized(float NormVoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevelNormalized");
		
		UTBGameUserSettings_SetVoiceVolumeLevelNormalized_Params params {};
		params.NormVoiceVolume = NormVoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D26F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VoiceVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetVoiceVolumeLevel(float VoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevel");
		
		UTBGameUserSettings_SetVoiceVolumeLevel_Params params {};
		params.VoiceVolume = VoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D25E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetVaultKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetVaultKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetVaultKeyBinding");
		
		UTBGameUserSettings_SetVaultKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D24D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetUseKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetUseKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetUseKeyBinding");
		
		UTBGameUserSettings_SetUseKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2440
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSwitchFireModeOnReselect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSwitchFireModeOnReselect(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSwitchFireModeOnReselect");
		
		UTBGameUserSettings_SetSwitchFireModeOnReselect_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2330
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSwitchFireModeKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSwitchFireModeKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSwitchFireModeKeyBinding");
		
		UTBGameUserSettings_SetSwitchFireModeKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2220
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSprintToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSprintToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSprintToggleKeyBinding");
		
		UTBGameUserSettings_SetSprintToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2110
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSprintKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSprintKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSprintKeyBinding");
		
		UTBGameUserSettings_SetSprintKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2090
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormSFXVolume                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSoundEffectsVolumeLevelNormalized(float NormSFXVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevelNormalized");
		
		UTBGameUserSettings_SetSoundEffectsVolumeLevelNormalized_Params params {};
		params.NormSFXVolume = NormSFXVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D2010
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SFXVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSoundEffectsVolumeLevel(float SFXVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevel");
		
		UTBGameUserSettings_SetSoundEffectsVolumeLevel_Params params {};
		params.SFXVolume = SFXVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1F80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSmoothMouseEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSmoothMouseEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSmoothMouseEnabled");
		
		UTBGameUserSettings_SetSmoothMouseEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1EF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSmoothFrameRateEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSmoothFrameRateEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSmoothFrameRateEnabled");
		
		UTBGameUserSettings_SetSmoothFrameRateEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1DE0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetShowScoreboardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetShowScoreboardKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetShowScoreboardKeyBinding");
		
		UTBGameUserSettings_SetShowScoreboardKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1CD0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSayTeamKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSayTeamKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSayTeamKeyBinding");
		
		UTBGameUserSettings_SetSayTeamKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1BC0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSaySquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSaySquadKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSaySquadKeyBinding");
		
		UTBGameUserSettings_SetSaySquadKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1AB0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSayAllKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSayAllKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSayAllKeyBinding");
		
		UTBGameUserSettings_SetSayAllKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D19A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetReloadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetReloadKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetReloadKeyBinding");
		
		UTBGameUserSettings_SetReloadKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1890
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetRadialMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetRadialMenuKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetRadialMenuKeyBinding");
		
		UTBGameUserSettings_SetRadialMenuKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1780
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPushToTalkSquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPushToTalkSquadKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPushToTalkSquadKeyBinding");
		
		UTBGameUserSettings_SetPushToTalkSquadKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1670
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPushToTalkLocalKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPushToTalkLocalKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPushToTalkLocalKeyBinding");
		
		UTBGameUserSettings_SetPushToTalkLocalKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1560
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPushToTalkCommandKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPushToTalkCommandKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPushToTalkCommandKeyBinding");
		
		UTBGameUserSettings_SetPushToTalkCommandKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1450
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetProneKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetProneKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetProneKeyBinding");
		
		UTBGameUserSettings_SetProneKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1340
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPreviousItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPreviousItemKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPreviousItemKeyBinding");
		
		UTBGameUserSettings_SetPreviousItemKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1230
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPointAimToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPointAimToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPointAimToggleKeyBinding");
		
		UTBGameUserSettings_SetPointAimToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D11A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPlayerIsChangingKeyBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPlayerIsChangingKeyBindings(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPlayerIsChangingKeyBindings");
		
		UTBGameUserSettings_SetPlayerIsChangingKeyBindings_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1090
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetNextItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetNextItemKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetNextItemKeyBinding");
		
		UTBGameUserSettings_SetNextItemKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D1010
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormMusicVolume                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMusicVolumeLevelNormalized(float NormMusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevelNormalized");
		
		UTBGameUserSettings_SetMusicVolumeLevelNormalized_Params params {};
		params.NormMusicVolume = NormMusicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0F90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MusicVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMusicVolumeLevel(float MusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevel");
		
		UTBGameUserSettings_SetMusicVolumeLevel_Params params {};
		params.MusicVolume = MusicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0E80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveRightKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveRightKeyBinding");
		
		UTBGameUserSettings_SetMoveRightKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0D70
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveLeftKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveLeftKeyBinding");
		
		UTBGameUserSettings_SetMoveLeftKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0C60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveForwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveForwardKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveForwardKeyBinding");
		
		UTBGameUserSettings_SetMoveForwardKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0B50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveBackwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveBackwardKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveBackwardKeyBinding");
		
		UTBGameUserSettings_SetMoveBackwardKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0A90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMouseSensitivityNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormSensitivityX                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NormSensitivityY                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMouseSensitivityNormalized(float NormSensitivityX, float NormSensitivityY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMouseSensitivityNormalized");
		
		UTBGameUserSettings_SetMouseSensitivityNormalized_Params params {};
		params.NormSensitivityX = NormSensitivityX;
		params.NormSensitivityY = NormSensitivityY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D09D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMouseSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SensitivityX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SensitivityY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMouseSensitivity(float SensitivityX, float SensitivityY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMouseSensitivity");
		
		UTBGameUserSettings_SetMouseSensitivity_Params params {};
		params.SensitivityX = SensitivityX;
		params.SensitivityY = SensitivityY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0940
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMotionBlurEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMotionBlurEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMotionBlurEnabled");
		
		UTBGameUserSettings_SetMotionBlurEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D08C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormMasterVolume                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMasterVolumeLevelNormalized(float NormMasterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevelNormalized");
		
		UTBGameUserSettings_SetMasterVolumeLevelNormalized_Params params {};
		params.NormMasterVolume = NormMasterVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0840
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MasterVolume                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMasterVolumeLevel(float MasterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevel");
		
		UTBGameUserSettings_SetMasterVolumeLevel_Params params {};
		params.MasterVolume = MasterVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0730
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetLeanRightToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetLeanRightToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetLeanRightToggleKeyBinding");
		
		UTBGameUserSettings_SetLeanRightToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0620
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetLeanRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetLeanRightKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetLeanRightKeyBinding");
		
		UTBGameUserSettings_SetLeanRightKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0510
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetLeanLeftToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetLeanLeftToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetLeanLeftToggleKeyBinding");
		
		UTBGameUserSettings_SetLeanLeftToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0400
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetLeanLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetLeanLeftKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetLeanLeftKeyBinding");
		
		UTBGameUserSettings_SetLeanLeftKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D02F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetJumpVaultKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetJumpVaultKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetJumpVaultKeyBinding");
		
		UTBGameUserSettings_SetJumpVaultKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D01E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetJumpKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetJumpKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetJumpKeyBinding");
		
		UTBGameUserSettings_SetJumpKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0150
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetInvertMousePitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInvertPitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetInvertMousePitch(bool bInvertPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetInvertMousePitch");
		
		UTBGameUserSettings_SetInvertMousePitch_Params params {};
		params.bInvertPitch = bInvertPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D0040
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetFireKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetFireKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetFireKeyBinding");
		
		UTBGameUserSettings_SetFireKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFFC0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewFOV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetFieldOfView(float NewFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetFieldOfView");
		
		UTBGameUserSettings_SetFieldOfView_Params params {};
		params.NewFOV = NewFOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFF40
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDisplayGamma
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewGamma                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDisplayGamma(float NewGamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDisplayGamma");
		
		UTBGameUserSettings_SetDisplayGamma_Params params {};
		params.NewGamma = NewGamma;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFEC0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormDialogueVolume                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDialogueVolumeLevelNormalized(float NormDialogueVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevelNormalized");
		
		UTBGameUserSettings_SetDialogueVolumeLevelNormalized_Params params {};
		params.NormDialogueVolume = NormDialogueVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFE40
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DialogueVolume                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDialogueVolumeLevel(float DialogueVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevel");
		
		UTBGameUserSettings_SetDialogueVolumeLevel_Params params {};
		params.DialogueVolume = DialogueVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFD30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDeployMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDeployMenuKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDeployMenuKeyBinding");
		
		UTBGameUserSettings_SetDeployMenuKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFC20
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetCycleWeaponSightsKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetCycleWeaponSightsKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetCycleWeaponSightsKeyBinding");
		
		UTBGameUserSettings_SetCycleWeaponSightsKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFB10
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetCrouchToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetCrouchToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetCrouchToggleKeyBinding");
		
		UTBGameUserSettings_SetCrouchToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFA00
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetCrouchKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetCrouchKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetCrouchKeyBinding");
		
		UTBGameUserSettings_SetCrouchKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF8F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetConsoleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetConsoleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetConsoleKeyBinding");
		
		UTBGameUserSettings_SetConsoleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF7E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetCameraToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetCameraToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetCameraToggleKeyBinding");
		
		UTBGameUserSettings_SetCameraToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF750
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetAllowSoundInBackground
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetAllowSoundInBackground(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetAllowSoundInBackground");
		
		UTBGameUserSettings_SetAllowSoundInBackground_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF640
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetAimDownSightsToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetAimDownSightsToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetAimDownSightsToggleKeyBinding");
		
		UTBGameUserSettings_SetAimDownSightsToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF530
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetAimDownSightsKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetAimDownSightsKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetAimDownSightsKeyBinding");
		
		UTBGameUserSettings_SetAimDownSightsKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF470
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsVoiceVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsVoiceVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsVoiceVolumeLevelDirty");
		
		UTBGameUserSettings_IsVoiceVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF440
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSwitchFireModeOnReselectDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSwitchFireModeOnReselectDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSwitchFireModeOnReselectDirty");
		
		UTBGameUserSettings_IsSwitchFireModeOnReselectDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF420
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSoundInBackgroundAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSoundInBackgroundAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSoundInBackgroundAllowed");
		
		UTBGameUserSettings_IsSoundInBackgroundAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF3F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSoundEffectsVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSoundEffectsVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSoundEffectsVolumeLevelDirty");
		
		UTBGameUserSettings_IsSoundEffectsVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF3C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothMouseEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothMouseEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothMouseEnabled");
		
		UTBGameUserSettings_IsSmoothMouseEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF390
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothMouseDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothMouseDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothMouseDirty");
		
		UTBGameUserSettings_IsSmoothMouseDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF360
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothFrameRateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateEnabled");
		
		UTBGameUserSettings_IsSmoothFrameRateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF330
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothFrameRateDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateDirty");
		
		UTBGameUserSettings_IsSmoothFrameRateDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF300
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsPlayerChangingKeyBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTBGameUserSettings::IsPlayerChangingKeyBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsPlayerChangingKeyBindings");
		
		UTBGameUserSettings_IsPlayerChangingKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF2D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMusicVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMusicVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMusicVolumeLevelDirty");
		
		UTBGameUserSettings_IsMusicVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF2A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMouseSensitivityDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMouseSensitivityDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMouseSensitivityDirty");
		
		UTBGameUserSettings_IsMouseSensitivityDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF270
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMotionBlurEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMotionBlurEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMotionBlurEnabled");
		
		UTBGameUserSettings_IsMotionBlurEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF240
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMotionBlurDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMotionBlurDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMotionBlurDirty");
		
		UTBGameUserSettings_IsMotionBlurDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF210
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMasterVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMasterVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMasterVolumeLevelDirty");
		
		UTBGameUserSettings_IsMasterVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF1E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsInvertMouseDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsInvertMouseDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsInvertMouseDirty");
		
		UTBGameUserSettings_IsInvertMouseDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF1C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsHeadphoneModeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeEnabled");
		
		UTBGameUserSettings_IsHeadphoneModeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF190
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsHeadphoneModeDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeDirty");
		
		UTBGameUserSettings_IsHeadphoneModeDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF160
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsFrameRateLimitDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsFrameRateLimitDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsFrameRateLimitDirty");
		
		UTBGameUserSettings_IsFrameRateLimitDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF130
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsFieldOfViewDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsFieldOfViewDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsFieldOfViewDirty");
		
		UTBGameUserSettings_IsFieldOfViewDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF100
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsDisplayGammaDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsDisplayGammaDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsDisplayGammaDirty");
		
		UTBGameUserSettings_IsDisplayGammaDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF0D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsDialogueVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsDialogueVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsDialogueVolumeLevelDirty");
		
		UTBGameUserSettings_IsDialogueVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF0A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsAudioQualityDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsAudioQualityDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsAudioQualityDirty");
		
		UTBGameUserSettings_IsAudioQualityDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF070
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsAnyInputKeyBindingDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsAnyInputKeyBindingDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsAnyInputKeyBindingDirty");
		
		UTBGameUserSettings_IsAnyInputKeyBindingDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF040
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsAllowSoundInBackgroundDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsAllowSoundInBackgroundDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsAllowSoundInBackgroundDirty");
		
		UTBGameUserSettings_IsAllowSoundInBackgroundDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEF90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot9KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot9KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot9KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot9KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEF20
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot8KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot8KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot8KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot8KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEEB0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot7KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot7KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot7KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot7KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEE40
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot6KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot6KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot6KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot6KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEDD0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot5KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot5KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot5KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot5KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CED60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot4KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot4KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot4KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot4KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CECF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot3KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot3KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot3KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot3KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEC80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot2KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot2KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot2KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot2KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEC10
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot1KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot1KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot1KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot1KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEBA0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot0KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot0KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot0KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot0KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEB70
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetVoiceVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevelNormalized");
		
		UTBGameUserSettings_GetVoiceVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEB40
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetVoiceVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevel");
		
		UTBGameUserSettings_GetVoiceVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEAD0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetVaultKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetVaultKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetVaultKeyBinding");
		
		UTBGameUserSettings_GetVaultKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEA60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetUseKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetUseKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetUseKeyBinding");
		
		UTBGameUserSettings_GetUseKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE9D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSwitchFireModeOnReselect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bLastConfirmed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBGameUserSettings::GetSwitchFireModeOnReselect(bool bLastConfirmed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSwitchFireModeOnReselect");
		
		UTBGameUserSettings_GetSwitchFireModeOnReselect_Params params {};
		params.bLastConfirmed = bLastConfirmed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE960
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSwitchFireModeKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSwitchFireModeKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSwitchFireModeKeyBinding");
		
		UTBGameUserSettings_GetSwitchFireModeKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE8F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSprintToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSprintToggleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSprintToggleKeyBinding");
		
		UTBGameUserSettings_GetSprintToggleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE880
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSprintKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSprintKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSprintKeyBinding");
		
		UTBGameUserSettings_GetSprintKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE850
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetSoundEffectsVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevelNormalized");
		
		UTBGameUserSettings_GetSoundEffectsVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE820
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetSoundEffectsVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevel");
		
		UTBGameUserSettings_GetSoundEffectsVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE7B0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetShowScoreboardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetShowScoreboardKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetShowScoreboardKeyBinding");
		
		UTBGameUserSettings_GetShowScoreboardKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE740
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSayTeamKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSayTeamKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSayTeamKeyBinding");
		
		UTBGameUserSettings_GetSayTeamKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE6D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSaySquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSaySquadKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSaySquadKeyBinding");
		
		UTBGameUserSettings_GetSaySquadKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE660
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSayAllKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSayAllKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSayAllKeyBinding");
		
		UTBGameUserSettings_GetSayAllKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE5F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetReloadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetReloadKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetReloadKeyBinding");
		
		UTBGameUserSettings_GetReloadKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE580
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetRadialMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetRadialMenuKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetRadialMenuKeyBinding");
		
		UTBGameUserSettings_GetRadialMenuKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE510
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPushToTalkSquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPushToTalkSquadKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPushToTalkSquadKeyBinding");
		
		UTBGameUserSettings_GetPushToTalkSquadKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE4A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPushToTalkLocalKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPushToTalkLocalKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPushToTalkLocalKeyBinding");
		
		UTBGameUserSettings_GetPushToTalkLocalKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE430
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPushToTalkCommandKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPushToTalkCommandKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPushToTalkCommandKeyBinding");
		
		UTBGameUserSettings_GetPushToTalkCommandKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE3C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetProneKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetProneKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetProneKeyBinding");
		
		UTBGameUserSettings_GetProneKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE350
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPreviousItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPreviousItemKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPreviousItemKeyBinding");
		
		UTBGameUserSettings_GetPreviousItemKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE2E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPointAimToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPointAimToggleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPointAimToggleKeyBinding");
		
		UTBGameUserSettings_GetPointAimToggleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE270
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetNextItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetNextItemKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetNextItemKeyBinding");
		
		UTBGameUserSettings_GetNextItemKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE240
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMusicVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevelNormalized");
		
		UTBGameUserSettings_GetMusicVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE210
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMusicVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevel");
		
		UTBGameUserSettings_GetMusicVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE1A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveRightKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveRightKeyBinding");
		
		UTBGameUserSettings_GetMoveRightKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE130
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveLeftKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveLeftKeyBinding");
		
		UTBGameUserSettings_GetMoveLeftKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE0C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveForwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveForwardKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveForwardKeyBinding");
		
		UTBGameUserSettings_GetMoveForwardKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE050
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveBackwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveBackwardKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveBackwardKeyBinding");
		
		UTBGameUserSettings_GetMoveBackwardKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE020
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityYNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityYNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityYNormalized");
		
		UTBGameUserSettings_GetMouseSensitivityYNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDFF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityY
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityY");
		
		UTBGameUserSettings_GetMouseSensitivityY_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDFC0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityXNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityXNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityXNormalized");
		
		UTBGameUserSettings_GetMouseSensitivityXNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDF90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityX
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityX");
		
		UTBGameUserSettings_GetMouseSensitivityX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDF60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMasterVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevelNormalized");
		
		UTBGameUserSettings_GetMasterVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDF30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMasterVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevel");
		
		UTBGameUserSettings_GetMasterVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDE80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLocalPlayerControllerBP
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class APlayerController* UTBGameUserSettings::GetLocalPlayerControllerBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLocalPlayerControllerBP");
		
		UTBGameUserSettings_GetLocalPlayerControllerBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDE10
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLeanRightKeyToggleBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetLeanRightKeyToggleBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLeanRightKeyToggleBinding");
		
		UTBGameUserSettings_GetLeanRightKeyToggleBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDDA0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLeanRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetLeanRightKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLeanRightKeyBinding");
		
		UTBGameUserSettings_GetLeanRightKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDD30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLeanLeftToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetLeanLeftToggleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLeanLeftToggleKeyBinding");
		
		UTBGameUserSettings_GetLeanLeftToggleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDCC0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLeanLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetLeanLeftKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLeanLeftKeyBinding");
		
		UTBGameUserSettings_GetLeanLeftKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDC90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLastConfirmedMasterVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetLastConfirmedMasterVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLastConfirmedMasterVolumeLevelNormalized");
		
		UTBGameUserSettings_GetLastConfirmedMasterVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDC60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLastConfirmedMasterVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetLastConfirmedMasterVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLastConfirmedMasterVolumeLevel");
		
		UTBGameUserSettings_GetLastConfirmedMasterVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDBF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetJumpVaultKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetJumpVaultKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetJumpVaultKeyBinding");
		
		UTBGameUserSettings_GetJumpVaultKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDB80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetJumpKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetJumpKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetJumpKeyBinding");
		
		UTBGameUserSettings_GetJumpKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDB50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetInvertMousePitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::GetInvertMousePitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetInvertMousePitch");
		
		UTBGameUserSettings_GetInvertMousePitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDB00
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetFrameRateLimitCurrent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetFrameRateLimitCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetFrameRateLimitCurrent");
		
		UTBGameUserSettings_GetFrameRateLimitCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDA90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetFireKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetFireKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetFireKeyBinding");
		
		UTBGameUserSettings_GetFireKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDA60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetFieldOfView");
		
		UTBGameUserSettings_GetFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDA30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDisplayGamma
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetDisplayGamma()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDisplayGamma");
		
		UTBGameUserSettings_GetDisplayGamma_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CDA00
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetDialogueVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevelNormalized");
		
		UTBGameUserSettings_GetDialogueVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD9D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetDialogueVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevel");
		
		UTBGameUserSettings_GetDialogueVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD960
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDeployMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetDeployMenuKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDeployMenuKeyBinding");
		
		UTBGameUserSettings_GetDeployMenuKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD8F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetCycleWeaponSightsKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetCycleWeaponSightsKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetCycleWeaponSightsKeyBinding");
		
		UTBGameUserSettings_GetCycleWeaponSightsKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD740
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetCrouchToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetCrouchToggleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetCrouchToggleKeyBinding");
		
		UTBGameUserSettings_GetCrouchToggleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD6D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetCrouchKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetCrouchKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetCrouchKeyBinding");
		
		UTBGameUserSettings_GetCrouchKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD660
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetConsoleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetConsoleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetConsoleKeyBinding");
		
		UTBGameUserSettings_GetConsoleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD5F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetCameraToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetCameraToggleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetCameraToggleKeyBinding");
		
		UTBGameUserSettings_GetCameraToggleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD580
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetAimDownSightsToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetAimDownSightsToggleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetAimDownSightsToggleKeyBinding");
		
		UTBGameUserSettings_GetAimDownSightsToggleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD510
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetAimDownSightsKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetAimDownSightsKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetAimDownSightsKeyBinding");
		
		UTBGameUserSettings_GetAimDownSightsKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD400
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.FirstRunHardwareBenchmark
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WorkScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CPUMultiplier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GPUMultiplier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBGameUserSettings::FirstRunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.FirstRunHardwareBenchmark");
		
		UTBGameUserSettings_FirstRunHardwareBenchmark_Params params {};
		params.WorkScale = WorkScale;
		params.CPUMultiplier = CPUMultiplier;
		params.GPUMultiplier = GPUMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CD370
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.EnableHeadphoneMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::EnableHeadphoneMode(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.EnableHeadphoneMode");
		
		UTBGameUserSettings_EnableHeadphoneMode_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBLevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBLevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBLevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function Tinkerbox.TBVoiceIndicator.ActiveVoiceRemoved
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  NewVoiceWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBVoiceIndicator::ActiveVoiceRemoved(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBVoiceIndicator.ActiveVoiceRemoved");
		
		UTBVoiceIndicator_ActiveVoiceRemoved_Params params {};
		params.PlayerState = PlayerState;
		params.NewVoiceWidget = NewVoiceWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC0A10
	 * 		Name   -> Function Tinkerbox.TBVoiceIndicator.ActiveVoiceAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  NewVoiceWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBVoiceIndicator::ActiveVoiceAdded(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBVoiceIndicator.ActiveVoiceAdded");
		
		UTBVoiceIndicator_ActiveVoiceAdded_Params params {};
		params.PlayerState = PlayerState;
		params.NewVoiceWidget = NewVoiceWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBVoiceIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBVoiceIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBVoiceIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007D3B40
	 * 		Name   -> Function Tinkerbox.TBVoiceIndicatorListing.Init
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTBVoiceIndicator*                           InParentMenu                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUniqueNetIdRepl                            InUniqueNetId                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlayerName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBVoiceIndicatorListing::Init(class UTBVoiceIndicator* InParentMenu, const struct FUniqueNetIdRepl& InUniqueNetId, class FString* InPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBVoiceIndicatorListing.Init");
		
		UTBVoiceIndicatorListing_Init_Params params {};
		params.InParentMenu = InParentMenu;
		params.InUniqueNetId = InUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPlayerName != nullptr)
			*InPlayerName = params.InPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBVoiceIndicatorListing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBVoiceIndicatorListing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBVoiceIndicatorListing");
		return ptr;
	}

}


