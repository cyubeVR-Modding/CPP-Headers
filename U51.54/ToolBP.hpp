#ifndef UE4SS_SDK_ToolBP_HPP
#define UE4SS_SDK_ToolBP_HPP

class AToolBP_C : public ATool
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* WallMountHint;
    class UStaticMeshComponent* ToolMesh;
    float Timeline_2_FadePercentage_0CAD3C564938463DCD41BA961A6F98A9;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_0CAD3C564938463DCD41BA961A6F98A9;
    class UTimelineComponent* Timeline_2;
    float Timeline_1_1_29561E1A4E5533F4AA5F03B46CD247CA;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_29561E1A4E5533F4AA5F03B46CD247CA;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Percent_D88BA42547C3FBCFDAD02FB1CC007561;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D88BA42547C3FBCFDAD02FB1CC007561;
    class UTimelineComponent* Timeline_0;
    bool Active;
    FVector LastFrontLocation;
    FVector LastFrameFrontLocation;
    FVector LastLastFrameFrontLocation;
    FVector LastVelocity;
    FVector LastVelocityAvg;
    TArray<FVector> LastVelocities;
    float LastHit;
    FVector ToolLocationLastHit;
    bool HitFreeAgain;
    class AChunkManager* ChunkManager;
    class AFirstPersonCharacterVR_C* Player;
    class UMaterialInstanceDynamic* MeshMaterial;
    bool CanHitTree;
    bool CollisionPhysicsBodyBlock;
    bool InsideMesh;
    float LastSpeed;
    FVector EnterBlockLocation;
    FVector FrontLocationOnEnter;
    FVector LastFrameShoveBlockLocation;
    bool IsRealTool;
    bool IsFreeTool;
    bool IsFreeToolUsed;
    TEnumAsByte<hand> CurrentSelectedHand;
    class AActor* ParentHandUsed;
    class UPhysicsHandleComponent* CurrentAttachedHandle;
    TEnumAsByte<hand> CurrentAttachedHand;
    bool DontBlockStatic;
    bool OneReleaseDone;
    class UGripMotionControllerComponent* GrippedByGrip;
    bool L_BehindBack;
    float LastCantMineHintShown;
    float LastCantDestroyHintShown;
    FTimerHandle WallMountNearTimer;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void CheckWallMountNear(bool OverrideFalse);
    void Check Release Behind Back(class AFirstPersonCharacterVR_C* Player, EControllerHand hand, bool& Result);
    void GetRealBlockHitType(EBlockTypeBP BlockType, int32 UniqueId, EBlockTypeBP& RealBlockType);
    void GetAcceptableLocHitRadius(float& Radius);
    void AxeInTree(bool InTree);
    void HitMeshObject(class AMeshObject* MeshObject, class UPrimitiveComponent* Component, FHitResult Hit);
    void ShovelLeaveBlockNew(FVector LeftAt);
    void TickShovel();
    void GetHitSound(EBlockTypeBP BlockType, bool& Result, class USoundBase*& Sound);
    void GetHitHoldParticle(EBlockTypeBP BlockType, bool& Result, class UParticleSystem*& ParticleSystem);
    void SetLastHit();
    void DamageBlock(class AActor* Actor, FVector Block Location, bool ShouldDamage, bool Shovel, EBlockTypeBP ShovelHit, FVector BlockNormal, FVector ExactHitLocation, bool& CanDamage, EBlockTypeBP& HitType, bool& HitSomethingTotallyWrong);
    void ShovelLeaveBlock(class AActor* Actor, class UPrimitiveComponent* Component);
    void GetHitParticle(EBlockTypeBP BlockType, class UParticleSystem*& ParticleSystem);
    void HitSomething(class AActor* Actor, class UPrimitiveComponent* Component, FHitResult Hit);
    void GetDamageOnBlock(EBlockTypeBP Type, bool& Result, float& Damage);
    void FindLastSpeed(float& Speed);
    void IsOverlapToolType(bool& TRUE);
    void GetForwardRotation(FRotator& Rotation);
    void CheckFrontLeaveHit();
    void SetType(EBlockTypeBP New Type);
    void GetFrontVelocity(FVector& Velocity, float& Speed);
    void Set Active(bool Active, TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Player);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__ToolMesh_K2Node_ComponentBoundEvent_33_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ShiftArrayUp();
    void SetAverageVelocity();
    void CheckHitFreeAgain();
    void PlayHaptics();
    void EnableFreeFall();
    void OverlapWithHand(class AVRHandFingersBP_C* HandController, class UPrimitiveComponent* OtherComp);
    void BndEvt__ToolMesh_K2Node_ComponentBoundEvent_26_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InitTool(EBlockTypeBP Type_, class AChunkManager* ChunkManager_, class ACharacter* Player_);
    void AddToBucket(bool BehindBack);
    void SetInTree();
    void AttachToPossibleWallmount();
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void FadeToGrab();
    void StopFadeToGrab();
    void SetToolVisibility(bool Visibility, class AFirstPersonCharacterVR_C* Player, bool RightHand);
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__ToolMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void CheckWallMountNearEvent();
    void DestroyWallMountHint();
    void ExecuteUbergraph_ToolBP(int32 EntryPoint);
};

#endif