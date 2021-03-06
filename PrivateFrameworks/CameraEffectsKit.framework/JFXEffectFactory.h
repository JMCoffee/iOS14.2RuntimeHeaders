/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JFXEffectFactory : NSObject

+ (id)delegate;
+ (void)setDelegate:(id)arg1;
+ (id)sharedInstance;

- (id)createEffectContentDataSourceForEffectID:(id)arg1 ofType:(int)arg2;
- (id)createEffectForType:(int)arg1 fromID:(id)arg2 withProperties:(id)arg3;
- (void)effectCategoriesForType:(int)arg1 completion:(id /* block */)arg2;
- (void)effectIDsForType:(int)arg1 completion:(id /* block */)arg2;
- (void)effectsForType:(int)arg1 completion:(id /* block */)arg2;
- (id)effectsForType:(int)arg1 fromCategory:(id)arg2;
- (bool)isStyleTransferEffectID:(id)arg1;
- (id)styleTransferEffectIDs;

@end
