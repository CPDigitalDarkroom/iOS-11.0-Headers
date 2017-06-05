//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseStartupTransition.h"

@class SBApplicationController, SBBulletinWindowController, SBFUserAuthenticationController, SBInitialRestartState, SBLockScreenManager, SBOrientationLockManager, SBSetupManager;

@interface SBStartupTransitionToSetup : SBBaseStartupTransition
{
    SBBulletinWindowController *_bulletinWindowController;
    SBFUserAuthenticationController *_authController;
    SBOrientationLockManager *_orientationLockManager;
    SBApplicationController *_appController;
    SBSetupManager *_setupManager;
    SBLockScreenManager *_lockScreenManager;
    SBInitialRestartState *_initialRestartState;
}

- (void).cxx_destruct;
- (void)_activateSetupWithCompletion:(CDUnknownBlockType)arg1 underLock:(_Bool)arg2 fromSnapshot:(_Bool)arg3;
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 initialRestartState:(id)arg3;

@end

