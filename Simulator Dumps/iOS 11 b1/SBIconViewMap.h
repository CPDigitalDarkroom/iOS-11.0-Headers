//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBReusableViewMap.h"

#import "SBIconIndexNodeObserver.h"
#import "SBIconObserver.h"
#import "SBIconViewObserver.h"

@class NSMapTable, NSString, SBIconModel, UIScreen, _UILegibilitySettings;

@interface SBIconViewMap : SBReusableViewMap <SBIconObserver, SBIconIndexNodeObserver, SBIconViewObserver>
{
    UIScreen *_screen;
    SBIconModel *_model;
    NSMapTable *_iconViewsForIcons;
    id <SBIconViewMapDelegate> _delegate;
    id <SBIconViewDelegate> _viewDelegate;
    NSMapTable *_labelsForIcons;
    NSMapTable *_lightLegibilityImagesForIcons;
    NSMapTable *_darkLegibilityImagesForIcons;
    NSMapTable *_accessoryImagesForIcons;
    _UILegibilitySettings *_legibilitySettings;
}

@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) SBIconModel *iconModel; // @synthesize iconModel=_model;
- (void).cxx_destruct;
- (void)iconViewDidChangeLocation:(id)arg1;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)_modelDidLayoutIconState;
- (void)_modelWillLayoutIconState;
- (void)_modelWillReloadIcons;
- (void)_modelWillRemoveIcon:(id)arg1;
- (void)_sizeCategoryDidChange:(id)arg1;
- (void)enumerateMappedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_observeIconAndCacheIfNecessary:(id)arg1;
- (void)_cacheAccessoryImagesForIcon:(id)arg1 location:(long long)arg2;
- (void)_cacheLabelImagesForIcon:(id)arg1 location:(long long)arg2;
- (void)_cacheImagesForIcon:(id)arg1;
- (void)purgeRecycledIconViewsForClass:(Class)arg1;
- (void)recycleAndPurgeAll;
- (void)recycleIconView:(id)arg1;
- (id)extraIconViewForIcon:(id)arg1;
- (void)removeMappedIconViewForIcon:(id)arg1;
- (void)setMappedIconView:(id)arg1 forIcon:(id)arg2;
- (void)recycleViewForIcon:(id)arg1;
- (void)_recycleIconView:(id)arg1;
- (void)purgeIconFromMap:(id)arg1;
- (void)_addIconView:(id)arg1 forIcon:(id)arg2;
- (void)tryToReplaceIcon:(id)arg1 withIcon:(id)arg2;
- (id)iconViewForIcon:(id)arg1;
- (id)_iconViewForIcon:(id)arg1;
- (_Bool)_shouldCreateViewForIcon:(id)arg1;
- (id)newViewOfClass:(Class)arg1;
- (id)mappedIconViewForIcon:(id)arg1;
- (void)invalidate;
- (id)allIcons;
- (void)dealloc;
- (id)initWithIconModel:(id)arg1 screen:(id)arg2 delegate:(id)arg3 viewDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

