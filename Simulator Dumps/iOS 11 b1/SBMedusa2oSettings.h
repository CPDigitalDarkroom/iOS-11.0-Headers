//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBMedusa2oSettings : SBUISettings
{
    _Bool _persistentDock;
    _Bool _pinPanGestureShowsActualPreview;
    _Bool _unpinPanGestureHitTestNarrowWidth;
    double _numberOfRecents;
    double _cornerRadius;
    double _horizontalMargin;
    double _verticalMargin;
    double _diffuseShadowOpacity;
    double _diffuseShadowOffset;
    double _diffuseShadowRadius;
    double _rimShadowOpacity;
    double _rimShadowRadius;
    double _hitTestHorizontalMargin;
    double _hitTestVerticalMargin;
    double _hitTestHorizontalPadding;
    double _hitTestVerticalPadding;
    double _fullScreenEdgeInset;
    double _blurFadeAnimationDuration;
    double _gestureRubberbandCoefficient;
    double _animationSpringTension;
    double _animationSpringFriction;
    double _interactiveAnimationSpringTension;
    double _interactiveAnimationSpringFriction;
    double _movePanGestureThresholdPercentage;
    double _movePanGesturePositiveVelocityThreshold;
    double _movePanGestureNegativeVelocityThreshold;
    double _unpinPanGestureHitTestWidth;
    double _panGestureTravelDistance;
    double _panGestureThresholdPercentage;
    double _gestureMaximumScale;
}

+ (id)settingsControllerModule;
@property(nonatomic) double gestureMaximumScale; // @synthesize gestureMaximumScale=_gestureMaximumScale;
@property(nonatomic) double panGestureThresholdPercentage; // @synthesize panGestureThresholdPercentage=_panGestureThresholdPercentage;
@property(nonatomic) double panGestureTravelDistance; // @synthesize panGestureTravelDistance=_panGestureTravelDistance;
@property(nonatomic) _Bool unpinPanGestureHitTestNarrowWidth; // @synthesize unpinPanGestureHitTestNarrowWidth=_unpinPanGestureHitTestNarrowWidth;
@property(nonatomic) double unpinPanGestureHitTestWidth; // @synthesize unpinPanGestureHitTestWidth=_unpinPanGestureHitTestWidth;
@property(nonatomic) _Bool pinPanGestureShowsActualPreview; // @synthesize pinPanGestureShowsActualPreview=_pinPanGestureShowsActualPreview;
@property(nonatomic) double movePanGestureNegativeVelocityThreshold; // @synthesize movePanGestureNegativeVelocityThreshold=_movePanGestureNegativeVelocityThreshold;
@property(nonatomic) double movePanGesturePositiveVelocityThreshold; // @synthesize movePanGesturePositiveVelocityThreshold=_movePanGesturePositiveVelocityThreshold;
@property(nonatomic) double movePanGestureThresholdPercentage; // @synthesize movePanGestureThresholdPercentage=_movePanGestureThresholdPercentage;
@property(nonatomic) double interactiveAnimationSpringFriction; // @synthesize interactiveAnimationSpringFriction=_interactiveAnimationSpringFriction;
@property(nonatomic) double interactiveAnimationSpringTension; // @synthesize interactiveAnimationSpringTension=_interactiveAnimationSpringTension;
@property(nonatomic) double animationSpringFriction; // @synthesize animationSpringFriction=_animationSpringFriction;
@property(nonatomic) double animationSpringTension; // @synthesize animationSpringTension=_animationSpringTension;
@property(nonatomic) double gestureRubberbandCoefficient; // @synthesize gestureRubberbandCoefficient=_gestureRubberbandCoefficient;
@property(nonatomic) double blurFadeAnimationDuration; // @synthesize blurFadeAnimationDuration=_blurFadeAnimationDuration;
@property(nonatomic) double fullScreenEdgeInset; // @synthesize fullScreenEdgeInset=_fullScreenEdgeInset;
@property(nonatomic) double hitTestVerticalPadding; // @synthesize hitTestVerticalPadding=_hitTestVerticalPadding;
@property(nonatomic) double hitTestHorizontalPadding; // @synthesize hitTestHorizontalPadding=_hitTestHorizontalPadding;
@property(nonatomic) double hitTestVerticalMargin; // @synthesize hitTestVerticalMargin=_hitTestVerticalMargin;
@property(nonatomic) double hitTestHorizontalMargin; // @synthesize hitTestHorizontalMargin=_hitTestHorizontalMargin;
@property(nonatomic) double rimShadowRadius; // @synthesize rimShadowRadius=_rimShadowRadius;
@property(nonatomic) double rimShadowOpacity; // @synthesize rimShadowOpacity=_rimShadowOpacity;
@property(nonatomic) double diffuseShadowRadius; // @synthesize diffuseShadowRadius=_diffuseShadowRadius;
@property(nonatomic) double diffuseShadowOffset; // @synthesize diffuseShadowOffset=_diffuseShadowOffset;
@property(nonatomic) double diffuseShadowOpacity; // @synthesize diffuseShadowOpacity=_diffuseShadowOpacity;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double numberOfRecents; // @synthesize numberOfRecents=_numberOfRecents;
@property(nonatomic) _Bool persistentDock; // @synthesize persistentDock=_persistentDock;
- (void)setDefaultValues;

@end

