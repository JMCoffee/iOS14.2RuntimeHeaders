/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherContextProviding, SBSwitcherMultitaskingQueryProviding> {
    bool  _verifyModifierStackCoherencyCheckAfterHandlingEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextProtocol;
+ (id)newEventResponse;
+ (id)queryProtocol;

- (id)_handleEvent:(id)arg1;
- (id)appLayoutsToCacheSnapshotsWithVisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 numberOfSnapshotsToCache:(unsigned long long)arg2 biasForward:(bool)arg3;
- (id)defaultAppLayoutsToCacheSnapshots;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3 layoutDirection:(unsigned long long)arg4;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleMedusaSettingsChangedEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)init;
- (id)loggingCategory;
- (bool)runsInternalVerificationAfterEventDispatch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledFrameForIndex:(unsigned long long)arg1;

@end
