#ifndef UE4SS_SDK_CoreUObject_HPP
#define UE4SS_SDK_CoreUObject_HPP

#include "CoreUObject_enums.hpp"

class UObject
{

    void ExecuteUbergraph(int32 EntryPoint);
};

struct FVector2D
{
    float X;
    float Y;

};

struct FLinearColor
{
    float R;
    float G;
    float B;
    float A;

};

struct FBox2D
{
    FVector2D Min;
    FVector2D Max;
    uint8 bIsValid;

};

struct FVector
{
    float X;
    float Y;
    float Z;

};

struct FRotator
{
    float Pitch;
    float Yaw;
    float Roll;

};

struct FQuat
{
    float X;
    float Y;
    float Z;
    float W;

};

struct FTransform
{
    FQuat Rotation;
    FVector Translation;
    FVector Scale3D;

};

struct FDateTime
{
};

struct FUniqueNetIdWrapper
{
};

struct FJoinabilitySettings
{
    FName SessionName;
    bool bPublicSearchable;
    bool bAllowInvites;
    bool bJoinViaPresence;
    bool bJoinViaPresenceFriendsOnly;
    int32 MaxPlayers;
    int32 MaxPartySize;

};

class IInterface : public UObject
{
};

struct FGuid
{
    int32 A;
    int32 B;
    int32 C;
    int32 D;

};

struct FVector4
{
    float X;
    float Y;
    float Z;
    float W;

};

struct FBox
{
    FVector Min;
    FVector Max;
    uint8 IsValid;

};

struct FColor
{
    uint8 B;
    uint8 G;
    uint8 R;
    uint8 A;

};

struct FBoxSphereBounds
{
    FVector Origin;
    FVector BoxExtent;
    float SphereRadius;

};

struct FPlane : public FVector
{
    float W;

};

struct FMatrix
{
    FPlane XPlane;
    FPlane YPlane;
    FPlane ZPlane;
    FPlane WPlane;

};

struct FSoftObjectPath
{
    FName AssetPathName;
    FString SubPathString;

};

struct FSoftClassPath : public FSoftObjectPath
{
};

struct FFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    float Value;

};

struct FFloatRange
{
    FFloatRangeBound LowerBound;
    FFloatRangeBound UpperBound;

};

struct FFrameRate
{
    int32 Numerator;
    int32 Denominator;

};

struct FFrameNumber
{
    int32 Value;

};

struct FFrameNumberRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    FFrameNumber Value;

};

struct FFrameNumberRange
{
    FFrameNumberRangeBound LowerBound;
    FFrameNumberRangeBound UpperBound;

};

struct FInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    int32 Value;

};

struct FInt32Range
{
    FInt32RangeBound LowerBound;
    FInt32RangeBound UpperBound;

};

struct FIntPoint
{
    int32 X;
    int32 Y;

};

struct FIntVector
{
    int32 X;
    int32 Y;
    int32 Z;

};

