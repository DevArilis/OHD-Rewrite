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
	 * BlueprintGeneratedClass BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C
	 * Size -> 0x0378 (FullSize[0x0DA8] - InheritedSize[0x0A30])
	 */
	class ABP_HDPlayerCharacterBase_C : public AHDPlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHDAIPerceptionComponent*                            HDAIPerception;                                          // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TargetCameraPoint;                                       // 0x0A40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RefPoint;                                                // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNavigationInvokerComponent*                         NavigationInvoker;                                       // 0x0A50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_B;                                           // 0x0A58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_A;                                           // 0x0A60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_L;                                           // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_R;                                           // 0x0A70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_HDVOIPTalker_C*                                  VOIPTalker;                                              // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                PlayerNameTextRender;                                    // 0x0A80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDFPOIComponent*                                     POI;                                                     // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             VaultCameraTimeline_VaultCamera_22F2E311466556389CC02182AEE99CCA; // 0x0A90(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         VaultCameraTimeline__Direction_22F2E311466556389CC02182AEE99CCA; // 0x0A9C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T8VW[0x3];                                   // 0x0A9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  VaultCameraTimeline;                                     // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LerpTimeline_Lerp_5E919E724A951192A68B8180576AB695;      // 0x0AA8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         LerpTimeline__Direction_5E919E724A951192A68B8180576AB695; // 0x0AAC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AKFT[0x3];                                   // 0x0AAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LerpTimeline;                                            // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DamageEffectTimeline_DamageEffect_BEBC6E9841C4A26EF0A22DA008BD6CA4; // 0x0AB8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DamageEffectTimeline__Direction_BEBC6E9841C4A26EF0A22DA008BD6CA4; // 0x0AC4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AUQF[0x3];                                   // 0x0AC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DamageEffectTimeline;                                    // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SuppressionTimeline_SuppressionCurve_83869DB54889A3FECCAF0E83EA19C04B; // 0x0AD0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SuppressionTimeline__Direction_83869DB54889A3FECCAF0E83EA19C04B; // 0x0ADC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8CML[0x3];                                   // 0x0ADD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SuppressionTimeline;                                     // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallDamageDivisor;                                       // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallDamageThreshold;                                     // 0x0AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EquipmentTimerDelay;                                     // 0x0AF0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEquipmentKeyPressed;                                    // 0x0AF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSelectingEquipmentBySlot;                               // 0x0AF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNextItem;                                               // 0x0AF6(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DCZH[0x1];                                   // 0x0AF7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerState*                                        LastValidPlayerState;                                    // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTintTeamColorForPlayerPOIs;                             // 0x0B00(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSpecialSymbolForLocalPlayerPOIs;                     // 0x0B01(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ICSP[0x6];                                   // 0x0B02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          LocalPlayerPOISymbol;                                    // 0x0B08(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundAttenuation*                                   VOIPSpatializedAttenuation;                              // 0x0B10(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundEffectSourcePresetChain*                       VOIPSpatializedSrcEffectChain;                           // 0x0B18(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HealthRegenTimer;                                        // 0x0B20(0x0008) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       bHealthRegenEnabled;                                     // 0x0B28(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K6T4[0x3];                                   // 0x0B29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthRegenAmount;                                       // 0x0B2C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthRegenTimerInterval;                                // 0x0B30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LocalPlayerPOITint;                                      // 0x0B34(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              RedTeamColor;                                            // 0x0B44(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              BlueTeamColor;                                           // 0x0B48(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              NoTeamColor;                                             // 0x0B4C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRadialMenuEnabled;                                      // 0x0B50(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZVD1[0x7];                                   // 0x0B51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_HDRadialMenu_C*                                 RadialMenu;                                              // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          RadialMenuExitSnd;                                       // 0x0B60(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          RadialMenuOptions;                                       // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRallypointsEnabled;                                     // 0x0B70(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z4GN[0x3];                                   // 0x0B71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadialMenuRallypointTimeDeployed;                        // 0x0B74(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSpatializedVOIPTalker;                                  // 0x0B78(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bOutpostsEnabled;                                        // 0x0B79(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VOPK[0x2];                                   // 0x0B7A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadialMenuOutpostTimeDeployed;                           // 0x0B7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SuppressionSound;                                        // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SuppressionSoundVolume;                                  // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBracedAim;                                              // 0x0B8C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bWantsMount;                                             // 0x0B8D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bMounted;                                                // 0x0B8E(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QIBR[0x1];                                   // 0x0B8F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MountDirection;                                          // 0x0B90(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MountPosition;                                           // 0x0B9C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1Y3R[0x8];                                   // 0x0BA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MountTransform;                                          // 0x0BB0(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SmoothSightDirection;                                    // 0x0BE0(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SmoothSightOffset;                                       // 0x0BEC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimSpeed;                                                // 0x0BF8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SightDirectionSmoothingSpeed;                            // 0x0BFC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SightPositionSmoothingSpeed;                             // 0x0C00(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MountDistance;                                           // 0x0C04(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAlpha;                                                // 0x0C08(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MountHeight;                                             // 0x0C0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDWeaponBase_C*                                  EquippedWeapon;                                          // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDProj_SPDeployableBase_C*                       SpawnedFOB;                                              // 0x0C18(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDProj_SPDeployableBase_C*                       SpawnedRallypoint;                                       // 0x0C20(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSuppression;                                           // 0x0C28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHitDamage;                                             // 0x0C38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bSpottingEnabled;                                        // 0x0C48(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OXOC[0x7];                                   // 0x0C49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        SuppressionCurve;                                        // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        HitDamageCurve;                                          // 0x0C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              SuppressionCameraShake;                                  // 0x0C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ReceiveDamageCameraShake;                                // 0x0C68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HitEffectValues;                                         // 0x0C70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BleedingEffectValues;                                    // 0x0C80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageEffectStartPercent;                                // 0x0C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bVariationDataSet;                                       // 0x0C94(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0R6S[0x3];                                   // 0x0C95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinVaultViewYaw;                                         // 0x0C98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxVaultViewYaw;                                         // 0x0C9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        VaultOverCameraCurve;                                    // 0x0CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        SprintVaultOverCameraCurve;                              // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        ClimbOntoCameraCurve;                                    // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        SprintClimbOntoCameraCurve;                              // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Camera1POffsetBeforeVault;                               // 0x0CC0(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector                                             Mesh1POffsetBeforeVault;                                 // 0x0CCC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FWeightedBlendable                                  SuppresionEffect;                                        // 0x0CD8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FWeightedBlendable                                  DamageEffect;                                            // 0x0CE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    ThirdPersonCharMatArray;                                 // 0x0CF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>                    FirstPersonCharMatArray;                                 // 0x0D08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bUseSpecialSymbolForSquadMatePOIs;                       // 0x0D18(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WCHO[0x7];                                   // 0x0D19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SquadMatePOISymbol;                                      // 0x0D20(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SquadMatePOITint;                                        // 0x0D28(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          NonSquadMatePOISymbol;                                   // 0x0D38(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NonSquadMatePOITint;                                     // 0x0D40(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseSpecialSymbolForSquadLeaderPOIs;                     // 0x0D50(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4O4V[0x7];                                   // 0x0D51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SquadLeaderPOISymbol;                                    // 0x0D58(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SquadLeaderPOITint;                                      // 0x0D60(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SquadLeaderPOITextColor;                                 // 0x0D70(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          NonSquadLeaderPOISymbol;                                 // 0x0D80(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NonSquadLeaderPOITint;                                   // 0x0D88(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NonSquadLeaderPOITextColor;                              // 0x0D98(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FVector EventGetFocalPoint();
		void IsSameSquad(class ABP_HDPlayerControllerBase_C* LocalController, bool* bSameSquad);
		void GetVaultCameraCurveForBehavior(EVaultBehavior VaultBehavior, class UCurveVector** CameraCurve);
		void RestorePCViewRotationYawLimits();
		void SetPCViewRotationYawLimits(float ViewYawMin, float ViewYawMax, bool bRelativeToActorRotation);
		void UpdateCharMesh(class USkeletalMesh* NewMesh, bool bUpdateFPPMesh);
		void SetSuppressionCompIsActive(class UPrimitiveComponent* PrimComp, bool bNewActive);
		void SetSuppressionActive(bool bActive);
		void CalcOutpostEnemiesNearbyRestriction(bool* bAreEnemiesNearby);
		void CalcRallypointEnemiesNearbyRestriction(bool* bAreEnemiesNearby);
		void IsOutpostNumberLimitReached(bool* bNumberLimitReached);
		void IsRallypointNumberLimitReached(bool* bNumberLimitReached);
		void CalcOutpostDistanceRestriction(bool* bIsOutpostDistanceRestricted);
		void CalcRallypointDistanceRestriction(bool* bIsRallypointDistanceRestricted);
		void GetIsSpawnedRallypointValid(bool* bIsSpawnedRallypointValid);
		void GetIsSpawnedOutpostValid(bool* bIsSpawnedOutpostValid);
		void GetProneMountPosition(const struct FVector& BoxSize, float Distance, float MaxHeight, float MinHeight, float MinSpace, bool* bCouldMount, struct FVector* MountPosition);
		void AlignSights(float MinSightDistance);
		void GetMountPosition(const struct FVector& Direction, float WallDistance, float TraceRadius, float CornerDistance, float CapsuleHeight, bool* bCouldMount, struct FVector* Position, struct FTransform* Transform);
		void OnRep_bSpatializedVOIPTalker();
		void HasSquadLeaderKit(bool bRequireRallyPointAbility, bool* bUsingSquadLeaderKit);
		void IsSquadLeader(bool* bSquadLeader);
		void GetSquadState(class AHDSquadState** SquadState);
		void CanSelectAnyRadialMenuOption(bool* bSelectable);
		void RadialMenuCanSelectOutpost(bool* bSelectable);
		void RadialMenuCanSelectRallypoint(bool* bSelectable);
		void RadialMenuCanSelectSpot(bool* bSelectable);
		void RadialMenuSelectOutpost();
		void RadialMenuSelectRallypoint();
		void RadialMenuSelectSpot();
		void SelectRadialMenuItem(const class FName& Category, const class FName& SubItem);
		void SpawnAndInitDeployableSPAtPawn(class UClass* SPDeployableClass, const struct FVector& SpawnOffset, class ABP_HDProj_SPDeployableBase_C** SpawnedDeployableSP);
		void LeanDebug();
		void IsMatchingTeam(class AController* LocalController, bool* bMatchingTeam);
		void GetPlayerFactionInfoClass(EHDTeam PlayerTeam, class UClass** FactionInfoClass);
		void ClearHealthRegenTimer();
		void SetHealthRegenTimerIfInvalid(float NewHealth);
		void HealthRegenTimerElapsed();
		void CleanupVOIPTalker(bool* bDestroyedComp);
		void SetupVOIPTalker();
		void EquipSelectedItemFromInventory(bool bSwitchFireModeForSelected);
		void GetMostValidLoadout(class UHDKit** PlayerLoadout);
		void GetMostValidTeamFactionInfo(class UClass** FactionInfoClass);
		void GetMostValidTeamState(class ADFTeamState** TeamState);
		void GetMostValidPlayerState(class APlayerState** PlayerState);
		class USkeletalMesh* ReceiveGetDefaultPawnMesh1P();
		void UpdateEquipmentItems();
		void UpdatePOIState();
		void GetMinimapWidget(class AController* Controller, class UDFMinimap** MinimapWidget);
		void ApplyCharacterVariation(const struct FDFCharacterVariationDataHandle& VariationHandle, bool bApplyToFPP);
		void UpdateCharMeshes(class USkeletalMesh* MeshFPP, class USkeletalMesh* MeshTPP);
		void UpdateCharMeshesFromFaction();
		void SelectEquipmentBySlotNum(int32_t EquipSlotNum, bool bEquipImmediately, bool bFromInput);
		void SetEquipmentTimer();
		void StartEquipmentTimer();
		void FreeAiming();
		void UserConstructionScript();
		void SuppressionTimeline__FinishedFunc();
		void SuppressionTimeline__UpdateFunc();
		void DamageEffectTimeline__FinishedFunc();
		void DamageEffectTimeline__UpdateFunc();
		void LerpTimeline__FinishedFunc();
		void LerpTimeline__UpdateFunc();
		void VaultCameraTimeline__FinishedFunc();
		void VaultCameraTimeline__UpdateFunc();
		void InpActEvt_NextItem_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_PreviousItem_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_CameraToggle_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_EqpSlot0_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_EqpSlot1_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_EqpSlot2_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_EqpSlot3_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_EqpSlot4_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_EqpSlot5_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_EqpSlot6_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_EqpSlot7_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_EqpSlot8_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_EqpSlot9_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_RadialMenu_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_RadialMenu_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_PointAimToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
		void BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void EventResetHealthEffect();
		void GenericDamageFeedback();
		void ReceiveTick(float DeltaSeconds);
		void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void OnEquipmentTimerElapsed();
		void ReceiveCurrentLoadout();
		void RetryLoadout();
		void ReceivePossessed(class AController* NewController);
		void OnPCFirePressed();
		void OnLanded(const struct FHitResult& Hit);
		void ReceiveRestart();
		void ReceiveDestroyed();
		void ReceivePawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void ReceiveFreeAim(float DeltaSeconds);
		void NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState);
		void ReceiveBeginPlay();
		void FirstPersonToggled(bool bFirstPerson);
		void OnPCFireReleased();
		void PlayerNameChanged(class APlayerState* PS, const class FString& NewPlayerName);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveUnpossessed(class AController* OldController);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void HitDamage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void ServerRadialMenuSelectOutpost();
		void ServerRadialMenuSelectRallypoint();
		void ServerRadialMenuSelectSpot();
		void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
		void BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ReceiveOnStartAim();
		void ReceiveOnEndAim();
		void EnterRadialMenu();
		void ExitRadialMenu();
		void SubmenuCommited(const class FName& Category, const class FName& SubItem);
		void ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void ReceivePlayHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bKilled);
		void ReceiveVariationDataChanged(const struct FDFCharacterVariationData& NewVariation, const struct FDFCharacterVariationData& PreviousVariation);
		void ReceiveHealthChanged(float NewHealthTotal, float PrevHealthTotal);
		void ReceiveOnStartVault();
		void ReceiveOnEndVault();
		void SuppressionEffect(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup, class UPrimitiveComponent* SuppressionVolume);
		void ExecuteUbergraph_BP_HDPlayerCharacterBase(int32_t EntryPoint);
		void OnHitDamage__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void OnSuppression__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
