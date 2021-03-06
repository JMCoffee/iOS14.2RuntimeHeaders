/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineEventHandler, HDSPSleepModeStateMachineInfoProvider> {
    HDSPSleepModeBedtimeState * _bedtimeState;
    HDSPSleepModeManualBedtimeState * _manualBedtimeState;
    HDSPSleepModeManualOffState * _manualOffState;
    HDSPSleepModeOffState * _offState;
    HDSPSleepModeWindDownState * _windDownState;
}

@property (nonatomic, readonly) HDSPSleepModeBedtimeState *bedtimeState;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPSleepModeStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPSleepModeStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isInDemoMode;
@property (nonatomic, readonly) HDSPSleepModeManualBedtimeState *manualBedtimeState;
@property (nonatomic, readonly) HDSPSleepModeManualOffState *manualOffState;
@property (nonatomic, readonly) HDSPSleepModeOffState *offState;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPSleepModeWindDownState *windDownState;

- (void).cxx_destruct;
- (id)bedtimeState;
- (id)currentDate;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isInDemoMode;
- (id)manualBedtimeState;
- (id)manualOffState;
- (id)offState;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (id)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1;
- (id)stateMachineLog;
- (void)userDisengagedCurrentMode;
- (void)userEngagedBedtimeMode;
- (id)windDownState;

@end
