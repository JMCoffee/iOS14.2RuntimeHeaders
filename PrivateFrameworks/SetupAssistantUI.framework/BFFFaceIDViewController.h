/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFaceIDViewController : OBWelcomeController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver> {
    OBAnimationController * _animationController;
    bool  _completesOnCancel;
    <BYDeviceProvider> * _deviceProvider;
    <BFFFaceIDViewControllerDelegate> * _faceIDViewControllerDelegate;
    UIView * _iconContainer;
    bool  _inDemo;
    BKUIPearlEnrollControllerPreloadedState * _preloadedState;
    OBPrivacyLinkController * _privacyLink;
    bool  _shouldShowWallet;
}

@property (nonatomic, retain) OBAnimationController *animationController;
@property (nonatomic) bool completesOnCancel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BYDeviceProvider> *deviceProvider;
@property (nonatomic) <BFFFaceIDViewControllerDelegate> *faceIDViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *iconContainer;
@property (nonatomic, readonly) bool inDemo;
@property (nonatomic, retain) BuddyInternalSkipInfoProvider *internalSkipInfoProvider;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;
@property (nonatomic) bool shouldShowWallet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (bool)_sheetMode;
- (void)_userDidTapCancelButton:(id)arg1;
- (id)animationController;
- (bool)completesOnCancel;
- (id)deviceProvider;
- (id)faceIDViewControllerDelegate;
- (id)iconContainer;
- (bool)inDemo;
- (id)init;
- (id)initInDemo:(bool)arg1;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (void)performExtendedInitializationWithCompletion:(id /* block */)arg1;
- (id)privacyLink;
- (void)resetColorsAnimated:(bool)arg1;
- (void)setAnimationController:(id)arg1;
- (void)setCompletesOnCancel:(bool)arg1;
- (void)setDeviceProvider:(id)arg1;
- (void)setFaceIDViewControllerDelegate:(id)arg1;
- (void)setIconContainer:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setShouldShowWallet:(bool)arg1;
- (bool)shouldShowWallet;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willStartOver;

@end
