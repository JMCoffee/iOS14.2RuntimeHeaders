/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAddressEndpoint : NWHostEndpoint

@property (nonatomic, readonly) const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*address;
@property (nonatomic, readonly) NSData *addressData;
@property (nonatomic, readonly) unsigned long long addressFamily;
@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) NSString *addressStringNoPort;

+ (unsigned int)endpointType;
+ (id)endpointWithAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;

- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)address;
- (id)addressData;
- (unsigned long long)addressFamily;
- (id)addressString;
- (id)addressStringNoPort;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)ethernetAddress;

@end
