/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegate : NSObject <NSCloudKitMirroringDelegateProgressProvider, NSPersistentStoreMirroringDelegate, PFCloudKitExporterDelegate> {
    PFCloudKitThrottledNotificationObserver * _accountChangeObserver;
    PFCloudKitThrottledNotificationObserver * _appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver * _appDeactivateLifecycleObserver;
    NSString * _ckDatabaseName;
    NSObject<OS_dispatch_queue> * _cloudKitQueue;
    NSObject<OS_dispatch_semaphore> * _cloudKitQueueSemaphore;
    CKContainer * _container;
    CDDCloudKitClient * _coredatadClient;
    CKRecordID * _currentUserRecordID;
    CKDatabase * _database;
    CKDatabaseSubscription * _databaseSubscription;
    NSString * _exportActivityIdentifier;
    PFCloudKitExporterOptions * _exporterOptions;
    bool  _hadObservedStore;
    NSString * _importActivityIdentifier;
    NSError * _lastInitializationError;
    CKNotificationListener * _notificationListener;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSSQLCore * _observedStore;
    NSString * _observedStoreIdentifier;
    NSCloudKitMirroringDelegateOptions * _options;
    CKRecordZone * _recordZone;
    NSCloudKitMirroringRequestManager * _requestManager;
    CKScheduler * _scheduler;
    bool  _successfullyInitialized;
}

@property (nonatomic, readonly) NSString *ckDatabaseName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKRecordID *currentUserRecordID;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKDatabaseSubscription *databaseSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *exportActivityIdentifier;
@property (nonatomic, readonly) PFCloudKitExporterOptions *exporterOptions;
@property (nonatomic, readonly) bool hadObservedStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *importActivityIdentifier;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) CKNotificationListener *notificationListener;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly) NSString *observedStoreIdentifier;
@property (nonatomic, readonly, copy) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly, retain) NSCloudKitMirroringRequestManager *requestManager;
@property (nonatomic, readonly) CKScheduler *scheduler;
@property (nonatomic, readonly) bool successfullyInitialized;
@property (readonly) Class superclass;

+ (bool)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(bool)arg2 error:(id*)arg3;
+ (bool)checkForCloudKitTablesInStoreAtURL:(id)arg1 withPersistentStoreCoordinator:(id)arg2 withConfiguration:(id)arg3;
+ (bool)checkIfContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id*)arg3;
+ (id)cloudKitMachServiceName;
+ (id)cloudKitMetadataTransformerName;
+ (id)createCloudKitServerWithMachServiceName:(id)arg1 andStorageDirectoryPath:(id)arg2;
+ (void)initialize;
+ (bool)isFirstPartyContainerIdentifier:(id)arg1;
+ (id)makeACopyOfTheStoreAtURL:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3;
+ (void)printMetadataForStoreAtURL:(id)arg1 withConfiguration:(id)arg2 operateOnACopy:(bool)arg3;
+ (void)printRepresentativeSchemaForModelAtURL:(id)arg1 orStoreAtURL:(id)arg2 withConfiguration:(id)arg3;
+ (id)stringForResetReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)applicationDidActivate:(id)arg1;
- (void)applicationWillDeactivate:(id)arg1;
- (void)ckAccountOrIdentityChangedHandler:(id)arg1;
- (id)ckDatabaseName;
- (id)cloudKitQueue;
- (id)cloudKitQueueSemaphore;
- (id)container;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)currentUserRecordID;
- (id)database;
- (id)databaseSubscription;
- (void)dealloc;
- (void)eventUpdated:(id)arg1;
- (id)exportActivityIdentifier;
- (void)exporter:(id)arg1 willScheduleOperations:(id)arg2;
- (id)exporterOptions;
- (bool)hadObservedStore;
- (id)importActivityIdentifier;
- (id)initWithCloudKitContainerOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)lastInitializationError;
- (void)logResetSyncNotification:(id)arg1;
- (void)managedObjectContextSaved:(id)arg1;
- (id)notificationListener;
- (id)observedCoordinator;
- (id)observedStore;
- (id)observedStoreIdentifier;
- (id)options;
- (void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3;
- (id)recordZone;
- (void)remoteStoreDidChange:(id)arg1;
- (id)requestManager;
- (id)scheduler;
- (void)storesDidChange:(id)arg1;
- (bool)successfullyInitialized;
- (bool)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3;

@end