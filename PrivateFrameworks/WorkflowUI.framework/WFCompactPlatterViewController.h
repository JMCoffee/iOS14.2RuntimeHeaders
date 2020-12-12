/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFCompactPlatterViewController : UIViewController <UIScrollViewDelegate, WFCompactPlatterPresentation, WFCompactPlatterSizingDelegate> {
    UIViewController * _contentViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumPlatterSize;
    <WFCompactPlatterContentContainer> * _platterContentContainer;
    bool  _platterHeightAnimationsDisabled;
    WFCompactPlatterView * _platterView;
    UIScrollView * _scrollView;
    WFCompactPlatterTransitioningDelegate * _wf_transitioningDelegate;
}

@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumPlatterSize;
@property (nonatomic) <WFCompactPlatterContentContainer> *platterContentContainer;
@property (nonatomic) bool platterHeightAnimationsDisabled;
@property (nonatomic, readonly) WFCompactPlatterView *platterView;
@property (nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (id)contentViewController;
- (id)init;
- (void)invalidateContentSize;
- (void)invalidatePlatterSize;
- (void)loadView;
- (double)maximumExpectedVisibleContentHeight;
- (struct CGSize { double x1; double x2; })minimumPlatterSize;
- (id)platterContentContainer;
- (bool)platterHeightAnimationsDisabled;
- (double)platterHeightForWidth:(double)arg1 withMaximumHeight:(double)arg2;
- (id)platterView;
- (void)platterViewDidInvalidateSize:(id)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setMinimumPlatterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlatterContentContainer:(id)arg1;
- (void)setPlatterHeightAnimationsDisabled:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setWf_transitioningDelegate:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)updateContentSizeAndPlatterPosition;
- (void)updatePlatterPosition;
- (void)viewDidLayoutSubviews;
- (id)wf_transitioningDelegate;

@end