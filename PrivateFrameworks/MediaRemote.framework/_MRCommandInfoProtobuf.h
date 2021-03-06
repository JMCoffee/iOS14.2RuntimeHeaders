/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying> {
    bool  _active;
    int  _canScrub;
    int  _command;
    NSMutableArray * _currentPlaybackSessionTypes;
    int  _currentQueueEndAction;
    int  _disabledReason;
    bool  _enabled;
    struct { 
        unsigned int canScrub : 1; 
        unsigned int command : 1; 
        unsigned int currentQueueEndAction : 1; 
        unsigned int disabledReason : 1; 
        unsigned int maximumRating : 1; 
        unsigned int minimumRating : 1; 
        unsigned int numAvailableSkips : 1; 
        unsigned int preferredPlaybackRate : 1; 
        unsigned int presentationStyle : 1; 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int skipFrequency : 1; 
        unsigned int skipInterval : 1; 
        unsigned int upNextItemCount : 1; 
        unsigned int active : 1; 
        unsigned int enabled : 1; 
        unsigned int supportsSharedQueue : 1; 
    }  _has;
    NSString * _localizedShortTitle;
    NSString * _localizedTitle;
    float  _maximumRating;
    float  _minimumRating;
    int  _numAvailableSkips;
    NSString * _playbackSessionIdentifier;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _preferredIntervals;
    float  _preferredPlaybackRate;
    int  _presentationStyle;
    int  _repeatMode;
    int  _shuffleMode;
    int  _skipFrequency;
    int  _skipInterval;
    NSMutableArray * _supportedCustomQueueIdentifiers;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedInsertionPositions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedPlaybackQueueTypes;
    NSMutableArray * _supportedPlaybackSessionIdentifiers;
    NSMutableArray * _supportedPlaybackSessionTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedQueueEndActions;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedRates;
    bool  _supportsSharedQueue;
    int  _upNextItemCount;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
