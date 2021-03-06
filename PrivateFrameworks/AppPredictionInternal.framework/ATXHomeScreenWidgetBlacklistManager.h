/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXHomeScreenWidgetBlacklistManager : NSObject {
    _PASLock * _lock;
    NSString * _path;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_addItemsToBlacklist:(id)arg1;
- (id)_fetchBlacklistItemsWithError:(id*)arg1;
- (bool)_writeItemsToBlacklist:(id)arg1;
- (bool)addWidgetPersonalitiesToBlacklist:(id)arg1;
- (bool)blacklistContainsWidgetPersonality:(id)arg1;
- (id)fetchBlacklistedWidgetPersonalitiesWithError:(id*)arg1;
- (bool)filterOutExpiredItemsFromBlacklist;
- (id)init;
- (id)initWithPath:(id)arg1;

@end
