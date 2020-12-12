/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBExternalDisplayManager : NSObject <FBSDisplayObserving> {
    NSMutableSet * _disconnectingDisplays;
    FBSDisplayMonitor * _displayMonitor;
    NSMutableDictionary * _displayToControllerMap;
    FBSDisplayLayoutPublisher * _layoutPublisher;
    SBMainDisplaySceneManager * _mainDisplaySceneManager;
    SBMainWorkspace * _mainWorkspace;
    <SBFAuthenticationStatusProvider> * _userAuthenticationProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)init;
- (id)initWithDisplayMonitor:(id)arg1 mainWorkspace:(id)arg2 userAuthenticationProvider:(id)arg3 mainSceneManager:(id)arg4;

@end