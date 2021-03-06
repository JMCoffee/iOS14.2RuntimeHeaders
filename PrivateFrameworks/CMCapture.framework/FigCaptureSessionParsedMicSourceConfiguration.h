/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject {
    FigCaptureSourceConfiguration * _cameraConfigurationForStereoAudioCapture;
    NSArray * _micConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _movieFileVideoConnectionConfigurationForStereoAudioCapture;
}

@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (nonatomic, readonly) NSArray *micConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfigurationForStereoAudioCapture;

- (id)cameraConfigurationForStereoAudioCapture;
- (void)dealloc;
- (id)initWithMicConnectionConfigurations:(id)arg1 cameraConfigurationForStereoAudioCapture:(id)arg2 movieFileVideoConnectionConfigurationForStereoAudioCapture:(id)arg3;
- (id)micConnectionConfigurations;
- (id)movieFileVideoConnectionConfigurationForStereoAudioCapture;

@end
