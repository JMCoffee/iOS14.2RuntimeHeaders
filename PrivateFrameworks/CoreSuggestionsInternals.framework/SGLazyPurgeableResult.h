/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGLazyPurgeableResult : SGLazyResult {
    double  _idleTimeout;
    NSObject<OS_dispatch_source> * _idleTimeoutSource;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    _Atomic bool  _nil;
    id  _weakData;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1 idleTimeout:(double)arg2;
- (id)result;
- (id)resultIfAvailable;

@end