/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVMotionEffect : PVEffect {
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildInEnableChan;
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildOutEnableChan;
    NSMutableDictionary * _cachedPublishedParams;
    bool  _cachedRenderDirty;
    struct atomic<PVDocumentLoadStatus> { 
        struct __cxx_atomic_impl<PVDocumentLoadStatus, std::__1::__cxx_atomic_base_impl<PVDocumentLoadStatus> > { 
            _Atomic int __a_value; 
        } __a_; 
    }  _docLoadStatus;
    struct PVMotionDocumentInfo { void *x1; struct _OZXDocumentInfo { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; double x_2_1_8; unsigned int x_2_1_9; double x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; double x_2_1_14; unsigned int x_2_1_15; unsigned int x_2_1_16[16]; } x2; unsigned int x3; int x4; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > {} *x5; struct { long long x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; long long x_6_1_4; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; } * _documentInfo;
    NSLock * _documentLock;
    double  _effectOutputAspect;
    unsigned int  _groupIDToCache;
    PVMotionEffectHitAreaComponent * _hitAreaComponent;
    struct FigTime { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } _t; 
    }  _loopTime;
    NSMutableArray * _motionComponents;
    bool  _needsToUpdatePosterFrame;
    bool  _needsToUpdateSceneDuration;
    NSMutableSet * _parameterKeysThatInvalidateCache;
    NSMutableDictionary * _parametersThatInvalidateCache;
    unsigned int  _previousGroupIDToCache;
    NSString * _projectPath;
    NSURL * _projectURL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderStartOffset;
    PVMotionEffectTextComponent * _textComponent;
    struct METimeRemap { 
        struct FigTime { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } _t; 
        } _introDuration; 
        struct FigTime { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } _t; 
        } _outroDuration; 
        struct FigTime { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } _t; 
        } _scaleableDuration; 
        bool _isIntroOptional; 
        bool _isOutroOptional; 
        bool _isStartTimeAligned; 
        bool _isEndTimeAligned; 
        bool _isLoop; 
        bool _forceDisableLoop; 
        bool _forceDisableBuildAnimation; 
        struct OZChannelBool {} *_pBuildInEnableChan; 
        struct OZChannelBool {} *_pBuildOutEnableChan; 
    }  _timeRemap;
    PVMotionEffectTranscriptionComponent * _transcriptionComponent;
    PVMotionEffectTransformComponent * _transformComponent;
    NSString * effectURL;
}

