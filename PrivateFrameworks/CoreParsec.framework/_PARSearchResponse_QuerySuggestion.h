/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _PARSearchResponse_QuerySuggestion : PBCodable <NSSecureCoding, _PARSearchResponse_QuerySuggestion> {
    NSString * _detailText;
    NSArray * _entities;
    NSData * _feedback;
    bool  _previouslyEngaged;
    NSString * _query;
    float  _score;
    NSDictionary * _serverFeatures;
    NSString * _suggestion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) NSArray *entities;
@property (nonatomic, copy) NSData *feedback;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool previouslyEngaged;
@property (nonatomic, copy) NSString *query;
@property (nonatomic) float score;
@property (nonatomic, copy) NSDictionary *serverFeatures;
@property (nonatomic, copy) NSString *suggestion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (id)detailText;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (id)feedback;
- (bool)getServerFeatures:(double*)arg1 forKey:(id)arg2;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)previouslyEngaged;
- (id)query;
- (bool)readFrom:(id)arg1;
- (float)score;
- (id)serverFeatures;
- (void)setDetailText:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setPreviouslyEngaged:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setServerFeatures:(double)arg1 forKey:(id)arg2;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;
- (void)writeTo:(id)arg1;

@end
