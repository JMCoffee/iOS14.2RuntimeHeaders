/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageSettings : NSObject {
    BWStillImageCaptureSettings * _captureSettings;
    BWStillImageProcessingSettings * _processingSettings;
    FigCaptureStillImageSettings * _requestedSettings;
}

@property (nonatomic, readonly) BWStillImageCaptureSettings *captureSettings;
@property (nonatomic, readonly) BWStillImageProcessingSettings *processingSettings;
@property (nonatomic, readonly) FigCaptureStillImageSettings *requestedSettings;

- (id)captureSettings;
- (void)dealloc;
- (id)initWithRequestedSettings:(id)arg1 captureSettings:(id)arg2 processingSettings:(id)arg3;
- (id)processingSettings;
- (id)requestedSettings;

@end