//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface SBAppSwitcherRemoteAlertSet : NSObject <NSCopying>
{
    NSMutableArray *_alerts;
}

- (void).cxx_destruct;
- (id)appLayouts;
- (id)serviceBundleIdentifiers;
- (id)alertForAppLayout:(id)arg1;
- (id)alertForBundleIdentifier:(id)arg1;
- (id)alertAtIndex:(unsigned long long)arg1;
- (_Bool)containsAlert:(id)arg1;
- (unsigned long long)count;
- (void)removeRemoteAlert:(id)arg1;
- (void)addRemoteAlert:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlertSet:(id)arg1 zone:(struct _NSZone *)arg2;

@end

