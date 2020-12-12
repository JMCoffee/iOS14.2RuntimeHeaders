/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSURL * _businessChatURL;
    long long  _category;
    NSString * _detailedCategory;
    NSString * _heroImageAttributionName;
    NSURL * _heroImageURL;
    unsigned long long  _identifier;
    double  _locationLatitude;
    double  _locationLongitude;
    NSString * _name;
    NSString * _phoneNumber;
    CNPostalAddress * _postalAddress;
    int  _resultProviderIdentifier;
    MKWalletMerchantStylingInfo * _stylingInfo;
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *businessChatURL;
@property (nonatomic) long long category;
@property (nonatomic, copy) NSString *detailedCategory;
@property (nonatomic, copy) NSString *heroImageAttributionName;
@property (nonatomic, copy) NSURL *heroImageURL;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) CNPostalAddress *postalAddress;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, retain) MKWalletMerchantStylingInfo *stylingInfo;
@property (setter=setURL:, nonatomic, copy) NSURL *url;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (void)deleteFromCloudStoreRecord:(id)arg1;
+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_jsonEncodedPostalAddressString;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)businessChatURL;
- (long long)category;
- (id)description;
- (id)detailedCategory;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCloudArchivableDeviceData;
- (unsigned long long)hash;
- (id)heroImageAttributionName;
- (id)heroImageURL;
- (unsigned long long)identifier;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMapsMerchant:(id)arg1;
- (bool)isValid;
- (unsigned long long)itemType;
- (id)jsonRepresentation;
- (id)location;
- (double)locationLatitude;
- (double)locationLongitude;
- (id)name;
- (id)phoneNumber;
- (id)postalAddress;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesIncludingServerData:(bool)arg1;
- (int)resultProviderIdentifier;
- (void)setBusinessChatURL:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setDetailedCategory:(id)arg1;
- (void)setHeroImageAttributionName:(id)arg1;
- (void)setHeroImageURL:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setStylingInfo:(id)arg1;
- (void)setURL:(id)arg1;
- (id)stylingInfo;
- (id)url;

@end