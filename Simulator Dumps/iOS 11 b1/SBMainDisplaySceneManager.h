//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSceneManager.h"

#import "SBApplicationRestrictionObserver.h"
#import "SBFloatingApplicationControllerInternalDelegate.h"
#import "SBLayoutStateTransitionObserver.h"
#import "SBUnlockedEnvironmentWindowsProvider.h"

@class FBSSceneClientSettingsDiffInspector, NSArray, NSMutableArray, NSMutableSet, NSString, SBFaceContactExpectationManager, SBFloatingApplicationController, SBFloatingApplicationLayoutStateNode, SBMainDisplayLayoutState, SBMainDisplayLayoutStateManager, SBMainDisplayPolicyAggregator, SBMainDisplaySceneLayoutViewController, UIApplicationSceneClientSettingsDiffInspector, UISystemNavigationAction, UIWindow;

@interface SBMainDisplaySceneManager : SBSceneManager <SBApplicationRestrictionObserver, SBFloatingApplicationControllerInternalDelegate, SBLayoutStateTransitionObserver, SBUnlockedEnvironmentWindowsProvider>
{
    SBMainDisplayPolicyAggregator *_policyAggregator;
    SBFloatingApplicationController *_floatingApplicationController;
    UIApplicationSceneClientSettingsDiffInspector *_internalClientSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    long long _validInterfaceOrientation;
    unsigned long long _validInterfaceOrientationChangeCount;
    unsigned long long _processedValidInterfaceOrientationChangeCount;
    SBFaceContactExpectationManager *_faceContactExpectationManager;
    UIWindow *_floatingApplicationWindow;
    NSMutableSet *_requiredContextIdentifiersForMedusaDraggingDestination;
    _Bool _didAddSceneLayoutViewControllerWindowContextIdentifier;
    NSMutableArray *_windows;
    SBFloatingApplicationLayoutStateNode *_mostRecentFloatingApplicationState;
    UISystemNavigationAction *_currentBreadcrumbNavigationAction;
}

+ (Class)_sceneLayoutWindowClass;
+ (Class)_applicationSceneHandleClass;
+ (Class)_layoutStateManagerClass;
@property(retain, nonatomic) UISystemNavigationAction *currentBreadcrumbNavigationAction; // @synthesize currentBreadcrumbNavigationAction=_currentBreadcrumbNavigationAction;
@property(retain, nonatomic, setter=_setMostRecentFloatingApplicationState:) SBFloatingApplicationLayoutStateNode *_mostRecentFloatingApplicationState; // @synthesize _mostRecentFloatingApplicationState;
- (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)floatingApplicationController:(id)arg1 needsVisibleWindow:(_Bool)arg2;
- (id)_floatingApplicationWindow;
- (void)_updateLevelForScene:(id)arg1 transitionContext:(id)arg2;
- (double)_effectiveKeyboardSceneLevelForClientSettings:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_appKilledInAppSwitcher:(id)arg1;
- (void)_applicationDidExit:(id)arg1;
- (_Bool)_animateGeometryChangesForExternalForegroundApplicationScenes;
- (void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(_Bool)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6;
- (id)_rotationAnimationSettingsForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 medusaSettings:(id)arg3;
- (id)_externalClientSettingsDiffInspector;
- (id)_appClientSettingsDiffInspector;
- (id)_internalClientSettingsDiffInspector;
- (_Bool)_isExternalForegroundScene:(id)arg1;
- (void)_removeMedusaDraggingDestinationWindow:(id)arg1;
- (void)_addMedusaDraggingDestinationWindow:(id)arg1;
@property(readonly, nonatomic) NSArray *_requiredContextIdentifiersForMedusaDraggingDestination;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2;
- (_Bool)_shouldRequestSnapshotActionsForScene:(id)arg1;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 forScene:(id)arg2;
- (void)_setupLayoutStateTransitionCoordinator:(id)arg1;
- (id)window;
- (id)_newSceneLayoutViewController;
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (long long)_hostingPolicyForScene:(id)arg1;
- (id)additionalActionsForApplicationSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (_Bool)_isActivatingPinnedBreadcrumbApplicationSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (id)_breadcrumbNavigationActionForApplicationSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 transitionContext:(id)arg3 wasFromSpotlight:(_Bool)arg4 previousBreadcrumb:(id)arg5;
- (void)_activateBreadcrumbApplication:(id)arg1;
- (long long)_openStrategyForAppLinkState:(id)arg1;
- (void)_presentSpotlightFromSource:(unsigned long long)arg1 fromBreadcrumb:(_Bool)arg2;
- (void)_presentAssistantFromBreadcrumb;
- (id)_destinationContextsForApplicationSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (id)_breadcrumbBundleIdForApplicationSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (_Bool)_shouldBreadcrumbApplicationSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)_reorderWindows;
- (void)registerWindow:(id)arg1;
@property(readonly, nonatomic) NSArray *windows;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)existingSceneHandleForSceneIdentity:(id)arg1;
- (id)existingSceneHandleForScene:(id)arg1;
- (id)externalForegroundApplicationSceneHandles;
- (id)externalApplicationSceneHandles;
@property(readonly, nonatomic) SBFloatingApplicationController *floatingApplicationController;
@property(readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
- (void)dealloc;
- (id)initWithReference:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SBMainDisplayLayoutStateManager *_layoutStateManager; // @dynamic _layoutStateManager;
@property(readonly, nonatomic) SBMainDisplayLayoutState *currentLayoutState; // @dynamic currentLayoutState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @dynamic sceneLayoutViewController;
@property(readonly) Class superclass;

@end

