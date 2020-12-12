/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOfflineArticleFetchOperation : FCMultiStepFetchOperation {
    NSString * _articleID;
    id  _audioFetchedObject;
    id  _contentFetchedObject;
    <FCContentContext> * _context;
    <FCFlintHelper> * _flintHelper;
    FCHeadline * _headline;
    id  _thumbnailFetchedObject;
}

@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, retain) id audioFetchedObject;
@property (nonatomic, retain) id contentFetchedObject;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) <FCFlintHelper> *flintHelper;
@property (nonatomic, retain) FCHeadline *headline;
@property (nonatomic, retain) id thumbnailFetchedObject;

- (void).cxx_destruct;
- (id)articleID;
- (id)audioFetchedObject;
- (id)completeFetchOperation;
- (id)contentFetchedObject;
- (id)context;
- (id)fetchContentWithCompletion:(id /* block */)arg1;
- (id)fetchHeadlineWithCompletion:(id /* block */)arg1;
- (id)fetchNarrativeTrackWithCompletion:(id /* block */)arg1;
- (id)fetchThumbnailWithCompletion:(id /* block */)arg1;
- (id)flintHelper;
- (id)headline;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3;
- (void)setArticleID:(id)arg1;
- (void)setAudioFetchedObject:(id)arg1;
- (void)setContentFetchedObject:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFlintHelper:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setThumbnailFetchedObject:(id)arg1;
- (id)thumbnailFetchedObject;

@end