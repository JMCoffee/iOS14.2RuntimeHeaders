/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding> {
    <WFPropertyListObject> * _serializedParameterState;
}

@property (nonatomic, readonly) <WFPropertyListObject> *serializedParameterState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedParameterState:(id)arg1 cancelled:(bool)arg2;
- (id)serializedParameterState;

@end
