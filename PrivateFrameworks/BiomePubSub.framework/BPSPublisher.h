/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSPublisher : NSObject <BMBookmarkablePublisher, BPSPublisher>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub

- (id)collect;
- (id)combineLatestwithOther:(id)arg1;
- (id)filterWithIsIncluded:(id /* block */)arg1;
- (id)flatMapWithTransform:(id /* block */)arg1;
- (id)last;
- (id)mapWithTransform:(id /* block */)arg1;
- (id)mergeWithOther:(id)arg1;
- (id)mergeWithOthers:(id)arg1;
- (id)orderedMergeWithOther:(id)arg1 comparator:(id /* block */)arg2;
- (id)orderedMergeWithOthers:(id)arg1 comparator:(id /* block */)arg2;
- (id)reduce:(id)arg1;
- (id)reduceWithInitial:(id)arg1 nextPartialResult:(id /* block */)arg2;
- (id)removeDuplicatesWithIsDuplicate:(id /* block */)arg1;
- (id)scanWithInitial:(id)arg1 nextPartialResult:(id /* block */)arg2;
- (id)sequenceWithSequence:(id)arg1;
- (id)sinkWithCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)sinkWithCompletion:(id /* block */)arg1 shouldContinue:(id /* block */)arg2;
- (void)subscribe:(id)arg1;
- (id)zipWithOther:(id)arg1;
- (id)zipWithOthers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2;
- (id)sinkWithBookmark:(id)arg1 completion:(id /* block */)arg2 receiveInput:(id /* block */)arg3;
- (id)withBookmark:(id)arg1;

@end
