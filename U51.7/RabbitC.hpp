#ifndef UE4SS_SDK_RabbitC_HPP
#define UE4SS_SDK_RabbitC_HPP

class ARabbitC_C : public ADeerC_C
{
    class UCapsuleComponent* GrabCapsule;
    FVector LastFrameWorldLocation;
    FTimerHandle RotTImer;
    class UPhysicsHandleComponent* HandleGrabbed;
    class UGripMotionControllerComponent* GripGrabbed;
    bool DropEasterEgg;
    bool TelekinesisActive;
    bool IsOnFire;
    float MinScale;
    float MaxScale;
    bool IsRabbit;
    FTransform MeshCapsuleOffset;
    class ACubeGameState* K2Node_DynamicCast_AsCube_Game_State_BP;
    bool K2Node_DynamicCast_bSuccess;
    class UGripMotionControllerComponent* K2Node_Event_GrippingController;
    FBPActorGripInformation K2Node_Event_GripInformation;
    bool K2Node_Event_Enabled;
    FTransform CallFunc_GetTransform_ReturnValue;
    class UGripMotionControllerComponent* K2Node_Event_ReleasingController;
    FBPActorGripInformation K2Node_Event_GripInformation_1;
    bool K2Node_Event_bWasSocketed;
    class AReceiveLightActor* K2Node_Event_Hand;
    float K2Node_Event_Percent;
    class UGripMotionControllerComponent* K2Node_Event_GrippingController_1;
    FBPActorGripInformation K2Node_Event_GripInformation_2;
    float K2Node_Event_DeltaTime;
    class UGripMotionControllerComponent* K2Node_Event_HoldingController;
    uint8 K2Node_Event_GripID;
    bool K2Node_Event_bIsHeld;
    float CallFunc_BreakVector_X;
    float CallFunc_BreakVector_Y;
    float CallFunc_BreakVector_Z;
    FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult;
    class UGripMotionControllerComponent* K2Node_Event_GripOwningController;
    class USceneComponent* K2Node_Event_ReleasingSecondaryGripComponent;
    FBPActorGripInformation K2Node_Event_GripInformation_3;
    class UGripMotionControllerComponent* K2Node_Event_GripOwningController_1;
    class USceneComponent* K2Node_Event_SecondaryGripComponent;
    FBPActorGripInformation K2Node_Event_GripInformation_4;
    FKey K2Node_Event_Key;
    TEnumAsByte<EInputEvent> K2Node_Event_KeyEvent;
    class UGripMotionControllerComponent* K2Node_Event_ReleasingController_1;
    FBPActorGripInformation K2Node_Event_GripInformation_5;
    bool K2Node_Event_bWasSocketed_1;
    class UGripMotionControllerComponent* K2Node_Event_GrippingController_2;
    FBPActorGripInformation K2Node_Event_GripInformation_6;
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1;
    class AActor* K2Node_ComponentBoundEvent_OtherActor_1;
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1;
    int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1;
    bool K2Node_ComponentBoundEvent_bFromSweep;
    FHitResult K2Node_ComponentBoundEvent_SweepResult;
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;
    class AActor* K2Node_ComponentBoundEvent_OtherActor;
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;
    int32 K2Node_ComponentBoundEvent_OtherBodyIndex;
    class AReceiveLightActor* K2Node_DynamicCast_AsVRHand_Fingers_BP;
    bool K2Node_DynamicCast_bSuccess_1;
    class AReceiveLightActor* K2Node_DynamicCast_AsVRHand_Fingers_BP_1;
    bool K2Node_DynamicCast_bSuccess_2;
    float CallFunc_BreakRotator_Roll;
    float CallFunc_BreakRotator_Pitch;
    float CallFunc_BreakRotator_Yaw;
    bool CallFunc_IsEaster_Is;
    float CallFunc_BreakRotator_Roll_1;
    float CallFunc_BreakRotator_Pitch_1;
    float CallFunc_BreakRotator_Yaw_1;
    FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult;

    void StopGrabbed();
    void SetVerticalRot();
    void SetObjectRotation(class AReceiveLightActor* bpp__Hand__pf, float bpp__Percent__pf);
    void SetGravityGloveTargetIndicatorActive(bool bpp__Active__pf, bool bpp__Left__pf, bool& bpp_____pf);
    void Release(class AVRCharacter* bpp__Player__pf, class UMotionControllerComponent* bpp__Component__pf, bool& bpp__Success__pf);
    void NowGrabbed(hand bpp__Hand__pf);
    void LightOnFire(bool& bpp__Ret__pf);
    void Grab(class AVRCharacter* bpp__Player__pf, class UBoxComponent* bpp__HandComponent__pf, class UMeshComponent* bpp__HandMesh__pf, class USphereComponent* bpp__HandOverlap__pf, class UBoxComponent* bpp__OtherHandComponent__pf, class UMeshComponent* bpp__OtherHandParentComponent__pf, hand bpp__Hand__pf, bool bpp__IsDistanceGrab__pf, bool bpp__AfterSpawn__pf, class AActor*& bpp__GrabbedActorMain__pf, class AActor*& bpp__GrabbedActorDirect__pf);
    void GetRealWorldLocation(FVector& bpp__Location__pf);
    void DeactivateTelekinesis(class UStaticMeshComponent*& bpp__Return__pf);
    void DeactivatePhysicsOnCapsuleAgain();
    void CanTelekinesis(bool bpp__LineOfSight__pf, bool& bpp__Can__pf, class AActor*& bpp__ActorToGrab__pf);
    void BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
    void BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, const FHitResult& bpp__SweepResult__pf__const);
    void ActivateTelekinesis(hand bpp__Hand__pf, bool bpp__GravityGlove__pf, class UPrimitiveComponent*& bpp__SimulatingComponent__pf);
};

#endif
