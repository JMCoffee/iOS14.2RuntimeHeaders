/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotificationInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _alertActionLocalizationKey;
    NSString * _alertBody;
    NSString * _alertLaunchImage;
    NSArray * _alertLocalizationArgs;
    NSString * _alertLocalizationKey;
    NSString * _category;
    NSString * _collapseIDKey;
    NSArray * _desiredKeys;
    bool  _shouldBadge;
    bool  _shouldSendContentAvailable;
    bool  _shouldSendMutableContent;
    NSString * _soundName;
    NSString * _subtitle;
    NSArray * _subtitleLocalizationArgs;
    NSString * _subtitleLocalizationKey;
    NSString * _title;
    NSArray * _titleLocalizationArgs;
    NSString * _titleLocalizationKey;
}

@property (nonatomic, copy) NSString *alertActionLocalizationKey;
@property (nonatomic, copy) NSString *alertBody;
@property (nonatomic, copy) NSString *alertLaunchImage;
@property (nonatomic, copy) NSArray *alertLocalizationArgs;
@property (nonatomic, copy) NSString *alertLocalizationKey;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *collapseIDKey;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) bool shouldBadge;
@property (nonatomic) bool shouldSendContentAvailable;
@property (nonatomic) bool shouldSendMutableContent;
@property (nonatomic, copy) NSString *soundName;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *subtitleLocalizationArgs;
@property (nonatomic, copy) NSString *subtitleLocalizationKey;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleLocalizationArgs;
@property (nonatomic, copy) NSString *titleLocalizationKey;

+ (id)notificationInfo;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAlertActionLocalizationKeyNoValidate:(id)arg1;
- (void)_setAlertBodyNoValidate:(id)arg1;
- (void)_setAlertLaunchImageNoValidate:(id)arg1;
- (void)_setAlertLocalizationArgsNoValidate:(id)arg1;
- (void)_setAlertLocalizationKeyNoValidate:(id)arg1;
- (void)_setCategoryNoValidate:(id)arg1;
- (void)_setShouldBadgeNoValidate:(bool)arg1;
- (void)_setShouldSendContentAvailableNoValidate:(bool)arg1;
- (void)_setShouldSendMutableContentNoValidate:(bool)arg1;
- (void)_setSoundNameNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setSubtitleNoValidate:(id)arg1;
- (void)_setTitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setTitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setTitleNoValidate:(id)arg1;
- (id)alertActionLocalizationKey;
- (id)alertBody;
- (id)alertLaunchImage;
- (id)alertLocalizationArgs;
- (id)alertLocalizationKey;
- (id)category;
- (id)collapseIDKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAlertActionLocalizationKey:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertLocalizationArgs:(id)arg1;
- (void)setAlertLocalizationKey:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCollapseIDKey:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setShouldBadge:(bool)arg1;
- (void)setShouldSendContentAvailable:(bool)arg1;
- (void)setShouldSendMutableContent:(bool)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLocalizationArgs:(id)arg1;
- (void)setSubtitleLocalizationKey:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocalizationArgs:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (bool)shouldBadge;
- (bool)shouldSendContentAvailable;
- (bool)shouldSendMutableContent;
- (id)soundName;
- (id)subtitle;
- (id)subtitleLocalizationArgs;
- (id)subtitleLocalizationKey;
- (id)title;
- (id)titleLocalizationArgs;
- (id)titleLocalizationKey;

@end