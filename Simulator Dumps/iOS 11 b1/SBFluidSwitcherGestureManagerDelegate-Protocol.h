//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFluidSwitcherGestureManager, SBFluidSwitcherGestureWorkspaceTransaction;

@protocol SBFluidSwitcherGestureManagerDelegate <NSObject>
- (_Bool)shouldBeginGestureForGestureManager:(SBFluidSwitcherGestureManager *)arg1;
- (void)gestureManager:(SBFluidSwitcherGestureManager *)arg1 didEndGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg2;
- (void)gestureManager:(SBFluidSwitcherGestureManager *)arg1 didBeginGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg2;
@end

