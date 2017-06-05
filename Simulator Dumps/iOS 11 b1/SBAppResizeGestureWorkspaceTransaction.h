//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

@class FBUIApplicationSceneDeactivationAssertion, NSMutableArray, NSSet, SBBlurViewCoordinator, SBLayoutElementViewController, SBMainDisplaySceneLayoutViewController, SBMainWorkspaceTransaction;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction
{
    NSMutableArray *_transactionCompletionBlocks;
    NSMutableArray *_finalActionCompletionBlocks;
    double _previousSlideOffPercent;
    NSSet *_fromApplicationSceneEntities;
    NSSet *_toApplicationSceneEntitiesSuspendPrimary;
    NSSet *_toApplicationSceneEntitiesSuspendSide;
    double _absoluteDistanceTraveled;
    struct CGPoint _previousLocation;
    _Bool _isSceneLayoutViewControllerPushedIn;
    _Bool _resizingSpeculatively;
    _Bool _hasResizedSpeculatively;
    _Bool _performingFinalAction;
    SBMainDisplaySceneLayoutViewController *_layoutViewController;
    SBLayoutElementViewController *_primaryLayoutElementController;
    SBLayoutElementViewController *_sideLayoutElementController;
    FBUIApplicationSceneDeactivationAssertion *_appDeactivationAssertion;
    SBBlurViewCoordinator *_blurCoordinator;
    long long _lastResizeGestureRegion;
    SBMainWorkspaceTransaction *_currentWorkspaceTransaction;
    unsigned long long _pendingFinalActionCount;
    unsigned long long _currentGestureIdentifier;
}

+ (double)_rubberbandingStartScreenEdgeMargin;
+ (double)prototypeSettingsInteractiveAnimationSpringFriction;
+ (double)prototypeSettingsInteractiveAnimationSpringTension;
+ (double)prototypeSettingsAnimationSpringFriction;
+ (double)prototypeSettingsAnimationSpringTension;
+ (double)prototypeSettingsBlurFadeAnimationDuration;
@property(nonatomic) unsigned long long currentGestureIdentifier; // @synthesize currentGestureIdentifier=_currentGestureIdentifier;
@property(nonatomic) unsigned long long pendingFinalActionCount; // @synthesize pendingFinalActionCount=_pendingFinalActionCount;
@property(nonatomic, getter=isPerformingFinalAction) _Bool performingFinalAction; // @synthesize performingFinalAction=_performingFinalAction;
@property(nonatomic) _Bool hasResizedSpeculatively; // @synthesize hasResizedSpeculatively=_hasResizedSpeculatively;
@property(nonatomic, getter=isResizingSpeculatively) _Bool resizingSpeculatively; // @synthesize resizingSpeculatively=_resizingSpeculatively;
@property(retain, nonatomic) SBMainWorkspaceTransaction *currentWorkspaceTransaction; // @synthesize currentWorkspaceTransaction=_currentWorkspaceTransaction;
@property(nonatomic) long long lastResizeGestureRegion; // @synthesize lastResizeGestureRegion=_lastResizeGestureRegion;
@property(retain, nonatomic) SBBlurViewCoordinator *blurCoordinator; // @synthesize blurCoordinator=_blurCoordinator;
@property(readonly, nonatomic) FBUIApplicationSceneDeactivationAssertion *appDeactivationAssertion; // @synthesize appDeactivationAssertion=_appDeactivationAssertion;
@property(readonly, nonatomic) SBLayoutElementViewController *sideLayoutElementController; // @synthesize sideLayoutElementController=_sideLayoutElementController;
@property(readonly, nonatomic) SBLayoutElementViewController *primaryLayoutElementController; // @synthesize primaryLayoutElementController=_primaryLayoutElementController;
@property(readonly, nonatomic) SBMainDisplaySceneLayoutViewController *layoutViewController; // @synthesize layoutViewController=_layoutViewController;
- (void).cxx_destruct;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_performWhenCurrentFinalActionCompletesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_performWhenCurrentWorkspaceTransactionCompletesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (id)_transactionForExecutingApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2;
- (void)_updateElementViewsAlphaAndGrabberForGestureRegion:(long long)arg1;
- (struct CGRect)_appFrameForElementWithRole:(long long)arg1 inLayoutState:(id)arg2 spaceConfiguration:(long long)arg3 inCoordinateSpace:(id)arg4 withHeight:(double)arg5;
- (void)_animateElementViewsForFinalAction:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_transitionContextForFinalAction:(long long)arg1;
- (long long)_finalActionForGestureRegion:(long long)arg1;
- (void)_performFinalAction:(long long)arg1;
- (void)_resizeGestureFinishedWithFinalAction:(long long)arg1;
- (void)_resizeGestureFinishedWithState:(long long)arg1 gestureDividerPosition:(double)arg2 gestureVelocity:(double)arg3;
- (void)_updateResizeUIFromGestureRecognizer:(id)arg1;
- (void)_restartResizeUI;
- (double)_dividerPositionFromPanGestureRecognizer:(id)arg1;
- (void)_resizeGestureDidUpdate:(id)arg1;
- (struct CGRect)_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGRect)arg1;
- (long long)_layoutModeForGestureRegion:(long long)arg1;
- (long long)_spaceConfigurationForGestureRegion:(long long)arg1;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forResizeGestureRegion:(long long)arg4 location:(double)arg5 allowRubberbanding:(_Bool)arg6;
- (double)_maxRubberBandOffset;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;
- (_Bool)_canResizeToHalfHalf;
- (_Bool)_canResizeToNarrowWide;
- (long long)_resizeGestureRegionForLocation:(double)arg1;
- (void)_popOutSceneLayoutViewController;
- (void)_pushInSceneLayoutViewController;
- (void)_dismissResizeUIAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 layoutViewController:(id)arg2;

@end

