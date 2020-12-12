/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureDeviceInputInternal : NSObject {
    bool  builtInMicrophoneStereoAudioCaptureEnabled;
    bool  cameraCalibrationDataDeliveryEnabled;
    AVCaptureDevice * device;
    <AVCallbackCancellation> * deviceOpenCallbackInvoker;
    float  maxGainOverride;
    NSArray * multiCamPorts;
    float  portraitLightingEffectStrength;
    NSArray * ports;
    bool  ready;
    float  simulatedAperture;
    bool  unifiedAutoExposureDefaultsEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  videoMinFrameDurationOverride;
    bool  visionDataDeliveryEnabled;
    AVWeakReference * weakReference;
}

- (void)dealloc;

@end