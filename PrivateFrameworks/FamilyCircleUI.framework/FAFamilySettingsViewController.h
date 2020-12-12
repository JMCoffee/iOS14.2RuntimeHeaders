/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilySettingsViewController : ACUIViewController <FASharedSubscriptionSpecifierProviderDelegeate, RemoteUIControllerDelegate, UINavigationControllerDelegate> {
    ACAccountStore * _accountStore;
    UITableViewCell * _activeCell;
    NSURL * _activeURL;
    UIActivityIndicatorView * _activityIndicatorView;
    PSSpecifier * _addFamilyMemberCell;
    ACAccount * _appleAccount;
    AAGrandSlamSigner * _appleIDGrandSlamSigner;
    AAUIRemoteUIController * _appleIDRemoteUIController;
    UINavigationController * _childAccountCreationNavController;
    NSMutableURLRequest * _currentRemoteUIRequest;
    <FAFamilySettingsViewControllerDelegate> * _delegate;
    FACircleRemoteUIDelegate * _faCircleRemoteUIDelegate;
    FAFamilyCircle * _familyCircle;
    double  _familyHeaderTitleOffset;
    FAProfilePictureStore * _familyPictureStore;
    FACircleRemoteUIDelegate * _familyRemoteUIDelegate;
    AAUIRemoteUIController * _familyV2RemoteUIController;
    bool  _fetchingPaymentInfo;
    bool  _fetchingPaymentMethodImage;
    ACAccount * _grandSlamAccount;
    AAGrandSlamSigner * _iCloudGrandSlamSigner;
    AAUIRemoteUIController * _iCloudRemoteUIController;
    bool  _isNavigationTitleViewDisplayed;
    ACAccount * _itunesAccount;
    FAFamilyMember * _memberBeingViewed;
    UILabel * _navigationBarTitleLabel;
    NSOperationQueue * _networkingQueue;
    FAFamilyNotificationObserver * _notificationObserver;
    NSMutableDictionary * _objectModelDecorators;
    NSArray * _paymentInfoSpecifiers;
    FAFamilyCreditCard * _paymentMethod;
    FARequestConfigurator * _requestConfigurator;
    AAUIServerUIHookHandler * _serverUIHookHandler;
    FASharedSubscriptionSpecifierProvider * _sharedSubscriptionSpecifierProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAFamilySettingsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addChildAccount;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (void)_addMemberWithEventType:(id)arg1;
- (id)_appleIDGrandSlamSigner;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (id)_createSpecifierForFamilyMemberGroup;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (id)_createSpecifiersForPaymentInfo;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (void)_fetchFamilyPaymentInfoWithCompletion:(id /* block */)arg1;
- (void)_fetchUpdatedFamilyDetailsWithCompletion:(id /* block */)arg1;
- (void)_fireFamilyUpdateNotification;
- (void)_handleFamilyDeletion;
- (void)_handleFamilyStatusChange:(id)arg1;
- (void)_handleFamilySubscriptionChanged;
- (void)_handleMemberDeletion:(id)arg1;
- (void)_handleMemberUpdate:(id)arg1;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(bool)arg3;
- (void)_handleServiceSpecifierURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_hasActiveCell;
- (id)_imageFromBundle:(id)arg1;
- (id)_itunesAccount;
- (void)_layoutTableHeaderView;
- (void)_learnMoreLinkButtonWasTapped:(id)arg1;
- (void)_loadRemoteUIWithRequest:(id)arg1 specifier:(id)arg2 type:(long long)arg3;
- (void)_loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 specifier:(id)arg3 type:(long long)arg4;
- (void)_paymentMethodCellWasTapped:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (void)_performEventWithContext:(id)arg1 specifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_profilePictureStoreDidReload;
- (void)_reloadPaymentInfoSpecifiersAnimated:(bool)arg1;
- (id)_requestConfigurator;
- (void)_setFresnoRemoteUIDelgate:(id)arg1;
- (void)_setupFamilyHeaderView;
- (void)_setupNavigationBarTitleView;
- (id)_sharedSubscriptionSpecifierProvider;
- (id)_sharedSubscriptionSpecifiers;
- (void)_showConnectivityAlert;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)arg1;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didSelectSpecifier:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)hideActivityIndicatorInNavigationBar;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyCircle:(id)arg3 familyPictureStore:(id)arg4;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(bool)arg3;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showActivityIndicatorInNavigationBar;
- (id)specifiers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end