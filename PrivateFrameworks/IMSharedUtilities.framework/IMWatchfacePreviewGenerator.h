/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMWatchfacePreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (bool)_isAvailable;
+ (bool)decorateWatchfacePreview:(id)arg1 andWriteToURL:(id)arg2 imagePxSize:(struct CGSize { double x1; double x2; }*)arg3;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 outSize:(struct CGSize { double x1; double x2; }*)arg3 error:(id*)arg4;
+ (Class)greenfieldUtilitiesClass;
+ (bool)writesToDisk;

@end