//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "NSObject.h"

@protocol SBIdleTimer <NSObject, NSCopying, BSDescriptionProviding>
- (void)removeAllIdleTimerObservers;
- (void)removeIdleTimerObserver:(id <SBIdleTimerObserving>)arg1;
- (void)addIdleTimerObserver:(id <SBIdleTimerObserving>)arg1;
- (void)reset;
@end

