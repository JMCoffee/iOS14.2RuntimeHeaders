/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPublisherResult : PBCodable <NSCopying> {
    NSMutableArray * _components;
    struct { 
        unsigned int has_status : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_components : 1; 
        unsigned int read_publisherId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _publisherId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *components;
@property (nonatomic, readonly) bool hasPublisherId;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) GEOPDMapsIdentifier *publisherId;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)componentType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)clearComponents;
- (void)clearUnknownFields:(bool)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)components;
- (unsigned long long)componentsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPublisherId;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)publisherId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setPublisherId:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end