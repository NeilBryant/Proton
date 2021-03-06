#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(void *, const char *, const void *, int32);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(void *, const char *, void *, int32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(void *, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(void *, const char *, ERemoteStoragePlatform);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(void *, const char *);
extern int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(void *, const char *);
extern ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount(void *);
extern const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(void *, int, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(void *, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount(void *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp(void *);
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(void *, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(void *, UGCHandle_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(void *, UGCHandle_t, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(void *, UGCHandle_t, AppId_t *, char **, int32 *, CSteamID *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(void *, UGCHandle_t, void *, int32);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount(void *);
extern UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(void *, int32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(void *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *, EWorkshopFileType);
extern PublishedFileUpdateHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(void *, PublishedFileUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(void *, PublishedFileUpdateHandle_t, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(void *, PublishedFileUpdateHandle_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(void *, PublishedFileId_t, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(void *, CSteamID, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(void *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(void *, PublishedFileId_t, EWorkshopFileAction);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(void *, EWorkshopFileAction, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(void *, EWorkshopEnumerationType, uint32, uint32, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
#ifdef __cplusplus
}
#endif
