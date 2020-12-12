/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSceneClassification : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic) double confidence;
@property (nonatomic) long long packedBoundingBoxRect;
@property (nonatomic) unsigned int sceneIdentifier;

+ (id)PLJunkSceneClassificationIDForLabel:(id)arg1;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 completion:(id /* block */)arg3;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 asset:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4 packedBoundingBoxRect:(long long)arg5;

- (id)debugLogDescription;

@end