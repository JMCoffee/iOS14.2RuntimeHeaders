/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface POUtilities : NSObject

+ (id)commandStatusForRemoteStatus:(unsigned int)arg1 error:(id)arg2 isRemoteStorePlayback:(bool)arg3;
+ (struct _MRSystemAppPlaybackQueue { }*)createPlaybackQueueFromRequestIdentifiers:(id)arg1 startPlaying:(bool)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5;
+ (id)identifierFromDomainObject:(id)arg1;
+ (bool)isPodcastsNowPlaying;
+ (void)modifyContextForAirplay:(id)arg1 andPlayLocally:(id)arg2 completion:(id /* block */)arg3;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 hashedRouteUIDs:(id)arg3 startPlaying:(bool)arg4 requesterSharedUserId:(id)arg5 sharedUserIdFromPlayableITunesAccount:(id)arg6 context:(id)arg7 allowsFallback:(bool)arg8 completion:(id /* block */)arg9;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 hashedRouteUIDs:(id)arg3 startPlaying:(bool)arg4 requesterSharedUserId:(id)arg5 sharedUserIdFromPlayableITunesAccount:(id)arg6 context:(id)arg7 completion:(id /* block */)arg8;
+ (void)setPlaybackRate:(float)arg1 failureErrorCode:(long long)arg2 completion:(id /* block */)arg3;
+ (id)typeFromDomainObject:(id)arg1;

@end
