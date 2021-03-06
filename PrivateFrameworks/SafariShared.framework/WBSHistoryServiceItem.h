/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryServiceItem : WBSHistoryServiceObject {
    NSData * _dailyVisitCounts;
    bool  _shouldRecomputeDerivedVisitCountScores;
    NSString * _url;
    long long  _visitCount;
    long long  _visitCountScore;
    NSData * _weeklyVisitCounts;
}

@property (nonatomic, copy) NSData *dailyVisitCounts;
@property (nonatomic) bool shouldRecomputeDerivedVisitCountScores;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic) long long visitCount;
@property (nonatomic) long long visitCountScore;
@property (nonatomic, copy) NSData *weeklyVisitCounts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dailyVisitCounts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithSQLRow:(id)arg1;
- (void)setDailyVisitCounts:(id)arg1;
- (void)setShouldRecomputeDerivedVisitCountScores:(bool)arg1;
- (void)setVisitCount:(long long)arg1;
- (void)setVisitCountScore:(long long)arg1;
- (void)setWeeklyVisitCounts:(id)arg1;
- (bool)shouldRecomputeDerivedVisitCountScores;
- (id)url;
- (long long)visitCount;
- (long long)visitCountScore;
- (id)weeklyVisitCounts;

@end
