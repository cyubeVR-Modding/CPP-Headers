#ifndef UE4SS_SDK_Ultra_Dynamic_Sky_BP_HPP
#define UE4SS_SDK_Ultra_Dynamic_Sky_BP_HPP

class AUltra_Dynamic_Sky_BP_C : public AActor
{
    class UStaticMeshComponent* moon_plane;
    class UArrowComponent* Arrow;
    class UArrowComponent* Sun_Root;
    class UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere;
    class USceneComponent* DefaultSceneRoot;
    class ADirectionalLight* Direction Light (Sun);
    class UMaterialInstanceDynamic* UDM_mat;
    bool Refresh Settings;
    float Cloud Speed;
    float Cloud Density;
    float Cloud DensityMultiplier;
    float Cloud Wisps Opacity;
    TArray<class UCurveLinearColor*> Horizon Base Color Curve;
    TArray<class UCurveLinearColor*> Zenith Base Color Curve;
    TArray<class UCurveLinearColor*> Cloud Light Color Curve;
    TArray<class UCurveLinearColor*> Cloud Dark Color Curve;
    float Time of Day;
    TArray<class UCurveLinearColor*> Sun Color Curve;
    class UCurveFloat* Shine Intensity Curve;
    float Saturation;
    class UCurveLinearColor* Sun Cloudy Color Curve;
    class AExponentialHeightFog* Exponential Height Fog;
    class UCurveFloat* Stars Intensity Curve;
    float Cloud Phase;
    float Moon Scale;
    float Moon Inclination;
    float Moon Phase;
    bool Automatically Set Advanced Settings using Time of Day;
    float Stars Visibility;
    float Moon Intensity;
    float Moon Position;
    float Sun Angle;
    FLinearColor Horizon Base Color;
    FLinearColor Zenith Base Color;
    FLinearColor Cloud Light Color;
    FLinearColor Cloud Dark Color;
    FLinearColor Sun Color;
    float Cloud Shine Intensity;
    FLinearColor Sun Light Color;
    float Day Length;
    class UCurveFloat* Moon Position Curve;
    bool Animate Day/Night Cycle;
    bool Simulate Cloud Density Changes;
    float Cloud Density Shift Frequency (min);
    float Cloud Density Shift Frequency (max);
    float Cloud Density_target;
    float Cloud Density Change (Smoothing);
    float Cloud Opacity;
    float Overall Intensity;
    float Sun Brightness;
    FLinearColor Moon Color;
    float Shine Variation;
    float Sun Lighting Intensity;
    class UCurveFloat* Sun Highlight Radius_curve;
    float Sun Highlight Radius;
    bool First Day;
    bool Simulate Moon Phase Changes;
    float Stars_Intensity;
    FLinearColor Stars_Color;
    float Moon Orbit Offset;
    FRotator Sun Rotation;
    float Sun Radius;
    class UMaterialInstanceDynamic* Cloud Shadows MID;
    bool Use Cloud Shadows;
    float Cloud Shadows Scale;
    float Cloud Shadows Intensity;
    class ADirectionalLight* Moon Light;
    bool Manually Select Sun Color;
    bool Automatically Set Moon Light Rotation;
    bool Automatically Set Sun Light Rotation;
    float Moonlight Intensity;
    float Stars Speed;
    float Sun Inclination;
    float Sun Yaw;
    float Moon Rotation;
    class UTexture2D* Custom Moon Texture;
    bool Use Custom Moon Texture;
    class ASkyLight* SkyLight;
    bool Recapture Sky light periodically;
    float Sky Light recapture period;
    class UCurveFloat* Night Filter Curve;
    float Night brightness;
    float Moon Glow Intensity;
    class UCurveFloat* Directional_Intensity_Curve;
    float Sun_Light_Intensity;
    float Aurora Intensity;
    float Aurora IntensityMultiplier;
    float Aurora Speed;
    bool Use Fast Skylight;
    bool Use Auroras;
    class UTexture* Clouds Base Texture;
    float Cloud Tiling;
    float Cloud Direction;
    bool One Cloud Layer;
    float Cloud Height 1;
    float Cloud Height 2;
    int32 color_scheme;
    class UMaterialInstanceDynamic* Moon mat;
    class UCurveFloat* SunBrightnessCurve;
    int32 ColorSchemeTarget;
    float ColorSchemeTargetPercentage;
    float WeatherInterpSpeed;
    float OverallIntensityTarget;
    float SaturationTarget;
    float LightTemperature;
    float LightTemperatureTarget;
    float SunLightWeatherMultiplier;
    float SunLightWeatherMultiplierTarget;
    class AWindDirectionalSource* WindSource;
    float WindStrength;
    float WindStrengthTarget;
    float RainStrength;
    float RainStrengthTarget;
    FLinearColor FogWeatherColor;
    FLinearColor FogWeatherColorTarget;
    float SnowAmount;
    float SnowAmountTarget;
    class AAudioManager* AudioManager;
    float WindSpeed;
    float WindSpeedTarget;
    float DayLenghtDivider;
    float NightLengthDivider;
    bool UseNewColors;
    class ACubeGameState* K2Node_DynamicCast_AsCube_Game_State_BP;
    bool K2Node_DynamicCast_bSuccess;
    class AChunkManager* K2Node_DynamicCast_AsChunk_Manager_BP;
    bool K2Node_DynamicCast_bSuccess_1;
    bool Temp_bool_Variable;
    bool CallFunc_GetDevModeBP__DevMode;
    bool CallFunc_GetDevModeBP__DevModeLoadWorld;
    float K2Node_Event_DeltaSeconds;
    EWeather K2Node_CustomEvent_NewWeather;
    bool K2Node_SwitchEnum_CmpSuccess;
    TArray<class AAudioManager*> CallFunc_GetAllActorsOfClass_OutActors;
    class AAudioManager* CallFunc_Array_Get_Item;
    float K2Node_CustomEvent_DayLengthDivider;
    float K2Node_CustomEvent_NightLengthDivider;
    float K2Node_Select_Default;

