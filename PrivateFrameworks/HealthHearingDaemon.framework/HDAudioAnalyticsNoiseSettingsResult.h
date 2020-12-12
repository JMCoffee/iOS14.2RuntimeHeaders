/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
 */

@interface HDAudioAnalyticsNoiseSettingsResult : NSObject {
    bool  _hasEligibleWatchPaired;
    bool  _hasNoiseEnabled;
    bool  _hasNoiseNotificationsEnabled;
}

@property (nonatomic) bool hasEligibleWatchPaired;
@property (nonatomic) bool hasNoiseEnabled;
@property (nonatomic) bool hasNoiseNotificationsEnabled;

- (bool)hasEligibleWatchPaired;
- (bool)hasNoiseEnabled;
- (bool)hasNoiseNotificationsEnabled;
- (id)initWithEligibleWatchPaired:(bool)arg1 hasNoiseEnabled:(bool)arg2 hasNoiseNotificationsEnabled:(bool)arg3;
- (void)setHasEligibleWatchPaired:(bool)arg1;
- (void)setHasNoiseEnabled:(bool)arg1;
- (void)setHasNoiseNotificationsEnabled:(bool)arg1;

@end