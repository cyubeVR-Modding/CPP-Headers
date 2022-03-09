#ifndef UE4SS_SDK_Carafe_HPP
#define UE4SS_SDK_Carafe_HPP

class ACarafe_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Chair_old;                                            // 0x02B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B8 (size: 0x8)
    class UBoxComponent* ManualBoundingBox;                                           // 0x02C0 (size: 0x8)
    class UDragComponent_C* DragComponent;                                            // 0x02C8 (size: 0x8)

    void UserConstructionScript();
    void SetIsPreview(bool IsPreview);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Carafe(int32 EntryPoint);
}; // Size: 0x2D0

#endif
