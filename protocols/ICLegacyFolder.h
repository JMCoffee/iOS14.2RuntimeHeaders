/* Generated by RuntimeBrowser.
 */

@protocol ICLegacyFolder <NSObject>

@required

- (<ICLegacyAccount> *)account;
- (void)addNotesObject:(id <ICLegacyNote>)arg1;
- (NSSet *)changes;
- (long long)depth;
- (bool)isDefaultFolder;
- (bool)isDeletedOrInTrash;
- (bool)isTrashFolder;
- (NSString *)localizedTitle;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (<ICLegacyNote> *)newNoteInContext:(NoteContext *)arg1;
- (NSManagedObjectID *)objectID;
- (<ICLegacyFolder> *)parentFolder;

@end
