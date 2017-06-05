//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBIconController, SBRecentAppLayouts;

@interface SBAppSwitcherModel : NSObject
{
    SBIconController *_iconController;
    SBRecentAppLayouts *_recents;
    id _recentsChangedNotificationObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)mainSwitcherAppLayouts;
- (void)_warmUpIconsForAppLayout:(id)arg1;
- (void)_warmUpIconsForRecentAppLayouts:(id)arg1;
- (void)remove:(id)arg1;
- (void)addToFront:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 recents:(id)arg4;

@end