struct FInterpCurvePointVector
{
    float InVal;
    FVector OutVal;
    FVector ArriveTangent;
    FVector LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurveVector
{
    TArray<FInterpCurvePointVector> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurvePointQuat
{
    float InVal;
    FQuat OutVal;
    FQuat ArriveTangent;
    FQuat LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurveQuat
{
    TArray<FInterpCurvePointQuat> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurvePointFloat
{
    float InVal;
    float OutVal;
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurveFloat
{
    TArray<FInterpCurvePointFloat> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FFrameTime
{
    FFrameNumber FrameNumber;
    float SubFrame;

};

struct FQualifiedFrameTime
{
    FFrameTime Time;
    FFrameRate Rate;

};

struct FAssetData
{
    FName ObjectPath;
    FName PackageName;
    FName PackagePath;
    FName AssetName;
    FName AssetClass;

};

struct FTimecode
{
    int32 Hours;
    int32 Minutes;
    int32 Seconds;
    int32 Frames;
    bool bDropFrameFormat;

};

class UGCObjectReferencer : public UObject
{
};

class UTextBuffer : public UObject
{
};

class UField : public UObject
{
};

class UStruct : public UField
{
};

class UScriptStruct : public UStruct
{
};

class UPackage : public UObject
{
};

class UClass : public UStruct
{
};

class UFunction : public UStruct
{
};

class UDelegateFunction : public UFunction
{
};

class USparseDelegateFunction : public UDelegateFunction
{
};

class UDynamicClass : public UClass
{
};

class UPackageMap : public UObject
{
};

class UEnum : public UField
{
};

class ULinkerPlaceholderClass : public UClass
{
};

class ULinkerPlaceholderExportObject : public UObject
{
};

class ULinkerPlaceholderFunction : public UFunction
{
};

class UMetaData : public UObject
{
};

class UObjectRedirector : public UObject
{
};

class UProperty : public UField
{
};

class UEnumProperty : public UProperty
{
};

class UArrayProperty : public UProperty
{
};

class UObjectPropertyBase : public UProperty
{
};

class UBoolProperty : public UProperty
{
};

class UNumericProperty : public UProperty
{
};

class UByteProperty : public UNumericProperty
{
};

class UObjectProperty : public UObjectPropertyBase
{
};

class UClassProperty : public UObjectProperty
{
};

class UDelegateProperty : public UProperty
{
};

class UDoubleProperty : public UNumericProperty
{
};

class UFloatProperty : public UNumericProperty
{
};

class UIntProperty : public UNumericProperty
{
};

class UInt8Property : public UNumericProperty
{
};

class UInt16Property : public UNumericProperty
{
};

class UInt64Property : public UNumericProperty
{
};

class UInterfaceProperty : public UProperty
{
};

class ULazyObjectProperty : public UObjectPropertyBase
{
};

class UMapProperty : public UProperty
{
};

class UMulticastDelegateProperty : public UProperty
{
};

class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
};

class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
};

class UNameProperty : public UProperty
{
};

class USetProperty : public UProperty
{
};

class USoftObjectProperty : public UObjectPropertyBase
{
};

class USoftClassProperty : public USoftObjectProperty
{
};

class UStrProperty : public UProperty
{
};

class UStructProperty : public UProperty
{
};

class UUInt16Property : public UNumericProperty
{
};

class UUInt32Property : public UNumericProperty
{
};

class UUInt64Property : public UNumericProperty
{
};

class UWeakObjectProperty : public UObjectPropertyBase
{
};

class UTextProperty : public UProperty
{
};

class UPropertyWrapper : public UObject
{
};

class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
};

class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
};

struct FTimespan
{
};

struct FFloatInterval
{
    float Min;
    float Max;

};

struct FInt32Interval
{
    int32 Min;
    int32 Max;

};

struct FARFilter
{
    TArray<FName> PackageNames;
    TArray<FName> PackagePaths;
    TArray<FName> ObjectPaths;
    TArray<FName> ClassNames;
    TSet<FName> RecursiveClassesExclusionSet;
    bool bRecursivePaths;
    bool bRecursiveClasses;
    bool bIncludeOnlyOnDiskAssets;

};

struct FPrimaryAssetType
{
    FName Name;

};

struct FPrimaryAssetId
{
    FPrimaryAssetType PrimaryAssetType;
    FName PrimaryAssetName;

};

struct FInterpCurvePointVector2D
{
    float InVal;
    FVector2D OutVal;
    FVector2D ArriveTangent;
    FVector2D LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurveVector2D
{
    TArray<FInterpCurvePointVector2D> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FTwoVectors
{
    FVector v1;
    FVector v2;

};

struct FInterpCurvePointTwoVectors
{
    float InVal;
    FTwoVectors OutVal;
    FTwoVectors ArriveTangent;
    FTwoVectors LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurveTwoVectors
{
    TArray<FInterpCurvePointTwoVectors> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurvePointLinearColor
{
    float InVal;
    FLinearColor OutVal;
    FLinearColor ArriveTangent;
    FLinearColor LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurveLinearColor
{
    TArray<FInterpCurvePointLinearColor> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FRandomStream
{
    int32 InitialSeed;
    int32 Seed;

};

struct FPolyglotTextData
{
    ELocalizedTextSourceCategory Category;
    FString NativeCulture;
    FString Namespace;
    FString Key;
    FString NativeString;
    TMap<class FString, class FString> LocalizedStrings;
    bool bIsMinimalPatch;
    FText CachedText;

};

struct FDefault__ScriptStruct
{
};

struct FPackedNormal
{
    uint8 X;
    uint8 Y;
    uint8 Z;
    uint8 W;

};

struct FPackedRGB10A2N
{
    int32 Packed;

};

struct FPackedRGBA16N
{
    int32 XY;
    int32 ZW;

};

struct FOrientedBox
{
    FVector Center;
    FVector AxisX;
    FVector AxisY;
    FVector AxisZ;
    float ExtentX;
    float ExtentY;
    float ExtentZ;

};

struct FFallbackStruct
{
};

struct FAutomationEvent
{
    EAutomationEventType Type;
    FString Message;
    FString Context;
    FGuid Artifact;

};

struct FAutomationExecutionEntry
{
    FAutomationEvent Event;
    FString Filename;
    int32 LineNumber;
    FDateTime Timestamp;

};

struct FAssetBundleEntry
{
    FName BundleName;
    TArray<FSoftObjectPath> BundleAssets;

};

struct FAssetBundleData
{
    TArray<FAssetBundleEntry> Bundles;

};

struct FTestUninitializedScriptStructMembersTest
{
    class UObject* UninitializedObjectReference;
    class UObject* InitializedObjectReference;
    float UnusedValue;

};

class UDefault__Class
{
};

class UDefault__DynamicClass
{
};

class UDefault__LinkerPlaceholderClass
{
};

#endif