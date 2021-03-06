/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDatabaseVacuum : NSObject {
    id /* block */  _postVacuumHandler;
    id /* block */  _preVacuumHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _timer;
}

@property (nonatomic, copy) id /* block */ postVacuumHandler;
@property (nonatomic, copy) id /* block */ preVacuumHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSTimer *timer;

+ (id)activeVacuum;
+ (id)activeVacuumQueue;
+ (id)lastVacuumDate;
+ (void)setActiveVacuum:(id)arg1;
+ (void)setLastVacuumDate:(id)arg1;
+ (void)startDatabaseVacuumPolicy;
+ (void)startDatabaseVacuumPolicyWithPreVacuumHandler:(id /* block */)arg1 postVacuumHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (id /* block */)postVacuumHandler;
- (id /* block */)preVacuumHandler;
- (id)queue;
- (void)setPostVacuumHandler:(id /* block */)arg1;
- (void)setPreVacuumHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)startDatabaseVacuumPolicy;
- (void)stopDatabaseVacuumPolicy;
- (id)timer;
- (void)timerFired:(id)arg1;
- (void)vacuum;
- (void)vacuumHTMLDatabase;

@end
