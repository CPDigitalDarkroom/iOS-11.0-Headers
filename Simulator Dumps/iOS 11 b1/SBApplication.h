//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDisplay.h"
#import "SBLeafIconDataSource.h"

@class FBApplicationProcess, FBApplicationProcessExitContext, FBSApplicationDataStore, FBScene, NSArray, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, SBApplicationInfo, SBApplicationProcessState, SBApplicationWakeScheduler, UIRemoteApplication, XBApplicationSnapshotManifest;

@interface SBApplication : NSObject <SBDisplay, SBLeafIconDataSource>
{
    FBApplicationProcess *_process;
    FBSApplicationDataStore *_dataStore;
    XBApplicationSnapshotManifest *_snapshotManifest;
    UIRemoteApplication *_remoteApplication;
    NSUserDefaults *_lazy_defaults;
    SBApplicationProcessState *_threadUnsafe_processState;
    FBApplicationProcessExitContext *_lastExitContext;
    unsigned long long _displayedLaunchAlerts;
    NSMutableDictionary *_alertImpersonatorsByWorkspaceType;
    unsigned int _isRecentlyUpdated:3;
    unsigned int _isNewlyInstalled:3;
    _Bool _uninstalled;
    unsigned int _hasBadgeValue:3;
    unsigned int _dataFlags:8;
    _Bool _dataFlagsIsSet;
    unsigned int _doingBackgroundNetworking:16;
    _Bool _hasShownDataPlanAlertSinceLock;
    _Bool _calculatedSupportedTypes;
    int _supportedTypes;
    long long _defaultClassicModeOverride;
    long long _currentClassicMode;
    int _applicationRestorationCheckState;
    NSHashTable *_statusBarStyleOverridesAssertions;
    NSMapTable *_statusBarStyleOverridesAssertionsByStyleOverride;
    NSMutableSet *_suppressVolumeHudCategories;
    int _showsProgressCount;
    _Bool _isRestoringApplicationFromHiding;
    NSString *_mainSceneID;
    SBApplicationWakeScheduler *_legacyVOIPPeriodicWakeScheduler;
    SBApplicationWakeScheduler *_contentAvailableWakeScheduler;
    _Bool _isPlayingAudio;
    _Bool _isNowRecordingApplication;
    _Bool _isRecordingAudio;
    _Bool _isConnectedToExternalAccessory;
    unsigned long long _failedAutoLaunchCountForVOIP;
    unsigned long long _failedLaunchCount;
    NSString *_bundleIdentifier;
    SBApplicationInfo *_appInfo;
    long long _appSnapshotSequenceID;
    _Bool _needsMainScreenSnapshotsDownscaled;
}

