/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSTransferFlowModel : NSObject {
    bool  _areTransferPlansReady;
    bool  _hasPendingInstallPlansQueried;
    bool  _isActivationPolicyMismatch;
    bool  _isBootstrapTriggerred;
    bool  _isProximityFlow;
    CTDisplayPlanList * _pendingInstallItems;
    bool  _showTransferredPane;
    NSMutableArray * _transferItems;
}

@property (nonatomic) bool isActivationPolicyMismatch;
@property (nonatomic, retain) CTDisplayPlanList *pendingInstallItems;
@property (nonatomic) bool showTransferredPane;
@property (nonatomic, retain) NSMutableArray *transferItems;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)arePlansAvailable:(id)arg1 transferablePlanOnSource:(bool)arg2 completion:(id /* block */)arg3;
- (void)bootstrap:(id)arg1 completion:(id /* block */)arg2;
- (void)filterTransferPlans:(id)arg1;
- (bool)isActivationPolicyMismatch;
- (id)pendingInstallItems;
- (void)requestPendingInstallPlans:(id /* block */)arg1;
- (void)requestPlans:(id)arg1 transferablePlanOnSource:(bool)arg2 completion:(id /* block */)arg3;
- (void)requestTransferPlans:(id /* block */)arg1;
- (void)setIsActivationPolicyMismatch:(bool)arg1;
- (void)setPendingInstallItems:(id)arg1;
- (void)setShowTransferredPane:(bool)arg1;
- (void)setTransferItems:(id)arg1;
- (bool)showTransferredPane;
- (id)transferItems;

@end