/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSRemoteContentSession : NSObject <CSRemoteContentModalViewControllerDelegate> {
    bool  _activated;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    CSRemoteContentModalViewController * _containerViewController;
    SBSRemoteContentDefinition * _definition;
    <CSRemoteContentSessionHostDelegate> * _hostDelegate;
    <CSRemoteContentSessionPreferencesProvider> * _preferencesProvider;
    bool  _presented;
    NSString * _sessionID;
    bool  _valid;
}

@property (nonatomic, readonly) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) SBSRemoteContentDefinition *definition;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CSRemoteContentSessionHostDelegate> *hostDelegate;
@property (nonatomic) <CSRemoteContentSessionPreferencesProvider> *preferencesProvider;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_activate;
- (id)_errorWithCode:(long long)arg1;
- (bool)_invalidateForReason:(long long)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_invalidateWithError:(id)arg1;
- (void)_invalidateWithErrorCode:(long long)arg1;
- (void)_reactivate;
- (void)activate;
- (id)authenticationStatusProvider;
- (id)definition;
- (id)hostDelegate;
- (id)initWithDefinition:(id)arg1 authenticationStatusProvider:(id)arg2;
- (bool)isValid;
- (id)preferencesProvider;
- (void)remoteContentModalViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteContentModalViewController:(id)arg1 didUpdateWithPreferences:(id)arg2;
- (bool)remoteContentModalViewController:(id)arg1 requestsDismissalForType:(long long)arg2 completion:(id /* block */)arg3;
- (id)sessionID;
- (void)setHostDelegate:(id)arg1;
- (void)setPreferencesProvider:(id)arg1;

@end