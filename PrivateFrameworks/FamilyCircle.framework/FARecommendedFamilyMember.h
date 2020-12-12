/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding> {
    CNContact * _contact;
    NSString * _displayName;
    NSString * _handle;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *handle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_safeClasses;
- (id)contact;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecommendation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHandle:(id)arg1;

@end