/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle> {
    NSMutableDictionary * _clientAttributionMap;
    STDynamicActivityAttributionListener * _dynamicAttributionListener;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, retain) NSMutableDictionary *clientAttributionMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) STDynamicActivityAttributionListener *dynamicAttributionListener;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_internalQueue_setAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;
- (id)clientAttributionMap;
- (id)currentAttributedAppForClient:(id)arg1;
- (id)currentAttributionKeyForClient:(id)arg1;
- (id)dynamicAttributionListener;
- (id)init;
- (id)internalQueue;
- (void)setClientAttributionMap:(id)arg1;
- (void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;

@end
