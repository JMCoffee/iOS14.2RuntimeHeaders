/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

@interface SUCoreProgress : NSObject <NSSecureCoding> {
    double  _estimatedTimeRemaining;
    bool  _isStalled;
    NSString * _phase;
    float  _portionComplete;
    long long  _totalExpectedBytes;
    long long  _totalWrittenBytes;
}

@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) bool isStalled;
@property (nonatomic, retain) NSString *phase;
@property (nonatomic) float portionComplete;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) long long totalWrittenBytes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhase:(id)arg1 isStalled:(bool)arg2 portionComplete:(float)arg3 remaining:(double)arg4;
- (id)initWithPhase:(id)arg1 isStalled:(bool)arg2 portionComplete:(float)arg3 totalWrittenBytes:(long long)arg4 totalExpectedBytes:(long long)arg5 remaining:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isStalled;
- (id)phase;
- (float)portionComplete;
- (bool)sameProgress:(id)arg1 isStalled:(bool)arg2 portion:(float)arg3 remaining:(double)arg4;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setPhase:(id)arg1;
- (void)setPortionComplete:(float)arg1;
- (void)setTotalExpectedBytes:(long long)arg1;
- (void)setTotalWrittenBytes:(long long)arg1;
- (id)summary;
- (long long)totalExpectedBytes;
- (long long)totalWrittenBytes;

@end