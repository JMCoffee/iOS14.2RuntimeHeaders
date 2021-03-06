/* Generated by RuntimeBrowser.
 */

@protocol SegmentStatsDelegate <NSObject>

@required

- (unsigned int)audioErasureCount;
- (double)audioErasureTotalTime;
- (double)averageJitterBufferDelay;
- (double)avgJBTargetSizeChanges;
- (unsigned short)maxAudioErasureCount;
- (unsigned short)maxJBTargetSizeChanges;
- (unsigned short)maxVideoStallCount;
- (unsigned short)minVideoFrameRate;
- (unsigned int)significantVideoStallCount;
- (double)significantVideoStallTotalTime;
- (double)timeWeightedNumberOfParticipants;

@end