+ (id)_appStateKeysToPrefetch;
+ (id)snapshotSortDescriptorForCreationDate;
+ (id)snapshotSortDescriptorForRequiredOSVersion:(id)arg1;
+ (id)snapshotSortDescriptorForContentTypeMask;
+ (id)snapshotSortDescriptorForInterfaceOrientationMask:(unsigned long long)arg1;
+ (id)snapshotSortDescriptorForStatusBarStateMask:(unsigned long long)arg1;
+ (id)snapshotSortDescriptorForImageScale:(double)arg1;
+ (id)snapshotSortDescriptorForLaunchInterfaceIdentifier:(id)arg1;
+ (id)snapshotSortDescriptorForScheme:(id)arg1;
+ (id)snapshotSortDescriptorForNames:(id)arg1;
+ (id)snapshotSortDescriptorsForNames:(id)arg1 scheme:(id)arg2 imageScale:(double)arg3 statusBarStateMask:(unsigned long long)arg4 interfaceOrientationMask:(unsigned long long)arg5 requiredOSVersion:(id)arg6;
+ (void)_reingestStaticDefaultImagesForAllApps;
+ (void)_markAllManifestsForReingestion;
@property(nonatomic) long long defaultClassicModeOverride; // @synthesize defaultClassicModeOverride=_defaultClassicModeOverride;
@property(retain, getter=_internalProcessState, setter=_setInternalProcessState:) SBApplicationProcessState *internalProcessState; // @synthesize internalProcessState=_threadUnsafe_processState;
@property(copy, nonatomic) NSString *mainSceneID; // @synthesize mainSceneID=_mainSceneID;
@property(nonatomic, getter=isConnectedToExternalAccessory) _Bool connectedToExternalAccessory; // @synthesize connectedToExternalAccessory=_isConnectedToExternalAccessory;
@property(nonatomic, getter=isNowRecordingApplication) _Bool nowRecordingApplication; // @synthesize nowRecordingApplication=_isNowRecordingApplication;
@property(nonatomic, getter=isPlayingAudio) _Bool playingAudio; // @synthesize playingAudio=_isPlayingAudio;
@property(nonatomic) unsigned long long failedAutoLaunchCountForVOIP; // @synthesize failedAutoLaunchCountForVOIP=_failedAutoLaunchCountForVOIP;
@property(nonatomic) _Bool hasShownDataPlanAlertSinceLock; // @synthesize hasShownDataPlanAlertSinceLock=_hasShownDataPlanAlertSinceLock;
@property(nonatomic, getter=isRestoringIcon) _Bool restoringIcon; // @synthesize restoringIcon=_isRestoringApplicationFromHiding;
@property(nonatomic, getter=isUninstalled) _Bool uninstalled; // @synthesize uninstalled=_uninstalled;
@property(retain, nonatomic, setter=_setContentAvailableWakeScheduler:) SBApplicationWakeScheduler *contentAvailableWakeScheduler; // @synthesize contentAvailableWakeScheduler=_contentAvailableWakeScheduler;
@property(retain, nonatomic, setter=_setLegacyVOIPPeriodicWakeScheduler:) SBApplicationWakeScheduler *legacyVOIPPeriodicWakeScheduler; // @synthesize legacyVOIPPeriodicWakeScheduler=_legacyVOIPPeriodicWakeScheduler;
@property(readonly, nonatomic) SBApplicationInfo *info; // @synthesize info=_appInfo;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) unsigned long long failedLaunchCount; // @synthesize failedLaunchCount=_failedLaunchCount;
@property(readonly, nonatomic) FBApplicationProcessExitContext *lastExitContext; // @synthesize lastExitContext=_lastExitContext;
- (void).cxx_destruct;
- (void)_noteIconDataSourceDidChange;
- (_Bool)icon:(id)arg1 launchFromLocation:(long long)arg2 context:(id)arg3 actions:(id)arg4;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (_Bool)iconIsCloudDemoted:(id)arg1;
- (_Bool)iconIsBeta:(id)arg1;
- (_Bool)iconIsRecentlyUpdated:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned long long)iconPriority:(id)arg1;
- (id)iconDisplayName:(id)arg1 forLocation:(long long)arg2;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesCoverSheetGesture;
- (_Bool)suppressesBanners;
- (_Bool)allowsEventOnlySuspension;
- (void)_invalidateStatusBarStyleOverridesAssertions;
- (id)_sceneIdentifierForDisplayType:(long long)arg1;
- (void)_lockStateDidChange:(id)arg1;
- (void)_updateRecentlyUpdatedTimer;
- (void)_setRecentlyUpdated:(_Bool)arg1;
- (_Bool)_isRecentlyUpdated;
- (void)_setNewlyInstalled:(_Bool)arg1;
- (_Bool)_isNewlyInstalled;
- (void)purgeCaches;
- (void)_updateProcess:(id)arg1 withState:(id)arg2;
- (void)_didSuspend;
- (void)_resetDataUsage;
- (void)_setDataUsage:(int)arg1;
- (void)_didExitWithContext:(id)arg1;
- (void)_processDidLaunch:(id)arg1;
- (void)_processWillLaunch:(id)arg1;
- (void)_noteProcess:(id)arg1 didChangeToState:(id)arg2;
- (void)_setApplicationRestorationCheckState:(int)arg1;
- (int)_applicationRestorationCheckState;
- (void)_removeAlertImpersonator:(id)arg1;
- (void)_setAlertImpersonator:(id)arg1 forWorkspaceType:(long long)arg2;
- (id)_alertImpersonatorForWorkspaceType:(long long)arg1;
- (_Bool)_hasAnyAlertImpersonator;
- (void)_terminationAssertionEfficacyChangedTo:(unsigned long long)arg1;
- (id)_snapshotManifest;
- (id)_dataStore;
- (_Bool)_isMainSceneID:(id)arg1;
- (id)_baseSceneIdentifier;
- (_Bool)_isClassicViaOverride;
- (_Bool)classicDefaultStatusBarHidden;
- (_Bool)_classicAppScaledPadOnPad;
- (_Bool)_classicAppScaledPhoneOnPad;
- (_Bool)_classicAppScaledOnPhone;
- (_Bool)_supportsClassicMode:(long long)arg1;
- (int)_supportedTypeForClassicModeNone;
- (_Bool)_supportsApplicationType:(int)arg1;
@property(readonly, nonatomic, getter=_classicMode) long long classicMode;
- (long long)_defaultClassicMode;
- (long long)_classicModeFromSupportedTypes;
- (long long)_classicModeFromSplashBoard;
- (long long)_phone_classicModeFromSplashBoard;
- (long long)_phone_on_pad_classicModeFromSplashBoard;
- (long long)_pad_classicModeFromSplashBoard;
- (_Bool)_shouldUseStrictClassicModePolicy;
- (_Bool)_shouldBypassClassicForSplashBoard;
- (void)_recalculateApplicationSupportedTypes;
- (void)_calculateSupportedTypesLazilyIfNecessary;
- (struct CGSize)defaultLaunchingSizeForDisplayConfiguration:(id)arg1;
- (_Bool)includesStatusBarInClassicJail;
- (_Bool)classicAppPhoneAppRunningOnPad;
- (_Bool)classicAppFullScreen;
- (_Bool)classicAppScaled;
- (_Bool)classicAppZoomedInOrRequiresHiDPI;
- (_Bool)classicAppRequiresHiDPI;
- (_Bool)classicAppZoomedIn;
- (_Bool)isClassic;
- (_Bool)isMedusaCapable;
- (_Bool)mainSceneWantsFullscreen;
@property(readonly, nonatomic) FBScene *mainScene;
- (void)preHeatForUserLaunchIfNecessary;
- (void)markRecentlyUpdated;
- (void)markNewlyInstalled;
- (id)sceneIdentifierForDisplayIdentity:(id)arg1;
- (_Bool)disablesJailForDisplayWithIdentity:(id)arg1;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forCategory:(id)arg2;
- (_Bool)showSystemVolumeHUDForCategory:(id)arg1;
- (id)statusBarStyleOverridesAssertionsByStyleOverride;
- (void)releaseStatusBarStyleOverridesAssertion:(id)arg1;
- (void)takeStatusBarStyleOverridesAssertion:(id)arg1;
- (void)setHasDisplayedLaunchAlert:(_Bool)arg1 forType:(unsigned long long)arg2;
- (_Bool)hasDisplayedLaunchAlertForType:(unsigned long long)arg1;
@property(readonly, nonatomic) int dataUsage;
@property(nonatomic) _Bool usesWiFiNetwork;
@property(nonatomic) _Bool usesEdgeNetwork;
@property(nonatomic) _Bool usesBackgroundNetwork;
@property(readonly, nonatomic, getter=isNowPlayingApplication) _Bool nowPlayingApplication;
@property(nonatomic) _Bool wantsAutoLaunchForVOIP;
@property(nonatomic) id badgeNumberOrString;
@property(nonatomic) _Bool showsProgress;
@property(readonly, nonatomic) UIRemoteApplication *remoteApplication;
@property(copy, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property(readonly, nonatomic, getter=isUninstallSupported) _Bool uninstallSupported;
@property(readonly, nonatomic, getter=isCacheCleaningTerminationAssertionHeld) _Bool cacheCleaningTerminationAssertionHeld;
@property(readonly, nonatomic, getter=isAnyTerminationAssertionHeld) _Bool terminationAssertionHeld;
@property(readonly, nonatomic, getter=isSystemApplication) _Bool systemApplication;
@property(readonly, nonatomic, getter=isInternalApplication) _Bool internalApplication;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *iconIdentifier;
@property(readonly, nonatomic) SBApplicationProcessState *processState;
- (_Bool)isSameExecutableAsApplication:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithApplicationInfo:(id)arg1;
- (struct CGSize)snapshotSizeAdjustedForLegacyStatusBarBasedOnSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2 contentFrame:(struct CGRect *)arg3;
- (struct CGRect)snapshotFrameForClassicInsideBounds:(struct CGRect)arg1 forOrientation:(long long)arg2 scaleFactor:(double *)arg3;
- (void)_noteSnapshotDidUpdate:(long long)arg1;
- (void)_noteSnapshotDidUpdate;
- (void)_protectedDataDidBecomeAvailable:(id)arg1;
- (void)_saveSnapshotForSceneHandle:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSnapshotForContext:(id)arg1;
- (void)deleteAllSnapshots;
- (void)createDownscaledSnapshotFromFullSizeSnapshotForMainScene;
- (void)saveSuspendSnapshot:(id)arg1 forSceneHandle:(id)arg2;
- (void)saveSnapshotForSceneHandle:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)flushSnapshotsForSceneID:(id)arg1;
- (void)flushSnapshotsForAllScenesIncludingAllLegacyImages;
- (void)flushSnapshotsForAllScenes;
- (_Bool)isNewsstandApplication;
- (_Bool)isWebApplication;
- (id)cachedImageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)imageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_snapshotsWithImageName:(id)arg1 sceneHandle:(id)arg2 launchingSize:(struct CGSize)arg3 launchingScale:(double)arg4 contentTypeMask:(unsigned long long)arg5 statusBarStateMask:(unsigned long long)arg6 launchingOrientation:(long long)arg7 contentOverridesContext:(id)arg8;
- (id)mostRecentSceneSnapshotsForSceneHandle:(id)arg1 scale:(double)arg2 launchingOrientation:(long long)arg3;
- (id)bestSnapshotWithImageName:(id)arg1 sceneHandle:(id)arg2 variantID:(id)arg3 scale:(double)arg4 size:(struct CGSize)arg5 contentTypeMask:(unsigned long long)arg6 statusBarStateMask:(unsigned long long)arg7 launchingOrientation:(long long)arg8 contentOverridesContext:(id)arg9;
- (id)_defaultPNGNameFromSuspensionSettingsWithExpiration:(double *)arg1 sceneID:(id)arg2;
- (id)_defaultPNGNameUsingFallbacksWithSceneID:(id)arg1 contentOverridesContext:(id)arg2;
- (id)_normalizeSnapshotName:(id)arg1;
- (id)_defaultLaunchImageBaseName;
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(double)arg4 outScale:(double *)arg5;
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 forMainScene:(_Bool)arg4 size:(struct CGSize)arg5 scale:(double)arg6 outScale:(double *)arg7;
- (void)_ingestInfoPlistImagesInManifest:(id)arg1;
- (void)_ingestDefaultPNGsInManifest:(id)arg1 withLaunchImageBaseName:(id)arg2;
- (void)_purgeStaticDefaultImagesInSnapshotManifest;
- (void)_reingestStaticDefaultImagesInSnapshotManifest;
- (void)_purgeAndResetStaticDefaultImagesInSnapshotManifest;
- (void)_resetLaunchImageIngestionStatus;
- (void)refreshLaunchImagesInSnapshotManifestIfNeeded;
@property(readonly, nonatomic) _Bool isFaceTime;
@property(readonly, nonatomic) _Bool isMobilePhone;
@property(readonly, nonatomic) _Bool isSetup;
@property(readonly, nonatomic) _Bool isSpringBoard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

