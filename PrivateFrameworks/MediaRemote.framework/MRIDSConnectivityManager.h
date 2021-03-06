/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRIDSConnectivityManager : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _destinationMessageHandlers;
    IDSDevice * _device;
    MRDeviceInfo * _deviceInfo;
    NSObject<OS_dispatch_queue> * _idsQueue;
    bool  _initialStateLoaded;
    NSMutableDictionary * _messageHandlers;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IDSDevice *device;
@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnected;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_maybeDeviceConnectionStatusChanged;
- (id)device;
- (id)deviceDebugName;
- (id)deviceInfo;
- (void)handleResetConnectionRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)init;
- (bool)isConnected;
- (id)name;
- (void)removeMessageHandlerForType:(long long)arg1;
- (void)removeMessageHandlerForType:(long long)arg1 destination:(id)arg2;
- (void)resetConnection;
- (bool)sendMessasge:(id)arg1 type:(long long)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)setMessageHandler:(id /* block */)arg1 forType:(long long)arg2;
- (void)setMessageHandler:(id /* block */)arg1 forType:(long long)arg2 destination:(id)arg3;

@end
