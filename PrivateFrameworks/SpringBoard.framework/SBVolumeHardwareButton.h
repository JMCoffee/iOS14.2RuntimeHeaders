/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBVolumeHardwareButton : NSObject <SBPressPrecedenceArbiter, UIGestureRecognizerDelegate> {
    SBVolumeHardwareButtonActions * _buttonActions;
    long long  _homeButtonType;
    UIGestureRecognizer * _screenshotGestureRecognizer;
    UIGestureRecognizer * _shutdownGestureRecognizer;
    SBPressGestureRecognizer * _volumeDecreaseButtonPressGestureRecognizer;
    SBPressSequenceObserver * _volumeDecreaseSequenceObserver;
    unsigned long long  _volumeDownAggdStartTime;
    SBPressGestureRecognizer * _volumeIncreaseButtonPressGestureRecognizer;
    SBPressSequenceObserver * _volumeIncreaseSequenceObserver;
    NSHashTable * _volumePressBandits;
    unsigned long long  _volumeUpAggdStartTime;
}

@property (nonatomic, readonly) SBVolumeHardwareButtonActions *buttonActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBPressSequenceObserver *volumeDecreaseSequenceObserver;
@property (nonatomic, readonly) SBPressSequenceObserver *volumeIncreaseSequenceObserver;
@property (nonatomic) NSHashTable *volumePressBandits;

- (void).cxx_destruct;
- (void)_aggdLogVolumeDecreaseButtonDown:(bool)arg1;
- (void)_aggdLogVolumeIncreaseButtonDown:(bool)arg1;
- (void)_createGestureRecognizers;
- (void)_logVolumeButtonWithObserver:(id)arg1 down:(bool)arg2;
- (void)addVolumePressBandit:(id)arg1;
- (id)buttonActions;
- (void)cancelVolumePress;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeButtonType:(long long)arg3;
- (id)preemptablePressGestureRecognizers;
- (void)removeVolumePressBandit:(id)arg1;
- (void)setVolumePressBandits:(id)arg1;
- (void)volumeDecreasePress:(id)arg1;
- (id)volumeDecreaseSequenceObserver;
- (void)volumeIncreasePress:(id)arg1;
- (id)volumeIncreaseSequenceObserver;
- (id)volumePressBandits;

@end
