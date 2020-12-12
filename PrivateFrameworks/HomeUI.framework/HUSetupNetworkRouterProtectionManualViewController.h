/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSetupNetworkRouterProtectionManualViewController : HUItemTableOBWelcomeController <HUConfigurationViewController> {
    <HUConfigurationViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed:(id)arg1;
- (void)_continuePressed:(id)arg1;
- (void)_disablePressed:(id)arg1;
- (id)delegate;
- (id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end