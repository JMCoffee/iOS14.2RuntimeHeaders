/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate> {
    bool  _cellularDataSetting;
    bool  _cellularDataSettingInitialized;
    CoreTelephonyClient * _client;
    struct __CTServerConnection { } * _ctConnection;
    NSMutableDictionary * _dataStatusDict;
    NSMutableDictionary * _intlDataAccessStatus;
    NSObject<OS_dispatch_queue> * _queue;
    RadiosPreferences * _radioPreferences;
}

@property bool cellularDataSetting;
@property bool cellularDataSettingInitialized;
@property (nonatomic, retain) CoreTelephonyClient *client;
@property struct __CTServerConnection { }*ctConnection;
@property (retain) NSMutableDictionary *dataStatusDict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *intlDataAccessStatus;
@property (nonatomic, retain) RadiosPreferences *radioPreferences;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (bool)cellularDataSetting;
- (bool)cellularDataSettingInitialized;
- (id)client;
- (struct __CTServerConnection { }*)ctConnection;
- (void)dataSettingsChanged:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (id)dataStatusDict;
- (void)dealloc;
- (void)fetchCellularDataEnabled;
- (void)fetchDataStatus;
- (void)fetchInternationalDataAccessStatus:(id)arg1;
- (id)getDataStatus:(id)arg1;
- (bool)getInternationalDataAccessStatus;
- (bool)getInternationalDataAccessStatus:(id)arg1;
- (id)init;
- (id)initPrivate;
- (id)intlDataAccessStatus;
- (bool)isAirplaneModeEnabled;
- (bool)isCellularDataEnabled;
- (bool)isDataFallbackEnabled;
- (id)radioPreferences;
- (void)setCellularDataEnabled:(bool)arg1;
- (void)setCellularDataSetting:(bool)arg1;
- (void)setCellularDataSettingInitialized:(bool)arg1;
- (void)setClient:(id)arg1;
- (void)setCtConnection:(struct __CTServerConnection { }*)arg1;
- (void)setDataFallbackEnabled:(bool)arg1;
- (void)setDataStatusDict:(id)arg1;
- (void)setInternationalDataAccessStatus:(bool)arg1;
- (void)setInternationalDataAccessStatus:(id)arg1 status:(bool)arg2;
- (void)setIntlDataAccessStatus:(id)arg1;
- (void)setRadioPreferences:(id)arg1;
- (void)willEnterForeground;

@end