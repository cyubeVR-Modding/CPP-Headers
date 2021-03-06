#ifndef UE4SS_SDK_DeerC_HPP
#define UE4SS_SDK_DeerC_HPP

class ADeerC_C : public ADeerCPP
{
    class UStaticMeshComponent* RedNose;
    class UStaticMeshComponent* BirthdayHat;
    class UNavigationInvokerComponent* NavigationInvoker;
    class UStaticMeshComponent* Horn;
    TArray<class UStaticMesh*> Horns;
    FVector Target;
    FTimerHandle CurrentTimer;
    bool Dead;
    class URuntimeMeshComponent* RMC;
    bool WasRendered;
    bool DebugStart;
    float DeadBodyHealth;
    bool Cinematic;
    float MaxWalkDistance;
    class USkeletalMeshComponent* RabbitOnTop;
    float ImpulseMultiplier;
    bool WasVisibleLast;
    bool Astronaut;
    class USkeletalMesh* TempSkelValue;
    bool UsingTelekinesis;
    float IdleWaitMultiplier;
    class ACubeGameState* K2Node_DynamicCast_AsCube_Game_State_BP;
    bool K2Node_DynamicCast_bSuccess;
    class AChunkManager* K2Node_DynamicCast_AsChunk_Manager_BP;
    bool K2Node_DynamicCast_bSuccess_1;
    float Temp_float_Variable;
    FDeerC_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void TimerDynamicDelegate();
    bool Temp_bool_Variable;
    TEnumAsByte<EComponentMobility::Type> Temp_byte_Variable;
    bool CallFunc_IsAprilFirst_Is;
    TEnumAsByte<EComponentMobility::Type> Temp_byte_Variable_1;
    bool Temp_bool_Variable_1;
    TEnumAsByte<EComponentMobility::Type> K2Node_Select_Default;
    TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable_2;
    FVector K2Node_CustomEvent_Location;
    FVector K2Node_CustomEvent_Impulse;
    FName K2Node_CustomEvent_BoneName;
    TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable_3;
    class AAIController* K2Node_DynamicCast_AsAIController;
    bool K2Node_DynamicCast_bSuccess_2;
    bool Temp_bool_Variable_2;
    TEnumAsByte<ECollisionEnabled::Type> K2Node_Select_Default_1;
    TEnumAsByte<EPathFollowingResult::Type> Temp_byte_Variable_4;
    FDeerC_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void TimerDynamicDelegate();
    bool Temp_bool_Variable_3;
    class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;
    bool CallFunc_IsValid_ReturnValue_1;
    bool K2Node_CustomEvent_Enabled;
    FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;
    class AAIController* K2Node_DynamicCast_AsAIController_1;
    bool K2Node_DynamicCast_bSuccess_3;
    TEnumAsByte<EComponentMobility::Type> K2Node_CustomEvent_NewMobility;
    TEnumAsByte<EComponentMobility::Type> K2Node_Event_NewMobility;
    TEnumAsByte<EPathFollowingResult::Type> K2Node_CustomEvent_MovementResult;
    bool CallFunc_IsChristmas_Is;
    class ARabbitC_C* K2Node_DynamicCast_AsRabbit_C;
    bool K2Node_DynamicCast_bSuccess_4;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;
    class ACubeGameState* K2Node_DynamicCast_AsCube_Game_State_BP_1;
    bool K2Node_DynamicCast_bSuccess_5;
    FDeerC_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    TEnumAsByte<EPathFollowingResult::Type> K2Node_CustomEvent_MovementResult_1;
    class ACubeGameState* K2Node_DynamicCast_AsCube_Game_State_BP_2;
    bool K2Node_DynamicCast_bSuccess_6;
    class AChunkManager* K2Node_DynamicCast_AsChunk_Manager_BP_1;
    bool K2Node_DynamicCast_bSuccess_7;
    class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue;
    float K2Node_Select_Default_2;
    FDeerC_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3;
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    float Temp_float_Variable_1;
    float K2Node_Select_Default_3;

    void WasVisible(bool& bpp__Result__pf);
    void UserConstructionScript();
    void StartMovingBP();
    void SetTick(bool bpp__Enabled__pf);
    void SetMobilityAll(TEnumAsByte<EComponentMobility::Type> bpp__NewMobility__pf);
    void SetCorrectMesh();
    void ReceiveBeginPlay();
    void OnSuccess_3B8A1AEB47958811683CCA836E3D046D(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    void OnFail_3B8A1AEB47958811683CCA836E3D046D(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    void Move();
    void KillTest();
    void IsKilled();
    void HitWithKnifeF(FVector bpp__Location__pf);
    void Hit(FVector bpp__Location__pf, FVector bpp__Impulse__pf, FName bpp__BoneName__pf);
    void ExecuteUbergraph_DeerC_7(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_DeerC_4(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_DeerC_11(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_DeerC_0(int32 bpp__EntryPoint__pf);
    void EnableTick();
    void ElephantSound();
    void DeleteHatIfNotBirthday();
    void OAISimpleDelegate__DelegateSignature(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
};

#endif
