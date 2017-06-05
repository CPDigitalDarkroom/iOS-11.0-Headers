//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBViewControllerPercentCompletionReporting.h"
#import "SBViewControllerReversibleAnimatedTransitioning.h"

@protocol SBViewControllerInteractiveAnimatedTransitioning <SBViewControllerReversibleAnimatedTransitioning, SBViewControllerPercentCompletionReporting>
- (void)finishInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id <SBViewControllerContextTransitioning>)arg1 withPercentComplete:(double)arg2;
@end

