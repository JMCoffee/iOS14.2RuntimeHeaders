/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADPearlColorPipeline : NSObject {
    ADEspressoPearlColorInferenceDescriptor * _inferenceDesc;
    ADNetworkProvider * _networkProvider;
    ADPearlColorPipelineParameters * _pipelineParameters;
}

@property (nonatomic, copy) ADPearlColorPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)arg1;
- (long long)filterDisparity:(struct __CVBuffer { }*)arg1;
- (id)inferenceDescriptor;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)pipelineParameters;
- (long long)postProcessDisparity:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2;
- (void)setPipelineParameters:(id)arg1;

@end
