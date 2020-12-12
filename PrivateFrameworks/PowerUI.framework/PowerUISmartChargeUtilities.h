/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUISmartChargeUtilities : NSObject

+ (double)areaOverEightyWithStore:(id)arg1 withContext:(id)arg2 withBatteryLevelDurations:(double*)arg3;
+ (double)batteryLevelAtDate:(id)arg1 withCurrentBatteryLevel:(double)arg2 withKnowledgeStore:(id)arg3 withContextStore:(id)arg4;
+ (void)batteryLevelsWithStore:(id)arg1 withContext:(id)arg2 withBatteryLevelDurations:(double*)arg3;
+ (id)batteryProperties;
+ (id)concatenateContinuousEventsOfSameState:(id)arg1 sortedAscending:(bool)arg2;
+ (id)concatenateEventsPrivate:(id)arg1;
+ (long long)currentBatteryLevelWithContext:(id)arg1;
+ (id)dateForPreferenceKey:(id)arg1 inDomain:(id)arg2;
+ (unsigned long long)decileClassificationWithStore:(id)arg1 withTopBinCutOff:(float*)arg2 withContext:(id)arg3;
+ (bool)deviceConnectedToWirelessChargerWithContext:(id)arg1;
+ (bool)deviceHasEnoughPluggedInTimeWithMinimumDays:(double)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3;
+ (bool)deviceWasActiveWithinSeconds:(double)arg1 withContext:(id)arg2 withStore:(id)arg3;
+ (bool)deviceWasConnectedToChargerWithinSeconds:(double)arg1 withContext:(id)arg2;
+ (id)eventsAdjustedForTimeZoneOffsets:(id)arg1;
+ (id)getCurrentBootSessionUUID;
+ (id)getEngagementMetricsForDevice:(id)arg1 withKnowledgeStore:(id)arg2;
+ (id)getEngagementMetricsWithDefaultKnowledgeStore;
+ (id)getEngagementMetricsWithDefaultKnowledgeStoreForDevice:(id)arg1;
+ (id)getEngagementMetricsWithKnowledgeStore:(id)arg1;
+ (id)historicalChargeDurationsFromLevel:(int)arg1 toLevel:(int)arg2 filteredByMinimumPluginDuration:(double)arg3 withStore:(id)arg4;
+ (id)historicalEngagementsWithStore:(id)arg1 sortedAscending:(bool)arg2;
+ (id)historicalTopOffDurationsWithStore:(id)arg1;
+ (bool)isDesktopDeviceWithDurations:(double*)arg1 withAOEThreshold:(double)arg2 withStore:(id)arg3 withContext:(id)arg4;
+ (bool)isInternalBuild;
+ (bool)isOBCSupported;
+ (bool)isPluggedInWithContext:(id)arg1;
+ (bool)isiPad;
+ (bool)isiPhone;
+ (bool)isiPod;
+ (id)lastPluggedInDateWithContext:(id)arg1 withStore:(id)arg2;
+ (id)log;
+ (id)numberForPreferenceKey:(id)arg1 inDomain:(id)arg2;
+ (double)percentageOfBatteryDurations:(double*)arg1 aboveBatteryLevel:(double)arg2;
+ (id)percentageOfTimeForBatteryLevels:(double*)arg1 withLog:(id)arg2;
+ (id)pluginEvents:(id)arg1 withMinimumDuration:(double)arg2;
+ (id)pluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 withStore:(id)arg3;
+ (id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2 goingDaysBack:(int)arg3;
+ (id)readDictForPreferenceKey:(id)arg1 inDomain:(id)arg2;
+ (id)readStringForPreferenceKey:(id)arg1 inDomain:(id)arg2;
+ (void)recordEngagementEventAt:(id)arg1 withEngagedMinutes:(long long)arg2 withEligibleDurationMins:(long long)arg3 wasUndercharged:(bool)arg4 forDevice:(id)arg5 withKnowledgeStore:(id)arg6;
+ (void)recordEngagementEventAt:(id)arg1 withEngagedMinutes:(long long)arg2 withEligibleDurationMins:(long long)arg3 wasUndercharged:(bool)arg4 withKnowledgeStore:(id)arg5;
+ (id)roundedDateFromDate:(id)arg1;
+ (void)setDate:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3;
+ (void)setDict:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3;
+ (void)setNumber:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3;
+ (void)setString:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3;
+ (double)totalPluginDurationAfter:(id)arg1 withMinimumDuration:(double)arg2 withPluginEvents:(id)arg3;

@end