+ (id)_bundleLibPaths;
+ (id)_effectPathFromID:(id)arg1;
+ (id)_userLibPaths;
+ (void)clearPreviewStats;
+ (id)effectMap;
+ (void)extractMetadataFromContentsOfFile:(id)arg1 toCacheEntry:(id)arg2;
+ (void)handleApplicationDidReceiveMemoryWarning;
+ (void)handleApplicationWillTerminate;
+ (void)handleCleanupEffectsCache;
+ (void)initializeMotion;
+ (void)initializeMotionInternal;
+ (void)mapTemplatesInDirectory:(id)arg1 doingRescan:(bool)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (id)motionComponentClasses;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
+ (struct HGRef<HGXForm> { struct HGXForm {} *x1; })newHGTransformNodeAroundPoint:(void *)arg1 scale:(void *)arg2 translation:(void *)arg3; // needs 3 arg types, found 1: double
+ (id)parameterKeyToPublishedParameterNameMap;
+ (id)publishedParameterNameToParameterKeyMap;
+ (void)registerEffects;
+ (void)registerNoneEffectForType:(id)arg1 effectID:(id)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (void)registerTemplateInDirectory:(id)arg1 relPath:(id)arg2 effectID:(id)arg3 doingRescan:(bool)arg4 origCache:(id)arg5 newCache:(id)arg6;
+ (bool)replacedMappedEffectWithNewPath:(id)arg1;
+ (void)scanTemplatesInDirectory:(id)arg1 doingRescan:(bool)arg2 replaceMappedEffectPath:(bool)arg3 origCache:(id)arg4 newCache:(id)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureComponents;
- (void)_documentDidUnload_NoLock;
- (void)adjustCamera:(id)arg1;
- (void)adjustCutawayBorder:(id)arg1;
- (void)adjustCutawayFadeAnimation:(id)arg1;
- (void)adjustCutawayInputs:(struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 splitCropRectA:(id)arg2 splitCropRectB:(id)arg3 pipRect:(id)arg4 pipScaleFactor:(id)arg5 renderScale:(float)arg6 pipNeedsCrop:(bool)arg7;
- (void)adjustKenBurnsAnimation:(id)arg1;
- (void)adjustPosition:(id)arg1;
- (void)adjustTransitionInputs:(struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 renderScale:(float)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3 inputANeedsBackground:(bool)arg4 inputBNeedsBackground:(bool)arg5 slideCropRectA:(id)arg6 slideCropRectB:(id)arg7;
- (void)applyInspectableProperties;
- (void)applyInspectableProperties_NoLock;
- (void)assertDocumentIsLocked;
- (void)assertDocumentIsUnlocked;
- (void)assertDocumentStatusIsError;
- (void)assertDocumentStatusIsInProgress;
- (void)assertDocumentStatusIsLoaded;
- (void)assertDocumentStatusIsLoadedOrReady;
- (void)assertDocumentStatusIsNotStarted;
- (void)assertDocumentStatusIsReady;
- (void)assertDocumentStatusIsReadyAfterLoad:(bool)arg1;
- (void)beginTextEditing;
- (bool)bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (void)buildDropZoneIdMap;
- (id)cameraProjection;
- (id)cameraTransform;
- (void)clearTranscription;
- (void)computeIntroOutroPoints;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })cornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 scale:(struct CGPoint { double x1; double x2; })arg4 viewSize:(struct CGSize { double x1; double x2; })arg5 viewOrigin:(int)arg6;
- (void)dealloc;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (bool)didCacheInvalidatingParameterChange_NoLock:(id)arg1 key:(id)arg2;
- (void)didSetCacheInvalidatingParameter_NoLock:(id)arg1 forKey:(id)arg2;
- (void)disableBackgroundMovie:(bool)arg1;
- (void)disableCameraOverride;
- (void)disableElementWithPublishedParam:(struct PCString { struct __CFString {} *x1; }*)arg1 disable:(bool)arg2;
- (struct CGSize { double x1; double x2; })documentSize;
- (id)effectParameters;
- (void)enableCameraOverride:(id)arg1 projection:(id)arg2;
- (void)endTextEditing;
- (bool)hasAllNecessaryResources;
- (bool)hasBuiltInEnvironment;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const struct PVInputHGNodeMap<unsigned int> { struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (id)hitAreaPointsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 scale:(struct CGPoint { double x1; double x2; })arg4 viewSize:(struct CGSize { double x1; double x2; })arg5 viewOrigin:(int)arg6;
- (id)initWithContentID:(id)arg1 andDictionary:(id)arg2;
- (id)initWithEffectID:(id)arg1;
- (bool)isCameraOverrideEnabled;
- (bool)isForceRenderAtPosterFrameEnabled;
- (bool)isReady;
- (bool)isRenderCachingDisabled_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)isSketch;
- (bool)isTextFlipped;
- (bool)isTranscription;
- (bool)isVisibleAtTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 timedProperties:(id)arg2 defaultProperties:(id)arg3;
- (void)loadDocument;
- (void)loadEffectInternal;
- (bool)loadResources;
- (struct HGRect { int x1; int x2; int x3; int x4; })makeCropRectForDOD:(struct HGRect { int x1; int x2; int x3; int x4; })arg1 renderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderScale:(float)arg3;
- (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })motionTimeFromEffectTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 effectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })motionTimeFromEffectTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 effectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 forcePosterFrame:(bool)arg3;
- (int)orientation;
- (int)origin;
- (struct CGSize { double x1; double x2; })outputSize;
- (bool)parameterInvalidatesCache_NoLock:(id)arg1;
- (int)posterFrameTime_NoLock:(struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; }*)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })previewHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputHGNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderer:(struct HGRenderer { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; struct HGNode {} *x3; struct HGBitmap {} *x4; struct HGRendererTextureUnit { struct HGBitmap {} *x_5_1_1; struct HGTransform {} *x_5_1_2; int x_5_1_3; } x5[8]; struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_6_1_1; struct DepthBufferManager {} **x_6_1_2; struct __compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_3_2_1; } x_6_1_3; } x6; struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_7_1_1; struct HGExecutionUnit {} **x_7_1_2; struct __compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_3_2_1; } x_7_1_3; } x7; struct HGExecutionData {} *x8; struct HGSyncData {} *x9; struct _opaque_pthread_rwlock_t { long long x_10_1_1; BOOL x_10_1_2[192]; } x10; }*)arg4;
- (id)projectPath;
- (id)projectURL;
- (id)publishedParam_NoLock:(const struct PVMotionDocumentInfo { void *x1; struct _OZXDocumentInfo { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; double x_2_1_8; unsigned int x_2_1_9; double x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; double x_2_1_14; unsigned int x_2_1_15; unsigned int x_2_1_16[16]; } x2; unsigned int x3; int x4; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > {} *x5; struct { long long x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; long long x_6_1_4; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; }*)arg1 forKey:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeHidden:(bool)arg4;
- (id)publishedParams_NoLock:(const struct PVMotionDocumentInfo { void *x1; struct _OZXDocumentInfo { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; double x_2_1_8; unsigned int x_2_1_9; double x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; double x_2_1_14; unsigned int x_2_1_15; unsigned int x_2_1_16[16]; } x2; unsigned int x3; int x4; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > {} *x5; struct { long long x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; long long x_6_1_4; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; }*)arg1;
- (void)releaseResources;
- (void)resetToDefaultTranscriptionForLocaleID:(id)arg1;
- (bool)resourcesAreReady;
- (void)runEnsuringDocumentReady:(id /* block */)arg1;
- (void)runEnsuringDocumentReadyAndLockingDocument:(id /* block */)arg1;
- (void)runLockingDocument:(id /* block */)arg1;
- (void)runWithDocument_NoLock:(id /* block */)arg1;
- (void)setBuildInEnabled:(bool)arg1;
- (void)setBuildOutEnabled:(bool)arg1;
- (void)setEffectOutputAspectWithNumber:(id)arg1;
- (void)setEffectParameters:(id)arg1;
- (void)setForceDisableBuildAnimation:(bool)arg1;
- (void)setForceDisableLoop:(bool)arg1;
- (void)setIsFrontFacingCamera:(bool)arg1;
- (void)setMaskPoints:(id)arg1;
- (void)setNeedsToUpdateSceneDuration;
- (void)setNodeIDToCache:(unsigned int)arg1;
- (void)setQuaternion:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
- (void)setRenderStartOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRollRadians:(double)arg1;
- (void)setSketchStrokes:(id)arg1;
- (void)setTopLevelGroupTransform:(id)arg1;
- (void)setTopLevelOpacity:(double)arg1;
- (void)setTranscriptionText:(id)arg1;
- (void)setTransform:(id)arg1;
- (void)setupPublishedParameters:(id)arg1;
- (void)setupTransitionParameters:(id)arg1;
- (bool)shouldRenderPreviewAtPosterTime;
- (bool)supportsExtendedRangeInputs;
- (bool)supportsFlippingText;
- (bool)supportsOrientation;
- (bool)supportsParam:(id)arg1;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })textCornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 index:(unsigned long long)arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 scale:(struct CGPoint { double x1; double x2; })arg5 viewSize:(struct CGSize { double x1; double x2; })arg6 viewOrigin:(int)arg7;
- (id)textEditingBounds:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)textEditingBoundsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 useParagraphBounds:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (id)textTransformsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5;
- (id)textTransformsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4;
- (double)topLevelOpacity;
- (bool)transcriptionHitTest:(struct CGPoint { double x1; double x2; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5;
- (id)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4;
- (void)updateInspectableProperties;
- (void)updateInspectableProperties:(id)arg1;
- (void)updateInspectableProperties_NoLock:(id)arg1 effectTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)updateLiveTitlePickerLoopTime:(bool)arg1;
- (void)updateSceneDuration_NoLock;
- (void)updateSketchAnimation:(id)arg1 defaultProperties:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

@end