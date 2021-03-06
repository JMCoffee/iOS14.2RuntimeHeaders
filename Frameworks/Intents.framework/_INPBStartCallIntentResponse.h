/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartCallIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBStartCallIntentResponse> {
    int  _confirmationReason;
    struct { 
        unsigned int confirmationReason : 1; 
        unsigned int shouldDoEmergencyCountdown : 1; 
    }  _has;
    bool  _shouldDoEmergencyCountdown;
    _INPBConnectedCall * _startedCall;
}

@property (nonatomic) int confirmationReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirmationReason;
@property (nonatomic) bool hasShouldDoEmergencyCountdown;
@property (nonatomic, readonly) bool hasStartedCall;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDoEmergencyCountdown;
@property (nonatomic, retain) _INPBConnectedCall *startedCall;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsConfirmationReason:(id)arg1;
- (int)confirmationReason;
- (id)confirmationReasonAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirmationReason;
- (bool)hasShouldDoEmergencyCountdown;
- (bool)hasStartedCall;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfirmationReason:(int)arg1;
- (void)setHasConfirmationReason:(bool)arg1;
- (void)setHasShouldDoEmergencyCountdown:(bool)arg1;
- (void)setShouldDoEmergencyCountdown:(bool)arg1;
- (void)setStartedCall:(id)arg1;
- (bool)shouldDoEmergencyCountdown;
- (id)startedCall;
- (void)writeTo:(id)arg1;

@end
