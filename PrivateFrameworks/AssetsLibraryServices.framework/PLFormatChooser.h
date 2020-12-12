/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFormatChooser : NSObject {
    PLDeviceConfiguration * _deviceConfiguration;
    PLImageFormat * _fullScreenFormatForCurrentDevice;
    PLImageFormat * _indexSheetUnbakedFormat;
    PLImageFormat * _landscapeScrubberThumbnailFormat;
    PLImageFormat * _largestUncroppedNonJPEGThumbnailFormat;
    PLImageFormat * _masterThumbnailFormat;
    PLImageFormat * _portraitScrubberThumbnailFormat;
    PLImageFormat * _posterThumbnailFormat;
    NSArray * _supportedDerivativeFormats;
}

@property (nonatomic, readonly) PLImageFormat *fullScreenFormatForCurrentDevice;
@property (nonatomic, readonly) PLImageFormat *indexSheetUnbakedFormat;
@property (nonatomic, readonly) PLImageFormat *landscapeScrubberThumbnailFormat;
@property (nonatomic, readonly) PLImageFormat *largestUncroppedNonJPEGThumbnailFormat;
@property (nonatomic, readonly) PLImageFormat *masterThumbnailFormat;
@property (nonatomic, readonly) PLImageFormat *portraitScrubberThumbnailFormat;
@property (nonatomic, readonly) NSArray *supportedDerivativeFormats;

+ (struct CGSize { double x1; double x2; })_desiredImageSizeForRequestedViewSizeInPixels:(struct CGSize { double x1; double x2; })arg1 isAspectFill:(bool)arg2 srcAspectRatio:(double)arg3;
+ (id)_suppportedFullSizeFormatIDs;
+ (id)defaultFormatChooser;

- (void).cxx_destruct;
- (id)_bestFormatWithSize:(struct CGSize { double x1; double x2; })arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 hasAdjustmentsHandler:(id /* block */)arg6 desiredImagePixelSize:(struct CGSize { double x1; double x2; }*)arg7;
- (id)_fastestDegradedFormatFallingBackFromFormat:(id)arg1;
- (id)_nextLargestAcceptableFormatForFormat:(id)arg1;
- (id)_standardDegradedFormatFallingBackFromFormat:(id)arg1;
- (void)chooseFormatsForSize:(struct CGSize { double x1; double x2; })arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 degradedFormatPolicy:(long long)arg6 hasAdjustmentsHandler:(id /* block */)arg7 desiredImagePixelSize:(struct CGSize { double x1; double x2; }*)arg8 bestFormat:(id*)arg9 degradedFormat:(id*)arg10;
- (id)derivativeFormatThatFitsSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 demoteFactor:(double)arg3 srcAspectRatio:(double)arg4 desiredImagePixelSize:(struct CGSize { double x1; double x2; }*)arg5;
- (id)fullScreenFormatForCurrentDevice;
- (id)indexSheetUnbakedFormat;
- (id)initWithDeviceConfiguration:(id)arg1;
- (id)landscapeScrubberThumbnailFormat;
- (id)largestUncroppedNonJPEGThumbnailFormat;
- (id)masterThumbnailFormat;
- (id)portraitScrubberThumbnailFormat;
- (struct CGSize { double x1; double x2; })posterThumbnailSize;
- (id)supportedDerivativeFormats;

@end