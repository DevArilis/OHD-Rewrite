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
	 * Class HDMain.DeployMenu
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UDeployMenu : public UDFBaseMenu
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_ClassSelectionListing
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UDeployMenu_ClassSelectionListing : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_ClassSelectionPanel
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UDeployMenu_ClassSelectionPanel : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_PlatoonSquadListBase
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class UDeployMenu_PlatoonSquadListBase : public UUserWidget
	{
	public:
		class UPlatoonListEntry*                                   PlatoonData;                                             // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSortSquads;                                             // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L09A[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USquadListEntry*>                             CurrentSquads;                                           // 0x0240(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SquadPreRemoveFromPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* SquadToBeRemoved);
		void SquadAddedToPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* NewSquad);
		void SetupPlatoon(class UPlatoonListEntry* InPlatoonData);
		void RepopulatePlatoon();
		void OnPlatoonSet();
		class AHDPlatoonState* GetPlatoonStateFromData();
		void GenerateSquad(class USquadListEntry* SquadData);
		void DeconstructSquad(class USquadListEntry* RemovedSquadData, int32_t RemovedSquadIdx);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SpawnMapView
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SpawnMapView : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SpawnMinimap
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class UDeployMenu_SpawnMinimap : public UDFMinimap
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SquadListBase
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SquadListBase : public UUserWidget
	{
	public:
		class USquadListEntry*                                     SquadData;                                               // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSortSquadMembers;                                       // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AUS9[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USquadMemberInfo*>                            CurrentSquadMembers;                                     // 0x0240(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USquadMemberInfo*>                            MemberEntryWidgetsPendingRemoval;                        // 0x0250(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SquadNameChanged(class AHDSquadState* SourceSquad, const class FText& NewName, const class FText& PrevName);
		void SquadLockStateUpdated(class AHDSquadState* SourceSquad, bool bNewLocked);
		void SquadLeaderChanged(class AHDSquadState* SourceSquad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void SetupSquad(class USquadListEntry* InSquadData);
		void RepopulateSquad();
		void OnSquadSet();
		void OnSquadNameUpdated(const class FText& NewSquadName, const class FText& PreviousSquadName);
		void OnSquadLockStateUpdated(bool bNewLockedState);
		void OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void OnListRefresh();
		void MemberSquadInfoUpdated(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPS, const struct FHDSquadAssignmentInfo& MemberSQInfo);
		void MemberPreRemoveFromSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPSToBeRemoved);
		void MemberAddedToSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* NewMemberPS);
		class AHDSquadState* GetSquadStateFromData();
		class AHDPlatoonState* GetParentPlatoonStateFromData();
		void GenerateSquadMember(class USquadMemberInfo* MemberData);
		void DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SquadMemberListingBase
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SquadMemberListingBase : public UUserWidget
	{
	public:
		class USquadMemberInfo*                                    MemberData;                                              // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupMember(class USquadMemberInfo* InMemberData);
		void OnMemberSet();
		void OnMemberPlayerNameUpdated(const class FString& NewPlayerName);
		void MemberPlayerNameChanged(class APlayerState* PlayerState, const class FString& NewPlayerName);
		class AHDPlayerState* GetPlayerStateFromData();
		class AHDSquadState* GetParentSquadStateFromData();
		class AHDPlatoonState* GetParentPlatoonStateFromData();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SquadSelectionWidgetBase
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SquadSelectionWidgetBase : public UUserWidget
	{
	public:
		class AHDTeamState*                                        PlatoonTeamState;                                        // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSortPlatoons;                                           // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WHGS[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlatoonListEntry*>                           CurrentPlatoons;                                         // 0x0240(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupSquadSelection(class AHDTeamState* InPlatoonTeamState);
		void RepopulateSquadSelection();
		void PlatoonPreRemoveFromTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* PlatoonToBeRemoved);
		void PlatoonAddedToTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* NewPlatoon);
		void OnSquadSelectionSet();
		void GeneratePlatoon(class UPlatoonListEntry* PlatoonData);
		void DeconstructPlatoon(class UPlatoonListEntry* RemovedPlatoonData, int32_t RemovedPlatoonIdx);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIHandlerBase
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHDAIHandlerBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_4ZWD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDAIController*                                     Controller;                                              // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDGOAPComponent*                                    GOAPComponent;                                           // 0x0038(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZR9M[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDAIHandlerBase*                                    HandlerDuplicate;                                        // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIAimingHandler
	 * Size -> 0x00E8 (FullSize[0x0138] - InheritedSize[0x0050])
	 */
	class UHDAIAimingHandler : public UHDAIHandlerBase
	{
	public:
		float                                                      RefreshTargetRate;                                       // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewTargetStimulusStrengthThreshold;                      // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnContactStateChanged;                                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             CurrentTargetLocation;                                   // 0x0068(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentTargetStimulusStrength;                           // 0x0074(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentTargetStimulusAge;                                // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RefreshTargetTime;                                       // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             AimingTargetPoint;                                       // 0x0080(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ProjectileAimingTossVelocity;                            // 0x008C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAINavigationHandler*                              NavigationHandler;                                       // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIBehaviorHandler*                                BehaviorHandler;                                         // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x00B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NextFocalPointTime;                                      // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointIntervalMin;                               // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointIntervalMax;                               // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointAngleMin;                                  // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointAngleMax;                                  // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointDistanceMin;                               // 0x00D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointDistanceMax;                               // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            RotationRate;                                            // 0x00DC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            DefaultRotationRate;                                     // 0x00E8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      WeaponAimingDistance;                                    // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponMinConeOfFireAngleDegrees;                         // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponMaxConeOfFireAngleDegrees;                         // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NoEnemyFocalPoint;                                       // 0x0100(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableNoEnemyLookAround;                                // 0x010C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAimingAtTarget : 1;                                     // 0x010D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IY1V[0x2];                                   // 0x010E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectileAimingTime;                                    // 0x0110(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProjectileAimingRate;                                    // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProjectileAimingRateVariation;                           // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimingAtTargetAngleThreshold;                            // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimingSpeedAngleNear;                                    // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimingSpeedAngleFar;                                     // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimingSpeed;                                             // 0x0128(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimingSpeedNear;                                         // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimingSpeedFar;                                          // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimingSpeedMultiplier;                                   // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool SuggestProjectileVelocity(struct FVector* TossVelocity, const struct FVector& StartLocation, const struct FVector& EndLocation, float TossSpeed);
		bool ShouldChangeNoEnemyFocalPoint();
		void SetEnableNoEnemyLookAround(bool bInEnableNoEnemyLookAround);
		void MakeNoEnemyFocalPoint();
		bool IsCandidateTarget(class AActor* ActorToCheck);
		bool IsAimingAtTarget();
		struct FVector GetNoEnemyFocalPoint();
		bool GetIsNewTargetMoreRelevant(float OldTargetStrength, float NewTargetStrength);
		bool GetEnableNoEnemyLookAround();
		void GetActorStimulusData(class AActor* InActor, struct FVector* OutLocation, float* OutStrength, float* OutAge);
		void EstablishNewTargetFromPerception(class UClass* SenseToUse);
		bool CheckForTarget(class AActor* TargetActor, const struct FAIStimulus& Stimulus);
		void CalcAimingDirection();
		void AimAtCurrentTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIBehaviorHandler
	 * Size -> 0x00F0 (FullSize[0x0140] - InheritedSize[0x0050])
	 */
	class UHDAIBehaviorHandler : public UHDAIHandlerBase
	{
	public:
		class FScriptMulticastDelegate                             OnSafeBehaviorStart;                                     // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAwareBehaviorStart;                                    // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCombatBehaviorStart;                                   // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDangerBehaviorStart;                                   // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EHDAIThreatLevel                                           CurrentThreatLevel;                                      // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6USU[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDAINavigationHandler*                              NavigationHandler;                                       // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIAimingHandler*                                  AimingHandler;                                           // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SuppressionThreatLevel;                                  // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuppressionLevelPerShot;                                 // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuppressionThreatThreshold;                              // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuppressionFalloff;                                      // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuppressionTime;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuppressionFallingOffDelay;                              // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitThreatLevel;                                     // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeingHitThreatThreshold;                                 // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitFalloff;                                         // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitThreatLevelSpikeProbability;                     // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitThreatLevelSpikeAmount;                          // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitFallingOffDelay;                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitTime;                                            // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L4FP[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsSprinting : 1;                                        // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SD26[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintTimeMin;                                           // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintTimeMax;                                           // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintTimeEnd;                                           // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThresholdMin;                               // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThresholdMax;                               // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThreshold;                                  // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaMin;                                        // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintLookAroundTimeMin;                                 // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintLookAroundTimeMax;                                 // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintLookAroundTimeEnd;                                 // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCombatCanCrouch : 1;                                    // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCombatCanProne : 1;                                     // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTLR[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CombatSuppressionThresholdCrouching;                     // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CombatSuppressionThresholdProning;                       // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDangerCanCrouch : 1;                                    // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDangerCanProne : 1;                                     // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B8D[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DangerSuppressionThresholdCrouching;                     // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DangerSuppressionThresholdProning;                       // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DangerHealthThresholdCrouching;                          // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DangerHealthThresholdProning;                            // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_253V[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		void StartSafeBehavior();
		void StartDangerBehavior();
		void StartCombatBehavior();
		void StartAwareBehavior();
		void ReceiveSuppression();
		void ReceiveHitDamage();
		void HandleSafeBehavior();
		void HandleDangerBehavior();
		void HandleCombatBehavior();
		void HandleBehaviorStates();
		void HandleAwareBehavior();
		bool GetIsUnderSuppression();
		bool GetIsBeingHit();
		void DetermineThreatLevel();
		void CalcThreatLevels();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAICaptureHandler
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UHDAICaptureHandler : public UHDAIHandlerBase
	{
	public:
		class AHDBaseCapturePoint*                                 CurrentCP;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDAICaptureMode                                           CurrentCaptureMode;                                      // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9AMG[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AICaptureModePreference;                                 // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoUpdateNavHandlerDesiredLocation : 1;                // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TPNH[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		bool ShouldEstablishNewControlPoint();
		void SetCurrentCP(class AHDBaseCapturePoint* InCurrentCP);
		void SetCurrentCaptureMode(EHDAICaptureMode NewCaptureMode);
		class AActor* GetStartSpotClosestToControlPoint(class AActor* InCapturePoint);
		struct FVector GetCurrentCPLocation();
		bool FindControlPointToCapture(class AHDBaseCapturePoint** OutFoundCP);
		class AHDBaseCapturePoint* FindControlPointRandom(TArray<class AHDBaseCapturePoint*> CPs);
		class AHDBaseCapturePoint* FindControlPointClosestToPawn(TArray<class AHDBaseCapturePoint*> CPs);
		TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV3(EHDAICaptureMode InCaptureMode);
		TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV2(EHDAICaptureMode InCaptureMode);
		TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV1(EHDAICaptureMode InCaptureMode);
		TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfType(EHDAICaptureMode InCaptureMode);
		bool EstablishNewControlPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAICombatHandler
	 * Size -> 0x0188 (FullSize[0x01D8] - InheritedSize[0x0050])
	 */
	class UHDAICombatHandler : public UHDAIHandlerBase
	{
	public:
		class UHDAIBehaviorHandler*                                BehaviorHandler;                                         // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UnknownData_B85X : 1;                                    // 0x0060(0x0001) BIT_FIELD (PADDING)
		bool                                                       bWeaponAutoReload : 1;                                   // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWeaponMovementFire : 1;                                 // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWeaponHasAmmo : 1;                                      // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5UUO[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Enemy;                                                   // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponNextFireTime;                                      // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AttackRateMin;                                           // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AttackRateMax;                                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BurstAttackProbability;                                  // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BurstAttackNumberMin;                                    // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BurstAttackNumberMax;                                    // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    CurrentBurstAttackNumber;                                // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponStopFireTime;                                      // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponStopFireTimeMin;                                   // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponStopFireTimeMax;                                   // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWeaponInfiniteAmmo : 1;                                 // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeaponInfiniteClipAmmo : 1;                             // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreFriendlySuppression : 1;                          // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreFriendlyHits : 1;                                 // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K870[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReceiveSuppression;                                    // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReceiveHitDamage;                                      // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             SuppressionDirection;                                    // 0x00C0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SuppressionOriginDistance;                               // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SuppressionOrigin;                                       // 0x00D0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NOEW[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReload;                                                // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UHDKit*                                              CurrentKit;                                              // 0x00F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESpecificItemType                                          CurrentSpecificItemType;                                 // 0x00F8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NIEE[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHDAIItemData>                               EquipmentReferences;                                     // 0x0100(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EquipmentHandlingTime;                                   // 0x0110(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EquipmentHandlingRate;                                   // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EquipmentHandlingRateVariation;                          // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSpecialtyItemInUse : 1;                                 // 0x011C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bProjectileWeaponInUse : 1;                              // 0x011C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ISRT[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AfterEquipCooldownTime;                                  // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpecialtyItemUseTimeLimit;                               // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AfterSpecialtyItemUsedTimeLimit;                         // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1NDC[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ESpecificItemType, struct FHDAISpecificItemTypeAttackData> ItemAttackData;                                          // 0x0130(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FHDAISpecificItemTypeAttackData                     DefaultItemAttackData;                                   // 0x0180(0x002C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      GrenadeLauncherRangeMin;                                 // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrenadeLauncherRangeMax;                                 // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrenadeLauncherChance;                                   // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RocketLauncherRangeMin;                                  // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RocketLauncherRangeMax;                                  // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RocketLauncherChance;                                    // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FragGrenadeRangeMin;                                     // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FragGrenadeRangeMax;                                     // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FragGrenadeChance;                                       // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmokeGrenadeRangeMin;                                    // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmokeGrenadeChance;                                      // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateEquipmentHandling();
		void UpdateAttackParameters();
		void StopUsingSpecialtyItem();
		void StopAttack();
		void StartAttack();
		void SetWeaponMovementFireEnabled(bool bInWeaponMovementFire);
		void SetWeaponAutoReloadEnabled(bool bInWeaponAutoReload);
		void SetupEquipmentReferences();
		void SetNextAttackTime();
		void SetItemAttackParameters(const struct FHDAISpecificItemTypeAttackData& InAttackData);
		void SetEnemy(class AActor* NewEnemy);
		void Reload(class AHDBaseWeapon* InWeapon);
		void ReceiveSuppression(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void ReceiveHitDamage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void PauseAttack();
		bool IsFiring();
		bool HasValidEnemy(bool bAliveCheck);
		bool HasAmmoLoaded();
		bool CanAttackEnemy(bool bCheckFireTime, bool bIgnoreAmmoReloadCheck);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIController
	 * Size -> 0x0030 (FullSize[0x0360] - InheritedSize[0x0330])
	 */
	class AHDAIController : public ADFBaseAIController
	{
	public:
		class UHDPlayerComponent*                                  PlayerComponent;                                         // 0x0330(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDGOAPComponent*                                    GOAPComponent;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanJoinSquads : 1;                                      // 0x0340(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanJoinPlayerSquads : 1;                                // 0x0340(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCreateSquads : 1;                                    // 0x0340(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUSF[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfAILedSquads;                                  // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfSquadMembers;                                 // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfAISquadMembers;                               // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFactionSpecifiedSquadLeaderKit : 1;                  // 0x0350(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFactionSpecifiedSquadMemberKit : 1;                  // 0x0350(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWXU[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FocusActorPerceivedLocation;                             // 0x0354(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool JoinOrCreateSquad();
		class UClass* GetStartPawnClass();
		class UHDKit* GetFactionSpecifiedSquadMemberKit();
		class UHDKit* GetFactionSpecifiedSquadLeaderKit();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIGroupBehaviorHandler
	 * Size -> 0x0110 (FullSize[0x0160] - InheritedSize[0x0050])
	 */
	class UHDAIGroupBehaviorHandler : public UHDAIHandlerBase
	{
	public:
		class UHDAINavigationHandler*                              NavigationHandler;                                       // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAICaptureHandler*                                 CaptureHandler;                                          // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerState*                                      PlayerState;                                             // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsGroupLeader : 1;                                      // 0x0068(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsGroupMember : 1;                                      // 0x0068(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bGroupDataIsSet : 1;                                     // 0x0068(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bGroupDataIsSynchronized : 1;                            // 0x0068(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsRespawned : 1;                                        // 0x0068(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLeaderIsHuman : 1;                                      // 0x0068(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZKFL[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GroupFormationRadius;                                    // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroupFormationSlotRadius;                                // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroupFormationSlotDistance;                              // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     FormationSlots;                                          // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FormationIndex;                                          // 0x0088(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaitingTimePerGroupMember;                               // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaitingGroupRadiusMultiplier;                            // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumValidGroupMembers;                                    // 0x0094(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumGroupMembersOnPoint;                                  // 0x0098(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumGroupMembersKIA;                                      // 0x009C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWaitingForGroupMembers : 1;                             // 0x00A0(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2SVU[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitingForMembersStartTime;                              // 0x00A4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsGroupWaiting : 1;                                     // 0x00A8(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JLZ9[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GroupWaitTimeEnd;                                        // 0x00AC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GroupWaitTimeDuration;                                   // 0x00B0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinNumGroupMembersOnPoint;                               // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdvanceWaitTimeDurationMin;                              // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdvanceWaitTimeDurationMax;                              // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PatrolWaitTimeDurationMin;                               // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PatrolWaitTimeDurationMax;                               // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGroupRetreating : 1;                                  // 0x00C8(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bGroupRetreatOnLeaderKIA : 1;                            // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5M4[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GroupRetreatMemberPercentageThreshold;                   // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFollowHumanLeader : 1;                            // 0x00D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI5X[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FollowHumanLeaderInterval;                               // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FollowHumanLeaderVelocityMultiplier;                     // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FollowHumanLeaderAcceptanceRadius;                       // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FollowHumanLeaderRange;                                  // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FollowHumanLeaderPatrolTimeThreshold;                    // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FollowHumanLeaderTime;                                   // 0x00E8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FollowHumanLeaderPatrolTime;                             // 0x00EC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             FollowHumanLeaderLastKnownLocation;                      // 0x00F0(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9N9E[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHDAIMasterNavPoint>                         MasterNavPath;                                           // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MasterNavPathLength;                                     // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NavPathSegmentLengthMin;                                 // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NavPathSegmentLengthMax;                                 // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompensatePartialPathForGroupFormationRadius : 1;       // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5S2[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PartialPathGroupRadiusMultiplier;                        // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainingNavPathLength;                                  // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NavPointIndex;                                           // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPawnIsAtTheEndOfPath : 1;                               // 0x012C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTD2[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GroupCenterNavPoint;                                     // 0x0130(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetNavPoint;                                          // 0x013C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NavPointRandomRange;                                     // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveToFailedTime;                                        // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MoveToFailedTimeDelay;                                   // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMovetoFailedIsBeingHandled : 1;                         // 0x0154(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HHV5[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDBaseCapturePoint*                                 SavedCapturePoint;                                       // 0x0158(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StopRetreat();
		void StartRetreat();
		void StartGroupWaitTime();
		bool ShouldRetreat();
		void SetupGroupData();
		void SetSquadParams();
		void SetCurrentDestination();
		bool RequestGroupDataSync();
		bool STATIC_PointsAreEqualXY(const struct FVector& Vector1, const struct FVector& Vector2, float Tolerance);
		void OnOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void OnMoveToFailed();
		void MakeNewMasterNavPath(const struct FVector& InStart, const struct FVector& InDestination);
		void MakeNavPathSegment();
		bool IsGroupWaitTimeOver();
		void HandleMoveToFailed();
		struct FHDAIGroupData GetGroupData();
		void FollowHumanLeader();
		void BroadcastGroupData();
		bool AllGroupMembersAreOnPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAINavigationHandler
	 * Size -> 0x0100 (FullSize[0x0150] - InheritedSize[0x0050])
	 */
	class UHDAINavigationHandler : public UHDAIHandlerBase
	{
	public:
		class FScriptMulticastDelegate                             OnMoveToLocationFailed;                                  // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UNavigationSystemV1*                                 NavSystem;                                               // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMoving;                                                 // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I9FI[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DesiredLocation;                                         // 0x006C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8USW[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetNavPointIndex;                                     // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TargetNavPoint;                                          // 0x008C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AcceptanceRadius;                                        // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRandomizeNavPoints;                                     // 0x009C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3YA[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavPointRandomizationRadius;                             // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NavPointRandomizationOffset;                             // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckCheckTime;                                          // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckCheckInterval;                                      // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckCheckDistance;                                      // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             StuckCheckLastLocation;                                  // 0x00B4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableBoidsSteering : 1;                                // 0x00C0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P0CB[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SteeringMass;                                            // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringMaxForce;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SteeringVector;                                          // 0x00CC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringMovementSpeedModifier;                           // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FollowPathAcceptanceRadius;                              // 0x00DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ArrivalSlowDownRadius;                                   // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             FollowPathVector;                                        // 0x00E4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringNeighborhoodRadius;                              // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O0VP[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      SteeringNeighborhood;                                    // 0x00F8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SeparationStrength;                                      // 0x0108(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InternalSeparationStrength;                              // 0x010C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CohesionStrength;                                        // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SeparationVector;                                        // 0x0114(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             CohesionVector;                                          // 0x0120(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ObstacleAvoidanceTraceLength;                            // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ObstacleAvoidanceStrength;                               // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             ObstacleAvoidanceVector;                                 // 0x0134(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableRVOAvoidance : 1;                                 // 0x0140(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3IBI[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RVOAvoidanceConsiderationRadius;                         // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RVOAvoidanceWeight;                                      // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C41R[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetupRVOAvoidance();
		void SetupNextTargetNavPoint();
		void SetDesiredLocation(const struct FVector& InDesiredLocation);
		void MoveToLocationFailed();
		bool MakePathToDesiredLocation();
		bool IsPawnAtDestination();
		bool IsNavigationPossible();
		bool IsNavDataValidForAllControlPoints();
		void FixVectorValuesNaN(struct FVector* InVector, bool bRandomize);
		bool FindNewControlPointNavLocation(class AHDBaseCapturePoint* CP);
		bool FindNavLocationInsideControlPoint(class AHDBaseCapturePoint* CP, struct FVector* OutNavLoc);
		bool CheckPawnStuckStatus();
		struct FVector CalcSeparationVector();
		struct FVector CalcObstacleAvoidanceVector();
		struct FVector CalcCohesionVector();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIPerceptionComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UHDAIPerceptionComponent : public UActorComponent
	{
	public:
		class AHDPlayerCharacter*                                  OwnerPlayer;                                             // 0x00B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAdvancedLineTracing : 1;                          // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJPS[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObserverSightRadius;                                     // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ObserverLoseSightRadius;                                 // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToObserverRangeFar;                              // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToObserverRangeNear;                             // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComplexSightLineTrace : 1;                              // 0x00CC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85UZ[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShoulderLocationFactor;                                  // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeFactorWeight;                                       // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StanceFactorWeight;                                      // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementFactorWeight;                                    // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StanceFactorMaxValue;                                    // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StanceFactorMinValue;                                    // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OwnerMaxMovementSpeed;                                   // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OwnerDefaultHalfHeight;                                  // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool CanBeSeenFrom(const struct FVector& ObserverLocation, struct FVector* OutSeenLocation, int32_t* NumberOfLoSChecksPerformed, float* OutSightStrength, class AActor* IgnoreActor);
		float CalcSightStrength(float Distance);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIVocalHandler
	 * Size -> 0x00C8 (FullSize[0x0118] - InheritedSize[0x0050])
	 */
	class UHDAIVocalHandler : public UHDAIHandlerBase
	{
	public:
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableVocalization : 1;                                 // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GW5P[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAICharacterVocalProfile                            CurrentProfile;                                          // 0x0060(0x0068) Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		bool                                                       bEnableTimeLimitNotify : 1;                              // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFactionOnlyTimeLimit : 1;                               // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNQW[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLimitNotifyRange;                                    // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPitchMultiplier;                                      // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPitchMultiplier;                                      // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnySoundTimeLimit;                                       // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactTimeLimit;                                        // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LostContactTimeLimit;                                    // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReloadingTimeLimit;                                      // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeenHitTimeLimit;                                        // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnderSuppressionTimeLimit;                               // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeathTimeLimit;                                          // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NextAnySoundTime;                                        // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextContactTime;                                         // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextLostContactTime;                                     // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextReloadingTime;                                       // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextBeenHitTime;                                         // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextUnderSuppressionTime;                                // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextDeathTime;                                           // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9BBF[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)

	public:
		void VocalizeSuppression();
		void VocalizeReload();
		void VocalizeContact(bool bHasContact);
		void VocalizeBeenHit();
		void Vocalize(EHDAIVocalizationType InVocalType);
		void SetTimeLimit(EHDAIVocalizationType InVocalType);
		void SetPitchMultiplier(float InPitchMultiplier);
		void RandomizePitchMultiplier();
		void PlayVocalSound(EHDAIVocalizationType InVocalType);
		void NotifySurroundingCharacters(EHDAIVocalizationType InVocalType);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAssetManager
	 * Size -> 0x0000 (FullSize[0x0440] - InheritedSize[0x0440])
	 */
	class UHDAssetManager : public UDFAssetManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseCapturePoint
	 * Size -> 0x0130 (FullSize[0x0350] - InheritedSize[0x0220])
	 */
	class AHDBaseCapturePoint : public AActor
	{
	public:
		unsigned char                                              UnknownData_YTRD[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    SphereCollision;                                         // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDFPOIComponent*                                     POI;                                                     // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavigationInvokerComponent*                         NavigationInvoker;                                       // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bActive : 1;                                             // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLocked : 1;                                             // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bContested : 1;                                          // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCaptured : 1;                                           // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCapturedOnce : 1;                                       // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1ER3[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CaptureProgress;                                         // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ActiveRoute;                                             // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AMB5[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UChildActorComponent*>                        SpawnPoints;                                             // 0x0260(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCaptureProgressUpdated;                                // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EHDTeam                                                    StartingTeam;                                            // 0x0280(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V7V1[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CaptureDisplayName;                                      // 0x0288(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		float                                                      CaptureTimerRate;                                        // 0x02A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CaptureSpeed;                                            // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CaptureRadius;                                           // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinPlayersToCapture;                                     // 0x02AC(0x0004) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnforceMinPlayersToCaptureWithSmallerPlayerCount : 1;   // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, GlobalConfig, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bScaleCaptureSpeed : 1;                                  // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRecapturable : 1;                                       // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWinOnCapture : 1;                                       // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bProvideSpawnPoint : 1;                                  // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bProvideSpawnPointWhenUnderAttack : 1;                   // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K52Y[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PossibleRoutes[0x50];                                    // 0x02B8(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    Tier;                                                    // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GTIN[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  SpawnPointTransforms;                                    // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHDTeam                                                    OwningTeam;                                              // 0x0320(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHDTeam                                                    PrevNonNeutralOwningTeam;                                // 0x0321(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F4PO[0x6];                                   // 0x0322(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOwningTeamUpdate;                                      // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bCapturableByTeamRed : 1;                                // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCapturableByTeamBlue : 1;                               // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8PA0[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTeamCaptureStatusUpdate;                               // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Unlock();
		void SetActiveRoute(int32_t NewActiveRoute);
		void SetActive(bool bNewActive);
		void ReceiveOnTeamCaptureStatusUpdated();
		void ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam);
		void ReceiveOnLocked(bool bNewLocked);
		void ReceiveOnCaptureProgress(bool bNewContested);
		void ReceiveOnActive(bool bNewActive);
		void OnRep_OwningTeam(EHDTeam LastOwningTeam);
		void OnRep_Locked();
		void OnRep_Contested();
		void OnRep_CaptureProgress();
		void OnRep_CapturableByTeam();
		void OnRep_Active();
		void OnOwningTeamUpdated(EHDTeam LastOwningTeam);
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Lock();
		bool IsCapturableByTeam(EHDTeam CaptureTeam);
		void GetOverlappingCharactersByTeam(TArray<class ADFBaseCharacter*>* OverlappingCharsRed, TArray<class ADFBaseCharacter*>* OverlappingCharsBlue);
		EHDControlPointObjectiveType GetObjectiveTypeForTeam(EHDTeam ObjTeam);
		int32_t GetMinPlayersRequiredForCaptureTeam(EHDTeam CaptureTeam);
		class AActor* ChoosePlayerStart(class AHDPlayerController* Player);
		bool CanRestartPlayer(class AController* Player);
		bool CanCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseGameMode
	 * Size -> 0x0090 (FullSize[0x0488] - InheritedSize[0x03F8])
	 */
	class AHDBaseGameMode : public ADFBaseGameMode
	{
	public:
		class UClass*                                              ScoreboardMenuClass;                                     // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHDGameRoundEndEventDetails                         RoundEndEventDetails;                                    // 0x0400(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bDisablePlayerSpawnKitRestrictions : 1;                  // 0x0410(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTickets : 1;                                         // 0x0410(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4UIM[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDTeamDefinition*                                   DefaultBluforTeamDefinition;                             // 0x0418(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   DefaultOpforTeamDefinition;                              // 0x0420(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   BluforTeamDefinition;                                    // 0x0428(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   OpforTeamDefinition;                                     // 0x0430(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRandomPlayerTeamBalance : 1;                            // 0x0438(0x0001) BIT_FIELD Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S6J1[0x37];                                  // 0x0439(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHDPlatoonInfo*>                              PlatoonInfos;                                            // 0x0470(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PlatoonStateClass;                                       // 0x0480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void RemoveOpforBots(int32_t Num);
		void RemoveBluforBots(int32_t Num);
		bool PlayerCanRestartAtPlayerStart(class AController* Player, class AActor* StartSpot, class UDFLoadout* StartLoadout);
		void AddOpforBots(int32_t Num);
		void AddBluforBots(int32_t Num);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBasePickup_Kit
	 * Size -> 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
	 */
	class AHDBasePickup_Kit : public ADFBasePickup
	{
	public:
		class UDFInventoryComponent*                               Inventory;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UPrimitiveComponent*>                         KitVisuals;                                              // 0x0260(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDKit*                                              KitLoadout;                                              // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseProjectile
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class AHDBaseProjectile : public ADFBaseProjectile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseWeapon
	 * Size -> 0x0018 (FullSize[0x0858] - InheritedSize[0x0840])
	 */
	class AHDBaseWeapon : public ADFBaseGun_Projectile
	{
	public:
		class UTexture2D*                                          DisplayIcon;                                             // 0x0840(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          DisplayEquipmentSymbol;                                  // 0x0848(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseFreeAim : 1;                                         // 0x0850(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSelectable : 1;                                         // 0x0850(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHideFireModeIndicator : 1;                              // 0x0850(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGSK[0x3];                                   // 0x0851(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmmoReplenishmentDelay;                                  // 0x0854(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsSelectableEquipment();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerController
	 * Size -> 0x00A8 (FullSize[0x06A0] - InheritedSize[0x05F8])
	 */
	class AHDPlayerController : public ADFBasePlayerController
	{
	public:
		class AHDPlayerCharacter*                                  HDCharacter;                                             // 0x05F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDPlayerComponent*                                  PlayerComponent;                                         // 0x0600(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, struct FPTTKeyState>                     PushToTalkKeyStates;                                     // 0x0608(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4WGM[0x4];                                   // 0x0658(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TextCommsFormatName;                                     // 0x065C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                TeamLocalVoipCommChannelGroupName;                       // 0x0664(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SquadVoipCommChannelGroupName;                           // 0x066C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                CommandVoipCommChannelGroupName;                         // 0x0674(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M9YS[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFPlayerCommsComponent*                             CachedPlayerCommsComp;                                   // 0x0680(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              VictoryMenuClass;                                        // 0x0688(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVictoryMenu*                                        VictoryMenu;                                             // 0x0690(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MZK8[0x8];                                   // 0x0698(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnloadVictoryMenu();
		void TeamTalk();
		void Talk();
		void StopTalkingOverChannelIfActive(const class FName& TalkStopChannelName);
		void StopTalkingOverChannelGroupIfActive(const class FName& TalkStopGroupName);
		void StopTalkingOnActiveChannels();
		void StartTalkingOverChannelGroup(const class FName& TalkStartGroupName);
		void StartTalkingOverChannel(const class FName& TalkStartChannelName);
		void ServerSwitchTeam();
		void ServerSpawnVehicle();
		void ServerRestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout);
		void ServerPickTeam(EHDTeam DesiredTeam);
		void ServerCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
		void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
		void OnShowScoreboardReleased();
		void OnShowScoreboardPressed();
		void OnPlayerSpawnTimerElapsed();
		void OnPauseMenu();
		void LoadVictoryMenu(const struct FHDGameRoundEndEventDetails& RoundDetails, bool bWinner);
		bool IsTalkingOverChannelName(const class FName& TalkChannelName);
		bool IsTalkingOverChannelGroup(const class FName& TalkGroupName);
		bool IsTalkingOverChannel(class UDFCommChannel* TalkChannel);
		bool IsTalking(bool bIncludeWantsToTalk);
		bool IsInVehicle();
		bool IsIdleSwayAllowed();
		class UDFCommChannel* GetTalkChannel();
		class UDFPlayerCommsComponent* GetPlayerCommsComponent();
		void ClientRoundEnd(const struct FHDGameRoundEndEventDetails& RoundDetails, bool bIsWinner);
		void ClientLoadTeamData(TArray<class FString> FactionAssetPaths);
		void ClientCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
		bool CanTalkOverChannel(const class FName& TalkChannelName);
		void Auth_SpawnVehicle();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDCheatManager
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UHDCheatManager : public UDFCheatManager
	{
	public:
		unsigned char                                              UnknownData_9AC7[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		void ToggleIdleSway();
		void ToggleFreeAimADS();
		void ToggleFreeAim();
		void SpawnVehicle();
		void SetMaxFreeAimYawADS(float NewYaw);
		void SetMaxFreeAimYaw(float NewYaw);
		void SetMaxFreeAimPitchADS(float NewPitch);
		void SetMaxFreeAimPitch(float NewPitch);
		void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
		void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDFactionInfo
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UHDFactionInfo : public UDFFactionInfo
	{
	public:
		unsigned char                                              Kits[0x50];                                              // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGame_AdvanceAndSecure
	 * Size -> 0x0038 (FullSize[0x04C0] - InheritedSize[0x0488])
	 */
	class AHDGame_AdvanceAndSecure : public AHDBaseGameMode
	{
	public:
		int32_t                                                    StartingBlueTier;                                        // 0x0488(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartingRedTier;                                         // 0x048C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveRoute;                                             // 0x0490(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentBlueCaptureTier;                                  // 0x0494(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentRedCaptureTier;                                   // 0x0498(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlueIncreasesTier : 1;                                  // 0x049C(0x0001) BIT_FIELD Edit, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WADA[0x23];                                  // 0x049D(0x0023) MISSED OFFSET (PADDING)

	public:
		int32_t GetCurrentRedCaptureTier();
		int32_t GetCurrentBlueCaptureTier();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGame_TeamDeathMatch
	 * Size -> 0x0000 (FullSize[0x0488] - InheritedSize[0x0488])
	 */
	class AHDGame_TeamDeathMatch : public AHDBaseGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameEngine
	 * Size -> 0x0000 (FullSize[0x0E30] - InheritedSize[0x0E30])
	 */
	class UHDGameEngine : public UDFGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameInstance
	 * Size -> 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
	 */
	class UHDGameInstance : public UTBGameInstance
	{
	public:
		class UHDScoreboardBase*                                   ScoreboardMenu;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UnloadScoreboardMenu();
		bool STATIC_OwnsAppBP(int64_t AppID);
		void LoadScoreboardMenu();
		bool STATIC_HasModsLoaded();
		bool STATIC_HasDLCBP(int64_t DLCAppID);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameModeDefinition
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UHDGameModeDefinition : public UDFGameModeDefinition
	{
	public:
		unsigned char                                              GameModeClass[0x28];                                     // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameModsProjectPolicies
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDGameModsProjectPolicies : public UHDCoreDefaultUGCProjectPolicies
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameProjectBuildSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDGameProjectBuildSettings : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsDemoBuild();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameRulesetBase
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UHDGameRulesetBase : public UDFGameRulesetBase
	{
	public:
		bool                                                       bUseTickets : 1;                                         // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1K9Y[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32_t TicketsToRemove);
		void GiveTicketsToTeam(EHDTeam TicketTeam, int32_t TicketsToAdd);
		class AHDGameState* GetHDGameState();
		class AHDBaseGameMode* GetHDGameMode();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameSession
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class AHDGameSession : public ADFGameSession
	{
	public:
		bool                                                       bSupportersOnlyWhitelist;                                // 0x0270(0x0001) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W41A[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameState
	 * Size -> 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
	 */
	class AHDGameState : public ADFBaseGameState
	{
	public:
		float                                                      ReplicatedMinRespawnDelay;                               // 0x0300(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bReplicatedDisableSpawnKitRestrictions : 1;              // 0x0304(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3A11[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BluforTickets;                                           // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    OpforTickets;                                            // 0x030C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AHDTeamState*                                        BluforTeamState;                                         // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AHDTeamState*                                        OpforTeamState;                                          // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32_t TicketsToRemove);
		bool IsGameUsingTickets();
		bool IsGameUsingPlayerSpawnKitRestrictions(class AController* Controller);
		void GiveTicketsToTeam(EHDTeam TicketTeam, int32_t TicketsToAdd);
		int32_t GetNumPlayersOnTeam(EHDTeam TeamToCheck);
		void ClearTickets();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPActionBase
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPActionBase : public UGOAPAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_AttackEnemy
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_AttackEnemy : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_CaptureControlPoint
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_CaptureControlPoint : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_DefendControlPoint
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_DefendControlPoint : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_LoadWeapon
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_LoadWeapon : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_MoveToDesiredLocation
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_MoveToDesiredLocation : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_MoveToLocation
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_MoveToLocation : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_MoveToOrganic
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_MoveToOrganic : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPComponent
	 * Size -> 0x0070 (FullSize[0x01D8] - InheritedSize[0x0168])
	 */
	class UHDGOAPComponent : public UGOAPComponent
	{
	public:
		class AHDAIController*                                     HDAIOwner;                                               // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerCharacter*                                  HDAICharOwner;                                           // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UHDAIHandlerBase*>                            AIHandlers;                                              // 0x0178(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAINavigationHandler*                              NavigationHandler;                                       // 0x0188(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAICaptureHandler*                                 CaptureHandler;                                          // 0x0190(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x0198(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIBehaviorHandler*                                BehaviorHandler;                                         // 0x01A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIGroupBehaviorHandler*                           GroupBehaviorHandler;                                    // 0x01A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIAimingHandler*                                  AimingHandler;                                           // 0x01B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x01B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E7YP[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecisionFrequency;                                       // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7GJG[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (PADDING)

	public:
		void TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void ResetPlanningTimer();
		bool IsAIActiveInWorld();
		bool IsAIActive();
		class UHDAIHandlerBase* GetAIHandler(class UClass* HandlerClass);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPGoalBase
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UHDGOAPGoalBase : public UGOAPGoal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPGoal_CaptureControlPoint
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UHDGOAPGoal_CaptureControlPoint : public UHDGOAPGoalBase
	{
	public:
		class AHDBaseCapturePoint*                                 CPToCaptureCurrent;                                      // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDBaseCapturePoint*                                 CPToCapturePending;                                      // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPGoal_EliminateEnemy
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UHDGOAPGoal_EliminateEnemy : public UHDGOAPGoalBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDHUD
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class AHDHUD : public AHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDServerListView
	 * Size -> 0x0058 (FullSize[0x03C0] - InheritedSize[0x0368])
	 */
	class UHDServerListView : public UListView
	{
	public:
		unsigned char                                              UnknownData_4Q7K[0x4];                                   // 0x0368(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bItemSortAscending;                                      // 0x036C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDServerListSortBy                                        ItemSortBy;                                              // 0x036D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RGVP[0x2];                                   // 0x036E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FHDFilterRuleParams>            ItemFilterRules;                                         // 0x0370(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate

	public:
		void SortListItems(bool bSortAscending, EHDServerListSortBy SortBy);
		void SetItemSortBy(EHDServerListSortBy SortBy);
		void SetItemSortAscending(bool bSortAscending);
		void SetItemFilterRules(TMap<class UClass*, struct FHDFilterRuleParams> FilterRules);
		float GetEntrySpacing();
		struct FMargin GetDesiredEntryPaddingForItem(class UObject* Item);
		bool DoesFilterExcludeListItem(class UObject* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDJoinGameMenu
	 * Size -> 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
	 */
	class UHDJoinGameMenu : public UDFBaseMenu
	{
	public:
		class UHDServerListView*                                   ServerList;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPrimaryAssetId>                             MapIds;                                                  // 0x0240(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KO7K[0x30];                                  // 0x0250(0x0030) MISSED OFFSET (PADDING)

	public:
		void ReceiveOnRefreshStart();
		void ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy);
		void OnRefresh(bool bSortAscending, EHDServerListSortBy SortBy);
		void JoinGame(class UHDServerListItemData* ServerItem, const class FString& JoinPassword);
		bool IsUsingDebugServerListings();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKit
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class UHDKit : public UDFLoadout
	{
	public:
		TArray<struct FHDItemEntry>                                ItemEntries;                                             // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryItemSlotNum;                                      // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4823[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              KitDropPrefabClass;                                      // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHDKitPrerequisiteBase*>                      KitRequirements;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FDataTableRowHandle>                         CharacterVariations;                                     // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSquadLeaderKit : 1;                                     // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowsRallyPointDeployment : 1;                         // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VLC7[0x17];                                  // 0x0081(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                KitDisplayName;                                          // 0x0098(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          KitDisplaySymbol;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FDFCharacterVariationDataHandle RandomCharacterVariationDataFromKit();
		bool PlayerCanStartWithKit(class AController* Player, class FText* OutKitDenialReason);
		bool HasKitRequirements();
		bool GetPrimaryItemEntryDisplayIcon(class UTexture2D** OutDisplayIcon);
		bool GetPrimaryItemEntry(struct FHDItemEntry* OutPrimaryEntry);
		int32_t GetPlayersUsingKit(class UObject* WorldContextObject, TArray<class AHDPlayerState*>* OutPSArray);
		int32_t GetNumPlayersUsingKit(class UObject* WorldContextObject);
		bool STATIC_GetItemEntryDisplayIcon(const struct FHDItemEntry& ItemEntry, class UTexture2D** OutDisplayIcon);
		bool STATIC_GetItemEntryDisplayEquipmentSymbol(const struct FHDItemEntry& ItemEntry, class UTexture2D** OutDisplayEquipmentSymbol);
		bool GetItemEntryBySlotNum(int32_t SlotNum, struct FHDItemEntry* OutEntry);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisiteBase
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UHDKitPrerequisiteBase : public UObject
	{
	public:
		class FText                                                KitDenialReason;                                         // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_AdminOnly
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_AdminOnly : public UHDKitPrerequisiteBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_AlwaysDisable
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_AlwaysDisable : public UHDKitPrerequisiteBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_MinSquadMembers
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_MinSquadMembers : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MinSquadMembers;                                         // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TFQM[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_SquadLeaderOnly
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_SquadLeaderOnly : public UHDKitPrerequisiteBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_SquadSizeLimit
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_SquadSizeLimit : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MaxSquadCount;                                           // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MN90[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_SquadUsageLimit
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_SquadUsageLimit : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MaxSquadMembers;                                         // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E91N[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_TeamSpecific
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_TeamSpecific : public UHDKitPrerequisiteBase
	{
	public:
		EHDTeam                                                    RequiredTeam;                                            // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PMB0[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_TeamUsageLimit
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_TeamUsageLimit : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MaxTeamMembers;                                          // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7DM6[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDModData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UHDModData : public UHDCoreUGCData
	{
	public:
		TArray<struct FHDPrimaryAssetSearchPath>                   PrimaryAssetPathsToScan;                                 // 0x0030(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   ModDataVersion;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FG09[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		bool STATIC_DoesModPluginUseLegacyMapScanning(const class FString& PluginName);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDNavigationSystem
	 * Size -> 0x0000 (FullSize[0x0538] - InheritedSize[0x0538])
	 */
	class UHDNavigationSystem : public UDFNavigationSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDNavigationSystemConfig
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UHDNavigationSystemConfig : public UDFNavigationSystemConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDOnlineSessionClient
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UHDOnlineSessionClient : public UDFOnlineSessionClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDOptionsMenu
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UHDOptionsMenu : public UDFBaseMenu
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPhysicsCollisionHandler
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHDPhysicsCollisionHandler : public UDFPhysicsCollisionHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonCreationRuleBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDPlatoonCreationRuleBase : public UObject
	{
	public:
		bool SatisfiesRule(class UHDTeamDefinition* TeamDef);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonInfo
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UHDPlatoonInfo : public UPrimaryDataAsset
	{
	public:
		struct FPrimaryAssetType                                   PlatoonType;                                             // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHDPlatoonCreationRuleBase*>                  CreationRules;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                DisplayName;                                             // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxSquadLimit;                                           // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_27RB[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		bool ShouldCreateForTeam(class UHDTeamDefinition* TeamDef);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonStateCreationPayload
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHDPlatoonStateCreationPayload : public UObject
	{
	public:
		struct FHDPlatoonCreationParams                            CreationParams;                                          // 0x0028(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonState
	 * Size -> 0x01D0 (FullSize[0x03F0] - InheritedSize[0x0220])
	 */
	class AHDPlatoonState : public ADFReplInfo
	{
	public:
		unsigned char                                              UnknownData_77W8[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSquadAdded;                                            // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadPreRemove;                                        // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              SquadStateClass;                                         // 0x0248(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDFGenericObjectContainer                           Squads;                                                  // 0x0250(0x0180) Net, Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bInitialized : 1;                                        // 0x03D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SI3O[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x03D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDPlatoonInfo*                                      Info;                                                    // 0x03D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              TeamId;                                                  // 0x03E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KWTQ[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        OwnerTeam;                                               // 0x03E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool SquadExists(class AHDSquadState* Squad, bool bIgnorePendingRemoval);
		void RemoveSquadAt(int32_t RemoveIdx);
		void RemoveSquad(class AHDSquadState* SquadToRemove);
		void RemoveFromOwner();
		void ReceiveSquadPreRemove(class AHDSquadState* Squad);
		void ReceiveSquadAdded(class AHDSquadState* Squad);
		bool IsSquadPendingRemovalFromPlatoon(class AHDSquadState* Squad);
		bool HasReachedMaxSquadLimit();
		class AHDSquadState* GetSquadAt(int32_t Index, bool bIgnorePendingRemoval);
		int32_t GetNumSquads(bool bValidSquadsOnly);
		int32_t GetMaxSquadLimit();
		bool FindSquadByName(const class FText& SquadDisplayName, class AHDSquadState** OutFoundSquad);
		void DumpSquadState();
		class AHDSquadState* AddSquad(const class FText& SquadDisplayName, class AHDPlayerState* SquadLeader, bool bStartLocked);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCameraManager
	 * Size -> 0x0000 (FullSize[0x2740] - InheritedSize[0x2740])
	 */
	class AHDPlayerCameraManager : public ADFPlayerCameraManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacter
	 * Size -> 0x00D0 (FullSize[0x0A30] - InheritedSize[0x0960])
	 */
	class AHDPlayerCharacter : public ADFBasePlayerCharacter
	{
	public:
		unsigned char                                              UnknownData_GRAA[0x8];                                   // 0x0960(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseAttachedVehicleRelevancy;                            // 0x0968(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKC2[0x3];                                   // 0x0969(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkingBobSpeed;                                         // 0x096C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoHeadBob : 1;                                          // 0x0970(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFreeAim : 1;                                       // 0x0970(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowFreeAimWhileAiming : 1;                            // 0x0970(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDoFreeAim : 1;                                          // 0x0970(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GV21[0x7];                                   // 0x0971(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDFCharacterVariationDataHandle                     VariationHandle;                                         // 0x0978(0x0018) BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NativeAccessSpecifierPrivate
		class USpringArmComponent*                                 SpringArm;                                               // 0x0990(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpringArmComponent*                                 FreeAimSpringArm;                                        // 0x0998(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDKit*                                              CurrentLoadout;                                          // 0x09A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              KitClassFallback;                                        // 0x09A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      KitDropTraceDistance;                                    // 0x09B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInventoryMenuShown : 1;                                 // 0x09B4(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L76Q[0x3];                                   // 0x09B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAimStyleChanged;                                       // 0x09B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EHDWeaponAimStyle                                          AimStyle;                                                // 0x09C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJ7N[0x7];                                   // 0x09C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        HDTeamState;                                             // 0x09D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AIVocalAC;                                               // 0x09D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              WalkingHeadBob;                                          // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              SprintingHeadBob;                                        // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanAddYawInput : 1;                                     // 0x09F0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanAddPitchInput : 1;                                   // 0x09F0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanAddRollInput : 1;                                    // 0x09F0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2I8O[0x3];                                   // 0x09F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreeAimDeadzoneCameraSpeedFactor;                        // 0x09F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimReturnToCenterInterpSpeed;                        // 0x09F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimYaw;                                           // 0x09FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimPitch;                                         // 0x0A00(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimYawADS;                                        // 0x0A04(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimPitchADS;                                      // 0x0A08(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentFreeAimYaw;                                       // 0x0A0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentFreeAimPitch;                                     // 0x0A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimMouseDeltaX;                                      // 0x0A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimMouseDeltaY;                                      // 0x0A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimExternalDeltaX;                                   // 0x0A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimExternalDeltaY;                                   // 0x0A20(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDAIVocalizationType                                      LastAIVocalization;                                      // 0x0A24(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3PZP[0x3];                                   // 0x0A25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDAIPerceptionComponent*                            HDAIPerceptionComponent;                                 // 0x0A28(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void VariationDataChangedInternal(const struct FDFCharacterVariationDataHandle& PreviousHandle);
		void SetVariationHandle(const struct FDFCharacterVariationDataHandle& InVariationHandle);
		void SetMaxFreeAimYawADS(float NewYaw);
		void SetMaxFreeAimYaw(float NewYaw);
		void SetMaxFreeAimPitchADS(float NewPitch);
		void SetMaxFreeAimPitch(float NewPitch);
		void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
		void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
		void SetAllowFreeAimADS(bool bEnabled);
		void SetAllowFreeAim(bool bEnabled);
		void SetAimStyle(EHDWeaponAimStyle InAimStyle, bool bFromPlayerInput);
		void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
		void ReceiveVariationDataChanged(const struct FDFCharacterVariationData& NewVariation, const struct FDFCharacterVariationData& PreviousVariation);
		void ReceiveFreeAim(float DeltaSeconds);
		void ReceiveCurrentLoadout();
		void ReceiveAimStyleChanged(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void PlayVocalSoundAI(class USoundBase* SoundToUse, EHDAIVocalizationType VocalType, float PitchMultiplier);
		void OnRep_CurrentLoadout();
		void OnPickupKit(class AHDBasePickup_Kit* Kit);
		void NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState);
		bool IsInVehicle();
		void HeadBob();
		class UHDPlayerComponent* GetPlayerComponent();
		float GetMaxFreeAimYawToUse();
		float GetMaxFreeAimPitchToUse();
		class UClass* GetKitClassToUse();
		void FreeAim(float DeltaSeconds);
		bool EquipPrimaryItem();
		void DropKit();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacterAnimInstanceBase
	 * Size -> 0x0028 (FullSize[0x02E0] - InheritedSize[0x02B8])
	 */
	class UHDPlayerCharacterAnimInstanceBase : public UDFCharacterAnimInstance
	{
	public:
		class AHDPlayerCharacter*                                  HDPlyCharOwner;                                          // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerController*                                 HDPCOwner;                                               // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDBaseWeapon*                                       HDEquippedWeapon;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bInVehicle : 1;                                          // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OIXP[0xF];                                   // 0x02D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacterAnimInst_FPP
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UHDPlayerCharacterAnimInst_FPP : public UHDPlayerCharacterAnimInstanceBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacterAnimInst_TPP
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UHDPlayerCharacterAnimInst_TPP : public UHDPlayerCharacterAnimInstanceBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UHDPlayerComponent : public UDFPlayerComponent
	{
	public:
		class UDFLoadout*                                          StartLoadout;                                            // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SwitchTeam();
		void RestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout);
		void PickTeam(EHDTeam DesiredTeam);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerStart
	 * Size -> 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
	 */
	class AHDPlayerStart : public APlayerStart
	{
	public:
		class UCapsuleComponent* K2_GetCapsuleComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerState
	 * Size -> 0x0030 (FullSize[0x03A8] - InheritedSize[0x0378])
	 */
	class AHDPlayerState : public ADFBasePlayerState
	{
	public:
		class UHDKit*                                              SpawnLoadout;                                            // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDKit*                                              CurrentLoadout;                                          // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHDSquadAssignmentInfo                              SquadInfo;                                               // 0x0388(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnPlayerSquadInfoUpdated;                                // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UnregisterFromSquad();
		void OnRep_SquadInfo();
		void OnRep_SpawnLoadout(class UHDKit* PrevSpawnLoadout);
		void OnRep_CurrentLoadout(class UHDKit* PrevLoadout);
		void AssignSpawnLoadout(class UHDKit* NewSpawnLoadout);
		void AssignCurrentLoadout(class UHDKit* NewCurrentLoadout);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_Bullet
	 * Size -> 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
	 */
	class AHDProj_Bullet : public AHDBaseProjectile
	{
	public:
		class USphereComponent*                                    ProjectileCollision;                                     // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QRZ2[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_Deployable
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class AHDProj_Deployable : public AHDBaseProjectile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_Grenade
	 * Size -> 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
	 */
	class AHDProj_Grenade : public AHDBaseProjectile
	{
	public:
		unsigned char                                              UnknownData_2NLK[0x4];                                   // 0x0370(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FuzeDelay;                                               // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PayloadPostTriggerLifeSpan;                              // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PayloadServerActivationTime;                             // 0x037C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_PayloadServerActivationTime();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_SpawnPointDeployable
	 * Size -> 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
	 */
	class AHDProj_SpawnPointDeployable : public AHDProj_Deployable
	{
	public:
		unsigned char                                              UnknownData_Q5MJ[0x8];                                   // 0x0370(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHDTeam                                                    Team;                                                    // 0x0378(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JYSN[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRecastNavMesh
	 * Size -> 0x0000 (FullSize[0x04B8] - InheritedSize[0x04B8])
	 */
	class AHDRecastNavMesh : public ADFRecastNavMesh
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_AAS
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UHDRuleset_AAS : public UHDGameRulesetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_ControlPoint
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UHDRuleset_ControlPoint : public UHDGameRulesetBase
	{
	public:
		struct FControlPointRulesetSettings                        BluforTeamCPSettings;                                    // 0x0060(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FControlPointRulesetSettings                        OpforTeamCPSettings;                                     // 0x0080(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate

	public:
		struct FControlPointRulesetSettings GetControlPointSettingsForTeam(EHDTeam ControlPointTeam);
		void ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
		void ControlPointCaptureProgressUpdated(class AHDBaseCapturePoint* ControlPoint, bool bContested, int32_t Progress);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_KillDeath
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UHDRuleset_KillDeath : public UHDGameRulesetBase
	{
	public:
		struct FKillDeathRulesetSettings                           BluforTeamKDSettings;                                    // 0x0060(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FKillDeathRulesetSettings                           OpforTeamKDSettings;                                     // 0x0088(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void PlayerTeamKilled(class AController* Killer, class AController* Victim);
		struct FKillDeathRulesetSettings GetKillDeathSettingsForTeam(EHDTeam KillDeathTeam);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_NoPlayerSpawnKitRestrictions
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UHDRuleset_NoPlayerSpawnKitRestrictions : public UHDGameRulesetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_TicketBleed
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UHDRuleset_TicketBleed : public UHDGameRulesetBase
	{
	public:
		unsigned char                                              UnknownData_2BR3[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AHDBaseCapturePoint*>                         RegisteredCPs;                                           // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTicketBleedRulesetSettings                         BluforTeamTBSettings;                                    // 0x0078(0x000C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTicketBleedRulesetSettings                         OpforTeamTBSettings;                                     // 0x0084(0x000C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void UpdateTicketBleedState();
		struct FTicketBleedRulesetSettings GetTicketBleedSettingsForTeam(EHDTeam TicketBleedTeam);
		void ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
		void ApplyTicketBleed(EHDTeam BleedTeam, int32_t TicketBleedMultiplier, bool bUseMercyTicketBleed);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDScoreboardBase
	 * Size -> 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
	 */
	class UHDScoreboardBase : public UDFBaseMenu
	{
	public:
		class UClass*                                              ScoreboardListRowClass;                                  // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        OpforPlayerList;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        BluforPlayerList;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ReceiveScoreboardListRowAdded(class UHDScoreboardListingRowBase* NewListEntry);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDScoreboardListingRowBase
	 * Size -> 0x00E8 (FullSize[0x0318] - InheritedSize[0x0230])
	 */
	class UHDScoreboardListingRowBase : public UUserWidget
	{
	public:
		class UHDScoreboardBase*                                   ParentMenu;                                              // 0x0230(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADFBasePlayerState*                                  PlayerState;                                             // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SJDS[0x3];                                   // 0x0240(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRefreshListingOnTick : 1;                               // 0x0243(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JPU3[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             MutePlayerBtn;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          PlayerName;                                              // 0x0250(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Score;                                                   // 0x0258(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Kills;                                                   // 0x0260(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Deaths;                                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Ping;                                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              NotTalkingVoiceIcon[0x28];                               // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TalkingVoiceIcon[0x28];                                  // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MutedVoiceIcon[0x28];                                    // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_R1T7[0x20];                                  // 0x02F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          PlayerNumber;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetVoiceStateIcon(class UTexture2D* NewIcon);
		void RefreshListing();
		void ReceivePlayerVoiceStateChanged(EPlayerVoiceState NewVoiceState);
		void OnMutePlayer();
		void Init(class UHDScoreboardBase* InParentMenu, class ADFBasePlayerState* InPlayerState, bool bInRefreshListingOnTick);
		bool HasInitialized();
		void GetIconForVoiceState(EPlayerVoiceState VoiceState);
		int32_t GetCurrentPing();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDServerListFilterRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDServerListFilterRule : public UObject
	{
	public:
		bool MatchesServer(class UHDServerListItemData* ListItem);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDServerAtCapacityFilterRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDServerAtCapacityFilterRule : public UHDServerListFilterRule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDEmptyServerFilterRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDEmptyServerFilterRule : public UHDServerListFilterRule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPasswordProtectedServerFilterRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDPasswordProtectedServerFilterRule : public UHDServerListFilterRule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSupportersOnlyServerFilterRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDSupportersOnlyServerFilterRule : public UHDServerListFilterRule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDHasUGCServerFilterRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDHasUGCServerFilterRule : public UHDServerListFilterRule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDContainsAddressServerFilterRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDContainsAddressServerFilterRule : public UHDServerListFilterRule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDServerListItemData
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UHDServerListItemData : public UObject
	{
	public:
		struct FHDServerInfo                                       ServerInfo;                                              // 0x0028(0x00A0) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDServerListing
	 * Size -> 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
	 */
	class UHDServerListing : public UUserWidget
	{
	public:
		bool                                                       bTextToUpper : 1;                                        // 0x0230(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2OHT[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDServerListItemData*                               ServerData;                                              // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ServerNameText;                                          // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ModNameText;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          GameModeText;                                            // 0x0250(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          MapNameText;                                             // 0x0258(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PlayersText;                                             // 0x0260(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PingText;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupListing(class UHDServerListItemData* InServerItemData);
		void OnServerItemDataSet(bool bIsDesignTime);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSQCommChannelState
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHDSQCommChannelState : public UObject
	{
	public:
		unsigned char                                              UnknownData_KJ4M[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDSquadState*                                       SquadState;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDFCommStateSetupParams                             InitialSetupParams;                                      // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q745[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetupSQChannelState(class AHDSquadState* ForSquadState);
		class FName STATIC_GetChannelNameForSquad(class AHDSquadState* Squad);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSquadHiddenState
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AHDSquadHiddenState : public AInfo
	{
	public:
		unsigned char                                              UnknownData_HR77[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDSquadState*                                       SquadStateOwner;                                         // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSquadStateCreationPayload
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHDSquadStateCreationPayload : public UObject
	{
	public:
		struct FHDSquadCreationParams                              CreationParams;                                          // 0x0028(0x0030) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSquadState
	 * Size -> 0x0240 (FullSize[0x0460] - InheritedSize[0x0220])
	 */
	class AHDSquadState : public ADFReplInfo
	{
	public:
		unsigned char                                              UnknownData_3NHY[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInitialized : 1;                                        // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QW00[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SquadHiddenStateClass;                                   // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ID;                                                      // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              TeamId;                                                  // 0x023C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LSC5[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDPlatoonState*                                     OwnerPlatoon;                                            // 0x0240(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0248(0x0018) Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NativeAccessSpecifierPrivate
		class AHDSquadHiddenState*                                 SquadHiddenState;                                        // 0x0260(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerState*                                      SquadLeader;                                             // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLocked : 1;                                             // 0x0270(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UnknownData_ITPL : 2;                                    // 0x0270(0x0001) BIT_FIELD (PADDING)
		bool                                                       bRequiresSquadLeader : 1;                                // 0x0270(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisbandSquadOnEmpty : 1;                                // 0x0270(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFC1[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSquadLeaderAssigned;                                   // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadMemberRegistered;                                 // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadMemberPreUnregister;                              // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadMemberInfoUpdated;                                // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadRenamed;                                          // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadLockToggled;                                      // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDFGenericObjectContainer                           SquadMembers;                                            // 0x02D8(0x0180) Net, Transient, NativeAccessSpecifierPrivate
		int32_t                                                    MaxSquadMemberLimit;                                     // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y240[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool UnregisterSquadMemberAt(int32_t RemoveIdx);
		bool UnregisterSquadMember(class AHDPlayerState* MemberPSToRemove);
		bool UnregisterPlayerSquadMember(class AHDPlayerController* MemberPCToRemove);
		void UnlockSquad();
		void SquadMemberPSTeamUpdated(class APlayerState* MemberPS, unsigned char LastTeamNum, unsigned char NewTeamNum);
		void SquadMemberPSSquadUpdated(class AHDPlayerState* MemberPS, const struct FHDSquadAssignmentInfo& MemberSQInfo);
		void SquadMemberPSEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void RenameSquad(const class FText& NewDisplayName);
		void RemoveFromOwner();
		bool RegisterSquadMember(class AHDPlayerState* NewMemberPS);
		bool RegisterPlayerSquadMember(class AHDPlayerController* NewMemberPC);
		void ReceiveSquadUnlocked();
		void ReceiveSquadRenamed(const class FText& NewName, const class FText& PrevName);
		void ReceiveSquadMemberRegistered(class AHDPlayerState* MemberPS);
		void ReceiveSquadMemberPreUnregister(class AHDPlayerState* MemberPS);
		void ReceiveSquadLocked();
		void ReceiveSquadLeaderAssigned(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void ReceiveInit(const struct FHDSquadCreationParams& CreationParams);
		void OnRep_SquadLeader(class AHDPlayerState* PrevSquadLeader);
		void OnRep_SquadHiddenState();
		void OnRep_DisplayName(const class FText& PrevDisplayName);
		void OnRep_bLocked();
		void LockSquad();
		bool IsRegisteredSquadMember(class AHDPlayerState* PS, bool bIgnorePendingRemoval);
		bool IsPlayerRegisteredSquadMember(class AHDPlayerController* PC, bool bIgnorePendingRemoval);
		bool IsPlayerPendingRemovalFromSquad(class AHDPlayerController* PC);
		bool IsPendingRemovalFromSquad(class AHDPlayerState* PS);
		bool HasReachedMaxSquadMemberLimit();
		class AHDPlayerState* GetSquadMemberAt(int32_t Index, bool bIgnorePendingRemoval);
		int32_t GetNumSquadMembersBots(bool bValidMembersOnly);
		int32_t GetNumSquadMembers(bool bValidMembersOnly);
		void DumpSquadMemberState();
		bool CanRegisterSquadMember(class AHDPlayerState* NewMemberPS);
		bool CanRegisterPlayerSquadMember(class AHDPlayerController* NewMemberPC);
		bool AssignSquadLeader(class AHDPlayerState* NewLeaderPS);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTeamCommChannelState
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHDTeamCommChannelState : public UObject
	{
	public:
		unsigned char                                              UnknownData_RCXY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDFCommStateSetupParams                             InitialSetupParams;                                      // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JZ9B[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetupTeamChannelState(class AHDTeamState* ForTeamState);
		class FName STATIC_GetChannelNameForTeam(class AHDTeamState* Team);
		class FName STATIC_GetChannelNameForCommand(class AHDTeamState* CmdTeam);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTeamDefinition
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UHDTeamDefinition : public UDFTeamDefinition
	{
	public:
		int32_t                                                    StartingTickets;                                         // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GFLC[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFCommChannelDefinition*                            CommChannelDefinition;                                   // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTeamState
	 * Size -> 0x01F8 (FullSize[0x0448] - InheritedSize[0x0250])
	 */
	class AHDTeamState : public ADFTeamState
	{
	public:
		class FScriptMulticastDelegate                             OnPlatoonAdded;                                          // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlatoonPreRemove;                                      // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDFGenericObjectContainer                           Platoons;                                                // 0x0270(0x0180) Net, Transient, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxPlatoonLimit;                                         // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WC9S[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Kits[0x50];                                              // 0x03F8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void RemovePlatoonAt(int32_t RemoveIdx);
		void RemovePlatoon(class AHDPlatoonState* PlatoonToRemove);
		void ReceivePlatoonPreRemove(class AHDPlatoonState* Platoon);
		void ReceivePlatoonAdded(class AHDPlatoonState* Platoon);
		bool PlatoonExists(class AHDPlatoonState* Platoon, bool bIgnorePendingRemoval);
		bool IsPlatoonPendingRemovalFromTeam(class AHDPlatoonState* Platoon);
		bool HasReachedMaxPlatoonLimit();
		EHDTeam GetTeam();
		class AHDPlatoonState* GetPlatoonAt(int32_t Index, bool bIgnorePendingRemoval);
		int32_t GetNumPlatoons(bool bValidPlatoonsOnly);
		bool FindPlatoonByName(const class FText& PlatoonDisplayName, class AHDPlatoonState** OutFoundPlatoon);
		bool FindPlatoonByDefinition(class UHDPlatoonInfo* PlatoonDef, class AHDPlatoonState** OutFoundPlatoon);
		void DumpPlatoonState();
		class AHDPlatoonState* AddPlatoon(class UHDPlatoonInfo* PlatoonInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTextChatInputWidgetBase
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UHDTextChatInputWidgetBase : public UUserWidget
	{
	public:
		class FName                                                TextCommsFormatName;                                     // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDFCommChannel*                                      CurrentTalkChannel;                                      // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SubmitChatMessage(const class FText& ChatMsgText);
		void StopTalkingOnCurrentChannel();
		void StopTalking(class UDFCommChannel* CurrentChannel);
		void StartTalkingOnChannel(class UDFCommChannel* TalkChannel);
		void StartTalking(class UDFCommChannel* NewTalkChannel);
		void OnChatMessageSubmitted(class UHDTextChatMsgInfo* SubmittedChatMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTextChatMsgInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UHDTextChatMsgInfo : public UObject
	{
	public:
		class UDFCommChannel*                                      CommChannel;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerState*                                        SenderPS;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ChatMsgContent;                                          // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTextChatWidgetBase
	 * Size -> 0x0078 (FullSize[0x02A8] - InheritedSize[0x0230])
	 */
	class UHDTextChatWidgetBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_LWK8[0x38];                                  // 0x0230(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SayAllInputActionName;                                   // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SayTeamInputActionName;                                  // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SaySquadInputActionName;                                 // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SayAllChannelName;                                       // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatMsgsToCache;                                      // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                LastTalkChannelName;                                     // 0x028C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IWMH[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHDTextChatMsgInfo*>                          CurrentChatMsgs;                                         // 0x0298(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StopTalking();
		void StartTalking(class UDFCommChannel* TalkChannel);
		void SetMaxChatMsgsToCache(int32_t NumChatMsgsToCache);
		void SayTeamActionPressed();
		void SaySquadActionPressed();
		void SayAllActionPressed();
		int32_t GetNumCachedChatMsgs();
		bool GetCachedChatMsgAt(int32_t MsgIndex, class UHDTextChatMsgInfo** OutFoundMsg);
		void DisplayChatMessage(class UHDTextChatMsgInfo* NewChatMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDURLStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDURLStatics : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetNumTicketsOptionName(EHDTeam Team);
		class FString STATIC_GetNumBotsOptionName(EHDTeam Team);
		class FString STATIC_GetFactionOptionName(EHDTeam Team);
		class FString STATIC_GetDisableKitRestrictionsOptionName();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDUIStatics : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_GetServerPort(const struct FHDServerInfo& InServerInfo);
		class FString STATIC_GetServerIpPort(const struct FHDServerInfo& InServerInfo);
		class FString STATIC_GetServerIp(const struct FHDServerInfo& InServerInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUserWidget
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UHDUIUserWidget : public UUserWidget
	{
	public:
		bool                                                       bListenForPlayerCharacterEvents : 1;                     // 0x0230(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_214E[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		void OwnerUnpossessPawn(class APawn* UnpossessedPawn);
		void OwnerPossessPawn(class APawn* NewPawn);
		void OwnerEquippedItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void OwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		class AHUD* GetOwningPlayerHUD();
		class AHDHUD* GetOwningHDPlayerHUD();
		class UDFCharacterMovementComponent* GetOwningHDPlayerCharacterMovement();
		class AHDPlayerCharacter* GetOwningHDPlayerCharacter();
		class AHDPlayerController* GetOwningHDPlayer();
		class AHDBaseWeapon* GetOwnerEquippedWeapon();
		void BPOwnerWeaponChanged(class AHDBaseWeapon* NewWeap, class AHDBaseWeapon* PrevWeap);
		void BPOwnerUnpossessPawn(class APawn* UnpossessedPawn);
		void BPOwnerPossessPawn(class APawn* NewPawn);
		void BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void BPInitializeForOwnerWeapon(class AHDBaseWeapon* OwnerWeap);
		void BPInitializeForOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar);
		void BPDeinitializeFromOwnerWeapon(class AHDBaseWeapon* OwnerWeap);
		void BPDeinitializeFromOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWCaptureStatus
	 * Size -> 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
	 */
	class UHDUIUWCaptureStatus : public UHDUIUserWidget
	{
	public:
		unsigned char                                              UnknownData_0ANB[0x30];                                  // 0x0238(0x0030) MISSED OFFSET (PADDING)

	public:
		void OwnerTouchingControlPoint(class AHDBaseCapturePoint* OverlappingCP, bool bInitial);
		void OwnerNoControlPoint();
		void OwnerEndOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor);
		void OwnerBeginOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor);
		void CPOwnershipUpdate(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevOwningTeam, EHDTeam NewOwningTeam, bool bCaptured);
		void CPCaptureProgressUpdate(class AHDBaseCapturePoint* ControlPoint, bool bInCaptureContested, int32_t InCaptureProgress);
		void CPBeginEndOverlap(class AActor* OverlappedControlPointActor, class AActor* OtherActor);
		void ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial);
		void ControlPointSetGarrisonedPlayerCount(int32_t NumFriendlies, int32_t NumEnemies, int32_t MinNumRequiredForCapture, bool bInitial);
		void ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWHUD
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UHDUIUWHUD : public UHDUIUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWPlayerStatus
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class UHDUIUWPlayerStatus : public UHDUIUserWidget
	{
	public:
		unsigned char                                              UnknownData_529K[0x20];                                  // 0x0238(0x0020) MISSED OFFSET (PADDING)

	public:
		void OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial);
		void OwnerStartSprint();
		void OwnerStartAim();
		void OwnerSprintTransitionUpdate(bool bIsSprinting);
		void OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial);
		void OwnerSetStance(ECharacterStance NewStance, ECharacterStance OldStance, bool bInitial);
		void OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerHealthUpdate(class ADFBaseCharacter* Character, float NewHealthTotal, float PrevHealthTotal);
		void OwnerEndSprint();
		void OwnerEndAim();
		void OwnerAimTransitionUpdate(bool bIsAiming);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWWeaponStatus
	 * Size -> 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
	 */
	class UHDUIUWWeaponStatus : public UHDUIUserWidget
	{
	public:
		class AHDBaseWeapon*                                       OwnerEquippedWeapon;                                     // 0x0238(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N3UM[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHDUIWeaponAmmoState                                WeapAmmoState;                                           // 0x0248(0x0018) Transient, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void OwnerWeaponFireModeChanged(class ADFBaseGun* Gun, EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
		void OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void OwnerAimStyleChanged(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput);
		void BPOwnerWeaponAmmoUpdated(const struct FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVehiclePlayerSeatComponent
	 * Size -> 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
	 */
	class UHDVehiclePlayerSeatComponent : public UArcVehiclePlayerSeatComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVoiceChatMsgInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UHDVoiceChatMsgInfo : public UObject
	{
	public:
		class UDFCommChannel*                                      CommChannel;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerState*                                        TalkerPS;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTalking : 1;                                            // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RVQ6[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVoipIndicatorListingWidgetBase
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UHDVoipIndicatorListingWidgetBase : public UUserWidget
	{
	public:
		class UHDVoiceChatMsgInfo*                                 VoiceMsgInfo;                                            // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupVoiceListing(class UHDVoiceChatMsgInfo* InVoiceMsgInfo);
		void OnVoiceMsgInfoSet(bool bIsDesignTime);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVoipIndicatorWidgetBase
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UHDVoipIndicatorWidgetBase : public UUserWidget
	{
	public:
		TMap<struct FUniqueNetIdVoipWrapper, class UHDVoiceChatMsgInfo*> ActiveTalkerMap;                                         // 0x0230(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void OnPlayerStopTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void OnPlayerStartTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void OnOwningPlayerStopTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
		void OnOwningPlayerStartTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDWeaponAnimInstance
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UHDWeaponAnimInstance : public UDFWeaponAnimInstance
	{
	public:
		class AHDBaseWeapon*                                       HDWeaponOwner;                                           // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDWeaponScopeComponent
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UHDWeaponScopeComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDWorldSettings
	 * Size -> 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
	 */
	class AHDWorldSettings : public ATBWorldSettings
	{
	public:
		class UHDTeamDefinition*                                   BluforTeamDefinition;                                    // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   OpforTeamDefinition;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.PlatoonListEntry
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPlatoonListEntry : public UObject
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDTeam                                                    Team;                                                    // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_42SN[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ID;                                                      // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_94JO[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDPlatoonInfo*                                      Info;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlatoonState*                                     PlatoonState;                                            // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.SquadListEntry
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USquadListEntry : public UObject
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDTeam                                                    Team;                                                    // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VA8S[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatoonListEntry*                                   ParentPlatoonData;                                       // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ID;                                                      // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UEHN[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDSquadState*                                       SquadState;                                              // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class AHDPlatoonState* GetParentPlatoonState();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.SquadMemberInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USquadMemberInfo : public UObject
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDTeam                                                    Team;                                                    // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M7UO[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatoonListEntry*                                   ParentPlatoonData;                                       // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USquadListEntry*                                     ParentSquadData;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerState*                                      PlayerState;                                             // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class AHDSquadState* GetParentSquadState();
		class AHDPlatoonState* GetParentPlatoonState();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.VictoryMenu
	 * Size -> 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
	 */
	class UVictoryMenu : public UDFBaseMenu
	{
	public:
		struct FHDGameRoundEndEventDetails                         RoundDetails;                                            // 0x0238(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bWinner : 1;                                             // 0x0248(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6UG9[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnVictoryInit();
		void Init(const struct FHDGameRoundEndEventDetails& InRoundDetails, bool bInWinner);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
