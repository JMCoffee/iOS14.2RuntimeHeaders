/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHLocalizedIndexedCollation : UILocalizedIndexedCollation {
    NSMutableOrderedSet * _appendedSections;
    NSMutableArray * _cachedSectionIndexTitles;
    NSMutableArray * _cachedSectionTitles;
    UILocalizedIndexedCollation * _referenceIndexedCollation;
}

@property (nonatomic, readonly) NSArray *appendedSectionTitles;

+ (id)defaultCollation;
+ (id)dimSumCollation;

- (void).cxx_destruct;
- (bool)addSection:(id)arg1;
- (id)appendedSectionTitles;
- (bool)containsSection:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)removeSection:(id)arg1;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;

@end