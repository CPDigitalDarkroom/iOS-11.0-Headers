//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

@class FBUIApplicationSceneDeactivationAssertion, SBFloatingApplicationRootViewController, SBMainWorkspaceTransaction, UIPanGestureRecognizer;

@interface SBMoveFloatingApplicationPanSystemGestureRecognizerWorkspaceTransaction : SBSystemGestureWorkspaceTransaction
{
    FBUIApplicationSceneDeactivationAssertion *_applicationSceneDeactivationAssertion;
    double _systemGestureRecognizerBeganValue;
    SBMainWorkspaceTransaction *_layoutStateTransitionWorkspaceTransaction;
    SBFloatingApplicationRootViewController *_floatingApplicationRootViewController;
    UIPanGestureRecognizer *_panSystemGestureRecognizer;
    long long _initialFloatingConfiguration;
}

+ (double)prototypeSettingsMovePanGestureNegativeVelocityThreshold;
+ (double)prototypeSettingsMovePanGesturePositiveVelocityThreshold;
+ (double)prototypeSettingsMovePanGestureThresholdPercentage;
+ (double)prototypeSettingsInteractiveAnimationSpringFriction;
+ (double)prototypeSettingsInteractiveAnimationSpringTension;
+ (double)prototypeSettingsAnimationSpringFriction;
+ (double)prototypeSettingsAnimationSpringTension;
+ (double)prototypeSettingsGestureRubberbandCoefficient;
+ (double)prototypeSettingsHorizontalMargin;
@property(readonly, nonatomic) long long initialFloatingConfiguration; // @synthesize initialFloatingConfiguration=_initialFloatingConfiguration;
@property(readonly, nonatomic) UIPanGestureRecognizer *panSystemGestureRecognizer; // @synthesize panSystemGestureRecognizer=_panSystemGestureRecognizer;
@property(readonly, nonatomic) __weak SBFloatingApplicationRootViewController *floatingApplicationRootViewController; // @synthesize floatingApplicationRootViewController=_floatingApplicationRootViewController;
- (void).cxx_destruct;
- (double)_deviceApplicationSceneViewShadowOffsetWithFloatingApplicationViewCenterX:(double)arg1;
- (double)_floatingApplicationViewDarkenViewAlphaWithFloatingApplicationViewCenterX:(double)arg1;
- (double)_floatingApplicationViewCenterXWithTranslation:(double)arg1;
- (void)_updateUserInterfaceAfterLayoutStateTransitionWithFloatingConfiguration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateUserInterfaceBeforeLayoutStateTransitionWithFloatingConfiguration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateUserInterfaceWithTranslation:(double)arg1 velocity:(double)arg2 systemGestureRecognizerBegan:(_Bool)arg3;
- (long long)_floatingConfigurationWithTranslation:(double)arg1 velocity:(double)arg2;
- (double)_systemGestureRecognizerVelocity;
- (double)_systemGestureRecognizerTranslation;
- (id)_layoutStateTransitionWorkspaceTransactionForFloatingConfiguration:(long long)arg1;
- (void)_systemGestureRecognizerFailed;
- (void)_systemGestureRecognizerEnded;
- (void)_systemGestureRecognizerChanged;
- (void)_systemGestureRecognizerBegan;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 floatingApplicationRootViewController:(id)arg2 panSystemGestureRecognizer:(id)arg3 initialFloatingConfiguration:(long long)arg4;

@end

