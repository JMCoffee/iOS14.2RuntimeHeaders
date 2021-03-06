/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBWallpaperViewController : UIViewController <BSDescriptionProviding, PTSettingsKeyObserver, SBFLegibilitySettingsProviderDelegate, SBFWallpaperConfigurationManagerDelegate, SBFWallpaperViewDelegate, SBFWallpaperViewInternalObserver, SBWallpaperLegibilityProviding, SBWallpaperPresenting> {
    NSString * _cachingIdentifier;
    long long  _disallowRasterizationBlockCount;
    NSMutableSet * _disallowRasterizationReasonsHomeVariant;
    NSMutableSet * _disallowRasterizationReasonsLockVariant;
    long long  _displayedVariant;
    UITraitCollection * _fakeBlurViewOverrideTraitCollection;
    bool  _fixedOrientation;
    NSMutableSet * _hideHomescreenWallpaperReasons;
    NSMutableSet * _hideLockscreenWallpaperReasons;
    NSHashTable * _homescreenBlurViews;
    NSHashTable * _homescreenObservers;
    NSMutableSet * _homescreenStyleChangeDelayReasons;
    SBWallpaperStyleInfo * _homescreenStyleInfo;
    NSHashTable * _homescreenWallpaperScaleAssertions;
    SBFWallpaperView * _homescreenWallpaperView;
    NSHashTable * _lockscreenBlurViews;
    NSHashTable * _lockscreenObservers;
    double  _lockscreenOnlyWallpaperAlpha;
    SBWallpaperStyleInfo * _lockscreenStyleInfo;
    double  _lockscreenWallpaperScale;
    SBFWallpaperView * _lockscreenWallpaperView;
    <SBWallpaperReachabilityCoordinating> * _reachabilityCoordinator;
    NSHashTable * _requireWallpaperAssertions;
    SBFWallpaperView * _sharedWallpaperView;
    NSHashTable * _suspendColorSamplingAssertions;
    NSHashTable * _suspendWallpaperAnimationAssertions;
    SBFWallpaperConfigurationManager * _wallpaperConfigurationManager;
    UIView * _wallpaperContainerView;
    SBWallpaperDefaults * _wallpaperDefaults;
    <BSDefaultObserver> * _wallpaperEnableDimmingObserver;
    <SBWallpaperPresentingDelegate> * _wallpaperPresentingDelegate;
    <BSInvalidatable> * _wallpaperStyleAnimationAssertion;
}

@property (nonatomic, copy) NSString *cachingIdentifier;
@property (nonatomic, readonly) struct { long long x1; long long x2; double x3; } currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITraitCollection *fakeBlurViewOverrideTraitCollection;
@property (nonatomic) bool fixedOrientation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBWallpaperStyleInfo *homescreenStyleInfo;
@property (nonatomic, readonly) double homescreenWallpaperScale;
@property (nonatomic, retain) SBFWallpaperView *homescreenWallpaperView;
@property (nonatomic, readonly) <SBFIrisWallpaperView> *irisWallpaperView;
@property (nonatomic, readonly) SBWallpaperStyleInfo *lockscreenStyleInfo;
@property (nonatomic) double lockscreenWallpaperScale;
@property (nonatomic, retain) SBFWallpaperView *lockscreenWallpaperView;
@property (nonatomic, readonly) double minimumHomescreenWallpaperScale;
@property (nonatomic, readonly) double minimumLockscreenWallpaperScale;
@property (nonatomic, retain) <SBWallpaperReachabilityCoordinating> *reachabilityCoordinator;
@property (nonatomic, retain) SBFWallpaperView *sharedWallpaperView;
@property (readonly) Class superclass;
@property (nonatomic) long long variant;
@property (nonatomic, retain) SBFWallpaperConfigurationManager *wallpaperConfigurationManager;
@property (nonatomic) <SBWallpaperPresentingDelegate> *wallpaperPresentingDelegate;
@property (nonatomic, retain) <BSInvalidatable> *wallpaperStyleAnimationAssertion;

+ (id)substitutionFlatColorForWallpaperName:(id)arg1;

