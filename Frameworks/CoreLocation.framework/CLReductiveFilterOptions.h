/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLReductiveFilterOptions : NSObject {
    unsigned long long  _beaconType;
    double  _transmitPower;
}

@property (nonatomic, readonly) unsigned long long beaconType;
@property (nonatomic, readonly) double transmitPower;

- (unsigned long long)beaconType;
- (id)init;
- (id)initWithBeaconType:(unsigned long long)arg1;
- (id)initWithBeaconType:(unsigned long long)arg1 transmitPower:(double)arg2;
- (double)transmitPower;

@end
