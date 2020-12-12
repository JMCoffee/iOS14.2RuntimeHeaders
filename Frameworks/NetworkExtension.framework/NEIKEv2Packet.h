/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2Packet : NSObject <NEPrettyDescription> {
    NSArray * _customPayloads;
    bool  _decrypted;
    NEIKEv2EncryptedPayload * _encryptedPayload;
    unsigned int  _fragmentNumber;
    NEIKEv2IKESPI * _initiatorSPI;
    bool  _isFragmented;
    bool  _isInbound;
    bool  _isInitiator;
    bool  _isResponse;
    int  _messageID;
    NSArray * _notifications;
    NSArray * _packetDatagrams;
    NSArray * _rawPayloads;
    NEIKEv2IKESPI * _responderSPI;
    unsigned int  _totalFragments;
}

@property (retain) NSArray *customPayloads;
@property bool decrypted;
@property (retain) NEIKEv2EncryptedPayload *encryptedPayload;
@property unsigned int fragmentNumber;
@property (readonly) bool hasErrors;
@property (retain) NEIKEv2IKESPI *initiatorSPI;
@property bool isFragmented;
@property bool isInbound;
@property bool isInitiator;
@property bool isResponse;
@property int messageID;
@property (retain) NSArray *notifications;
@property (retain) NSArray *packetDatagrams;
@property (retain) NSArray *rawPayloads;
@property (readonly) NEIKEv2IKESPI *receiverSPI;
@property (retain) NEIKEv2IKESPI *responderSPI;
@property (readonly) NEIKEv2IKESPI *senderSPI;
@property unsigned int totalFragments;

+ (id)copyTypeDescription;
+ (id)createPacketFromReceivedData:(id)arg1 ikeSA:(id)arg2;
+ (id)createPacketFromReceivedFragments:(id)arg1 ikeSA:(id)arg2;
+ (bool)encryptPayloads;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (bool)addNotification:(unsigned long long)arg1;
- (bool)addNotification:(unsigned long long)arg1 data:(id)arg2;
- (void)addNotification:(unsigned long long)arg1 fromArray:(id)arg2 toPayloads:(id)arg3;
- (bool)addNotifyPayload:(id)arg1;
- (id)copyAdditionalAuthenticationDataForNextPayloadType:(unsigned long long)arg1 plainTextLen:(unsigned int)arg2 fragmentNumber:(unsigned short)arg3 totalFragments:(unsigned short)arg4 encryption:(id)arg5;
- (id)copyNotification:(unsigned long long)arg1;
- (id)copyPacketDatagramsForIKESA:(id)arg1;
- (id)copyReceivedPacketForIKESA:(id)arg1;
- (id)copyShortDescription;
- (id)copyUnifiedData;
- (id)createPacketDatagramWithPayloadData:(id)arg1 nextPayloadType:(unsigned long long)arg2 ikeSA:(id)arg3 needsChecksum:(bool)arg4;
- (id)customPayloads;
- (bool)decrypted;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned int)encryptedFragmentSizeForIKESA:(id)arg1;
- (id)encryptedPayload;
- (void)filloutPayloads;
- (unsigned int)fragmentNumber;
- (void)gatherPayloads;
- (bool)hasErrors;
- (bool)hasNotification:(unsigned long long)arg1;
- (unsigned int)headerSizeForAddressFamily:(unsigned char)arg1 fragment:(bool)arg2 nonESPMarker:(bool)arg3;
- (id)initOutbound;
- (id)initResponse:(id)arg1;
- (id)initiatorSPI;
- (bool)isFragmented;
- (bool)isInbound;
- (bool)isInitiator;
- (bool)isResponse;
- (int)messageID;
- (id)notifications;
- (id)packetDatagrams;
- (id)rawPayloads;
- (id)receiverSPI;
- (id)responderSPI;
- (id)senderSPI;
- (void)setCustomPayloads:(id)arg1;
- (void)setDecrypted:(bool)arg1;
- (void)setEncryptedPayload:(id)arg1;
- (void)setFragmentNumber:(unsigned int)arg1;
- (void)setInitiatorSPI:(id)arg1;
- (void)setIsFragmented:(bool)arg1;
- (void)setIsInbound:(bool)arg1;
- (void)setIsInitiator:(bool)arg1;
- (void)setIsResponse:(bool)arg1;
- (void)setMessageID:(int)arg1;
- (void)setNotifications:(id)arg1;
- (void)setPacketDatagrams:(id)arg1;
- (void)setRawPayloads:(id)arg1;
- (void)setResponderSPI:(id)arg1;
- (void)setTotalFragments:(unsigned int)arg1;
- (bool)shouldFragmentForEncryptedPayloadSize:(unsigned int)arg1 addressFamily:(unsigned char)arg2 nonESPMarker:(bool)arg3;
- (unsigned int)totalFragments;

@end