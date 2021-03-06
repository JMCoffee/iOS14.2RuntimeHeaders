/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAbsintheSession : NSObject {
    NSString * _servKey;
    struct PSCSessionInternal_ { } * _sessionRef;
}

@property (nonatomic, retain) NSString *servKey;
@property (nonatomic) struct PSCSessionInternal_ { }*sessionRef;

+ (id)defaultSession;

- (void).cxx_destruct;
- (bool)_prepareContextWithBag:(id)arg1 error:(id*)arg2;
- (bool)clearSession;
- (id)init;
- (id)servKey;
- (struct PSCSessionInternal_ { }*)sessionRef;
- (void)setServKey:(id)arg1;
- (void)setSessionRef:(struct PSCSessionInternal_ { }*)arg1;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3;
- (bool)verifyData:(id)arg1 bag:(id)arg2 error:(id*)arg3;

@end
