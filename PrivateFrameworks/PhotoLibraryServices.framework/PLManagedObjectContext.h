/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLManagedObjectContextPTPNotificationDelegate>, NSMapTable, NSMutableArray, NSMutableSet, NSObject<OS_xpc_object>, PLDelayedFiledSystemDeletions, PLMergePolicy, PLPhotoLibrary;

@interface PLManagedObjectContext : NSManagedObjectContext {
    NSMutableSet *_avalancheUUIDsForUpdate;
    NSMutableSet *_delayedAssetsForFileSystemPersistency;
    NSMutableArray *_delayedCloudFeedAlbumUpdates;
    NSMutableArray *_delayedCloudFeedAssetInserts;
    NSMutableArray *_delayedCloudFeedAssetUpdates;
    NSMutableArray *_delayedCloudFeedCommentInserts;
    NSMutableSet *_delayedCloudFeedDeletionEntries;
    NSMutableArray *_delayedCloudFeedInvitationRecordUpdates;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableArray *_delayedDupeAnalysisCloudInserts;
    NSMutableArray *_delayedDupeAnalysisNormalInserts;
    NSMapTable *_delayedMomentAssetDeletions;
    NSMutableArray *_delayedMomentAssetUpdates;
    BOOL _hasMetadataChanges;
    BOOL _isBackingALAssetsLibrary;
    BOOL _isConnectedToChangeHub;
    BOOL _isInitializingSingletons;
    PLMergePolicy *_mergePolicy;
    BOOL _mergingChanges;
    PLPhotoLibrary *_photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> *_ptpNotificationDelegate;
    BOOL _regenerateVideoThumbnails;
    BOOL _savingDuringMerge;
    BOOL _suspendClientServerTransactions;
    NSObject<OS_xpc_object> *changeHubConnection;
}

@property NSObject<OS_xpc_object> * changeHubConnection;
@property(retain) PLDelayedFiledSystemDeletions * delayedDeletions;
@property BOOL hasMetadataChanges;
@property BOOL isBackingALAssetsLibrary;
@property BOOL isInitializingSingletons;
@property(readonly) BOOL isUserInterfaceContext;
@property(readonly) BOOL mergingChanges;
@property PLPhotoLibrary * photoLibrary;
@property <PLManagedObjectContextPTPNotificationDelegate> * ptpNotificationDelegate;
@property BOOL regenerateVideoThumbnails;
@property(readonly) BOOL savingDuringMerge;
@property BOOL suspendClientServerTransactions;

+ (id)allContextsNotIdenticalTo:(void*)arg1;
+ (BOOL)assetsLibraryLoggingEnabled;
+ (BOOL)canMergeRemoteChanges;
+ (void)configurePersistentStoreCoordinator:(id)arg1;
+ (id)contextForDatabaseCreation;
+ (id)contextForPhotoLibrary:(id)arg1;
+ (BOOL)databaseIsMissing;
+ (id)databasePath;
+ (id)defaultStoreURL;
+ (void)delayedAssetsForFileSystemPersistencyUpdatesFromChangeHubEvent:(id)arg1 assetUpdates:(id*)arg2;
+ (void)delayedCloudFeedDataFromChangeHubEvent:(id)arg1 albumUpdates:(id*)arg2 assetInserts:(id*)arg3 assetUpdates:(id*)arg4 commentInserts:(id*)arg5 invitationRecordUpdates:(id*)arg6 deletionEntries:(id*)arg7;
+ (void)delayedDupeAnalysisDataFromChangeHubEvent:(id)arg1 normalInserts:(id*)arg2 cloudInserts:(id*)arg3;
+ (void)delayedMomentDataFromChangeHubEvent:(id)arg1 insertsAndUpdates:(id*)arg2 deletes:(id*)arg3;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2;
+ (void)handleUnknownMergeEvent;
+ (BOOL)hasAtLeastOneAsset;
+ (id)managedObjectModel;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(id)arg3;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(id)arg2;
+ (void)moveOldStoreAside;
+ (BOOL)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (id)oldAuxDatabasePath;
+ (id)readOnlyContext;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (id)sharedPersistentStoreCoordinator;
+ (BOOL)storeIsOldEnough;
+ (BOOL)useModelMigratorToCreateDatabase;

- (void)_contextObjectsDidChange:(id)arg1;
- (void)_informPTPDelegateAboutChangesFromNotification:(id)arg1;
- (BOOL)_isValidDelete:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)_recordNormalAssetForDupeAnalyzis:(id)arg1;
- (void)_recordStreamAssetForDupeAnalyzis:(id)arg1;
- (BOOL)_tooManyAssetChangesToHandle:(unsigned int)arg1;
- (void)appendDelayedAssetsForFileSystemPersistencyUpdate:(id)arg1;
- (void)appendDelayedCloudFeedDataToXPCMessage:(id)arg1;
- (void)appendDelayedDupeAnalysisToXPCMessage:(id)arg1;
- (void)appendDelayedMomentDataToXPCMessage:(id)arg1;
- (id)changeHubConnection;
- (void)connectToChangeHub;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned int)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delayedDeletions;
- (void)disconnectFromChangeHub;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)getDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1;
- (void)getDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6;
- (void)getDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2;
- (void)getDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2;
- (BOOL)globalBoolValueForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)globalValueForKey:(id)arg1;
- (BOOL)hasMetadataChanges;
- (id)initWithConcurrencyType:(unsigned int)arg1 useSharedPersistentStoreCoordinator:(BOOL)arg2;
- (BOOL)isBackingALAssetsLibrary;
- (BOOL)isInitializingSingletons;
- (BOOL)isReadOnly;
- (BOOL)isUserInterfaceContext;
- (BOOL)mergingChanges;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)ptpNotificationDelegate;
- (void)recordAlbumForCloudFeedUpdate:(id)arg1;
- (void)recordAssetForCloudFeedUpdate:(id)arg1;
- (void)recordAssetForDupeAnalysis:(id)arg1;
- (void)recordAssetForFileSystemPersistencyUpdate:(id)arg1;
- (void)recordAssetForMomentUpdate:(id)arg1;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)recordCommentForCloudFeedUpdate:(id)arg1;
- (void)recordInvitationRecordForCloudFeedUpdate:(id)arg1;
- (BOOL)regenerateVideoThumbnails;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (BOOL)save:(id*)arg1;
- (BOOL)savingDuringMerge;
- (void)setChangeHubConnection:(id)arg1;
- (void)setDelayedDeletions:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setHasMetadataChanges:(BOOL)arg1;
- (void)setIsBackingALAssetsLibrary:(BOOL)arg1;
- (void)setIsInitializingSingletons:(BOOL)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)setRegenerateVideoThumbnails:(BOOL)arg1;
- (void)setSuspendClientServerTransactions:(BOOL)arg1;
- (void)setupLocalChangeNotifications;
- (BOOL)suspendClientServerTransactions;
- (void)tearDownLocalChangeNotifications;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;

@end