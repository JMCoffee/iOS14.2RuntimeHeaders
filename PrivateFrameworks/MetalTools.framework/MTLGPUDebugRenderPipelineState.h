/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineDescriptor * _descriptor;
    unsigned long long  _fragmentConstantOffset;
    struct KeyBufferPair { 
        struct Key { 
            struct { 
                unsigned char key[32]; 
            } hash; 
            NSData *data; 
        } key; 
        <MTLBuffer> *buffer; 
    }  _globalConstants;
    MTLGPUDebugBuffer * _indirectStateBuffer;
    MTLRenderPipelineReflection * _internalReflection;
    bool  _supportsIndirectCommandBuffers;
    unsigned long long  _tileConstantOffset;
    MTLTileRenderPipelineDescriptor * _tileDescriptor;
    MTLRenderPipelineReflection * _userReflection;
    unsigned long long  _vertexConstantOffset;
}

@property (nonatomic, readonly) unsigned long long fragmentConstantOffset;
@property (nonatomic, readonly) MTLGPUDebugFunction *fragmentFunction;
@property (nonatomic, readonly) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (nonatomic, readonly) MTLGPUDebugBuffer *indirectStateBuffer;
@property (nonatomic, readonly) MTLRenderPipelineReflection *internalReflection;
@property (nonatomic, readonly) unsigned long long tileConstantOffset;
@property (nonatomic, readonly) MTLGPUDebugFunction *tileFunction;
@property (nonatomic, readonly) MTLRenderPipelineReflection *userReflection;
@property (nonatomic, readonly) unsigned long long vertexConstantOffset;
@property (nonatomic, readonly) MTLGPUDebugFunction *vertexFunction;

- (id).cxx_construct;
- (void)_initConstantsBuffer:(id)arg1 device:(id)arg2;
- (void)dealloc;
- (unsigned long long)fragmentConstantOffset;
- (id)fragmentFunction;
- (id)fragmentLibrary;
- (id)globalConstantsBuffer;
- (id)indirectStateBuffer;
- (id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5 pipelineOptions:(unsigned long long)arg6;
- (id)initWithRenderPipelineState:(id)arg1 tileDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;
- (id)internalReflection;
- (void)releaseReflection;
- (unsigned long long)tileConstantOffset;
- (id)tileFunction;
- (id)userReflection;
- (unsigned long long)vertexConstantOffset;
- (id)vertexFunction;
- (id)vertexLibrary;

@end
