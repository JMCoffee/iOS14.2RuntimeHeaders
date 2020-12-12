/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAVAssetFactory : NSObject <FCAVAssetFactoryType> {
    <FCAVAssetCacheType> * _assetCache;
    <FCAVAssetKeyManagerType> * _assetKeyManager;
    <FCAVAssetResourceLoaderType> * _assetResourceLoader;
    NSMapTable * _assets;
    NFUnfairLock * _assetsLock;
}

@property (nonatomic, readonly) <FCAVAssetCacheType> *assetCache;
@property (nonatomic, readonly) <FCAVAssetKeyManagerType> *assetKeyManager;
@property (nonatomic, readonly) <FCAVAssetResourceLoaderType> *assetResourceLoader;
@property (nonatomic, readonly) NSMapTable *assets;
@property (nonatomic, readonly) NFUnfairLock *assetsLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetCache;
- (id)assetKeyManager;
- (id)assetResourceLoader;
- (id)assetWithIdentifier:(id)arg1 remoteURL:(id)arg2 overrideMIMEType:(id)arg3;
- (id)assets;
- (id)assetsLock;
- (id)init;
- (id)initWithAssetCache:(id)arg1 assetKeyManager:(id)arg2 assetResourceLoader:(id)arg3;

@end