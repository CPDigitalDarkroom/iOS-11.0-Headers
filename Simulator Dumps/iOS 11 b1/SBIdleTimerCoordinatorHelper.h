//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface SBIdleTimerCoordinatorHelper : NSObject
{
    id <SBIdleTimerProviding> _sourceProvider;
    id <SBIdleTimerCoordinating> _targetCoordinator;
    NSMapTable *_idleTimerCache;
}

@property(readonly, nonatomic) NSMapTable *idleTimerCache; // @synthesize idleTimerCache=_idleTimerCache;
@property(nonatomic) __weak id <SBIdleTimerCoordinating> targetCoordinator; // @synthesize targetCoordinator=_targetCoordinator;
@property(nonatomic) __weak id <SBIdleTimerProviding> sourceProvider; // @synthesize sourceProvider=_sourceProvider;
- (void).cxx_destruct;
- (id)_updateProviderInfo:(id)arg1 descriptor:(id)arg2 reason:(id)arg3;
- (id)_updateProvider:(id)arg1 descriptor:(id)arg2 reason:(id)arg3;
- (void)removeProvider:(id)arg1;
- (id)updateProvider:(id)arg1 descriptor:(id)arg2 reason:(id)arg3;
- (id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3;
- (id)proposeIdleTimerDescriptor:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3;
- (_Bool)hasProvider:(id)arg1;
- (id)initWithSourceProvider:(id)arg1;
- (id)init;

@end

