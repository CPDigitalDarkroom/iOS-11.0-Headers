//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBFloatingDockRootViewControllerDelegate.h"
#import "SBIconViewQuerying.h"
#import "SBSceneLayoutViewControllerTransitioningDelegate.h"
#import "SBSearchGestureObserver.h"
#import "SBSystemGestureRecognizerDelegate.h"
#import "SBTodayViewPresentationProgressObserver.h"

@class NSPointerArray, NSString, SBFailingSystemGestureRecognizer, SBFloatingDockBehaviorAssertion, SBFloatingDockRootViewController, SBFolderController, SBIconController, SBMainDisplayLayoutState, UIViewController, _UILegibilitySettings;

@interface SBFloatingDockController : NSObject <SBFloatingDockRootViewControllerDelegate, SBSystemGestureRecognizerDelegate, SBSearchGestureObserver, SBTodayViewPresentationProgressObserver, BSDescriptionProviding, SBSceneLayoutViewControllerTransitioningDelegate, SBIconViewQuerying>
{
    SBFloatingDockRootViewController *_viewController;
    SBMainDisplayLayoutState *_effectiveLayoutState;
    _Bool _homeScreenTransitioningToTodayView;
    _Bool _updateTodayViewProgress;
    long long _belowSwitcherAssertionCount;
    NSPointerArray *_FloatingDockBehaviorAssertionsByLevel[8];
    SBFloatingDockBehaviorAssertion *_keyboardFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_inAppFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_todayViewFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_iconPullSearchGestureShowingFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_activeAssertion;
    SBFailingSystemGestureRecognizer *_dismissFloatingDockSystemGestureRecognizer;
    SBIconController *_iconController;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (_Bool)isFloatingDockSupported;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property(readonly, nonatomic) SBFailingSystemGestureRecognizer *dismissFloatingDockSystemGestureRecognizer; // @synthesize dismissFloatingDockSystemGestureRecognizer=_dismissFloatingDockSystemGestureRecognizer;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)releaseDockBelowSwitcherAssertion;
- (void)takeDockBelowSwitcherAssertion;
- (void)didEndTransitionToTodayView;
- (void)willBeginTransitionToTodayView;
- (void)todayViewChangedPercentPresented:(double)arg1;
- (void)searchGesture:(id)arg1 resetAnimated:(_Bool)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 startedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)sceneLayoutControllerDidEndLayoutStateTransition:(id)arg1 wasInterrupted:(_Bool)arg2;
- (void)sceneLayoutController:(id)arg1 didBeginLayoutStateTransitionWithContext:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)floatingDockRootViewController:(id)arg1 modifyProgress:(double)arg2 interactive:(_Bool)arg3;
- (void)floatingDockRootViewController:(id)arg1 floatingDockWantsToBePresented:(_Bool)arg2;
- (void)floatingDockRootViewController:(id)arg1 willChangeToHeight:(double)arg2;
- (_Bool)floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer:(id)arg1;
- (_Bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg1;
- (_Bool)_isPresentationGestureTracking;
- (_Bool)_allowGestureRecognizers;
- (_Bool)_canPresentFloatingDock;
- (void)_dismissFloatingDockIfPresentedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_presentFloatingDockIfDismissedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleSystemGestureRecognizer:(id)arg1;
- (void)_registerSystemGestures;
- (void)_evaluateAssertions:(unsigned long long)arg1 interactive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_indexOfPointerArray:(id)arg1 ofObject:(void *)arg2;
- (void)_updateFloatingDockBehaviorAssertionsInteractive:(_Bool)arg1;
- (void)_removeFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_addFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)layoutUserControlledIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFolderForIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isDisplayingIcon:(id)arg1;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(long long)arg2;
- (id)iconViewForIcon:(id)arg1 location:(long long)arg2;
- (void)dismissFloatingDockIfPresentedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentFloatingDockIfDismissedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SBFolderController *presentedFolderController;
@property(readonly, nonatomic, getter=isPresentingFolder) _Bool presentingFolder;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) struct CGRect floatingDockScreenPresentationFrame;
@property(readonly, nonatomic) struct CGRect floatingDockScreenFrame;
@property(readonly, nonatomic) double translationFromFullyPresentedFrame;
@property(readonly, nonatomic) double preferredVerticalMargin;
@property(readonly, nonatomic) double effectiveFloatingDockHeight;
@property(readonly, nonatomic) double floatingDockHeight;
@property(readonly, nonatomic) double maximumFloatingDockHeight;
@property(readonly, nonatomic, getter=isFloatingDockFullyPresented) _Bool floatingDockFullyPresented;
@property(readonly, nonatomic, getter=isFloatingDockPresented) _Bool floatingDockPresented;
- (id)init;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 transitionCoordinator:(id)arg5 appSuggestionManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