    void UserConstructionScript();
    void Set Solar Angle();
    void Set Material Variables();
    void SetWeatherVariables(float bpp__CloudxDensity_target__pfT, float bpp__OverallIntensityTarget__pf, float bpp__SaturationTarget__pf, float bpp__LightTemperatureTarget__pf, float bpp__SunLightWeatherMultiplierTarget__pf, float bpp__WindStrengthTarget__pf, float bpp__RainStrengthTarget__pf, FLinearColor bpp__FogWeatherColorTarget__pf, float bpp__CloudxDensity__pfT, float bpp__OverallxIntensity__pfT, float bpp__LightTemperature__pf, FLinearColor bpp__FogWeatherColor__pf, float bpp__RainStrength__pf, float bpp__SunLightWeatherMultiplier__pf, float bpp__WindStrength__pf, float bpp__WindSpeed__pf, float bpp__WindSpeedTarget__pf);
    void SetNewDayNightLength(float bpp__DayLengthDivider__pf, float bpp__NightLengthDivider__pf);
    void SetMat();
    void SetCloudDensityTargetForWeather(EWeather bpp__NewWeather__pf);
    void SetBiomeInfo(EBiome bpp__Biome1__pf, EBiome bpp__Biome2__pf, float bpp__LerpPercentage__pf);
    void ReceiveTick(float bpp__DeltaSeconds__pf);
    void ReceiveBeginPlay();
    void GetWeatherVariables(float& bpp__CloudxDensity_target__pfT, float& bpp__OverallIntensityTarget__pf, float& bpp__SaturationTarget__pf, float& bpp__LightTemperatureTarget__pf, float& bpp__SunLightWeatherMultiplierTarget__pf, float& bpp__WindStrengthTarget__pf, float& bpp__RainStrengthTarget__pf, FLinearColor& bpp__FogWeatherColorTarget__pf, float& bpp__CloudxDensity__pfT, float& bpp__OverallxIntensity__pfT, float& bpp__LightTemperature__pf, FLinearColor& bpp__FogWeatherColor__pf, float& bpp__RainStrength__pf, float& bpp__SunLightWeatherMultiplier__pf, float& bpp__WindStrength__pf, float& bpp__WindSpeed__pf, float& bpp__WindSpeedTarget__pf);
    void GetBlendedCurve(TArray<class UCurveLinearColor*>& bpp__Curve__pf, float bpp__InTime__pf, FLinearColor& bpp__Color__pf);
    void ExecuteUbergraph_Ultra_Dynamic_Sky_BP_0(int32 bpp__EntryPoint__pf);
    void AnimateWeather();
};

#endif
