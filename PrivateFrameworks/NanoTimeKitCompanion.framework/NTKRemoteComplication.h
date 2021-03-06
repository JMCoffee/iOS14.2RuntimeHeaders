/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRemoteComplication : NTKComplication {
    NSString * _appBundleIdentifier;
    NSString * _clientIdentifier;
    CLKComplicationDescriptor * _complicationDescriptor;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) CLKComplicationDescriptor *complicationDescriptor;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)_remoteStocksComplicationForDevice:(id)arg1;
+ (id)complicationWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3;
+ (id)remoteStocksComplicationDescriptorForDevice:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generatUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)appBundleIdentifier;
- (id)appIdentifier;
- (id)clientIdentifier;
- (id)companionLocalizedKeylineLabelText;
- (id)complicationDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (void)resetComplicationDescriptor;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)watchLocalizedKeylineLabelText;

@end
