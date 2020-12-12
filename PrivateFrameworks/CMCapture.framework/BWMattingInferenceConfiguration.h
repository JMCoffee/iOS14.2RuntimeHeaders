/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWMattingInferenceConfiguration : BWInferenceConfiguration {
    float  _mainImageDownscalingFactor;
    <MTLCommandQueue> * _metalCommandQueue;
    bool  _refinedDepthDeliveryEnabled;
}

@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic) bool refinedDepthDeliveryEnabled;

- (float)mainImageDownscalingFactor;
- (id)metalCommandQueue;
- (bool)refinedDepthDeliveryEnabled;
- (void)setMainImageDownscalingFactor:(float)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setRefinedDepthDeliveryEnabled:(bool)arg1;

@end