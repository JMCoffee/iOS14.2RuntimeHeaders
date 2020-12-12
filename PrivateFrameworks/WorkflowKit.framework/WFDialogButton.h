/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)cancelButton;
+ (id)defaultButtonWithTitle:(id)arg1;
+ (id)doneButton;
+ (id)okButton;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (long long)style;
- (id)title;

@end