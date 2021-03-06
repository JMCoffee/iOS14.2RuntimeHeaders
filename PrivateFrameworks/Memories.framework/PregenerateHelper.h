/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PregenerateHelper : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _pipelines;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSMutableArray *pipelines;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)pipelines;
- (void)runPregenerateWithCollection:(id)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setPipelines:(id)arg1;

@end
