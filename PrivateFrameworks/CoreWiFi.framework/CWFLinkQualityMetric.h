/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {
    NSData * _linkQualityMetricData;
    NSDate * _updatedAt;
}

@property (nonatomic, readonly) float CCA;
@property (nonatomic, readonly) long long RSSI;
@property (nonatomic, copy) NSData *linkQualityMetricData;
@property (nonatomic, readonly) long long noise;
@property (nonatomic, readonly) double rxRate;
@property (nonatomic, readonly) double txRate;
@property (nonatomic, copy) NSDate *updatedAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)CCA;
- (long long)RSSI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLinkQualityMetric:(id)arg1;
- (id)linkQualityMetricData;
- (long long)noise;
- (double)rxRate;
- (void)setLinkQualityMetricData:(id)arg1;
- (void)setUpdatedAt:(id)arg1;
- (double)txRate;
- (id)updatedAt;

@end
