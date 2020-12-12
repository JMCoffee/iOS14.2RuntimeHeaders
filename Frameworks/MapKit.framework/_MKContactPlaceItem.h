/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKContactPlaceItem : NSObject <_MKPlaceItem> {
    CNContact * _contact;
    MKMapItem * _mapItem;
    unsigned long long  _options;
}

@property (nonatomic, readonly) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) bool hasContactOnly;
@property (nonatomic, readonly) bool isContactPersisted;
@property (nonatomic, readonly) bool isIntermediateMapItem;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long options;

+ (id)placeItemWithMapItem:(id)arg1 contact:(id)arg2 options:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)calendarItem;
- (id)contact;
- (bool)hasContactOnly;
- (bool)isContactPersisted;
- (bool)isIntermediateMapItem;
- (id)mapItem;
- (id)name;
- (unsigned long long)options;

@end