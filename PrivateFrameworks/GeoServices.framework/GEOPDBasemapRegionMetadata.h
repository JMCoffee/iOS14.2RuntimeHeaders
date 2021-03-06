/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBasemapRegionMetadata : PBCodable <NSCopying> {
    NSString * _buildUnitAreaId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *buildUnitAreaId;
@property (nonatomic, readonly) bool hasBuildUnitAreaId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)buildUnitAreaId;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildUnitAreaId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildUnitAreaId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
