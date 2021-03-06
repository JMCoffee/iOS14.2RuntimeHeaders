/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface FTMutableLanguageDetectionStreamingRequest : FTLanguageDetectionStreamingRequest

@property (nonatomic, copy) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, copy) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, copy) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property (nonatomic) long long content_type;

- (id)contentAsFTAudioPacket;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTStartLanguageDetectionRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsFTAudioPacket:(id)arg1;
- (void)setContentAsFTFinishAudio:(id)arg1;
- (void)setContentAsFTStartLanguageDetectionRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
