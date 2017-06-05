//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBLockScreenViewControllerBase *_lockScreenController;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    CDUnknownBlockType _alertActivationCompletion;
}

- (void).cxx_destruct;
- (_Bool)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_callAndClearAlertActivationCompletionIfNecessary;
- (void)_endTransition;
- (void)_didComplete;
- (void)_lockScreenDidActivate;
- (void)_setupAndActivate;
- (void)_activateLockScreen;
- (void)_begin;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 lockScreenController:(id)arg2;

@end

