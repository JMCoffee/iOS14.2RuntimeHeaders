/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDJournalChapterEnumerator : NSObject {
    NSURL * _URL;
    NSError * _cachedError;
    long long  _currentIndex;
    bool  _hasLoadedPersistedJournalNames;
    long long  _maxAllowedOpenJournalChapterCount;
    NSMutableArray * _openJournalChapters;
    NSMutableArray * _remainingJournalChapters;
    long long  _totalJournalChapterCount;
    <HDJournalChapterEnumeratorTestsDelegate> * _unitTestDelegate;
}

@property (nonatomic, readonly) unsigned long long currentJournalChapterIndex;
@property (nonatomic, readonly) bool hasJournalChapters;
@property (nonatomic) long long maxAllowedOpenJournalChapterCount;
@property (getter=hasMoreJournalChapters, nonatomic, readonly) bool moreJournalChapters;
@property (nonatomic, retain) NSMutableArray *openJournalChapters;
@property (nonatomic, retain) NSMutableArray *remainingJournalChapters;
@property (nonatomic, readonly) unsigned long long totalJournalChapterCount;
@property (getter=_totalOpenJournalChapterCount, nonatomic, readonly) unsigned long long totalOpenJournalChapterCount;
@property (nonatomic) <HDJournalChapterEnumeratorTestsDelegate> *unitTestDelegate;

+ (id)_journalChaptersForURL:(id)arg1 sorted:(bool)arg2 error:(id*)arg3;
+ (id)_lightweightDirectoryEnumeratorForURL:(id)arg1;
+ (long long)journalChapterCountForURL:(id)arg1;
+ (id)journalChaptersForURL:(id)arg1 error:(id*)arg2;
+ (id)nextJournalChapterNameForURL:(id)arg1;

- (void).cxx_destruct;
- (id)_openJournalChapters:(id)arg1 error:(id*)arg2;
- (unsigned long long)_totalOpenJournalChapterCount;
- (bool)_updateRollingBufferIfRequiredWithError:(id*)arg1;
- (void)closeJournalChapters;
- (unsigned long long)currentJournalChapterIndex;
- (void)dealloc;
- (bool)hasJournalChapters;
- (bool)hasMoreJournalChapters;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)loadSortedJournalChaptersWithError:(id*)arg1;
- (long long)maxAllowedOpenJournalChapterCount;
- (id)nextOpenJournalChapterError:(id*)arg1;
- (id)openJournalChapters;
- (id)remainingJournalChapters;
- (void)setMaxAllowedOpenJournalChapterCount:(long long)arg1;
- (void)setOpenJournalChapters:(id)arg1;
- (void)setRemainingJournalChapters:(id)arg1;
- (void)setUnitTestDelegate:(id)arg1;
- (unsigned long long)totalJournalChapterCount;
- (id)unitTestDelegate;

@end