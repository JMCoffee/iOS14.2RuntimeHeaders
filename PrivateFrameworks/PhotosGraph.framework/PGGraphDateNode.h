/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphDateNode : PGGraphOptimizedNode {
    NSString * _name;
}

@property (readonly) long long day;
@property (readonly) PGGraphCalendarUnitNode *dayNode;
@property (readonly) long long month;
@property (readonly) PGGraphCalendarUnitNode *monthNode;
@property (readonly) NSString *name;
@property (nonatomic, readonly) PGGraphSeasonNode *seasonNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property (readonly) long long year;
@property (readonly) PGGraphCalendarUnitNode *yearNode;

+ (id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3;
+ (id)filter;
+ (id)momentOfDate;
+ (id)seasonOfDate;
+ (id)yearOfDate;

- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (long long)day;
- (id)dayNode;
- (id)description;
- (unsigned short)domain;
- (void)enumerateHolidayNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)label;
- (id)lastWeekDateNodes;
- (id)localDate;
- (id)momentNodes;
- (long long)month;
- (id)monthNode;
- (id)name;
- (id)propertyDictionary;
- (id)sameWeekDateNodes;
- (id)seasonNode;
- (void)setLocalProperties:(id)arg1;
- (id)weekOfMonthNode;
- (id)weekOfYearNode;
- (long long)year;
- (id)yearNode;

@end