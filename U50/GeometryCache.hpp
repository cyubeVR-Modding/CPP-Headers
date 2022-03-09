#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

class UGeometryCache : public UObject
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0030 (size: 0x10)
    TArray<class UGeometryCacheTrack*> Tracks;                                        // 0x0040 (size: 0x10)
    int32 StartFrame;                                                                 // 0x0060 (size: 0x4)
    int32 EndFrame;                                                                   // 0x0064 (size: 0x4)

}; // Size: 0x68

class AGeometryCacheActor : public AActor
{
    class UGeometryCacheComponent* GeometryCacheComponent;                            // 0x0220 (size: 0x8)

    class UGeometryCacheComponent* GetGeometryCacheComponent();
}; // Size: 0x228

class UGeometryCacheCodecBase : public UObject
{
    TArray<int32> TopologyRanges;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
    int32 DummyProperty;                                                              // 0x0038 (size: 0x4)

}; // Size: 0x40

class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
}; // Size: 0x40

class UGeometryCacheComponent : public UMeshComponent
{
    class UGeometryCache* GeometryCache;                                              // 0x0468 (size: 0x8)
    bool bRunning;                                                                    // 0x0470 (size: 0x1)
    bool bLooping;                                                                    // 0x0471 (size: 0x1)
    float StartTimeOffset;                                                            // 0x0474 (size: 0x4)
    float PlaybackSpeed;                                                              // 0x0478 (size: 0x4)
    int32 NumTracks;                                                                  // 0x047C (size: 0x4)
    float ElapsedTime;                                                                // 0x0480 (size: 0x4)
    float Duration;                                                                   // 0x04B4 (size: 0x4)
    bool bManualTick;                                                                 // 0x04B8 (size: 0x1)

    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetLooping(const bool bNewLooping);
    bool SetGeometryCache(class UGeometryCache* NewGeomCache);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    int32 GetNumberOfFrames();
    float GetDuration();
    float GetAnimationTime();
}; // Size: 0x4C0

class UGeometryCacheTrack : public UObject
{
    float Duration;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x58

struct FGeometryCacheMeshData
{
}; // Size: 0xA8

class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    uint32 NumMeshSamples;                                                            // 0x0058 (size: 0x4)

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
}; // Size: 0x80

class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
    class UGeometryCacheCodecBase* Codec;                                             // 0x0058 (size: 0x8)
    float StartSampleTime;                                                            // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x100

class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x100

struct FTrackRenderData
{
}; // Size: 0x70

struct FGeometryCacheVertexInfo
{
}; // Size: 0x8

struct FGeometryCacheMeshBatchInfo
{
}; // Size: 0xC

#endif
