/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface _SBGridFloorSwitcherModifier : SBSwitcherModifier

- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutForReceivingHardwareButtonEvents;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 centered:(bool)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1;
- (double)contentViewScale;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullyPresentedFrameForAppLayout:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeGrabberVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexKillable:(unsigned long long)arg1;
- (bool)isIndexSelectable:(unsigned long long)arg1;
- (bool)isItemContainerPointerInteractionEnabled;
- (bool)isScrollEnabled;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)keyboardSuppressionMode;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (long long)preferredSnapshotOrientationForAppLayout:(id)arg1;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (void)resetAdjustedScrollingState;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scrollViewAttributes;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (long long)shadowStyleForAppLayout:(id)arg1;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAllowContentViewTouchesForIndex:(unsigned long long)arg1;
- (bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (bool)shouldConfigureInAppDockHiddenAssertion;
- (bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (bool)shouldPerformRotationAnimationForOrientationChange;
- (bool)shouldRubberbandFullScreenHomeGrabberView;
- (bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1;
- (bool)shouldUseBrightMaterialForIndex:(unsigned long long)arg1;
- (double)snapshotScaleForAppLayout:(id)arg1;
- (double)switcherBackdropBlurProgress;
- (long long)switcherBackdropBlurType;
- (double)switcherDimmingAlpha;
- (bool)switcherDimmingViewBlocksTouches;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (unsigned long long)transactionCompletionOptions;
- (id)visibleAppLayouts;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;
- (bool)wantsHomeScreenPointerInteractions;
- (bool)wantsSwitcherBackdropBlur;
- (bool)wantsSwitcherDimmingView;

@end