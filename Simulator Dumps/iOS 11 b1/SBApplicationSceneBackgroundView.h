//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBApplicationSceneBackgroundView.h"

@class NSString, SBWallpaperEffectView;

@interface SBApplicationSceneBackgroundView : UIView <SBApplicationSceneBackgroundView>
{
    long long _wallpaperStyle;
    SBWallpaperEffectView *_backgroundWallpaperEffectView;
}

@property(nonatomic) long long wallpaperStyle; // @synthesize wallpaperStyle=_wallpaperStyle;
- (void).cxx_destruct;
- (void)_teardownBackgroundWallpaperEffectView;
- (id)_backgroundWallpaperEffectView;
- (void)_setupBackground;
- (_Bool)_isTranslucent;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

