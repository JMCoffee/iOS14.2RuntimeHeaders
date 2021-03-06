/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (nonatomic, retain) NSString *ckOwnerName;
@property (nonatomic, retain) NSString *ckRecordZoneName;
@property (nonatomic, retain) CKServerChangeToken *currentChangeToken;
@property (nonatomic, retain) NSCKDatabaseMetadata *database;
@property (nonatomic) bool hasRecordZone;
@property (nonatomic, retain) NSNumber *hasRecordZoneNum;
@property (nonatomic) bool hasSubscription;
@property (nonatomic, retain) NSNumber *hasSubscriptionNum;
@property (nonatomic, retain) NSDate *lastFetchDate;
@property (nonatomic, retain) NSSet *mirroredRelationships;
@property (nonatomic) bool needsImport;
@property (nonatomic) bool needsRecoveryFromUserPurge;
@property (nonatomic) bool needsRecoveryFromZoneDelete;
@property (nonatomic, retain) NSSet *queries;
@property (nonatomic, retain) NSSet *records;
@property (nonatomic) bool supportsAtomicChanges;
@property (nonatomic) bool supportsFetchChanges;
@property (nonatomic) bool supportsRecordSharing;

+ (id)entityPath;
+ (id)zoneMetadataForZoneID:(id)arg1 inDatabaseWithScope:(long long)arg2 forStore:(id)arg3 inContext:(id)arg4 error:(id*)arg5;

- (bool)hasRecordZone;
- (bool)hasSubscription;
- (void)setHasRecordZone:(bool)arg1;
- (void)setHasSubscription:(bool)arg1;

@end
