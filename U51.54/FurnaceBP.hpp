#ifndef UE4SS_SDK_FurnaceBP_HPP
#define UE4SS_SDK_FurnaceBP_HPP

class AFurnaceBP_C : public AFurnace
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* UpperChamberOverlapCylinder;
    class UBoxComponent* IngotOverlapTestArea;
    class UAudioComponent* Fire01;
    class UArrowComponent* IngotMoldLocation;
    class UStaticMeshComponent* Furnace_IngotMold_GameRes_Edit;
    class UWidgetComponent* Widget;
    class UDecalComponent* OpeningDecal;
    class UPointLightComponent* PointLightUpperChamber;
    class UParticleSystemComponent* P_FireBottomActive1;
    class UParticleSystemComponent* P_FireBottomActive;
    class USceneComponent* FireParticles;
    class USphereComponent* Sphere;
    class UArrowComponent* FireCheckLocation;
    class UGrabRotateComponent_C* GrabRotateComponentShutterBottom;
    class UStaticMeshComponent* Furnace_ShutterBottom_GameRes;
    class USceneComponent* RotationShutterBottom;
    class UStaticMeshComponent* Furnace_Shuttertop_GameRes;
    class UGrabRotateComponent_C* GrabRotateComponentShutterTop;
    class UGrabRotateComponent_C* GrabRotateComponentLever;
    class UArrowComponent* FlintLoc2;
    class UArrowComponent* FlintLoc1;
    class UStaticMeshComponent* Furnace_GameRes_withoutMolten;
    class UBoxComponent* ManualBoundingBox;
    class UParticleSystemComponent* P_FurnaceBottom;
    class UParticleSystemComponent* P_FurnaceChimney;
    class UPointLightComponent* PointLight1;
    class USceneComponent* Scene2;
    class UStaticMeshComponent* Furnace_Handle_GameRes;
    class USceneComponent* RotationShutterTop;
    class USceneComponent* RotationHandle;
    class UStaticMeshComponent* Furnace_MoltenOre;
    class UStaticMeshComponent* Furnace_MoltenFilling;
    class UStaticMeshComponent* Furnace_MoltenPouring;
    class UStaticMeshComponent* Furnace_IngotMold_GameRes;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_3_NewTrack_0_47FAD42D4D69E0E914140F873CCCCFE5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_47FAD42D4D69E0E914140F873CCCCFE5;
    class UTimelineComponent* Timeline_3;
    float Timeline_2_NewTrack_0_C272D8C744EBA714CA8542B356F58840;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_C272D8C744EBA714CA8542B356F58840;
    class UTimelineComponent* Timeline_2;
    float Timeline_1_NewTrack_0_589CE3254385859D68E57789F3C85D2C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_589CE3254385859D68E57789F3C85D2C;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_D0E59FD342927335F523658AFC4E5862;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D0E59FD342927335F523658AFC4E5862;
    class UTimelineComponent* Timeline_0;
    float FlowOut_NewTrack_0_C431153E4CC8F480C54B05ACD9CB0C01;
    TEnumAsByte<ETimelineDirection::Type> FlowOut__Direction_C431153E4CC8F480C54B05ACD9CB0C01;
    class UTimelineComponent* FlowOut;
    class ABlockItemVR_C* Flint1Actor;
    class ABlockItemVR_C* Flint2Actor;
    FVector Flint1LastLoc;
    FVector Flint2LastLoc;
    bool FurnaceOnFireNow;
    float HeatOnTop;
    float MoltenFillValue;
    float MeltAmountSum;
    TArray<class UDecalComponent*> DecalPool;
    class UMaterialInstanceDynamic* OpeningDecalMat;
    class UFurnaceUpperUI_C* UpperUI;
    int32 CountItemsToMelt;
    int32 ItemsFullyFinishedMelt;
    bool FurnaceFlowOutActive;
    float FurnaceTimeMul;
    TArray<FTransform> IngotLocations;
    class AActor* AttachedMold;
    float CoolingDownProgress;
    bool CoolingDown;
    float TotalHeatComingFromBottom;
    class UCurveFloat* Curve;
    bool FlowOutStarted;
    bool MoldFreeAgain;
    bool MeltingIron;
    bool MeltingSand;
    EBlockTypeBP IngotToSpawn;

    void CanDamageObjectBP(bool& CanDamage);
    void CheckUpperChamberItemAmount();
    void GetFurnaceSaveVariables(float& HeatOnTop, float& MoltenFillValue, float& MeltAmountSum, int32& ItemFullyFinishedMelt, bool& FlowOutStarted, FRotator& RotationShutterTop, FRotator& RotationShutterBottom, FRotator& RotationLever);
    void UpdateCooldown();
    void FinishedFlowOut();
    void LeverWasRotated();
    void CheckFireActive();
    void UserConstructionScript();
    void FlowOut__FinishedFunc();
    void FlowOut__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_3__NewTrack_1__EventFunc();
    void ReceiveBeginPlay();
    void Flint1Released();
    void Flint2Released();
    void ReceiveTick(float DeltaSeconds);
    void CreateDecalPool();
    void PlayFlowOutAnimation();
    void CheckAttachedMold();
    void SetupLightReceive();
    void SetIsPreview(bool IsPreview);
    void ManageFlints();
    void UpdateUI();
    void SetFurnaceSaveVariables(float HeatOnTop, float MoltenFillValue, float MeltAmountSum, int32 ItemFullyFinishedMelt, bool FlowOutStarted, FRotator RotationShutterTop, FRotator RotationShutterBottom, FRotator RotationLever);
    void AnythingRotated();
    void CheckIngotOverlap();
    void UpdateFillVisual();
    void DestroyEvent();
    void ExecuteUbergraph_FurnaceBP(int32 EntryPoint);
};

#endif
