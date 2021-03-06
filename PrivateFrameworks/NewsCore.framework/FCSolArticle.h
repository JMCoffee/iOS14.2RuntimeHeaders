/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolArticle : NSObject <NSCopying, NSSecureCoding> {
    bool  _accessible;
    bool  _evergreen;
    unsigned long long  _groupingReason;
    NSString * _identifier;
    NSString * _publisherID;
    double  _score;
    NSSet * _whitelistedTopicIDs;
}

@property (nonatomic) bool accessible;
@property (nonatomic) bool evergreen;
@property (nonatomic) unsigned long long groupingReason;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *publisherID;
@property (nonatomic) double score;
@property (nonatomic, retain) NSSet *whitelistedTopicIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessible;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evergreen;
- (unsigned long long)groupingReason;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 accessible:(bool)arg3 evergreen:(bool)arg4 whitelistedTopicIDs:(id)arg5;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(bool)arg4 evergreen:(bool)arg5;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(bool)arg4 evergreen:(bool)arg5 whitelistedTopicIDs:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)publisherID;
- (double)score;
- (void)setAccessible:(bool)arg1;
- (void)setEvergreen:(bool)arg1;
- (void)setGroupingReason:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPublisherID:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setWhitelistedTopicIDs:(id)arg1;
- (id)whitelistedTopicIDs;

@end
