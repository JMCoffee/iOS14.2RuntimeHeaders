/* Generated by RuntimeBrowser.
 */

@protocol HMICameraVideoFrameSelectorDelegate <NSObject>

@optional

- (void)selector:(HMICameraVideoFrameSelector *)arg1 didDetectMotion:(NSArray *)arg2 atSessionPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 frameDimensions:(struct CGSize { double x1; double x2; })arg4;
- (void)selector:(HMICameraVideoFrameSelector *)arg1 maySelectFrame:(HMICameraVideoFrame *)arg2;

@end
