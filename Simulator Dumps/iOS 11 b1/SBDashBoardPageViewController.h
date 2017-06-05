//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPresentationViewController.h"

#import "SBDashBoardPageViewControllerProtocol.h"

@class NSArray, NSSet, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardPresentation, UIColor, _UILegibilitySettings;

@interface SBDashBoardPageViewController : SBDashBoardPresentationViewController <SBDashBoardPageViewControllerProtocol>
{
    id <SBDashBoardViewControllerProtocol> _dashBoardViewController;
    _Bool _transitioning;
    _Bool _authenticated;
}

+ (unsigned long long)requiredCapabilities;
+ (_Bool)isAvailableForConfiguration;
+ (Class)viewClass;
@property(readonly, nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController; // @synthesize dashBoardViewController=_dashBoardViewController;
- (void).cxx_destruct;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long participantState;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (void)didTransitionToVisible:(_Bool)arg1;
- (void)updateTransitionToVisible:(_Bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)willTransitionToVisible:(_Bool)arg1;
- (id)pageView;
- (id)view;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) SBDashBoardAppearance *activeAppearance;
@property(readonly, copy, nonatomic) SBDashBoardBehavior *activeBehavior;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SBDashBoardPresentation *externalPresentation;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly) Class superclass;

@end

