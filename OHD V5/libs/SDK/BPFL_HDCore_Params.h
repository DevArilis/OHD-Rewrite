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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.CheckEntitlement
	 */
	struct UBPFL_HDCore_C_CheckEntitlement_Params
	{
	public:
		TArray<struct FFEntitlementDefinition>                     Entitlements;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEntitled;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XO7O[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.FindMapIdByDisplayName
	 */
	struct UBPFL_HDCore_C_FindMapIdByDisplayName_Params
	{
	public:
		class FText                                                MapDisplayName;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FPrimaryAssetId>                             MapIds;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPrimaryAssetId                                     FoundMapId;                                              // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetPackageShortName
	 */
	struct UBPFL_HDCore_C_GetPackageShortName_Params
	{
	public:
		class FString                                              LongName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I2DP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ShortName;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetPluginDisplayNameFromPath
	 */
	struct UBPFL_HDCore_C_GetPluginDisplayNameFromPath_Params
	{
	public:
		class FString                                              AssetPath;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ModName;                                                 // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootFromPackageName
	 */
	struct UBPFL_HDCore_C_GetContentRootFromPackageName_Params
	{
	public:
		class FString                                              PackageName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JM7M[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ContentRootName;                                         // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootPathFromPackageName
	 */
	struct UBPFL_HDCore_C_GetContentRootPathFromPackageName_Params
	{
	public:
		class FString                                              PackageName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OP1Q[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ContentRootPath;                                         // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.AddOption
	 */
	struct UBPFL_HDCore_C_AddOption_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class FString                                              StrToAdd;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetClassIds
	 */
	struct UBPFL_HDCore_C_SplitLoadedPrimaryAssetClassIds_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             AssetIds;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FPrimaryAssetId>                             UnloadedAssetIds;                                        // 0x0018(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<class UClass*>                                      LoadedAssetClasses;                                      // 0x0028(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetIds
	 */
	struct UBPFL_HDCore_C_SplitLoadedPrimaryAssetIds_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             AssetIds;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FPrimaryAssetId>                             UnloadedAssetIds;                                        // 0x0018(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<class UObject*>                                     LoadedAssets;                                            // 0x0028(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetAllMapAssets
	 */
	struct UBPFL_HDCore_C_GetAllMapAssets_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TSG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAssetData>                                  LevelAssets;                                             // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetPlayerControllerFromPlayerState
	 */
	struct UBPFL_HDCore_C_GetPlayerControllerFromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   OwnerPC;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetControllerFromPlayerState
	 */
	struct UBPFL_HDCore_C_GetControllerFromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         OwnerC;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetBluforOpforTeamStateForTeam
	 */
	struct UBPFL_HDCore_C_GetBluforOpforTeamStateForTeam_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDPJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDTeamState*                                        HDTeamState;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDFactionInfoForTeam
	 */
	struct UBPFL_HDCore_C_GetHDFactionInfoForTeam_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJES[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              HDFactionInfoClass;                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPhoneticCodeWord
	 */
	struct UBPFL_HDCore_C_GetIndexForPhoneticCodeWord_Params
	{
	public:
		class FString                                              CodeWord;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LetterIdx;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPredefinedSquadName
	 */
	struct UBPFL_HDCore_C_GetIndexForPredefinedSquadName_Params
	{
	public:
		class FText                                                SquadName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SquadNameIdx;                                            // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SMSD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByIndex
	 */
	struct UBPFL_HDCore_C_GetPhoneticCodeWordByIndex_Params
	{
	public:
		int32_t                                                    LetterIdx;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DECA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CodeWord;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByCharacter
	 */
	struct UBPFL_HDCore_C_GetPhoneticCodeWordByCharacter_Params
	{
	public:
		class FString                                              LetterChar;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CodeWord;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.AbbreviateString
	 */
	struct UBPFL_HDCore_C_AbbreviateString_Params
	{
	public:
		class FString                                              SourceString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    MaxStartLength;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxEndLength;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Separator;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AbbrevString;                                            // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetPredefinedSquadNameByIndex
	 */
	struct UBPFL_HDCore_C_GetPredefinedSquadNameByIndex_Params
	{
	public:
		int32_t                                                    SquadCreationIdx;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4MKT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                SquadName;                                               // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDTeamStateForTeam
	 */
	struct UBPFL_HDCore_C_GetHDTeamStateForTeam_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ENL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDTeamState*                                        HDTeamState;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDHUDBP
	 */
	struct UBPFL_HDCore_C_GetHDHUDBP_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZHPH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HDHUDBase_C*                                     HDHUD;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameUserSettings
	 */
	struct UBPFL_HDCore_C_GetHDGameUserSettings_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTBGameUserSettings*                                 HDGameUserSettings;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameState
	 */
	struct UBPFL_HDCore_C_GetHDGameState_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDGameState*                                        HDGameState;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameMode
	 */
	struct UBPFL_HDCore_C_GetHDGameMode_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDBaseGameMode*                                     HDGame;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameInstance
	 */
	struct UBPFL_HDCore_C_GetHDGameInstance_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UHDGameInstance*                                     HDGI;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerCharacterBP
	 */
	struct UBPFL_HDCore_C_GetHDPlayerCharacterBP_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M3DK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HDPlayerCharacterBase_C*                         HDPlayerChar;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerControllerBP
	 */
	struct UBPFL_HDCore_C_GetHDPlayerControllerBP_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z8XE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HDPlayerControllerBase_C*                        HDPC;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
