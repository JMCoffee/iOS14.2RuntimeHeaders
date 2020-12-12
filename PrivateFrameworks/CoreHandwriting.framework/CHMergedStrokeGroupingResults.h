/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult {
    NSDictionary * _groupingResultsByStrategyIdentifier;
}

@property (nonatomic, readonly, retain) NSDictionary *groupingResultsByStrategyIdentifier;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)groupingResultsByStrategyIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4;

@end