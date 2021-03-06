#ifndef UE4SS_SDK_BlockItemVR_HPP
#define UE4SS_SDK_BlockItemVR_HPP

class ABlockItemVR_C : public ABlockItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* BlockItemSphereNiagaraSystem;
    class UStaticMeshComponent* CubeOutline;
    class UTextRenderComponent* Amount2;
    class UStaticMeshComponent* CubeForSockets;
    class UTextRenderComponent* TextRender;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* Down;
    class UStaticMeshComponent* Up;
    class UStaticMeshComponent* Back;
    class UStaticMeshComponent* Front;
    class UStaticMeshComponent* Right;
    class UStaticMeshComponent* Left;
    class UBoxComponent* Box;
    float FadeToHand_FadePercentage_7EC1DF214A17A94362F2F69CB74CC75C;
    TEnumAsByte<ETimelineDirection::Type> FadeToHand__Direction_7EC1DF214A17A94362F2F69CB74CC75C;
    class UTimelineComponent* FadeToHand;
    float FadeCoalBurning_NewTrack_0_3F6EE20D4BCC90679D7B68B6F253FD41;
    TEnumAsByte<ETimelineDirection::Type> FadeCoalBurning__Direction_3F6EE20D4BCC90679D7B68B6F253FD41;
    class UTimelineComponent* FadeCoalBurning;
    float FadeScale_Scale_B4E6C13B44D2D717C065229A41F60F19;
    TEnumAsByte<ETimelineDirection::Type> FadeScale__Direction_B4E6C13B44D2D717C065229A41F60F19;
    class UTimelineComponent* FadeScale;
    float GetSmaller_1_21C2406F41BB1B8C530318BF4C6355BC;
    TEnumAsByte<ETimelineDirection::Type> GetSmaller__Direction_21C2406F41BB1B8C530318BF4C6355BC;
    class UTimelineComponent* GetSmaller;
    class UMaterialInstanceDynamic* Material;
    class UMaterialInstanceDynamic* MaterialInstanceDynamic;
    class AChunkManagerBP_C* ChunkManager;
    bool Rotate;
    float SphereDis;
    TArray<class UStaticMeshComponent*> Spheres;
    bool IsPartOfStructure;
    class ABlockItemVR_C* OverlapToAttachTo;
    class ABlockItemVR_C* IsAttachedTo;
    TArray<ERotation> SphereDirections;
    class UStaticMeshComponent* SphereToAttachTo;
    bool HasSomethingAttachedTo;
    class ABlockItemVR_C* StructureMainItem;
    TEnumAsByte<hand> LastGrabbedByHand;
    class ABlockItemVR_C* ItemOverlapWith;
    EItemClass CurrentItemClass;
    FVector OriginalScale;
    bool DragOutUI;
    float LastVibration;
    TArray<class UParticleSystemComponent*> Particles;
    EBlockTypeBP CraftingType;
    int32 CraftingTypeUniqueID;
    int32 CraftingAmount;
    class AFirstPersonCharacterVR_C* OverlapCharacter;
    ERotation SphereToAttachToDirection;
    bool DoBeginPlay;
    int32 Amount;
    class AChestInternalsBP_C* IsInChest;
    int32 IsInChestIndex;
    class AChestInternalsBP_C* FromChest;
    int32 FromChestIndex;
    bool DoFadeScale;
    FBlockItemVR_CReleased Released;
    void Released();
    FVector Speed;
    class UParticleSystemComponent* OnFireParticles;
    bool IsMelting;
    float MeltAmountBP;
    bool GravGlovActive;
    FRotator FadeStartRotation;
    FVector FadeStartLocation;
    FTimerHandle SpreadFireTimer;
    bool L_BehindBack;
    bool PlayHapticFeedbackOnGrabbedHand;
    FTimerHandle ShowCraftingHintTimer;
    bool FadingToDestroyed;
    FTimerHandle NoLongerFromChestTimer;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void IfHeldInHandThenRelease();
    void ShowCraftingHint();
    void Check Release Behind Back(class AFirstPersonCharacterVR_C* Player, EControllerHand hand, bool& Result);
    void ReduceHealthWhileOnFire(bool& Dead);
    void LightOnFire();
    void InitFlint();
    void UnlockAchievementOnCraft(EBlockTypeBP DidCraftType, int32 Num);
    void CheckAttachToBucket(bool& Destroyed);
    void SetCrystalPropertiesBP();
    void ActivateTelekinesisF();
    void DetachAll();
    void SetSphereLoc(class USceneComponent*& Sphere, float X, float Y, float Z);
    void FullUpdateBP(EBlockTypeBP BlockType, int32 UniqueId, int32 Amount, bool In_DoFadeScale, bool DirectFromLoad);
    void SetAmountVisible(bool Visible);
    void SetAmount(int32 Amount, bool Visible);
    void GetNuggetMeshInfo(class UStaticMesh*& Mesh, FVector& Scale);
    void DoCraftingCheck();
    void SetParticles(bool Active);
    void Vibrate(TEnumAsByte<hand> hand);
    void SetSphereSize();
    void SetFullScale();
    void SetNuggetType();
    void InitNugget();
    void AttachToOtherItemF();
    void CheckIfLocationAlreadyUsed(FVector WorldLocation, bool& AlreadyThere);
    void TransferOwnershipToNewItem();
    void SetHighlight(bool Enable, bool Regular);
    void SphereToDirection(class UStaticMeshComponent* AttachPoint, ERotation& Direction);
    void AddToInventory();
    void UpdateItemTypeBP(EBlockTypeBP BlockType, int32 UniqueId, bool Always);
    void UserConstructionScript();
    void GetSmaller__FinishedFunc();
    void GetSmaller__UpdateFunc();
    void FadeScale__FinishedFunc();
    void FadeScale__UpdateFunc();
    void FadeCoalBurning__FinishedFunc();
    void FadeCoalBurning__UpdateFunc();
    void FadeToHand__FinishedFunc();
    void FadeToHand__UpdateFunc();
    void SetSphereVisibility(bool bNewVisibility);
    void SetRotate(bool Rotate);
    void CheckSphereOverlaps();
    void OtherItemAttached(class ABlockItemVR_C* Item);
    void OtherItemDetached(class ABlockItemVR_C* Item);
    void OverlapHandCustom(EControllerHand hand);
    void AddToBucket(bool BehindBack);
    void DoCheck();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_K2Node_ComponentBoundEvent_318_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_87_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FHitResult HitResult);
    void EndOverlapM(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_192_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_308_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void DisableAllOverlapEvents();
    void ReceiveBeginPlay();
    void StartFadeScale();
    void UpdateItemType(EBlockTypeBP NewType, int32 NewUniqueID, class AChunkManager* ChunkManager);
    void NoLongerFromChest();
    void EndOverlapCustom();
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ResetToPoolBP();
    void ResetAddBucket();
    void ResetAddBucket2();
    void FullUpdate(int32 Amount, EBlockTypeBP NewType, int32 NewUniqueID, bool DirectFromLoad);
    void RemoveFromOverlap();
    void FullyChargedNow();
    void SpreadFire();
    void TimerForSpreadFire();
    void FadeCoalToBurning();
    void EnablePhysicsSoon();
    void FadeToGrab();
    void StopFadeToGrab();
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void ExecuteUbergraph_BlockItemVR(int32 EntryPoint);
    void Released__DelegateSignature();
};

#endif
