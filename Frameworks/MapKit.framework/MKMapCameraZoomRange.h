/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapCameraZoomRange : NSObject <NSCopying, NSSecureCoding> {
    double  _maxCenterCoordinateDistance;
    double  _minCenterCoordinateDistance;
}

@property (nonatomic, readonly) double maxCenterCoordinateDistance;
@property (nonatomic, readonly) double minCenterCoordinateDistance;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxCenterCoordinateDistance:(double)arg1;
- (id)initWithMinCenterCoordinateDistance:(double)arg1;
- (id)initWithMinCenterCoordinateDistance:(double)arg1 maxCenterCoordinateDistance:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMapCameraZoomRange:(id)arg1;
- (double)maxCenterCoordinateDistance;
- (double)minCenterCoordinateDistance;

@end
