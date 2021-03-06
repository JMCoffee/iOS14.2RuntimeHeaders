/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPIPInteractionSettings : PTSettings {
    bool  _alwaysStartAtSmallestSize;
    double  _defaultContentSizeResetTimeout;
    bool  _freelyPositionable;
    double  _inFlightHitTestPadding;
    SBFFluidBehaviorSettings * _interactiveFluidBehavior;
    double  _maximumSizeSpanForPreferredSizeTuning;
    double  _minimumSizeSpanBetweenPreferredSizes;
    bool  _panGestureEnabled;
    bool  _pinchGestureEnabled;
    double  _positionDecelerationRate;
    double  _positionExtenderMaximumDistance;
    double  _positionVelocityYWeightOverVelocityX;
    double  _rotationExtenderMaximumDistance;
    bool  _rotationGestureEnabled;
    double  _rotationPreRecognitionWeight;
    double  _rotationRubberBandCoefficient;
    double  _scaleDecelerationRate;
    double  _scaleExtenderMaximumDistance;
    double  _scaleLowPassFilterPreviousWeight;
    double  _stashProgressTabAppearanceThresholdX;
    SBFFluidBehaviorSettings * _stashTabFluidBehavior;
}

@property (nonatomic) bool alwaysStartAtSmallestSize;
@property (nonatomic) double defaultContentSizeResetTimeout;
@property (nonatomic) bool freelyPositionable;
@property (nonatomic) double inFlightHitTestPadding;
@property (nonatomic, retain) SBFFluidBehaviorSettings *interactiveFluidBehavior;
@property (nonatomic) double maximumSizeSpanForPreferredSizeTuning;
@property (nonatomic) double minimumSizeSpanBetweenPreferredSizes;
@property (nonatomic) bool panGestureEnabled;
@property (nonatomic) bool pinchGestureEnabled;
@property (nonatomic) double positionDecelerationRate;
@property (nonatomic) double positionExtenderMaximumDistance;
@property (nonatomic) double positionVelocityYWeightOverVelocityX;
@property (nonatomic) double rotationExtenderMaximumDistance;
@property (nonatomic) bool rotationGestureEnabled;
@property (nonatomic) double rotationPreRecognitionWeight;
@property (nonatomic) double rotationRubberBandCoefficient;
@property (nonatomic) double scaleDecelerationRate;
@property (nonatomic) double scaleExtenderMaximumDistance;
@property (nonatomic) double scaleLowPassFilterPreviousWeight;
@property (nonatomic) double stashProgressTabAppearanceThresholdX;
@property (nonatomic, retain) SBFFluidBehaviorSettings *stashTabFluidBehavior;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (bool)alwaysStartAtSmallestSize;
- (double)defaultContentSizeResetTimeout;
- (bool)freelyPositionable;
- (double)inFlightHitTestPadding;
- (id)interactiveFluidBehavior;
- (double)maximumSizeSpanForPreferredSizeTuning;
- (double)minimumSizeSpanBetweenPreferredSizes;
- (bool)panGestureEnabled;
- (bool)pinchGestureEnabled;
- (double)positionDecelerationRate;
- (double)positionExtenderMaximumDistance;
- (double)positionVelocityYWeightOverVelocityX;
- (double)rotationExtenderMaximumDistance;
- (bool)rotationGestureEnabled;
- (double)rotationPreRecognitionWeight;
- (double)rotationRubberBandCoefficient;
- (double)scaleDecelerationRate;
- (double)scaleExtenderMaximumDistance;
- (double)scaleLowPassFilterPreviousWeight;
- (void)setAlwaysStartAtSmallestSize:(bool)arg1;
- (void)setDefaultContentSizeResetTimeout:(double)arg1;
- (void)setDefaultValues;
- (void)setFreelyPositionable:(bool)arg1;
- (void)setInFlightHitTestPadding:(double)arg1;
- (void)setInteractiveFluidBehavior:(id)arg1;
- (void)setMaximumSizeSpanForPreferredSizeTuning:(double)arg1;
- (void)setMinimumSizeSpanBetweenPreferredSizes:(double)arg1;
- (void)setPanGestureEnabled:(bool)arg1;
- (void)setPinchGestureEnabled:(bool)arg1;
- (void)setPositionDecelerationRate:(double)arg1;
- (void)setPositionExtenderMaximumDistance:(double)arg1;
- (void)setPositionVelocityYWeightOverVelocityX:(double)arg1;
- (void)setRotationExtenderMaximumDistance:(double)arg1;
- (void)setRotationGestureEnabled:(bool)arg1;
- (void)setRotationPreRecognitionWeight:(double)arg1;
- (void)setRotationRubberBandCoefficient:(double)arg1;
- (void)setScaleDecelerationRate:(double)arg1;
- (void)setScaleExtenderMaximumDistance:(double)arg1;
- (void)setScaleLowPassFilterPreviousWeight:(double)arg1;
- (void)setStashProgressTabAppearanceThresholdX:(double)arg1;
- (void)setStashTabFluidBehavior:(id)arg1;
- (double)stashProgressTabAppearanceThresholdX;
- (id)stashTabFluidBehavior;

@end
