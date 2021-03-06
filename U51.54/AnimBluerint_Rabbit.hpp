#ifndef UE4SS_SDK_AnimBluerint_Rabbit_HPP
#define UE4SS_SDK_AnimBluerint_Rabbit_HPP

class UAnimBluerint_Rabbit_C : public UAnimInstance
{
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    int32 Random200;
    int32 Random50;
    float PlayRate;
    bool Up;
    FRotator HeadRotationFinal;
    FRotator HeadRotation;
    float Speed;
    bool bIsMoving;
    bool IsGrabbed;
    TArray<FRotator> RandomRotations;
    TArray<FRotator> RandomRotationsFinal;
    hand GrabbedByHand;
    bool Temp_bool_Variable;
    hand Temp_byte_Variable;
    ESteamVRHand Temp_byte_Variable_1;
    ESteamVRHand Temp_byte_Variable_2;
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void TimerDynamicDelegate();
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void TimerDynamicDelegate();
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void TimerDynamicDelegate();
    float K2Node_Event_DeltaTimeX;
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3;
    void TimerDynamicDelegate();
    int32 Temp_int_Variable;
    class ARabbitC_C* K2Node_DynamicCast_AsRabbit_C;
    bool K2Node_DynamicCast_bSuccess;
    hand K2Node_CustomEvent_Hand;
    TArray<FRotator> K2Node_MakeArray_Array;
    float K2Node_Select_Default;
    ESteamVRHand K2Node_Select_Default_1;

    void UpdateRandomPlayback();
    void UpdateRandomLegs();
    void UpdateRandom();
    void StopGrab();
    void NowGrab(hand bpp__Hand__pf);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TwoWayBlend_43E89AA04B3DE0BDB96E9B8C8B09408D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_D5152DB94B974EFBB8D00683DD7CDF23();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_887F7D1A41CCC1F84C5CA7B02FC46476();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_650DFB2E4CE38027AAB0C687F8D10291();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_54BB598E431F70BA298B13A8587449BE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_4A468A754B5BE42926E4BDA07656C43A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_18D94D234A876860ABF0A1B2AD3E5B39();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_SequencePlayer_FC1392EC43CB185E836122A0C8445339();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_SequencePlayer_B7B7AC6042C7B848700AFEB41CD13C85();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_BC9A83D945C34F324A78C4A178482BE0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_87BAF668460C11FA075F8B8F92C2E2D1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_726B206849832F60C1BC29B6D89CEBA2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_51C9F933461DB7E79C6F4FAB72A541B3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_4652209B4E7DEC14F69934BA5726DC78();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_BlendSpacePlayer_C6E8760D48B43BBA72EEAD8062F10013();
    void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
    void BlueprintInitializeAnimation();
    void AnimGraph(FPoseLink& bpp__AnimGraph__pf);
};

#endif