- (void).cxx_destruct;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (id)_activeWallpaperView;
- (void)_beginDisallowRasterizationBlock;
- (void)_beginSuspendingMotionEffectsForStyleIfNeeded;
- (unsigned long long)_bestWallpaperViewInitializationOptionsForVariant:(long long)arg1 shared:(bool)arg2 wallpaperOptions:(id)arg3 options:(unsigned long long)arg4;
- (id)_blurViewsForVariant:(long long)arg1;
- (bool)_canShowWhileLocked;
- (void)_clearWallpaperEffectView:(id)arg1;
- (void)_clearWallpaperView:(id)arg1;
- (void)_endDisallowRasterizationBlock;
- (void)_endSuspendingMotionEffectsForStyleIfNeeded;
- (void)_handleWallpaperChangedForVariant:(long long)arg1;
- (void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2;
- (void)_invalidateWallpaperAssertion:(id)arg1;
- (bool)_isRasterizationDisallowedForCurrentVariant;
- (bool)_isWallpaperHiddenForVariant:(long long)arg1;
- (bool)_isWallpaperView:(id)arg1 displayingWallpaperWithConfiguration:(id)arg2 forVariant:(long long)arg3;
- (id)_makeWallpaperViewWithConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(bool)arg3 options:(unsigned long long)arg4;
- (id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(struct { long long x1; long long x2; double x3; })arg2;
- (id)_observersForVariant:(long long)arg1;
- (void)_precacheStyles:(id)arg1 usingTraitCollection:(id)arg2;
- (void)_reconfigureBlurViewsForVariant:(long long)arg1;
- (void)_registerFakeBlurView:(id)arg1;
- (void)_removeColorSamplingAssertion:(id)arg1;
- (void)_removeWallpaperAnimationAssertion:(id)arg1;
- (void)_removeWallpaperScaleAssertion:(id)arg1 withAnimationFactory:(id)arg2;
- (bool)_setDisallowRasterization:(bool)arg1 withReason:(id)arg2 reasons:(id)arg3;
- (void)_setWallpaperHidden:(bool)arg1 variant:(long long)arg2 reason:(id)arg3;
- (bool)_shouldSuspendMotionEffectsForState:(struct { long long x1; long long x2; double x3; })arg1;
- (bool)_shouldSuspendMotionEffectsForStyle:(long long)arg1;
- (id)_sourceForFakeBlurView:(id)arg1;
- (void)_suspendOrResumeColorSampling;
- (void)_suspendOrResumeWallpaperAnimation;
- (void)_unregisterFakeBlurView:(id)arg1;
- (void)_updateAndPrewarmWallpapers;
- (void)_updateBlurGeneration;
- (void)_updateBlurImagesForVariant:(long long)arg1;
- (bool)_updateEffectViewForVariant:(long long)arg1 oldState:(struct { long long x1; long long x2; double x3; }*)arg2 newState:(struct { long long x1; long long x2; double x3; }*)arg3 oldEffectView:(id*)arg4 newEffectView:(id*)arg5;
- (bool)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2;
- (void)_updateHomeScreenWallpaperScaleWithAnimationFactory:(id)arg1;
- (void)_updateMotionEffectsForState:(struct { long long x1; long long x2; double x3; })arg1;
- (void)_updateRasterizationState;
- (void)_updateSeparateWallpaperForVariants:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3;
- (void)_updateSharedWallpaperWithOptions:(unsigned long long)arg1 wallpaperMode:(long long)arg2;
- (void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3 withCompletion:(id /* block */)arg4;
- (void)_updateWallpaperForWallpaperDimming:(bool)arg1;
- (void)_updateWallpaperForWallpaperMode:(long long)arg1;
- (void)_updateWallpaperHidden;
- (void)_updateWallpaperParallax;
- (id)_vendWallpaperViewForConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(bool)arg3 options:(unsigned long long)arg4;
- (Class)_wallpaperViewClassForType:(long long)arg1;
- (id)_wallpaperViewForVariant:(long long)arg1;
- (void)addObserver:(id)arg1 forVariant:(long long)arg2;
- (id)averageColorForVariant:(long long)arg1;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;
- (void)beginDelayingHomescreenStyleChangesForReason:(id)arg1;
- (id)beginRequiringWithReason:(id)arg1;
- (id)cachingIdentifier;
- (void)cancelInProcessAnimations;
- (void)cleanupOldSharedWallpaper:(id)arg1 lockSreenWallpaper:(id)arg2 homeScreenWallpaper:(id)arg3;
- (double)contrastForVariant:(long long)arg1;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2;
- (struct { long long x1; long long x2; double x3; })currentHomescreenStyleTransitionState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2;
- (id)fakeBlurViewOverrideTraitCollection;
- (bool)fixedOrientation;
- (id)homescreenStyleInfo;
- (double)homescreenWallpaperScale;
- (id)homescreenWallpaperView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)irisWallpaperView;
- (id)legibilitySettingsForVariant:(long long)arg1;
- (id)lockscreenStyleInfo;
- (double)lockscreenWallpaperScale;
- (id)lockscreenWallpaperView;
- (double)minimumHomescreenWallpaperScale;
- (double)minimumLockscreenWallpaperScale;
- (double)minimumWallpaperScaleForVariant:(long long)arg1;
- (id)newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (void)noteDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)noteWillAnimateToInterfaceOrientation:(long long)arg1;
- (void)preheatWallpaperForVariant:(long long)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (id)reachabilityCoordinator;
- (void)removeObserver:(id)arg1 forVariant:(long long)arg2;
- (void)removeWallpaperRequiredAssertion:(id)arg1;
- (bool)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;
- (void)setAlpha:(double)arg1 forWallpaperVariant:(long long)arg2;
- (void)setCachingIdentifier:(id)arg1;
- (void)setDisallowsRasterization:(bool)arg1 forVariant:(long long)arg2 withReason:(id)arg3;
- (void)setFakeBlurViewOverrideTraitCollection:(id)arg1;
- (void)setFixedOrientation:(bool)arg1;
- (id)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
- (void)setHomescreenWallpaperView:(id)arg1;
- (void)setLockscreenOnlyWallpaperAlpha:(double)arg1;
- (void)setLockscreenWallpaperContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLockscreenWallpaperScale:(double)arg1;
- (void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
- (void)setLockscreenWallpaperView:(id)arg1;
- (void)setReachabilityCoordinator:(id)arg1;
- (void)setSharedWallpaperView:(id)arg1;
- (void)setVariant:(long long)arg1;
- (void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(id /* block */)arg4;
- (void)setWallpaperConfigurationManager:(id)arg1;
- (void)setWallpaperHidden:(bool)arg1 variant:(long long)arg2 reason:(id)arg3;
- (void)setWallpaperPresentingDelegate:(id)arg1;
- (bool)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (void)setWallpaperStyleAnimationAssertion:(id)arg1;
- (bool)setWallpaperStyleTransitionState:(struct { long long x1; long long x2; double x3; })arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)sharedWallpaperView;
- (bool)shouldAutorotate;
- (bool)shouldDelayHomescreenStyleUpdates;
- (id)substitutionWallpaperConfigurationForWallpaperConfiguration:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)suspendColorSamplingForReason:(id)arg1;
- (id)suspendWallpaperAnimationForReason:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateIrisWallpaperForInteractiveMode;
- (bool)updateIrisWallpaperForStaticMode;
- (void)updateWallpaperForLocations:(long long)arg1 wallpaperMode:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)updateWallpaperForLocations:(long long)arg1 withCompletion:(id /* block */)arg2;
- (long long)variant;
- (bool)variantsShareWallpaper;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)wallpaperConfigurationForUpdatingWallpaperViewsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperConfigurationManager;
- (void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;
- (unsigned long long)wallpaperDataTypesToRequestForUpdatingWallpaperViews;
- (id)wallpaperPresentingDelegate;
- (id)wallpaperStyleAnimationAssertion;
- (id)wallpaperStyleInfoForVariant:(long long)arg1;
- (void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2;
- (id)wallpaperView:(id)arg1 wallpaperConfigurationIncludingValueTypes:(unsigned long long)arg2;
- (void)wallpaperViewDidChangeWantsRasterization:(id)arg1;
- (void)wallpaperViewDidInvalidateBlurs:(id)arg1;

@end
