/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDropApplicationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (id)keyboardSuppressionMode;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end