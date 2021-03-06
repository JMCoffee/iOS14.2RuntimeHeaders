/* Generated by RuntimeBrowser.
 */

@protocol CADPermissionValidator <NSObject>

@required

- (bool)canMakeSpotlightChanges;
- (bool)canModifyBirthdayCalendar;
- (bool)canModifyCalendarDatabase;
- (bool)canModifySuggestedEventCalendar;
- (bool)hasCalendarToolEntitlement;
- (bool)hasChangeIdTrackingOverrideEntitlement;
- (bool)hasContactsUIEntitlement;
- (bool)hasManagedConfigurationBundleIDOverrideEntitlement;
- (bool)hasMigrationEntitlement;
- (bool)hasNotificationCountEntitlement;
- (bool)hasSyncClientEntitlement;
- (bool)internalAccessLevelGranted;
- (bool)isCalendarDaemon;
- (bool)isFirstPartyCalendarApp;
- (bool)shouldTrustClientEnforcedManagedConfigurationAccess;
- (bool)storageManagementAccessGranted;
- (bool)testingAccessLevelGranted;

@end
