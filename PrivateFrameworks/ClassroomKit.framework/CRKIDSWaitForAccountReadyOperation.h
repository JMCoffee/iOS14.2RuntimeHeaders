/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIDSWaitForAccountReadyOperation : CATOperation {
    <CRKIDSLocalPrimitives> * _IDSLocalPrimitives;
    <CRKIDSListener> * _accountActiveListener;
    <CRKIDSListener> * _accountAdditionListener;
    NSString * _sourceAppleID;
}

@property (nonatomic, readonly) <CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (nonatomic, retain) <CRKIDSListener> *accountActiveListener;
@property (nonatomic, retain) <CRKIDSListener> *accountAdditionListener;
@property (nonatomic, readonly, copy) NSString *sourceAppleID;

- (void).cxx_destruct;
- (id)IDSLocalPrimitives;
- (id)accountActiveListener;
- (id)accountAdditionListener;
- (void)accountDidBecomeActive:(id)arg1;
- (void)accountDidBecomeKnownToService:(id)arg1;
- (void)cancel;
- (id)initWithIDSLocalPrimitives:(id)arg1 sourceAppleID:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)setAccountActiveListener:(id)arg1;
- (void)setAccountAdditionListener:(id)arg1;
- (id)sourceAppleID;

@end
