/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating> {
    AFMyriadAdvertisementContext * _baseModel;
    NSData * _contextData;
    double  _contextFetchDelay;
    unsigned long long  _generation;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasGeneration : 1; 
        unsigned int hasContextData : 1; 
        unsigned int hasContextFetchDelay : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setContextFetchDelay:(double)arg1;
- (void)setGeneration:(unsigned long long)arg1;

@end