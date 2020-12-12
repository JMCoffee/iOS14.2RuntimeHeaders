/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAnalyticsPipelineReportOperation : NSOperation {
    id /* block */  _completionBlock;
    NSObject<OS_dispatch_queue> * _completionQueue;
    bool  _executing;
    bool  _finished;
    GEOAnalyticsPipelineRemoteProxy * _remoteProxy;
    NSObject<OS_dispatch_queue> * _runQueue;
    id  _transaction;
}

- (void).cxx_destruct;
- (void)_completeOperation;
- (id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(id /* block */)arg4;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end