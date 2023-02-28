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
	 * Enum HDMain.EHDTeam
	 */
	enum class EHDTeam : uint8_t
	{
		Red    = 0,
		Blue   = 1,
		NoTeam = 2,
		MAX    = 3
	};

	/**
	 * Enum HDMain.EHDWeaponAimStyle
	 */
	enum class EHDWeaponAimStyle : uint8_t
	{
		None       = 0,
		PointAim   = 1,
		OpticMode1 = 2,
		OpticMode2 = 3,
		OpticMode3 = 4,
		MAX        = 5
	};

	/**
	 * Enum HDMain.EHDAIThreatLevel
	 */
	enum class EHDAIThreatLevel : uint8_t
	{
		None   = 0,
		Safe   = 1,
		Aware  = 2,
		Combat = 3,
		Danger = 4,
		MAX    = 5
	};

	/**
	 * Enum HDMain.EHDPrimaryAssetType
	 */
	enum class EHDPrimaryAssetType : uint8_t
	{
		Faction  = 0,
		GameMode = 1,
		Map      = 2,
		Platoon  = 3,
		Ruleset  = 4,
		MAX      = 5
	};

	/**
	 * Enum HDMain.EHDAIVocalizationType
	 */
	enum class EHDAIVocalizationType : uint8_t
	{
		None             = 0,
		Contact          = 1,
		LostContact      = 2,
		Reloading        = 3,
		BeenHit          = 4,
		UnderSuppression = 5,
		Death            = 6,
		MAX              = 7
	};

	/**
	 * Enum HDMain.EHDAICaptureMode
	 */
	enum class EHDAICaptureMode : uint8_t
	{
		Attack = 0,
		Defend = 1,
		None   = 2,
		MAX    = 3
	};

	/**
	 * Enum HDMain.EHDControlPointObjectiveType
	 */
	enum class EHDControlPointObjectiveType : uint8_t
	{
		Offensive   = 0,
		Defensive   = 1,
		NoObjective = 2,
		MAX         = 3
	};

	/**
	 * Enum HDMain.EHDServerListSortBy
	 */
	enum class EHDServerListSortBy : uint8_t
	{
		None        = 0,
		Name        = 1,
		Mode        = 2,
		Map         = 3,
		PlayerCount = 4,
		Ping        = 5,
		Version     = 6,
		MAX         = 7
	};

	/**
	 * Enum HDMain.EHDFilterRuleComparisonOp
	 */
	enum class EHDFilterRuleComparisonOp : uint8_t
	{
		EqualTo    = 0,
		NotEqualTo = 1,
		MAX        = 2
	};

	/**
	 * Enum HDMain.EHDFilterRuleBehavior
	 */
	enum class EHDFilterRuleBehavior : uint8_t
	{
		Show     = 0,
		Hide     = 1,
		OnlyShow = 2,
		MAX      = 3
	};

	/**
	 * Enum HDMain.EHDUICharacterStanceState
	 */
	enum class EHDUICharacterStanceState : uint8_t
	{
		Stand       = 0,
		StandAim    = 1,
		StandMount  = 2,
		Sprint      = 3,
		Crouch      = 4,
		CrouchAim   = 5,
		CrouchMount = 6,
		Prone       = 7,
		MAX         = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HDMain.HDAIItemData
	 * Size -> 0x0008
	 */
	struct FHDAIItemData
	{
	public:
		ESpecificItemType                                          SpecificType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5KW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InventoryIndex;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDAISpecificItemTypeAttackData
	 * Size -> 0x002C
	 */
	struct FHDAISpecificItemTypeAttackData
	{
	public:
		float                                                      AttackRateMin;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackRateMax;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BurstAttackProbability;                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BurstAttackNumberMin;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BurstAttackNumberMax;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponStopFireTimeMin;                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponStopFireTimeMax;                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AfterEquipCooldownTime;                                  // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpecialtyItemUseTimeLimit;                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AfterSpecialtyItemUsedTimeLimit;                         // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeaponMovementFire : 1;                                 // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4C3W[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDAIMasterNavPoint
	 * Size -> 0x0010
	 */
	struct FHDAIMasterNavPoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToNext;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.AICharacterVocalProfile
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FAICharacterVocalProfile : public FTableRowBase
	{
	public:
		TArray<class USoundBase*>                                  ContactSounds;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  LostContactSounds;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  ReloadingSounds;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  BeenHitSounds;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  UnderSuppressionSounds;                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  DeathSounds;                                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDGameRoundEndEventDetails
	 * Size -> 0x0010
	 */
	struct FHDGameRoundEndEventDetails
	{
	public:
		int32_t                                                    ElapsedTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDTeam                                                    WinningTeam;                                             // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SX4A[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BluforTickets;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OpforTickets;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.PTTKeyState
	 * Size -> 0x000C
	 */
	struct FPTTKeyState
	{
	public:
		unsigned char                                              UnknownData_OMAM[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDFilterRuleParams
	 * Size -> 0x0002
	 */
	struct FHDFilterRuleParams
	{
	public:
		EHDFilterRuleBehavior                                      Behavior;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDFilterRuleComparisonOp                                  ComparisonOp;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDItemEntry
	 * Size -> 0x0010
	 */
	struct FHDItemEntry
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotNum;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQ33[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDPrimaryAssetSearchPath
	 * Size -> 0x0018
	 */
	struct FHDPrimaryAssetSearchPath
	{
	public:
		EHDPrimaryAssetType                                        AssetType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9PR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Directory;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDPlatoonCreationParams
	 * Size -> 0x0010
	 */
	struct FHDPlatoonCreationParams
	{
	public:
		class UHDPlatoonInfo*                                      Info;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AHDTeamState*                                        OwnerTeam;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDSquadAssignmentInfo
	 * Size -> 0x0010
	 */
	struct FHDSquadAssignmentInfo
	{
	public:
		class AHDSquadState*                                       SquadState;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SquadAssignmentTime;                                     // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5KVQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.ControlPointRulesetSettings
	 * Size -> 0x0020
	 */
	struct FControlPointRulesetSettings
	{
	public:
		int32_t                                                    TicketsGainedForCapture;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsGainedForCaptureFromNeutral;                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnCapture;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForNeutralize;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForCapture;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForDefense;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsOnCaptureProgress;                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsOnDefenseProgress;                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.KillDeathRulesetSettings
	 * Size -> 0x0028
	 */
	struct FKillDeathRulesetSettings
	{
	public:
		int32_t                                                    TicketsGainedForKill;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnKill;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnTeamKill;                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnDeath;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnSuicide;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForKill;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForAssist;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForTeamKill;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForDeath;                                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForSuicide;                                        // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.TicketBleedRulesetSettings
	 * Size -> 0x000C
	 */
	struct FTicketBleedRulesetSettings
	{
	public:
		int32_t                                                    TicketBleed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MercyTicketBleed;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMercyTicketBleed : 1;                              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z09R[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDServerInfoFlags
	 * Size -> 0x0004
	 */
	struct FHDServerInfoFlags
	{
	public:
		bool                                                       bPasswordProtected;                                      // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDFPlayerWhitelistType                                     WhitelistType;                                           // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportersOnlyWhitelist;                                // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUtilizesUGC;                                            // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDServerInfo
	 * Size -> 0x00A0
	 */
	struct FHDServerInfo
	{
	public:
		unsigned char                                              UnknownData_QVIB[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameVersion;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerName;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VVM[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHDServerInfoFlags                                  ServerFlags;                                             // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOZ0[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ModName;                                                 // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     MapId;                                                   // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          MapBannerImg;                                            // 0x0080(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          MapThumbnailImg;                                         // 0x0088(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPlayers;                                          // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0094(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Ping;                                                    // 0x0098(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWT9[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDSquadCreationParams
	 * Size -> 0x0030
	 */
	struct FHDSquadCreationParams
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class AHDPlatoonState*                                     OwnerPlatoon;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AHDPlayerState*                                      SquadLeader;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocked : 1;                                             // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFO7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDUIWeaponAmmoState
	 * Size -> 0x0018
	 */
	struct FHDUIWeaponAmmoState
	{
	public:
		int32_t                                                    TotalFreeAmmo;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFreeAmmoClips;                                        // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentClipAmmo;                                         // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentClipMaxAmmo;                                      // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CurrentClipAmmoClass;                                    // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.UniqueNetIdVoipWrapper
	 * Size -> 0x0018
	 */
	struct FUniqueNetIdVoipWrapper
	{
	public:
		unsigned char                                              UnknownData_LS9S[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDAIGroupData
	 * Size -> 0x0028
	 */
	struct FHDAIGroupData
	{
	public:
		class AHDBaseCapturePoint*                                 CapturePoint;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDAICaptureMode                                           CaptureMode;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1S71[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GroupCenter;                                             // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FormationIndex;                                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDCharacterVariationData
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FHDCharacterVariationData : public FDFCharacterVariationData
	{	};

	/**
	 * ScriptStruct HDMain.HDPlatoonAttributes
	 * Size -> 0x0020
	 */
	struct FHDPlatoonAttributes
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamId;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V99Y[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
