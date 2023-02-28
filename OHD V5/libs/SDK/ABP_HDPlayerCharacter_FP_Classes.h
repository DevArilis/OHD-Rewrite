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
	 * AnimBlueprintGeneratedClass ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C
	 * Size -> 0x453C (FullSize[0x481C] - InheritedSize[0x02E0])
	 */
	class UABP_HDPlayerCharacter_FP_C : public UHDPlayerCharacterAnimInst_FPP
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x02E8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x03F0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x0410(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0430(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0458(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x0480(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x04F8(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x0528(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0540(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x0570(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x0620(0x00C8)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x06E8(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x0760(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x0818(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x0840(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x0870(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x08E8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x0918(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x09C8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0A10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0A38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0A60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0A88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0AB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0AD8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x0B00(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0B78(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x0BA8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0C20(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x0C50(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0CC8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0CF8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0D70(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0DA0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0E18(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0E48(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0EC0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0F38(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0FD8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x1008(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x10B8(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x1170(0x00B8)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x1228(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x12D8(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x1390(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x13B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x13E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1408(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1480(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x14B0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1528(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1558(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x1608(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x1710(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x1730(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x1750(0x0018)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x1768(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x1808(0x00B8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x18C0(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x18E0(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x1908(0x0108)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x1A10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1A38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1A60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1A88(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1AB0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1B28(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1B58(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1BD0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x1C70(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1C98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1CC8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1D40(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x1D70(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1D98(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1DC8(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x1E78(0x00B8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x1F30(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x2038(0x00C0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x20F8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x21E8(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x22D8(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x22F8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x2398(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x2410(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x24C8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x24F0(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x2518(0x0020)
		unsigned char                                              UnknownData_AW66[0x8];                                   // 0x2538(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x2540(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x2720(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x2900(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x2A08(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x2AA8(0x0078)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x2B20(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x2C10(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x2D00(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x2E08(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x2F10(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x3018(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x30D8(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x3100(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x3120(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x31D8(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x3200(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x3308(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x33C8(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x33E8(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x3410(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x3430(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x3450(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x3540(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x3560(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x3590(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x35B8(0x0108)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x36C0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x3788(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x3800(0x0078)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x3878(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x3980(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x39A0(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x3A90(0x00B8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x3B48(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x3B68(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x3C28(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x3C50(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x3D40(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x3E48(0x0078)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x3EC0(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x3F88(0x00B8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x4040(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x4148(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x4168(0x0020)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x4188(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x4238(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x4340(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x4448(0x0028)
		class ABP_HDPlayerCharacterBase_C*                         OwningChar;                                              // 0x4470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerControllerBase_C*                        OwningPC;                                                // 0x4478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   BasePoseAnim;                                            // 0x4480(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleAdditiveAnim;                                        // 0x4488(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MoveAnim;                                                // 0x4490(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimInAnim;                                               // 0x4498(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimBasePoseAnim;                                         // 0x44A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimOutAnim;                                              // 0x44A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintInAnim;                                            // 0x44B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintAnim;                                              // 0x44B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintOutAnim;                                           // 0x44C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WeaponAnims[0x50];                                       // 0x44C8(0x0050) UNKNOWN PROPERTY: MapProperty
		class UAnimSequenceBase*                                   ProneInAnim;                                             // 0x4518(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   CrawlAnim;                                               // 0x4520(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   ProneOutAnim;                                            // 0x4528(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimWalkAnim;                                             // 0x4530(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDWeaponBase_C*                                  CurrentWeapon;                                           // 0x4538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPrefiring;                                              // 0x4540(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bReadyToThrow;                                           // 0x4541(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFiring;                                                 // 0x4542(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0N98[0x5];                                   // 0x4543(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   ThrowReadyBasePose;                                      // 0x4548(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   ThrowAnim;                                               // 0x4550(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleAnimPlayRateToUse;                                   // 0x4558(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLeaningLeft;                                            // 0x455C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeaningRight;                                           // 0x455D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELeanDirection                                             LeanDirection;                                           // 0x455E(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHideArmsWhileSwimming;                                  // 0x455F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LeanAmount;                                              // 0x4560(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAlpha;                                               // 0x4564(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x4568(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanOffsetAlpha;                                         // 0x456C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LeanRootRot;                                             // 0x4570(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LeanWeaponOffset;                                        // 0x457C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanOffsetInterpSpeed;                                   // 0x4588(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LeanWeaponRot;                                           // 0x458C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SmoothCrouchWeaponOffset;                                // 0x4598(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SmoothRotation;                                          // 0x45A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      SmoothRotationAmount;                                    // 0x45B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ElbowIKWeight;                                           // 0x45B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAlpha;                                           // 0x45B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SmoothMovement;                                          // 0x45BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpeed;                                                // 0x45C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SmoothMovementSwizzled;                                  // 0x45CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SmoothMovementRotation;                                  // 0x45D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      SmoothMovementRotationAmount;                            // 0x45E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAlpha;                                                // 0x45E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SightDirection;                                          // 0x45EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SightOffset;                                             // 0x45F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RestoreGunBonePosition;                                  // 0x4604(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            KickRotation;                                            // 0x4608(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             KickOffset;                                              // 0x4614(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmoothKick;                                              // 0x4620(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickAmount;                                              // 0x4624(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickNoiseSpeed;                                          // 0x4628(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickNoiseAmount;                                         // 0x462C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Kick;                                                    // 0x4630(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SightTiltOffset;                                         // 0x4634(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SwayOffset;                                              // 0x4638(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PositionOffset;                                          // 0x4644(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GripPosition;                                            // 0x4650(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            GripRotation;                                            // 0x465C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      GripAlpha;                                               // 0x4668(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasGrip;                                                // 0x466C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K32M[0x3];                                   // 0x466D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CorrectiveShoulderOffset;                                // 0x4670(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAmount;                                          // 0x467C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmoothMovementAmount;                                    // 0x4680(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MountAlpha;                                              // 0x4684(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MountPosition;                                           // 0x4688(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MountOffset;                                             // 0x4694(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MountWeaponPosition;                                     // 0x46A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SightTiltRotation;                                       // 0x46AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             BracedAimPosition;                                       // 0x46B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickRotationAmount;                                      // 0x46C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasBipod;                                               // 0x46C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YLQ0[0x7];                                   // 0x46C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimCollection                            WeapArmsFPPAnims;                                        // 0x46D0(0x0128) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor
		struct FRotator                                            LowReadyRotationOffset;                                  // 0x47F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LowReadyPositionOffset;                                  // 0x4804(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LowReadyAlpha;                                           // 0x4810(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bVaulting;                                               // 0x4814(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29DG[0x3];                                   // 0x4815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VaultLeftHandOffsetAlpha;                                // 0x4818(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float PlayEquipMontage(class UAnimMontage* MontageToPlay);
		float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
		float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
		void VaultingLayer(const struct FPoseLink& inputpose, struct FPoseLink* VaultingLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void GetMountPosition();
		void GetGripAmount();
		void GetSightRotationOffset();
		void GetSmoothRotation();
		void GetSightPosition(struct FVector* Positon);
		void PlayCharacterFPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float* PlayDuration);
		void UpdateLeanOffsets();
		void AssignLegacyWeaponLocomotionAnims(TMap<class FName, class UAnimSequenceBase*>* WeaponAnimSet);
		void AssignWeaponLocomotionAnims(struct FCharacterAnimCollection* AnimCollection, bool bReadyToThrow);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void UpdateAttachments();
		void BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn);
		void BlueprintUpdateControllerOwnerRefs(class AController* NewC);
		void BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap);
		void WeaponUpdated(class ABP_HDWeaponBase_C* NewWeapon);
		void ExecuteUbergraph_ABP_HDPlayerCharacter_FP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
