//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBDashBoardNotificationClearingTrigger : NSObject
{
    _Bool _authenticated;
    _Bool _uiLocked;
    _Bool _screenOff;
    _Bool _triggerArmed;
    id <SBDashBoardNotificationClearingTriggerDelegate> _delegate;
}

@property(nonatomic) _Bool triggerArmed; // @synthesize triggerArmed=_triggerArmed;
@property(nonatomic) _Bool screenOff; // @synthesize screenOff=_screenOff;
@property(nonatomic) _Bool uiLocked; // @synthesize uiLocked=_uiLocked;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) __weak id <SBDashBoardNotificationClearingTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearIfNeeded;
- (_Bool)_shouldFire;
- (void)_updateTriggerAndClearIfNeeded;
- (void)_reset;
- (id)initWithDelegate:(id)arg1;

@end

