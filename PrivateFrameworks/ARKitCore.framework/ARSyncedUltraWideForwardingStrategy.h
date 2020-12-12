/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARSyncedUltraWideForwardingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    ARCircularArray * _mostRecentTimestamps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)shouldProcessData:(id)arg1;
- (bool)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end