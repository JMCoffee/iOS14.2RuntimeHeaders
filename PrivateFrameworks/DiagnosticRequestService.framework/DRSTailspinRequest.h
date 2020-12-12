/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
 */

@interface DRSTailspinRequest : DRSRequest {
    bool  _includeOsLog;
    bool  _includeOsSignpost;
    NSNumber * _maxMAT;
    NSNumber * _minMAT;
    bool  _scrubbed;
}

@property (nonatomic, readonly) bool includeOsLog;
@property (nonatomic, readonly) bool includeOsSignpost;
@property (nonatomic, readonly) NSNumber *maxMAT;
@property (nonatomic, readonly) NSNumber *minMAT;
@property (nonatomic, readonly) bool scrubbed;

+ (Class)_moClass;
+ (bool)_shouldScrub;
+ (id)entityName;
+ (id)requiredSystemResourceName;

- (void).cxx_destruct;
- (void)_configureRequestMO:(id)arg1;
- (bool)_dumpTailspinToDirectory:(id)arg1;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)arg1;
- (id)_metadataDescription;
- (id)_tailspinOptions;
- (unsigned long long)expectedType;
- (bool)includeOsLog;
- (bool)includeOsSignpost;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)logType;
- (id)maxMAT;
- (id)minMAT;
- (bool)performOnReceiptWork:(id)arg1 dampeningOutcome:(unsigned long long)arg2;
- (id)requestType;
- (bool)scrubbed;

@end