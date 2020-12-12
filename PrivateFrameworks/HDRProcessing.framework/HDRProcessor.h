/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
 */

@interface HDRProcessor : NSObject {
    struct __CVPixelBufferPool { } * _420vPool;
    unsigned long long  _bitDepth;
    unsigned long long  _colorSpace;
    unsigned long long  _colourPrimaries;
    <MTLCommandQueue> * _commandQueue;
    NSObject<OS_dispatch_queue> * _completionQueue;
    DolbyVisionComposer * _composer;
    struct { 
        unsigned int width; 
        unsigned int height; 
        unsigned int usage; 
        unsigned int targetNits; 
        unsigned int outputPixelFormat; 
        struct __CFString {} *targetColorPrimaries; 
        unsigned int outputMetaDataFormat; 
        unsigned int hardwareType; 
    }  _configurationParameters;
    float  _defaultAmbientLightValue;
    float  _defaultContrastRatioValue;
    float  _defaultEDRFactorValue;
    float  _defaultMaxEDRValue;
    <MTLDevice> * _device;
    float  _displayCompensationGammaValue;
    unsigned int  _displayCompensationType;
    float  _displayContrastRatio;
    unsigned long long  _displayDiagonalSize;
    unsigned int  _displayType;
    DolbyVisionDisplayManagement * _dm;
    struct { 
        struct { 
            unsigned int BL_bit_depth_minus8; 
            unsigned int EL_bit_depth_minus8; 
            unsigned int vdr_bit_depth; 
            unsigned int EL_chroma_format_idc; 
            unsigned int BL_chroma_format_idc; 
            unsigned int mapping_chroma_format_idc; 
            unsigned int num_x_partitions; 
            unsigned int num_y_partitions; 
            unsigned int overlapped_prediction_method; 
            unsigned int el_spatial_resampling_filter_flag; 
            unsigned int coefficient_data_type; 
            unsigned int coefficient_log2_denom; 
            unsigned int num_pivots[3]; 
            unsigned int pivot_value[3][18]; 
            unsigned int mapping_idc[1][1][3][9]; 
            unsigned int poly_order[1][1][3][9]; 
            unsigned int linear_interp_flag[1][1][3][9]; 
            unsigned int pred_linear_interp_value_int[1][1][3][9]; 
            unsigned int pred_linear_interp_value[1][1][3][9]; 
            int poly_coef_int[1][1][3][9][3]; 
            unsigned int poly_coef[1][1][3][9][3]; 
            long long fp_poly_coef[1][1][3][9][6]; 
            float fp_poly_coef_float[1][1][3][9][6]; 
            unsigned int mmr_order[1][1][3][9]; 
            int mmr_constant_int[1][1][3][9]; 
            unsigned int mmr_constant[1][1][3][9]; 
            int mmr_coef_int[1][1][3][9][4][7]; 
            unsigned int mmr_coef[1][1][3][9][4][7]; 
            long long fp_mmr_coef[1][1][3][9][4][7]; 
            float fp_mmr_coef_float[1][1][3][9][4][7]; 
            int pow_coef_int[1][1][3][9][6]; 
            unsigned int pow_coef[1][1][3][9][6]; 
            unsigned int disable_residual_flag; 
            unsigned int nlq_method_idc; 
            unsigned int nlq_num_pivots; 
            unsigned int nlq_pivot_value[9]; 
            unsigned int nlq_offset[1][1][9][3]; 
            unsigned int vdr_in_max_int[1][1][9][3]; 
            unsigned int vdr_in_max[1][1][9][3]; 
            long long fp_vdr_in_max[1][1][9][3]; 
            unsigned int linear_deadzone_slope_int[1][1][9][3]; 
            unsigned int linear_deadzone_slope[1][1][9][3]; 
            long long linear_dz_slope[1][1][9][3]; 
            unsigned int linear_deadzone_threshold_int[1][1][9][3]; 
            unsigned int linear_deadzone_threshold[1][1][9][3]; 
            long long linear_dz_th[1][1][9][3]; 
            unsigned int mu_law_levels[1][1][9][3]; 
            unsigned int mu_law_mu[1][1][9][3]; 
            unsigned int pred_LUT_value_int[1][1][3][16384]; 
            unsigned int pred_LUT_value[1][1][3][16384]; 
            unsigned int el_frame_crop_bottom_offset; 
        } composerData; 
        struct { 
            unsigned int vdr_dm_metadata_present_flag; 
            unsigned int affected_dm_metadata_id; 
            unsigned int current_dm_metadata_id; 
            unsigned int scene_refresh_flag; 
            int YCCtoRGB_coef[9]; 
            unsigned int YCCtoRGB_offset[3]; 
            int RGBtoLMS_coef[9]; 
            unsigned int signal_eotf; 
            unsigned int signal_eotf_param0; 
            unsigned int signal_eotf_param1; 
            unsigned int signal_eotf_param2; 
            unsigned int signal_bit_depth; 
            unsigned int signal_color_space; 
            unsigned int signal_chroma_format; 
            unsigned int signal_full_range_flag; 
            unsigned int source_min_PQ; 
            unsigned int source_max_PQ; 
            unsigned int source_diagonal; 
            unsigned int num_ext_blocks; 
            struct { 
                unsigned short valid; 
                unsigned short min_PQ; 
                unsigned short max_PQ; 
                unsigned short avg_PQ; 
            } L1; 
            struct { 
                unsigned short valid; 
                unsigned short target_max_PQ; 
                unsigned short trim_slope; 
                unsigned short trim_offset; 
                unsigned short trim_power; 
                unsigned short trim_chroma_weight; 
                unsigned short trim_saturation_gain; 
                short ms_weight; 
            } L2[16]; 
            struct { 
                unsigned short valid; 
                unsigned short min_PQ_offset; 
                unsigned short max_PQ_offset; 
                unsigned short avg_PQ_offset; 
            } L3; 
            struct { 
                unsigned short valid; 
                unsigned short anchor_PQ; 
                unsigned short anchor_power; 
            } L4; 
            struct { 
                unsigned short valid; 
                unsigned short active_area_left_offset; 
                unsigned short active_area_right_offset; 
                unsigned short active_area_top_offset; 
                unsigned short active_area_bottom_offset; 
            } L5; 
            struct { 
                unsigned short valid; 
                unsigned short max_display_mastering_luminance; 
                unsigned short min_display_mastering_luminance; 
                unsigned short max_content_light_level; 
                unsigned short max_frame_average_light_level; 
            } L6; 
            struct { 
                unsigned short valid; 
                unsigned short length; 
                unsigned char target_display_index; 
                unsigned short trim_slope; 
                unsigned short trim_offset; 
                unsigned short trim_power; 
                unsigned short trim_chroma_weight; 
                unsigned short trim_saturation_gain; 
                unsigned short ms_weight; 
                unsigned short target_mid_contrast; 
                unsigned short clip_trim; 
                unsigned char saturation_vector_field[6]; 
                unsigned char hue_vector_field[6]; 
            } L8[16]; 
            struct { 
                unsigned short valid; 
                unsigned short length; 
                unsigned char source_primary_index; 
                short source_primary_red_x; 
                short source_primary_red_y; 
                short source_primary_green_x; 
                short source_primary_green_y; 
                short source_primary_blue_x; 
                short source_primary_blue_y; 
                short source_primary_white_x; 
                short source_primary_white_y; 
            } L9; 
            struct { 
                unsigned short valid; 
                unsigned short length; 
                unsigned char target_display_index; 
                unsigned short target_max_PQ; 
                unsigned short target_min_PQ; 
                unsigned char target_primary_index; 
                short target_primary_red_x; 
                short target_primary_red_y; 
                short target_primary_green_x; 
                short target_primary_green_y; 
                short target_primary_blue_x; 
                short target_primary_blue_y; 
                short target_primary_white_x; 
                short target_primary_white_y; 
            } L10; 
            struct { 
                unsigned short valid; 
                unsigned char content_type; 
                unsigned char white_point; 
                unsigned char L11_byte2; 
                unsigned char L11_byte3; 
            } L11; 
            struct { 
                unsigned short valid; 
                unsigned char dm_mode; 
                unsigned char dm_version_index; 
            } L254; 
            struct { 
                unsigned short valid; 
                unsigned char dm_run_mode; 
                unsigned char dm_run_version; 
                unsigned char dm_debug0; 
                unsigned char dm_debug1; 
                unsigned char dm_debug2; 
                unsigned char dm_debug3; 
            } L255; 
        } dmData; 
        struct ToneCurve_Control { 
            double targetMaxLinear; 
            double targetMinLinear; 
            float diffuseInNits; 
            float maxEDRValue; 
            float EDRFactor; 
            float AmbientLight; 
            float contrastRatio; 
            float sdrMaxBrightnessInNits; 
            bool HDRProcessingFullAmbientAdaptation; 
            int HDRProcessingDisplayAdjustsBlackLevel; 
            struct __CFString {} *targetColorPrimaries; 
            int targetMatrixCoeffs; 
            int targetColorSpace; 
            int targetTransferFunction; 
            unsigned int outputPixelFormatRaw; 
            unsigned int outputPixelFormat; 
            unsigned int operationFromDict; 
            unsigned int orientation; 
            float forwardDM_tMaxPq; 
            float forwardDM_tMinPq; 
            float mid; 
            float crush; 
            float clip; 
            unsigned int ptvMode : 1; 
            unsigned int passThroughTM : 1; 
            float Tmax_nits; 
            struct _AuxData { 
                int hdr10TmPreset; 
                int hdr10TmCurveType; 
                int hlgTmPreset; 
                int doviTmPreset; 
                float edrAdaptationGain; 
                float ambAdaptationLux2nitsRatio; 
                float targetDisplayContrastRatio; 
                float targetDisplayReflectionRatio; 
                int dpcMode; 
                float dpcGain; 
                float Send_nits; 
                float tm_Send_nits; 
                bool isDoViL2TrimAvailable; 
            } auxData; 
            struct _TMData { 
                int hdr10TmMode; 
                int hdr10TmCurveType; 
                int hlgTmMode; 
                int hlgOOTFMixingMode; 
                int doviTmMode; 
                int edrAdaptationMode; 
                float edrAdaptationGain; 
                float edrFactor; 
                float diffuseInNits; 
                int ambAdaptationMode; 
                float ambReflected_nits; 
                float Smin_nits; 
                float Smax_nits; 
                float Tmin_nits; 
                float Tmax_nits; 
                float Cmin_nits; 
                float Cmax_nits; 
                float Cend_nits; 
                float Capl_nits; 
                float ambientPQ; 
                float nominalPQ; 
                float div_C_r; 
                float Sdiv_nits; 
                int processingType; 
            } tmData; 
            struct _HDR10TMParam { 
                float Smin_nits; 
                float Smax_nits; 
                float Tmin_nits; 
                float Tmax_nits; 
                float tm_Smin_nits; 
                float tm_Smax_nits; 
                float tm_Send_nits; 
                float tm_Tmin_nits; 
                float tm_Tmax_nits; 
                float tm_Tend_nits; 
                float tm_Smin_C; 
                float tm_Smax_C; 
                float tm_Send_C; 
                float tm_Tmin_C; 
                float tm_Tmax_C; 
                float tm_Tend_C; 
                int curveType; 
                unsigned short n; 
                float XsC[4]; 
                float YsC[4]; 
                float MsC[4]; 
                unsigned short ms[3]; 
                float arrPsC[3][14]; 
            } hdr10TmParam; 
            struct _HLGTMParam { 
                float systemGamma; 
                struct _HDR10TMParam { 
                    float Smin_nits; 
                    float Smax_nits; 
                    float Tmin_nits; 
                    float Tmax_nits; 
                    float tm_Smin_nits; 
                    float tm_Smax_nits; 
                    float tm_Send_nits; 
                    float tm_Tmin_nits; 
                    float tm_Tmax_nits; 
                    float tm_Tend_nits; 
                    float tm_Smin_C; 
                    float tm_Smax_C; 
                    float tm_Send_C; 
                    float tm_Tmin_C; 
                    float tm_Tmax_C; 
                    float tm_Tend_C; 
                    int curveType; 
                    unsigned short n; 
                    float XsC[4]; 
                    float YsC[4]; 
                    float MsC[4]; 
                    unsigned short ms[3]; 
                    float arrPsC[3][14]; 
                } artisticOOTFParam; 
                bool applyArtisticOOTF; 
                float OOTFMixingFactor; 
                float Tend_nits; 
            } hlgTmParam; 
            struct _DoViTMParam { 
                float Smin_nits; 
                float Smax_nits; 
                float Tmin_nits; 
                float Tmax_nits; 
                float tm_Smin_nits; 
                float tm_Smax_nits; 
                float tm_Send_nits; 
                float tm_Tmin_nits; 
                float tm_Tmax_nits; 
                float tm_Tend_nits; 
                float tm_Smin_C; 
                float tm_Smax_C; 
                float tm_Send_C; 
                float tm_Tmin_C; 
                float tm_Tmax_C; 
                float tm_Tend_C; 
                float systemGamma; 
                float sl; 
                float c1; 
                float c2; 
                float c3; 
                float brightAdjBySat2; 
                float OOTFMixingFactor; 
                float linearScaler; 
            } doviTmParam; 
            struct _EdrAdaptationData { 
                int mode; 
                float edrFactor; 
                float Smax_C; 
                float tm_Tmin_C; 
                float tm_Tend_C; 
                float Sdiv_C; 
                float div_C_r; 
                float Sdiv_tm_C; 
                float Tdiv_C; 
                float k0Gain; 
                float k1Gain; 
                float k2Gain; 
                bool applyAdaptiveKyGain; 
                float adaptiveKyGainPower; 
                float adaptiveKyGainLowerBase; 
                float adaptiveKyGainUpperBase; 
                float fixedKyGain; 
                unsigned int adjLUTID; 
                float adjTdivGainLowerSlope; 
                float adjTdivGainUpperSlope; 
                float adjTdivX0; 
                float adjTdivY0; 
                float adjTdivX1; 
                float adjTdivY1; 
                float adjTdivPower; 
                float YsOffset; 
                float YsScale; 
            } edrAdaptationData; 
            struct _EdrAdaptationParam { 
                unsigned short n; 
                float Xs[3]; 
                float Ys[3]; 
                float Ms[3]; 
            } edrAdaptationParam; 
            struct _AmbAdaptationData { 
                int mode; 
                float edrFactor; 
                float ambientNits; 
                float tm_Tmin_nits; 
                float tm_Tend_nits; 
                float tm_Tmin_C; 
                float tm_Tend_C; 
            } ambAdaptationData; 
            struct _AmbAdaptationParam { 
                unsigned short n; 
                float XsC[3]; 
                float YsC[3]; 
                float MsC[3]; 
                float aL; 
                float bL; 
            } ambAdaptationParam; 
            struct _DpcData { 
                int mode; 
                float edrFactor; 
                float gain; 
            } dpcData; 
        } tcControl; 
        struct { 
            unsigned int hdrContent; 
            unsigned int hwType; 
            unsigned int operation; 
            unsigned int convertType; 
            unsigned int hasRPU; 
            unsigned int inputFormatRaw; 
            unsigned int inputFormat; 
            unsigned int bitDepth; 
            unsigned int displayType; 
            unsigned int displayDiagonalSize; 
            unsigned int maxDisplayBrightnessNits; 
            float minDisplayBrightnessNits; 
            unsigned int videoFullRangeFlag; 
            unsigned int colourPrimaries; 
            unsigned int matrixCoeffs; 
            unsigned int transferFunction; 
            unsigned int colorSpace; 
            float YCCtoRGB_coef[9]; 
            float RGBtoLMS_coef[9]; 
            unsigned int maxMasteringNits; 
            float minMasteringNits; 
            unsigned int displayPipelineCompensationType; 
            float displayPipelineGammaValue; 
        } hdrControl; 
        struct { 
            struct { 
                unsigned short display_primaries_xg; 
                unsigned short display_primaries_yg; 
                unsigned short display_primaries_xb; 
                unsigned short display_primaries_yb; 
                unsigned short display_primaries_xr; 
                unsigned short display_primaries_yr; 
                unsigned short white_point_x; 
                unsigned short white_point_y; 
                unsigned int max_display_mastering_luminance; 
                unsigned int min_display_mastering_luminance; 
            } sei; 
            struct { 
                unsigned short max_content_light_level; 
                unsigned short max_frame_average_light_level; 
            } ll; 
        } infoFrameData; 
    }  _edrMetaData;
    struct __CFError { } * _error_success;
    unsigned int  _hardwareType;
    unsigned int  _hdrMode;
    unsigned int  _inputFormat;
    unsigned int  _inputFormatRaw;
    bool  _logOnce;
    unsigned long long  _matrixCoeffs;
    unsigned long long  _maxDisplayBrightnessNits;
    unsigned long long  _maxMasteringNits;
    float  _minDisplayBrightnessNits;
    float  _minMasteringNits;
    MSRHDRProcessing * _msr;
    unsigned long long  _numberOfProcessedFrames;
    unsigned long long  _numberOfRequestedFrames;
    unsigned long long  _numberOfScheduledFrames;
    unsigned long long  _outputColorSpace;
    unsigned int  _outputFormat;
    unsigned int  _outputFormatRaw;
    unsigned long long  _outputMatrixCoeffs;
    unsigned long long  _outputTransferFunction;
    struct EDRMetaData_RBSP { unsigned long long x1; int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; char *x7; unsigned char x8; unsigned char x9; unsigned int x10; int x11; unsigned long long x12; unsigned long long x13; int x14; char *x15; char *x16; char *x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54[3]; unsigned int x55[3]; unsigned int x56; unsigned int x57; unsigned int x58; unsigned int x59; unsigned int x60; } * _parser;
    SpatialResampler * _resampler;
    NSObject<OS_dispatch_queue> * _scheduleQueue;
    NSObject<OS_dispatch_semaphore> * _scheduleSemaphone;
    unsigned long long  _sdrMaxBrightnessInNits;
    struct __CFString { } * _targetColorPrimaries;
    double  _targetMinNits;
    double  _targetNits;
    unsigned long long  _transferFunction;
    unsigned long long  _videoFullRangeFlag;
    struct __CVPixelBufferPool { } * _x420Pool;
    unsigned long long  logInstanceID;
}

