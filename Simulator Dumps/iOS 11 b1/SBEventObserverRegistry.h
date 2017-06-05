//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SBEventObserverRegistry : NSObject
{
    void *_provider;
    NSMutableDictionary *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setValue:(_Bool)arg1 forState:(struct __CFString *)arg2;
- (void)postEventToInterestedObservers:(struct __CFString *)arg1;
- (void)removeObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2;
- (void)addObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2;
- (id)init;
- (void)handleEvent:(id)arg1 token:(unsigned long long)arg2 action:(void *)arg3;

@end

