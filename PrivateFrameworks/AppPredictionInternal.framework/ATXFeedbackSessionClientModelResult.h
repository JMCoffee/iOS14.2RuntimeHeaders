/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXFeedbackSessionClientModelResult : NSObject {
    ATXClientModelCacheUpdate * _cacheUpdate;
    ATXPredictionContext * _context;
    NSArray * _engagedSuggestions;
    ATXFeedbackSession * _feedbackSession;
    NSArray * _rejectedSuggestions;
    NSArray * _shownSuggestions;
}

@property (nonatomic, retain) ATXClientModelCacheUpdate *cacheUpdate;
@property (nonatomic, retain) ATXPredictionContext *context;
@property (nonatomic, retain) NSArray *engagedSuggestions;
@property (nonatomic, retain) ATXFeedbackSession *feedbackSession;
@property (nonatomic, retain) NSArray *rejectedSuggestions;
@property (nonatomic, retain) NSArray *shownSuggestions;

- (void).cxx_destruct;
- (id)cacheUpdate;
- (id)clientModelId;
- (unsigned char)consumerSubType;
- (id)context;
- (id)engagedSuggestions;
- (id)feedbackSession;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEngagedSuggestions:(id)arg1 rejectedSuggestions:(id)arg2 shownSuggestions:(id)arg3 cacheUpdate:(id)arg4 feedbackSession:(id)arg5 context:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXFeedbackSessionClientModelResult:(id)arg1;
- (id)rejectedSuggestions;
- (void)setCacheUpdate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEngagedSuggestions:(id)arg1;
- (void)setFeedbackSession:(id)arg1;
- (void)setRejectedSuggestions:(id)arg1;
- (void)setShownSuggestions:(id)arg1;
- (id)shownSuggestions;

@end