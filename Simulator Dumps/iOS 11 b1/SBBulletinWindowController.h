//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, SBBulletinRootViewController, UIViewController, UIWindow;

@interface SBBulletinWindowController : NSObject
{
    UIWindow *_bulletinWindow;
    _Bool _rotatingKeyboard;
    _Bool _aboveAssistant;
    NSMutableSet *_windowClients;
    NSMutableSet *_keyClients;
    NSMutableSet *_busyClients;
    NSMutableSet *_busyReasons;
    SBBulletinRootViewController *_rootVC;
    _Bool _wantsKeyWindow;
}

+ (_Bool)_isSecure;
+ (id)sharedInstance;
@property(nonatomic, getter=_wantsKeyWindow, setter=_setWantsKeyWindow:) _Bool wantsKeyWindow; // @synthesize wantsKeyWindow=_wantsKeyWindow;
@property(nonatomic, getter=isWindowAboveAssistant) _Bool windowAboveAssistant; // @synthesize windowAboveAssistant=_aboveAssistant;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_bulletinWindow;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootVC;
- (void).cxx_destruct;
- (_Bool)_hasKeyWindowClients;
- (void)updateKeyWindowStatusIfNecessary;
- (void)removeBusyClient:(id)arg1;
- (void)addBusyClient:(id)arg1;
- (void)removeWindowClient:(id)arg1;
- (void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)addWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)addWindowClient:(id)arg1;
- (void)_didResignKeyWindow:(id)arg1;
- (void)_didBecomeKeyWindow:(id)arg1;
- (void)_resignAsKeyWindow;
- (void)_becomeKeyWindow;
- (_Bool)_isBusyForReason:(id)arg1;
- (_Bool)isBusy;
- (void)setBusy:(_Bool)arg1 forReason:(id)arg2;
- (void)dealloc;
- (id)init;

@end

