/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceCollectionItem : NSObject {
    GEOPDPlaceCollectionItem * _placeCollectionItem;
}

@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) GEOMapItemIdentifier *itemIdentifier;
@property (nonatomic, readonly) NSArray *photos;
@property (nonatomic, readonly) NSURL *reviewUrl;
@property (nonatomic, readonly) bool supportsPhotoFallback;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPlaceCollectionItem:(id)arg1;
- (id)itemDescription;
- (id)itemIdentifier;
- (id)photos;
- (id)reviewUrl;
- (bool)supportsPhotoFallback;

@end