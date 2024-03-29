﻿#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.25.4_v0.12.0.0
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
	 * BlueprintGeneratedClass BPFL_HDCore.BPFL_HDCore_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_HDCore_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CheckEntitlement(TArray<struct FFEntitlementDefinition>* Entitlements, class UObject* __WorldContext, bool* bEntitled);
		void STATIC_FindMapIdByDisplayName(class FText* MapDisplayName, TArray<struct FPrimaryAssetId>* MapIds, class UObject* __WorldContext, struct FPrimaryAssetId* FoundMapId);
		void STATIC_GetPackageShortName(class FString* LongName, class UObject* __WorldContext, bool* bSuccess, class FString* ShortName);
		void STATIC_GetPluginDisplayNameFromPath(class FString* AssetPath, class UObject* __WorldContext, class FString* ModName);
		void STATIC_GetContentRootFromPackageName(class FString* PackageName, class UObject* __WorldContext, bool* bSuccess, class FString* ContentRootName);
		void STATIC_GetContentRootPathFromPackageName(class FString* PackageName, class UObject* __WorldContext, bool* bSuccess, class FString* ContentRootPath);
		void STATIC_AddOption(class FString* Options, class FString* StrToAdd, class UObject* __WorldContext);
		void STATIC_SplitLoadedPrimaryAssetClassIds(TArray<struct FPrimaryAssetId>* AssetIds, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* UnloadedAssetIds, TArray<class UClass*>* LoadedAssetClasses);
		void STATIC_SplitLoadedPrimaryAssetIds(TArray<struct FPrimaryAssetId>* AssetIds, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* UnloadedAssetIds, TArray<class UObject*>* LoadedAssets);
		void STATIC_GetAllMapAssets(class UObject* __WorldContext, bool* bSuccess, TArray<struct FAssetData>* LevelAssets);
		void STATIC_GetPlayerControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class APlayerController** OwnerPC);
		void STATIC_GetControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class AController** OwnerC);
		void STATIC_GetBluforOpforTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState** HDTeamState);
		void STATIC_GetHDFactionInfoForTeam(EHDTeam Team, class UObject* __WorldContext, class UClass** HDFactionInfoClass);
		void STATIC_GetIndexForPhoneticCodeWord(const class FString& CodeWord, class UObject* __WorldContext, int32_t* LetterIdx);
		void STATIC_GetIndexForPredefinedSquadName(const class FText& SquadName, class UObject* __WorldContext, int32_t* SquadNameIdx);
		void STATIC_GetPhoneticCodeWordByIndex(int32_t LetterIdx, class UObject* __WorldContext, class FString* CodeWord);
		void STATIC_GetPhoneticCodeWordByCharacter(const class FString& LetterChar, class UObject* __WorldContext, class FString* CodeWord);
		void STATIC_AbbreviateString(const class FString& SourceString, int32_t MaxStartLength, int32_t MaxEndLength, const class FString& Separator, class UObject* __WorldContext, class FString* AbbrevString);
		void STATIC_GetPredefinedSquadNameByIndex(int32_t SquadCreationIdx, class UObject* __WorldContext, class FText* SquadName);
		void STATIC_GetHDTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState** HDTeamState);
		void STATIC_GetHDHUDBP(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_HDHUDBase_C** HDHUD);
		void STATIC_GetHDGameUserSettings(class UObject* __WorldContext, class UTBGameUserSettings** HDGameUserSettings);
		void STATIC_GetHDGameState(class UObject* __WorldContext, class AHDGameState** HDGameState);
		void STATIC_GetHDGameMode(class UObject* __WorldContext, class AHDBaseGameMode** HDGame);
		void STATIC_GetHDGameInstance(class UObject* __WorldContext, class UHDGameInstance** HDGI);
		void STATIC_GetHDPlayerCharacterBP(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerCharacterBase_C** HDPlayerChar);
		void STATIC_GetHDPlayerControllerBP(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerControllerBase_C** HDPC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