@property float defaultAmbientLightValue;
@property float defaultContrastRatioValue;
@property float defaultEDRFactorValue;
@property float defaultMaxEDRValue;
@property struct __CFString { }*targetColorPrimaries;
@property double targetMinNits;
@property double targetNits;

+ (void)dolbyIOMFBMetadata:(struct { unsigned int x1; union { struct { struct { unsigned char x_1_3_1[4][128]; unsigned int x_1_3_2; unsigned int x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 withMinBrightness:(float)arg2 maxBrightness:(float)arg3;

- (void).cxx_destruct;
- (long long)ValidateMSRColorConfigInput:(unsigned int)arg1 inputSurface:(struct __IOSurface { }*)arg2 outputSurface:(struct __IOSurface { }*)arg3;
- (bool)allocateResources;
- (void)checkInputIOSurface:(struct __IOSurface { }*)arg1 forInfoFrame:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg2 withRPUData:(bool)arg3;
- (long long)checkInputOutputIOSurface:(struct __IOSurface { }*)arg1 output:(struct __IOSurface { }*)arg2 tcControl:(struct ToneCurve_Control { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; bool x9; int x10; struct __CFString {} *x11; int x12; int x13; int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; float x21; float x22; float x23; unsigned int x24 : 1; unsigned int x25 : 1; float x26; struct _AuxData { int x_27_1_1; int x_27_1_2; int x_27_1_3; int x_27_1_4; float x_27_1_5; float x_27_1_6; float x_27_1_7; float x_27_1_8; int x_27_1_9; float x_27_1_10; float x_27_1_11; float x_27_1_12; bool x_27_1_13; } x27; struct _TMData { int x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; int x_28_1_5; int x_28_1_6; float x_28_1_7; float x_28_1_8; float x_28_1_9; int x_28_1_10; float x_28_1_11; float x_28_1_12; float x_28_1_13; float x_28_1_14; float x_28_1_15; float x_28_1_16; float x_28_1_17; float x_28_1_18; float x_28_1_19; float x_28_1_20; float x_28_1_21; float x_28_1_22; float x_28_1_23; int x_28_1_24; } x28; struct _HDR10TMParam { float x_29_1_1; float x_29_1_2; float x_29_1_3; float x_29_1_4; float x_29_1_5; float x_29_1_6; float x_29_1_7; float x_29_1_8; float x_29_1_9; float x_29_1_10; float x_29_1_11; float x_29_1_12; float x_29_1_13; float x_29_1_14; float x_29_1_15; float x_29_1_16; int x_29_1_17; unsigned short x_29_1_18; float x_29_1_19[4]; float x_29_1_20[4]; float x_29_1_21[4]; unsigned short x_29_1_22[3]; float x_29_1_23[3][14]; } x29; }*)arg3 forInfoFrame:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg4 withRPUData:(bool)arg5;
- (void)checkOutputIOSurface:(struct __IOSurface { }*)arg1;
- (void)dealloc;
- (float)defaultAmbientLightValue;
- (float)defaultContrastRatioValue;
- (float)defaultEDRFactorValue;
- (float)defaultMaxEDRValue;
- (long long)encodeToCommandBuffer:(id)arg1 inputSurfaceLayer0:(struct __IOSurface { }*)arg2 inputSurfacelayer1:(struct __IOSurface { }*)arg3 outputSurface:(struct __IOSurface { }*)arg4 metadata:(id)arg5;
- (void)extractCAMetaData:(id)arg1 withRPU:(bool)arg2 tcCtrl:(struct ToneCurve_Control { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; bool x9; int x10; struct __CFString {} *x11; int x12; int x13; int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; float x21; float x22; float x23; unsigned int x24 : 1; unsigned int x25 : 1; float x26; struct _AuxData { int x_27_1_1; int x_27_1_2; int x_27_1_3; int x_27_1_4; float x_27_1_5; float x_27_1_6; float x_27_1_7; float x_27_1_8; int x_27_1_9; float x_27_1_10; float x_27_1_11; float x_27_1_12; bool x_27_1_13; } x27; struct _TMData { int x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; int x_28_1_5; int x_28_1_6; float x_28_1_7; float x_28_1_8; float x_28_1_9; int x_28_1_10; float x_28_1_11; float x_28_1_12; float x_28_1_13; float x_28_1_14; float x_28_1_15; float x_28_1_16; float x_28_1_17; float x_28_1_18; float x_28_1_19; float x_28_1_20; float x_28_1_21; float x_28_1_22; float x_28_1_23; int x_28_1_24; } x28; struct _HDR10TMParam { float x_29_1_1; float x_29_1_2; float x_29_1_3; float x_29_1_4; float x_29_1_5; float x_29_1_6; float x_29_1_7; float x_29_1_8; float x_29_1_9; float x_29_1_10; float x_29_1_11; float x_29_1_12; float x_29_1_13; float x_29_1_14; float x_29_1_15; float x_29_1_16; int x_29_1_17; unsigned short x_29_1_18; float x_29_1_19[4]; float x_29_1_20[4]; float x_29_1_21[4]; unsigned short x_29_1_22[3]; float x_29_1_23[3][14]; } x29; }*)arg3;
- (void)extractFrameMetadata:(struct __CFDictionary { }*)arg1 intoTCControl:(struct ToneCurve_Control { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; bool x9; int x10; struct __CFString {} *x11; int x12; int x13; int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; float x21; float x22; float x23; unsigned int x24 : 1; unsigned int x25 : 1; float x26; struct _AuxData { int x_27_1_1; int x_27_1_2; int x_27_1_3; int x_27_1_4; float x_27_1_5; float x_27_1_6; float x_27_1_7; float x_27_1_8; int x_27_1_9; float x_27_1_10; float x_27_1_11; float x_27_1_12; bool x_27_1_13; } x27; struct _TMData { int x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; int x_28_1_5; int x_28_1_6; float x_28_1_7; float x_28_1_8; float x_28_1_9; int x_28_1_10; float x_28_1_11; float x_28_1_12; float x_28_1_13; float x_28_1_14; float x_28_1_15; float x_28_1_16; float x_28_1_17; float x_28_1_18; float x_28_1_19; float x_28_1_20; float x_28_1_21; float x_28_1_22; float x_28_1_23; int x_28_1_24; } x28; struct _HDR10TMParam { float x_29_1_1; float x_29_1_2; float x_29_1_3; float x_29_1_4; float x_29_1_5; float x_29_1_6; float x_29_1_7; float x_29_1_8; float x_29_1_9; float x_29_1_10; float x_29_1_11; float x_29_1_12; float x_29_1_13; float x_29_1_14; float x_29_1_15; float x_29_1_16; int x_29_1_17; unsigned short x_29_1_18; float x_29_1_19[4]; float x_29_1_20[4]; float x_29_1_21[4]; unsigned short x_29_1_22[3]; float x_29_1_23[3][14]; } x29; }*)arg2;
- (void)extractHEVCHDRParameterFromInputIOSurface:(struct __IOSurface { }*)arg1 forInfoFrame:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg2;
- (void)extractHEVCHDRParameterFromInputIOSurfaceForDovi:(struct __IOSurface { }*)arg1 forInfoFrame:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg2;
- (void)extractHEVCHDRParameterFromOutputIOSurface:(struct __IOSurface { }*)arg1;
- (long long)generateMSRColorConfigWithOperation:(unsigned int)arg1 inputSurface:(struct __IOSurface { }*)arg2 outputSurface:(struct __IOSurface { }*)arg3 metadata:(id)arg4 histogram:(struct RgbHistogram_t { unsigned int x1; unsigned int x2[128]; unsigned int x3[128]; unsigned int x4[128]; }*)arg5 config:(id*)arg6;
- (void)getDisplayPipelineCompensationType:(id)arg1 gamma:(float)arg2;
- (bool)hasMetalDeviceChanged:(id)arg1;
- (id)initWithConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct __CFString {} *x6; unsigned int x7; unsigned int x8; }*)arg1;
- (id)initWithDevice:(id)arg1 config:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct __CFString {} *x6; unsigned int x7; unsigned int x8; }*)arg2;
- (long long)processFrameInternalWithLayer0:(struct __IOSurface { }*)arg1 layer1:(struct __IOSurface { }*)arg2 outout:(struct __IOSurface { }*)arg3 metadata:(id)arg4 commandbuffer:(id)arg5 operation:(unsigned int)arg6 config:(struct { int x1; unsigned int x2; struct HDRFrameProcessingControl_t { union { unsigned int x_1_2_1[9216]; struct ProcessingControlV0_t { struct DMAConfig_t { unsigned char x_1_4_1; int x_1_4_2; int x_1_4_3; bool x_1_4_4; float x_1_4_5; float x_1_4_6; unsigned char x_1_4_7; int x_1_4_8; } x_2_3_1; struct Reshaping_t { unsigned short x_2_4_1; unsigned short x_2_4_2[3][1024]; } x_2_3_2; struct ChromaScaling_t { unsigned short x_3_4_1; unsigned char x_3_4_2; float x_3_4_3[15][32]; unsigned short x_3_4_4; unsigned char x_3_4_5; float x_3_4_6[9][32]; } x_2_3_3; struct SourceToRGB_t { unsigned int x_4_4_1; struct MSRCSC_t { unsigned int x_2_5_1; float x_2_5_2[3]; float x_2_5_3[3]; float x_2_5_4[3]; int x_2_5_5[3][3]; float x_2_5_6[3]; float x_2_5_7[3]; float x_2_5_8[3]; } x_4_4_2; } x_2_3_4; struct Linearization_t { unsigned int x_5_4_1; unsigned int x_5_4_2[3][514]; } x_2_3_5; struct ColorspaceAToCommonColorspace_t { unsigned int x_6_4_1; struct MSRCSC_t { unsigned int x_2_5_1; float x_2_5_2[3]; float x_2_5_3[3]; float x_2_5_4[3]; int x_2_5_5[3][3]; float x_2_5_6[3]; float x_2_5_7[3]; float x_2_5_8[3]; } x_6_4_2; } x_2_3_6; struct ChromaticAdaptation_t { bool x_7_4_1; unsigned int x_7_4_2; struct MSRCSC_t { unsigned int x_3_5_1; float x_3_5_2[3]; float x_3_5_3[3]; float x_3_5_4[3]; int x_3_5_5[3][3]; float x_3_5_6[3]; float x_3_5_7[3]; float x_3_5_8[3]; } x_7_4_3; int x_7_4_4; union { struct { unsigned int x_1_6_1; } x_5_5_1; struct { unsigned char x_2_6_1; unsigned char x_2_6_2; unsigned char x_2_6_3; unsigned char x_2_6_4; unsigned char x_2_6_5; int x_2_6_6[3]; int x_2_6_7; int x_2_6_8[3]; unsigned int x_2_6_9[8]; } x_5_5_2; struct { unsigned char x_3_6_1; unsigned char x_3_6_2; unsigned char x_3_6_3; unsigned char x_3_6_4; unsigned char x_3_6_5; unsigned char x_3_6_6; } x_5_5_3; } x_7_4_5; unsigned int x_7_4_6[4][513]; unsigned int x_7_4_7; float x_7_4_8[11]; float x_7_4_9[5]; float x_7_4_10[5]; float x_7_4_11[5]; float x_7_4_12[11]; float x_7_4_13; float x_7_4_14; unsigned int x_7_4_15; struct MSRCSC_t { unsigned int x_16_5_1; float x_16_5_2[3]; float x_16_5_3[3]; float x_16_5_4[3]; int x_16_5_5[3][3]; float x_16_5_6[3]; float x_16_5_7[3]; float x_16_5_8[3]; } x_7_4_16; } x_2_3_7; } x_1_2_2; } x_3_1_1; } x3; }*)arg7 histogram:(struct RgbHistogram_t { unsigned int x1; unsigned int x2[128]; unsigned int x3[128]; unsigned int x4[128]; }*)arg8 data:(id*)arg9;
- (long long)processFrameWithLayer0:(struct __CVBuffer { }*)arg1 layer1:(struct __CVBuffer { }*)arg2 output:(struct __CVBuffer { }*)arg3 metadata:(id)arg4 commandbuffer:(id)arg5 callback:(id /* block */)arg6;
- (long long)processPixelsWithLayer0:(struct __IOSurface { }*)arg1 layer1:(struct __IOSurface { }*)arg2 output:(struct __IOSurface { }*)arg3 metaData:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13[3]; unsigned int x_1_1_14[3][18]; unsigned int x_1_1_15[1][1][3][9]; unsigned int x_1_1_16[1][1][3][9]; unsigned int x_1_1_17[1][1][3][9]; unsigned int x_1_1_18[1][1][3][9]; unsigned int x_1_1_19[1][1][3][9]; int x_1_1_20[1][1][3][9][3]; unsigned int x_1_1_21[1][1][3][9][3]; long long x_1_1_22[1][1][3][9][6]; float x_1_1_23[1][1][3][9][6]; unsigned int x_1_1_24[1][1][3][9]; int x_1_1_25[1][1][3][9]; unsigned int x_1_1_26[1][1][3][9]; int x_1_1_27[1][1][3][9][4][7]; unsigned int x_1_1_28[1][1][3][9][4][7]; long long x_1_1_29[1][1][3][9][4][7]; float x_1_1_30[1][1][3][9][4][7]; int x_1_1_31[1][1][3][9][6]; unsigned int x_1_1_32[1][1][3][9][6]; unsigned int x_1_1_33; unsigned int x_1_1_34; unsigned int x_1_1_35; unsigned int x_1_1_36[9]; } x1; }*)arg4 tcControl:(struct ToneCurve_Control { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; bool x9; int x10; struct __CFString {} *x11; int x12; int x13; int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; float x21; float x22; float x23; unsigned int x24 : 1; unsigned int x25 : 1; float x26; struct _AuxData { int x_27_1_1; int x_27_1_2; int x_27_1_3; int x_27_1_4; float x_27_1_5; float x_27_1_6; float x_27_1_7; float x_27_1_8; int x_27_1_9; float x_27_1_10; float x_27_1_11; float x_27_1_12; bool x_27_1_13; } x27; struct _TMData { int x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; int x_28_1_5; int x_28_1_6; float x_28_1_7; float x_28_1_8; float x_28_1_9; int x_28_1_10; float x_28_1_11; float x_28_1_12; float x_28_1_13; float x_28_1_14; float x_28_1_15; float x_28_1_16; float x_28_1_17; float x_28_1_18; float x_28_1_19; float x_28_1_20; float x_28_1_21; float x_28_1_22; float x_28_1_23; int x_28_1_24; } x28; struct _HDR10TMParam { float x_29_1_1; float x_29_1_2; float x_29_1_3; float x_29_1_4; float x_29_1_5; float x_29_1_6; float x_29_1_7; float x_29_1_8; float x_29_1_9; float x_29_1_10; float x_29_1_11; float x_29_1_12; float x_29_1_13; float x_29_1_14; float x_29_1_15; float x_29_1_16; int x_29_1_17; unsigned short x_29_1_18; float x_29_1_19[4]; float x_29_1_20[4]; float x_29_1_21[4]; unsigned short x_29_1_22[3]; float x_29_1_23[3][14]; } x29; }*)arg5 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; float x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; float x18[9]; float x19[9]; unsigned int x20; float x21; unsigned int x22; float x23; }*)arg6 hdr10InfoFrame:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg7 commandbuffer:(id)arg8;
- (void)releaseResources;
- (unsigned int)selectHDRUsage:(unsigned int)arg1 withRPU:(bool)arg2;
- (void)setCSCMatrixInHDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; float x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; float x18[9]; float x19[9]; unsigned int x20; float x21; unsigned int x22; float x23; }*)arg1 forIndex:(unsigned int)arg2;
- (void)setDefaultAmbientLightValue:(float)arg1;
- (void)setDefaultContrastRatioValue:(float)arg1;
- (void)setDefaultEDRFactorValue:(float)arg1;
- (void)setDefaultMaxEDRValue:(float)arg1;
- (void)setHDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; float x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; float x18[9]; float x19[9]; unsigned int x20; float x21; unsigned int x22; float x23; }*)arg1 withTCControl:(struct ToneCurve_Control { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; bool x9; int x10; struct __CFString {} *x11; int x12; int x13; int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; float x21; float x22; float x23; unsigned int x24 : 1; unsigned int x25 : 1; float x26; struct _AuxData { int x_27_1_1; int x_27_1_2; int x_27_1_3; int x_27_1_4; float x_27_1_5; float x_27_1_6; float x_27_1_7; float x_27_1_8; int x_27_1_9; float x_27_1_10; float x_27_1_11; float x_27_1_12; bool x_27_1_13; } x27; struct _TMData { int x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; int x_28_1_5; int x_28_1_6; float x_28_1_7; float x_28_1_8; float x_28_1_9; int x_28_1_10; float x_28_1_11; float x_28_1_12; float x_28_1_13; float x_28_1_14; float x_28_1_15; float x_28_1_16; float x_28_1_17; float x_28_1_18; float x_28_1_19; float x_28_1_20; float x_28_1_21; float x_28_1_22; float x_28_1_23; int x_28_1_24; } x28; struct _HDR10TMParam { float x_29_1_1; float x_29_1_2; float x_29_1_3; float x_29_1_4; float x_29_1_5; float x_29_1_6; float x_29_1_7; float x_29_1_8; float x_29_1_9; float x_29_1_10; float x_29_1_11; float x_29_1_12; float x_29_1_13; float x_29_1_14; float x_29_1_15; float x_29_1_16; int x_29_1_17; unsigned short x_29_1_18; float x_29_1_19[4]; float x_29_1_20[4]; float x_29_1_21[4]; unsigned short x_29_1_22[3]; float x_29_1_23[3][14]; } x29; }*)arg2 withRPU:(bool)arg3 withDmData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; struct { unsigned short x_20_1_1; unsigned short x_20_1_2; unsigned short x_20_1_3; unsigned short x_20_1_4; } x20; struct { unsigned short x_21_1_1; unsigned short x_21_1_2; unsigned short x_21_1_3; unsigned short x_21_1_4; unsigned short x_21_1_5; unsigned short x_21_1_6; unsigned short x_21_1_7; short x_21_1_8; } x21[16]; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; } x23; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; unsigned short x_24_1_5; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; unsigned short x_25_1_4; unsigned short x_25_1_5; } x25; }*)arg4 withOperation:(unsigned int)arg5;
- (void)setTargetColorPrimaries:(struct __CFString { }*)arg1;
- (void)setTargetMinNits:(double)arg1;
- (void)setTargetNits:(double)arg1;
- (struct __CFString { }*)targetColorPrimaries;
- (double)targetMinNits;
- (double)targetNits;

@end