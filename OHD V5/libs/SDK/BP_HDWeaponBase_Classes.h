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
	 * BlueprintGeneratedClass BP_HDWeaponBase.BP_HDWeaponBase_C
	 * Size -> 0x01E0 (FullSize[0x0A38] - InheritedSize[0x0858])
	 */
	class ABP_HDWeaponBase_C : public AHDBaseWeapon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0858(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Muzzle;                                                  // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultBipod;                                            // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultGrip;                                             // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultBarrel;                                           // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSight;                                            // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UAnimSequenceBase*>                LocoAnimSet;                                             // 0x0888(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay
		TMap<class FName, class UAnimSequenceBase*>                LocoTPPAnimSet;                                          // 0x08D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay
		bool                                                       bUseMirroredLowerBodyLocomotion;                         // 0x0928(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_95X9[0x3];                                   // 0x0929(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FirstPersonPositionOffset;                               // 0x092C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasGrip;                                                // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHasBipod;                                               // 0x0939(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BUIR[0x2];                                   // 0x093A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BracedAimPosition;                                       // 0x093C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentSight;                                            // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentBarrel;                                           // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentGrip;                                             // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentBipod;                                            // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USceneComponent*>                             Sights;                                                  // 0x0968(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdateAttachments;                                     // 0x0978(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ADSOffset;                                               // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BipodPlayerDistance;                                     // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BipodCameraHeight;                                       // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L831[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FiringScreenShake;                                       // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BracedAimTilt;                                           // 0x09A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ThirdPersonPositionOffset;                               // 0x09A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ThirdPersonAimOffset;                                    // 0x09B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickAmount;                                              // 0x09BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickNoiseAmount;                                         // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FHGH[0x4];                                   // 0x09C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BasePoseBonesToHide;                                     // 0x09C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash
		class FName                                                SecondMagBoneName;                                       // 0x09D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BulletBoneName;                                          // 0x09E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LowReadyRotationOffset;                                  // 0x09E8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LowReadyPositionOffset;                                  // 0x09F4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdateSights;                                          // 0x0A00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UMaterialInstanceDynamic*>                    ThirdPersonMatArray;                                     // 0x0A10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      AmmoPercent;                                             // 0x0A20(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QINQ[0x4];                                   // 0x0A24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    FirstPersonMatArray;                                     // 0x0A28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ShouldUseMirroredLowerBodyLoco(bool* bOutUseMirrored);
		void GetLocoTPPAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet);
		void GetLocoAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet);
		void OnRep_AmmoPercent();
		void FindNextMagazine(class ADFBaseItem** NextClip);
		bool CanFire();
		void InternalSetVisibilityForAttachment(class USceneComponent* Attachment, bool bFirstPerson);
		void UpdateAttachmentVisibility(bool bFirstPerson);
		bool RemoveLegacyLocomotionAnims(bool bFPP);
		TMap<class FName, class UAnimSequenceBase*> GetLegacyLocomotionAnims(bool bFPP);
		void UserConstructionScript();
		void CycleSight();
		void SetCurrentSight(class USceneComponent* Sight);
		void ReceiveFire();
		void ReceiveVisibilityChanged(bool bFirstPerson);
		void ReceiveOnEquip(class ADFBaseItem* LastItem);
		void ResetBullets();
		void ServerSetAmmoPercent(float AmmoPercent);
		void ExecuteUbergraph_BP_HDWeaponBase(int32_t EntryPoint);
		void OnUpdateSights__DelegateSignature();
		void OnUpdateAttachments__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
