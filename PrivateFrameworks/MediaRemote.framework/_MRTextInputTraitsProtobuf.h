/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {
    int  _autocapitalizationType;
    bool  _autocorrection;
    bool  _enablesReturnKeyAutomatically;
    struct { 
        unsigned int validTextRangeLength : 1; 
        unsigned int validTextRangeLocation : 1; 
        unsigned int autocapitalizationType : 1; 
        unsigned int keyboardType : 1; 
        unsigned int returnKeyType : 1; 
        unsigned int autocorrection : 1; 
        unsigned int enablesReturnKeyAutomatically : 1; 
        unsigned int secureTextEntry : 1; 
        unsigned int spellchecking : 1; 
    }  _has;
    int  _keyboardType;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _pINEntrySeparatorIndexes;
    int  _returnKeyType;
    bool  _secureTextEntry;
    bool  _spellchecking;
    unsigned long long  _validTextRangeLength;
    unsigned long long  _validTextRangeLocation;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
