//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UIVisualEffectView;

@interface SBFolderControllerBackgroundView : UIView
{
    UIVisualEffectView *_blurView;
    UIImageView *_blurViewSnapshot;
    UIView *_reduceTransparencyTintView;
    UIView *_debugFreezingView;
    _Bool _transitionCancelled;
    _Bool _effectActive;
    _Bool _expanding;
    _Bool _frozen;
    _Bool _reduceTransparencyEnabled;
    unsigned long long _effect;
    unsigned long long _currentEffect;
}

+ (_Bool)_deviceSupportsOpaqueFrozenBlurs;
+ (double)blurRadiusForBackgroundViewInView:(id)arg1;
@property(nonatomic) unsigned long long currentEffect; // @synthesize currentEffect=_currentEffect;
@property(nonatomic, getter=isReduceTransparencyEnabled) _Bool reduceTransparencyEnabled; // @synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled;
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic) _Bool expanding; // @synthesize expanding=_expanding;
@property(nonatomic, getter=isEffectActive) _Bool effectActive; // @synthesize effectActive=_effectActive;
@property(nonatomic) unsigned long long effect; // @synthesize effect=_effect;
@property(nonatomic) _Bool transitionCancelled; // @synthesize transitionCancelled=_transitionCancelled;
- (void).cxx_destruct;
- (_Bool)_isCurrentlyExpanding;
- (void)_updateCurrentEffect;
- (id)_effectiveEmptyEffect;
- (id)_blurEffect;
- (double)_effectScale;
@property(readonly, nonatomic) unsigned long long concreteEffect;
- (void)layoutSubviews;
- (void)_reduceTransparencyEnabledStateChanged;
- (id)initWithFrame:(struct CGRect)arg1;

@end
