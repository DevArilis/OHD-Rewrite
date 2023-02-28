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
	 * AnimBlueprintGeneratedClass ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C
	 * Size -> 0xF0E8 (FullSize[0xF3C8] - InheritedSize[0x02E0])
	 */
	class UABP_HDPlayerCharacter_TP_C : public UHDPlayerCharacterAnimInst_TPP
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x02E8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x0308(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x0328(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_20;                         // 0x0348(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_58;                         // 0x0400(0x0078)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_42;                             // 0x0478(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_41;                             // 0x0580(0x0108)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_13;                          // 0x0688(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x0750(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x0810(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x0830(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_40;                             // 0x0850(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_39;                             // 0x0958(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_38;                             // 0x0A60(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_37;                             // 0x0B68(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x0C70(0x0020)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x0C90(0x00C8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x0D58(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x0D78(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_19;                               // 0x0D98(0x00F0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x0E88(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_19;                         // 0x0F48(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x1000(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x1028(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_36;                             // 0x1050(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_35;                             // 0x1158(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_18;                               // 0x1260(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_34;                             // 0x1350(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_17;                               // 0x1458(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_33;                             // 0x1548(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x1650(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x1678(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x16A0(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_16;                               // 0x16C0(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_32;                             // 0x17B0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x18B8(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x18D8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x1998(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_31;                             // 0x19C0(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_28;                        // 0x1AC8(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_18;                         // 0x1B68(0x00B8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_30;                             // 0x1C20(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_29;                             // 0x1D28(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_15;                               // 0x1E30(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_28;                             // 0x1F20(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_27;                             // 0x2028(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_26;                             // 0x2130(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_25;                             // 0x2238(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_24;                             // 0x2340(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_23;                             // 0x2448(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_22;                             // 0x2550(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_21;                             // 0x2658(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_20;                             // 0x2760(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_19;                             // 0x2868(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0x2970(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_17;                         // 0x2A78(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x2B30(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x2B58(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x2B80(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x2C88(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x2D90(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x2DB0(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_3;                               // 0x2DD0(0x01E0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_14;                               // 0x2FB0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_13;                               // 0x30A0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_12;                               // 0x3190(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x3280(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x3370(0x0108)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_92;                       // 0x3478(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_91;                       // 0x34A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_90;                       // 0x34C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_89;                       // 0x34F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_88;                       // 0x3518(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_57;                         // 0x3540(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_52;                            // 0x35B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_56;                         // 0x35E8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_51;                            // 0x3660(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_55;                         // 0x3690(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_50;                            // 0x3708(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_2;                            // 0x3738(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_49;                            // 0x3750(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_13;                           // 0x3780(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_12;                          // 0x3830(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_87;                       // 0x38F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_86;                       // 0x3920(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_85;                       // 0x3948(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_54;                         // 0x3970(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_48;                            // 0x39E8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_53;                         // 0x3A18(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_47;                            // 0x3A90(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x3AC0(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_46;                            // 0x3AD8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_12;                           // 0x3B08(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_11;                          // 0x3BB8(0x00C8)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x3C80(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x3E60(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x3F68(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x4070(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x4178(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x4280(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x4388(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x4448(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16;                         // 0x4470(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x4528(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x4550(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x4610(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x4638(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x4728(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x4818(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x4920(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x4A28(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x4B18(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x4C08(0x0108)
		struct FAnimNode_Root                                      AnimGraphNode_Root_10;                                   // 0x4D10(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_5;                            // 0x4D40(0x0018)
		struct FAnimNode_Root                                      AnimGraphNode_Root_9;                                    // 0x4D58(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_8;                         // 0x4D88(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_8;                                    // 0x4E00(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_7;                         // 0x4E30(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_7;                                    // 0x4EA8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_6;                         // 0x4ED8(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_6;                                    // 0x4F50(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_5;                         // 0x4F80(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_5;                                    // 0x4FF8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_4;                         // 0x5028(0x0078)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_3;                         // 0x50A0(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x5118(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x51D0(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x5288(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x52B0(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x52D8(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x53C8(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x5480(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_10;                          // 0x54A8(0x00C8)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_2;                         // 0x5570(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x55E8(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x56A0(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x56C8(0x00F0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x57B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x57E0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x5808(0x00B8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x58C0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_52;                         // 0x5908(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x5980(0x00B8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_9;                           // 0x5A38(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51;                         // 0x5B00(0x0078)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_7;                // 0x5B78(0x0188)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_27;                        // 0x5D00(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x5DA0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_50;                         // 0x5DC8(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x5E40(0x00B8)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x5EF8(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_4;                                    // 0x5F70(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_Root_3;                                    // 0x5FA0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_84;                       // 0x5FD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_83;                       // 0x5FF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_82;                       // 0x6020(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_81;                       // 0x6048(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_80;                       // 0x6070(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_79;                       // 0x6098(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_78;                       // 0x60C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_77;                       // 0x60E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_76;                       // 0x6110(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_75;                       // 0x6138(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_74;                       // 0x6160(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_73;                       // 0x6188(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_49;                         // 0x61B0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_45;                            // 0x6228(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48;                         // 0x6258(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_44;                            // 0x62D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47;                         // 0x6300(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_43;                            // 0x6378(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_46;                         // 0x63A8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_42;                            // 0x6420(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0x6450(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_41;                            // 0x64C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0x64F8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_40;                            // 0x6570(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0x65A0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0x6618(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_26;                        // 0x6690(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_39;                            // 0x6730(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_11;                           // 0x6760(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_38;                            // 0x6810(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_72;                       // 0x6840(0x0028)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_4;                            // 0x6868(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_37;                            // 0x6880(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_10;                           // 0x68B0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x6960(0x00B8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_71;                       // 0x6A18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_70;                       // 0x6A40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_69;                       // 0x6A68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_68;                       // 0x6A90(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0x6AB8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_36;                            // 0x6B30(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x6B60(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_25;                        // 0x6B88(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0x6C28(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_35;                            // 0x6CA0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0x6CD0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_34;                            // 0x6D48(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x6D78(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33;                            // 0x6DA0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9;                            // 0x6DD0(0x00B0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x6E80(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x6F48(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x6F70(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x6FA0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_67;                       // 0x6FE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_66;                       // 0x7010(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_65;                       // 0x7038(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0x7060(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0x7088(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0x70B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0x70D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x7100(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x7128(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x7150(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x7178(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x71A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x71C8(0x0028)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_3;                            // 0x71F0(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_32;                            // 0x7208(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0x7238(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x72E8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x7318(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x7340(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x7368(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x7398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x73C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x73E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x7410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x7438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x7460(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0x7488(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_24;                        // 0x7500(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0x75A0(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_23;                        // 0x7618(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x76C8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x7740(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x7770(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_23;                        // 0x77E8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x7888(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_22;                        // 0x7900(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x79B0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x7A28(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x7A58(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_22;                        // 0x7AD0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x7B70(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_21;                        // 0x7BE8(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x7C98(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x7D10(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_2;                            // 0x7D40(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x7D58(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x7D88(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x7E38(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x7E68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x7E90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x7EB8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x7EE0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x7F58(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x7F88(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x8068(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x8098(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x8148(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x8178(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x81A0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x81D0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x8280(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x82A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x82D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x82F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x8320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x8348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x8370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x8398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x83C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x83E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x8410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x8438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x8460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x8488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x84B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x84D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x8500(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x8528(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x8550(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x8580(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x85A8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x85D8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x8608(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x8630(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x8660(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x8690(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x86B8(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x86E8(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x8700(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x8730(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x87E0(0x00B8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x8898(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x88C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x88E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x8910(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x8938(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x8960(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x8988(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x89B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x89D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x8A00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x8A28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x8A50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x8A78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x8AA0(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x8AC8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x8BB8(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x8CA8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x8DB0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x8EB8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x8FC0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x8FE0(0x0020)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_20;                        // 0x9000(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x90B0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x9128(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x91A0(0x0030)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x91D0(0x01E0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x93B0(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x94A0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x95A8(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x95C8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x95E8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x96F0(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x97F8(0x0078)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x9870(0x00F0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x9960(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_24;                      // 0x9990(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_23;                      // 0x99D8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_21;                        // 0x9A20(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_19;                        // 0x9AC0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x9B70(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x9BE8(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0x9C60(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_18;                        // 0x9D00(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_8;                           // 0x9DB0(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_22;                      // 0x9E78(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x9EC0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x9F38(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_21;                      // 0x9F68(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_20;                      // 0x9FB0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0x9FF8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_17;                        // 0xA098(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0xA148(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0xA1C0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0xA238(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_16;                        // 0xA2D8(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_7;                           // 0xA388(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_19;                      // 0xA450(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0xA498(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0xA510(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_18;                      // 0xA540(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_17;                      // 0xA588(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0xA5D0(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_15;                        // 0xA670(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0xA720(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0xA798(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0xA810(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_14;                        // 0xA8B0(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6;                           // 0xA960(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_16;                      // 0xAA28(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0xAA70(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0xAAE8(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0xAB18(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0xAB60(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0xABA8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_13;                        // 0xAC48(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0xACF8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0xAD70(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0xADE8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_12;                        // 0xAE88(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0xAF38(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0xB000(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0xB048(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0xB0C0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0xB0F0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0xB118(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0xB1F8(0x00E0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_6;                // 0xB2D8(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5;                // 0xB460(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0xB5E8(0x0188)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0xB770(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0xB810(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_11;                        // 0xB888(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0xB938(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0xB9D8(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0xBAB8(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0xBB58(0x00E0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_10;                        // 0xBC38(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0xBCE8(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0xBDC8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0xBDF8(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0xBEA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0xBED0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0xBEF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0xBF20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0xBF48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0xBF70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0xBF98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0xBFC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0xBFE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0xC010(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0xC038(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0xC080(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0xC0C8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_9;                         // 0xC168(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0xC218(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0xC290(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0xC308(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_8;                         // 0xC3A8(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0xC458(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0xC520(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0xC568(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0xC5E0(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0xC610(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0xC658(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0xC6A0(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_7;                         // 0xC740(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0xC7F0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0xC868(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0xC8E0(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_6;                         // 0xC980(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0xCA30(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0xCAF8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0xCB40(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0xCBB8(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0xCBE8(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0xCC30(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0xCC78(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_5;                         // 0xCD18(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0xCDC8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0xCE40(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0xCEB8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0xCF58(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0xD008(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0xD0D0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0xD118(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0xD190(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0xD1C0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0xD208(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0xD250(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0xD2F0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0xD3A0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0xD418(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0xD490(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0xD530(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0xD5E0(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0xD6A8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0xD6F0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0xD768(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0xD798(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0xD7C0(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0xD948(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0xDAD0(0x0188)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0xDC58(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0xDD38(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0xDDD8(0x00E0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0xDEB8(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0xDF68(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0xE048(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0xE078(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0xE128(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0xE208(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0xE238(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0xE2E8(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0xE3A0(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0xE458(0x00B8)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0xE510(0x0030)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_7;                         // 0xE540(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0xE5F0(0x00B8)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_6;                         // 0xE6A8(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_5;                         // 0xE758(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0xE808(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0xE8C0(0x0028)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_4;                         // 0xE8E8(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_3;                         // 0xE998(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_2;                         // 0xEA48(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0xEAF8(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0xEBA8(0x0028)
		bool                                                       __CustomProperty_DoPelvisDisplacement_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEBD0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HRL1[0x3];                                   // 0xEBD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_PelvisIK_Displacement_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEBD4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_bDoFootIK_R_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEBE0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bDoFootIK_L_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEBE1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TSXD[0x2];                                   // 0xEBE2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            __CustomProperty_FootIK_L_Rotation_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEBE4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            __CustomProperty_FootIK_R_Rotation_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEBF0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             __CustomProperty_FootIK_L_Displacement_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEBFC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             __CustomProperty_FootIK_R_Displacement_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC08(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_bPreventAOHandDriftFromWeapon_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC14(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T8ZG[0x3];                                   // 0xEC15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_HandFKWeight_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC18(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_bUseHandIKRetargeting_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC1C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bUseRightHandIK_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC1D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bUseLeftHandIK_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC1E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UCLO[0x1];                                   // 0xEC1F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          __CustomProperty_RightHandIKTransform_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC20(0x0030) IsPlainOldData, NoDestructor
		struct FTransform                                          __CustomProperty_LeftHandIKTransform_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xEC50(0x0030) IsPlainOldData, NoDestructor
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0xEC80(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0xED20(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0xEDC0(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0xEE78(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0xEEA0(0x0028)
		class ABP_HDPlayerCharacterBase_C*                         OwningChar;                                              // 0xEEC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerControllerBase_C*                        OwningPC;                                                // 0xEED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDWeaponBase_C*                                  CurrentWeapon;                                           // 0xEED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNotLeaningOrIsMoving;                                   // 0xEEE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeaningNoSpeed;                                         // 0xEEE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeaningLeft;                                            // 0xEEE2(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeaningRight;                                           // 0xEEE3(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELeanDirection                                             LeanDirection;                                           // 0xEEE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEquipped;                                               // 0xEEE5(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bValidMovementState;                                     // 0xEEE6(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLandBasedMovement;                                      // 0xEEE7(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFluidBasedMovement;                                     // 0xEEE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAirBasedMovement;                                       // 0xEEE9(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAirOnlyBasedMovement;                                   // 0xEEEA(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFiring;                                                 // 0xEEEB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FiringAlpha;                                             // 0xEEEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisableWeaponUpperBodyLayer;                            // 0xEEF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECharacterMoveState                                        MovementState;                                           // 0xEEF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  EquippedItemType;                                        // 0xEEF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPrefiring;                                              // 0xEEF3(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bReadyToThrow;                                           // 0xEEF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseLeftHandIK;                                          // 0xEEF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10PT[0xA];                                   // 0xEEF6(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftHandIKTransform;                                     // 0xEF00(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseRightHandIK;                                         // 0xEF30(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Z6Z[0xF];                                   // 0xEF31(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHandIKTransform;                                    // 0xEF40(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   RifleLeanInAnim;                                         // 0xEF70(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   RifleLeanOutAnim;                                        // 0xEF78(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WeapLeftHandIKSocketName;                                // 0xEF80(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WeapRightHandIKSocketName;                               // 0xEF88(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LeftHandBoneName;                                        // 0xEF90(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RightHandBoneName;                                       // 0xEF98(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LeftFootBoneName;                                        // 0xEFA0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RightFootBoneName;                                       // 0xEFA8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          WeapDefaultLeftHandIKTransform_Rifle;                    // 0xEFB0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		struct FTransform                                          WeapDefaultLeftHandIKTransform_Pistol;                   // 0xEFE0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		struct FTransform                                          WeapDefaultRightHandIKTransform_Rifle;                   // 0xF010(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		struct FTransform                                          WeapDefaultRightHandIKTransform_Pistol;                  // 0xF040(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   BasePoseUpperAnim;                                       // 0xF070(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   BasePoseTPPUpperAnim;                                    // 0xF078(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleAdditiveUpperAnim;                                   // 0xF080(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MoveUpperAnim;                                           // 0xF088(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimInUpperAnim;                                          // 0xF090(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimBasePoseUpperAnim;                                    // 0xF098(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimOutUpperAnim;                                         // 0xF0A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintInUpperAnim;                                       // 0xF0A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintUpperAnim;                                         // 0xF0B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintOutUpperAnim;                                      // 0xF0B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   ProneInUpperAnim;                                        // 0xF0C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   CrawlUpperAnim;                                          // 0xF0C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   ProneOutUpperAnim;                                       // 0xF0D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleLowerBodyAnim;                                       // 0xF0D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SourceMesh;                                              // 0xF0E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleUpperBodyAnimPlayRateToUse;                          // 0xF0E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseMirroredLowerBodyLocomotion;                         // 0xF0EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0PRU[0x3];                                   // 0xF0ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerBodyBSPlayRateToUse;                                // 0xF0F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandFKWeightToUse;                                       // 0xF0F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugAnimMontagePlayback;                               // 0xF0F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_391Q[0x7];                                   // 0xF0F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CharAnimMontageToPlay;                                   // 0xF100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              WeapAnimInstanceToUse;                                   // 0xF108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        WeapAnimMontageToPlay;                                   // 0xF110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RifleHandFKWeight;                                       // 0xF118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PistolHandFKWeight;                                      // 0xF11C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETraceTypeQuery                                            FootIKTraceChannel;                                      // 0xF120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ECY3[0x3];                                   // 0xF121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PawnScale;                                               // 0xF124(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootIKTraceDist;                                         // 0xF128(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftFootIKOffset;                                        // 0xF12C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightFootIKOffset;                                       // 0xF138(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3281[0x4];                                   // 0xF144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   ThrowReadyBasePoseUpperAnim;                             // 0xF148(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAmount;                                              // 0xF150(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAlpha;                                               // 0xF154(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRifleLean;                                              // 0xF158(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EN9I[0x3];                                   // 0xF159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanLeftInAnimTime;                                      // 0xF15C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanLeftOutAnimTime;                                     // 0xF160(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanRightInAnimTime;                                     // 0xF164(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanRightOutAnimTime;                                    // 0xF168(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAnimOffset;                                          // 0xF16C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bStanding;                                               // 0xF170(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInCrouchStance;                                         // 0xF171(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInProneStance;                                          // 0xF172(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStandToCrouch;                                          // 0xF173(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStandToProne;                                           // 0xF174(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCrouchToProne;                                          // 0xF175(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bValidProneUpperAnims;                                   // 0xF176(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YCV6[0x1];                                   // 0xF177(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementAlpha;                                           // 0xF178(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAmount;                                          // 0xF17C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ItemPositionOffset;                                      // 0xF180(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ElbowIKWeight;                                           // 0xF18C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCharacterAnimCollection                            WeapArmsTPPAnims;                                        // 0xF190(0x0128) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor
		float                                                      AimPitchAlpha;                                           // 0xF2B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             AimingOffset;                                            // 0xF2BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAlpha;                                                // 0xF2C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0xF2CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            InversePitchAimRot;                                      // 0xF2D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bVaulting;                                               // 0xF2DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNotVaultingNoAir;                                       // 0xF2DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVaultBehavior                                             VaultBehavior;                                           // 0xF2DE(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSprintVault;                                            // 0xF2DF(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bVaultOver;                                              // 0xF2E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimbOnto;                                              // 0xF2E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QLMG[0x2];                                   // 0xF2E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VaultPelvisOffset;                                       // 0xF2E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VaultPelvisOffsetAlpha;                                  // 0xF2F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VaultHandOffsetAlpha;                                    // 0xF2F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInsideVaultState;                                       // 0xF2F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CUNM[0x3];                                   // 0xF2F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LowReadyOffset;                                          // 0xF2FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LowReadyRotation;                                        // 0xF308(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bADSFireOnly;                                            // 0xF314(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPistolEquipped;                                         // 0xF315(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLowReady;                                               // 0xF316(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GXVU[0x1];                                   // 0xF317(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SpineLowerAimPitch;                                      // 0xF318(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            SpineUpperAimPitch;                                      // 0xF324(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            NeckAimPitch;                                            // 0xF330(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            HeadAimPitch;                                            // 0xF33C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            GunAimPitch;                                             // 0xF348(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FullBodyFKWeight;                                        // 0xF354(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bProneMoving;                                            // 0xF355(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPistolEquippedAndSprinting;                             // 0xF356(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBagEquipped;                                            // 0xF357(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             GunAimPitchOffset;                                       // 0xF358(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDoPitchRotation;                                        // 0xF364(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPistolEquippedAndCrawling;                              // 0xF365(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bThrowableEquipped;                                      // 0xF366(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStandingMovingAndLowReady;                              // 0xF367(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PelvisSurfaceNormalRot;                                  // 0xF368(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PelvisSurfaceNormalRotInverse;                           // 0xF374(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FootIK_L_Displacement;                                   // 0xF380(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FootIK_R_Displacement;                                   // 0xF38C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Foot_IK_R_Rotation;                                      // 0xF398(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Foot_IK_L_Rotation;                                      // 0xF3A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDoFootIK_L;                                             // 0xF3B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDoFootIK_R;                                             // 0xF3B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3AQ[0x2];                                   // 0xF3B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PelvisIK_Displacement;                                   // 0xF3B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDoPelvisDisplacement;                                   // 0xF3C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSingleAction;                                           // 0xF3C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFiringAndNotSingleAction;                               // 0xF3C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStandingMoving;                                         // 0xF3C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CapsuleQuarterHeight;                                    // 0xF3C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float PlayEquipMontage(class UAnimMontage* MontageToPlay);
		float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
		float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
		void WeaponUpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* WeaponUpperBody);
		void WeaponAdditive(struct FPoseLink* WeaponAdditive);
		void Move(const struct FPoseLink& Move, struct FPoseLink* Move2);
		void WeaponJumpLoop(const struct FPoseLink& LowerJumpLoop, struct FPoseLink* WeaponJumpLoop);
		void VehicleFullBody(const struct FPoseLink& FullBody, struct FPoseLink* VehicleFullBody);
		void VehicleLowerBody(const struct FPoseLink& LowerBody, struct FPoseLink* VehicleLowerBody);
		void LayeredLoco(const struct FPoseLink& InBaseLayer, const struct FPoseLink& InOverlayLayer, const struct FPoseLink& InFullBodyAdditive, struct FPoseLink* LayeredLoco);
		void OverlayLocoLayer(struct FPoseLink* OverlayLocoLayer);
		void BaseLocoLayer(struct FPoseLink* BaseLocoLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void IKFootTraceSetup(const class FName& SocketName, struct FVector* TraceStart, struct FVector* TraceEnd);
		void GetCapsuleQuarterHeight(class ACharacter* Char);
		void UpdateIKTraceDataForFoot(bool bForRightFoot);
		void PerformFootIKTrace(bool bFromRightFoot, bool* bOutHit, struct FVector* OutHitOffsetFromFoot);
		void UpdateFootIKTraceData();
		void SetupFootIK(class ACharacter* CharOwner);
		void ShouldUseHandIK(bool* bOutUseHandIK);
		void PlayCharacterTPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float* PlayDuration);
		void AssignLegacyWeaponTPPLocomotionAnims(TMap<class FName, class UAnimSequenceBase*> WeaponAnimSetTPP);
		void AssignWeaponTPPLocomotionAnims(struct FCharacterAnimCollection* AnimCollection, bool bReadyToThrow);
		void GetDefaultRightHandIKTransformByItemType(EItemType ItemType, struct FTransform* RightTransform);
		void GetDefaultLeftHandIKTransformByItemType(EItemType ItemType, struct FTransform* LeftTransform);
		void OnNotifyEnd_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnNotifyBegin_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnInterrupted_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnBlendOut_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnCompleted_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnCompleted_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void AnimNotify_LeftCrouchState();
		void AnimNotify_FullyCrouchedState();
		void AnimNotify_FullyStandingState();
		void AnimNotify_LeftStandState();
		void AnimNotify_FullyProneState();
		void AnimNotify_LeftProneState();
		void AnimNotify_EnterVaultState();
		void AnimNotify_LeftVaultState();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void EquippedItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn);
		void BlueprintUpdateControllerOwnerRefs(class AController* NewC);
		void BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap);
		void ExecuteUbergraph_ABP_HDPlayerCharacter_TP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
