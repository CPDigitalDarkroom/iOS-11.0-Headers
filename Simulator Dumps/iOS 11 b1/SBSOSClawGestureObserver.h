//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSTimer, NSMutableSet, SBClawGestureLogger, SBSOSDefaults, SOSManager;

@interface SBSOSClawGestureObserver : NSObject
{
    SOSManager *_sosManager;
    _Bool _sosActivated;
    _Bool _sosEnabled;
    NSMutableSet *_activePressTypes;
    SBClawGestureLogger *_clawGestureLogger;
    id <SBSOSClawGestureObserverDelegate> _delegate;
    SBSOSDefaults *_sosDefaults;
    BSTimer *_sosTriggerTimer;
}

@property(retain, nonatomic) BSTimer *sosTriggerTimer; // @synthesize sosTriggerTimer=_sosTriggerTimer;
@property(nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) _Bool sosEnabled; // @synthesize sosEnabled=_sosEnabled;
@property(readonly, nonatomic) SBSOSDefaults *sosDefaults; // @synthesize sosDefaults=_sosDefaults;
@property(nonatomic, getter=isSOSActivated, setter=setSOSActivated:) _Bool sosActivated; // @synthesize sosActivated=_sosActivated;
@property(nonatomic) __weak id <SBSOSClawGestureObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBClawGestureLogger *clawGestureLogger; // @synthesize clawGestureLogger=_clawGestureLogger;
@property(retain, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
- (void).cxx_destruct;
- (void)_sosInitiationStateChanged;
- (void)_presentSOSWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isAutomaticCallCountdownEnabled;
- (void)_presentSOSInterface;
@property(readonly, nonatomic, getter=isClawActivated) _Bool clawActivated;
@property(nonatomic, getter=isGestureLoggingEnabled) _Bool gestureLoggingEnabled;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (id)_initWithSOSManager:(id)arg1;
- (id)init;

@end

