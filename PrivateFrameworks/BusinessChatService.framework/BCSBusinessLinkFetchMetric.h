/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBusinessLinkFetchMetric : BCSMetric <BCSBusinessLinkChoppingMetric, BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol> {
    bool  choppingEnabled;
    bool  errorEncountered;
    long long  successfulChop;
    BCSTimingMeasurement * timingMeasurement;
}

@property (getter=isChoppingEnabled, nonatomic) bool choppingEnabled;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool errorEncountered;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long successfulChop;
@property (readonly) Class superclass;
@property (nonatomic, retain) BCSTimingMeasurement *timingMeasurement;

+ (id)metricWithPostProcessingMetricHandlers:(id)arg1;

- (void).cxx_destruct;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsPayload;
- (bool)errorEncountered;
- (bool)isChoppingEnabled;
- (void)setChoppingEnabled:(bool)arg1;
- (void)setErrorEncountered:(bool)arg1;
- (void)setSuccessfulChop:(long long)arg1;
- (void)setTimingMeasurement:(id)arg1;
- (long long)successfulChop;
- (id)timingMeasurement;

@end
