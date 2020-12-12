/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBCloudDatabase : HMFObject <HMBCloudPushObserver, HMFLogging> {
    HMBCloudDatabaseConfiguration * _configuration;
    CKContainer * _container;
    <HMBCloudDatabaseDelegate> * _delegate;
    NAFuture * _initialCloudSyncFuture;
    HMBLocalDatabase * _localDatabase;
    NAFuture * _manateeAvailabilityFuture;
    CKDatabase * _privateDatabase;
    HMBCloudDatabaseStateModel * _privateDatabaseState;
    HMFUnfairLock * _propertyLock;
    CKDatabase * _publicDatabase;
    HMBCloudDatabaseStateModel * _publicDatabaseState;
    CKDatabase * _sharedDatabase;
    HMBCloudDatabaseStateModel * _sharedDatabaseState;
    HMBLocalZone * _stateZone;
    NSMutableDictionary * _zoneStateByZoneID;
}

@property (nonatomic, readonly, copy) HMBCloudDatabaseConfiguration *configuration;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMBCloudDatabaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *initialCloudSyncFuture;
@property (nonatomic, readonly) HMBLocalDatabase *localDatabase;
@property (nonatomic, retain) NAFuture *manateeAvailabilityFuture;
@property (nonatomic, readonly) CKDatabase *privateDatabase;
@property (nonatomic, retain) HMBCloudDatabaseStateModel *privateDatabaseState;
@property (nonatomic, readonly) NSSet *privateZoneIDs;
@property (nonatomic, readonly) HMFUnfairLock *propertyLock;
@property (nonatomic, readonly) CKDatabase *publicDatabase;
@property (nonatomic, retain) HMBCloudDatabaseStateModel *publicDatabaseState;
@property (nonatomic, readonly) NSSet *publicZoneIDs;
@property (nonatomic, readonly) CKDatabase *sharedDatabase;
@property (nonatomic, retain) HMBCloudDatabaseStateModel *sharedDatabaseState;
@property (nonatomic, readonly) NSSet *sharedZoneIDs;
@property (nonatomic, readonly) HMBLocalZone *stateZone;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *zoneStateByZoneID;

+ (id)extantDatabases;
+ (id)extantDatabasesLock;
+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_retryCloudKitOperationAfterError:(id)arg1 retryBlock:(id /* block */)arg2;
- (id)_zonesWithScope:(long long)arg1;
- (id)acceptInvitation:(id)arg1;
- (id)acceptInvitations:(id)arg1;
- (void)addContainerOperation:(id)arg1;
- (void)addDatabaseOperation:(id)arg1 forScope:(long long)arg2;
- (id)attributeDescriptions;
- (id)configuration;
- (id)container;
- (id)containerID;
- (id)createPrivateZoneWithID:(id)arg1;
- (id)databaseStateForDatabaseScope:(long long)arg1;
- (void)deallocForZoneWithID:(id)arg1;
- (id)declineInvitation:(id)arg1;
- (id)delegate;
- (id)fetchParticipants:(id)arg1;
- (id)fetchShareMetadataForInvitations:(id)arg1;
- (id)fetchSubscriptionsOn:(id)arg1;
- (id)fetchUserRecordOn:(id)arg1;
- (id)fetchZones:(bool)arg1;
- (id)fetchZonesOn:(id)arg1;
- (void)handleAccountChangedNotification:(id)arg1;
- (void)handleCreatedZoneIDs:(id)arg1;
- (void)handleRemovedZoneIDs:(id)arg1 userInitiated:(bool)arg2;
- (void)handleUpdatedZonesIDs:(id)arg1;
- (void)handler:(id)arg1 didReceiveCKNotification:(id)arg2;
- (void)handler:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 configuration:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 stateZone:(id)arg2 container:(id)arg3 configuration:(id)arg4 databaseStateModelsByScope:(id)arg5 zoneStateModels:(id)arg6;
- (id)initialCloudSyncFuture;
- (id)localDatabase;
- (id)logIdentifier;
- (id)manateeAvailabilityFuture;
- (void)notifyDelegateOfError:(id)arg1 forOperation:(id)arg2;
- (id)openExistingPrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)openExistingSharedZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)openOrCreatePrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)operationConfigurationWithProcessingOptions:(id)arg1;
- (id)peformCodeOperationWithServiceName:(id)arg1 functionName:(id)arg2 request:(id)arg3 responseClass:(Class)arg4;
- (id)performAdministrativeFetchForAllDatabases:(bool)arg1;
- (id)performAdministrativeFetchForDatabaseScope:(long long)arg1 withForce:(bool)arg2;
- (id)performCloudPullForScope:(long long)arg1;
- (id)performInitialCloudSync;
- (id)privateDatabase;
- (id)privateDatabaseState;
- (id)privateZoneIDs;
- (id)propertyLock;
- (id)publicDatabase;
- (id)publicDatabaseState;
- (id)publicZoneIDs;
- (id)pushSubscriptionsForDatabase:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToRemove:(id)arg3;
- (id)registerPrivateSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSubscription:(id)arg1 forZoneWithID:(id)arg2;
- (id)registerSubscriptionForExternalRecordType:(id)arg1 databaseState:(id)arg2;
- (id)removePrivateZoneWithID:(id)arg1;
- (void)removeStateForZoneID:(id)arg1;
- (id)removeZoneWithID:(id)arg1;
- (bool)retryCloudKitOperation:(id)arg1 afterError:(id)arg2 retryBlock:(id /* block */)arg3;
- (id)serverChangeTokenForZoneWithID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialCloudSyncFuture:(id)arg1;
- (void)setManateeAvailabilityFuture:(id)arg1;
- (void)setPrivateDatabaseState:(id)arg1;
- (void)setPublicDatabaseState:(id)arg1;
- (void)setSharedDatabaseState:(id)arg1;
- (id)sharedDatabase;
- (id)sharedDatabaseState;
- (id)sharedZoneIDs;
- (id)shutdown;
- (id)stateZone;
- (id)subscriptionIDForCloudID:(id)arg1 recordType:(id)arg2;
- (id)subscriptionIDForZoneID:(id)arg1 recordType:(id)arg2;
- (id)subscriptionsForZoneWithID:(id)arg1;
- (id)unregisterPrivateSubscriptionForExternalRecordType:(id)arg1;
- (id)unregisterPrivateSubscriptionForSubscriptionID:(id)arg1;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)unregisterSharedSubscriptionForSubscriptionID:(id)arg1;
- (id)unregisterSubscription:(id)arg1 forZoneWithID:(id)arg2;
- (void)updateNeedsZoneDeletion:(bool)arg1 forZoneWithID:(id)arg2;
- (void)updateRebuildStatus:(id)arg1 forZoneWithID:(id)arg2;
- (void)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(long long)arg2;
- (void)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2;
- (id)waitForManateeAvailability;
- (id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;
- (id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable:(bool)arg1;
- (id)zoneStateByZoneID;

@end