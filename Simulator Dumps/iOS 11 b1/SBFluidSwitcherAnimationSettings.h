//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBFluidBehaviorSettings;

@interface SBFluidSwitcherAnimationSettings : SBUISettings
{
    _Bool _animateAppSelectionDimming;
    SBFluidBehaviorSettings *_layoutSettings;
    SBFluidBehaviorSettings *_zoomUpSettings;
    SBFluidBehaviorSettings *_iconZoomDownSettings;
    SBFluidBehaviorSettings *_gestureInitiatedZoomDownSettings;
    SBFluidBehaviorSettings *_centerZoomSettings;
    SBFluidBehaviorSettings *_slideOverSettings;
    SBFluidBehaviorSettings *_dosidoSettings;
    SBFluidBehaviorSettings *_arcSwipeSettings;
    SBFluidBehaviorSettings *_toggleAppSwitcherSettings;
    SBFluidBehaviorSettings *_launchAppFromSwitcherSettings;
    SBFluidBehaviorSettings *_homeScreenBlurSettings;
    SBFluidBehaviorSettings *_homeScreenOpacitySettings;
    SBFluidBehaviorSettings *_homeScreenScaleSettings;
    SBFluidBehaviorSettings *_opacitySettings;
    SBFluidBehaviorSettings *_centerZoomOpacitySettings;
    SBFluidBehaviorSettings *_wallpaperScaleSettings;
    SBFluidBehaviorSettings *_appSelectionSquishSettings;
    SBFluidBehaviorSettings *_appSelectionDimSettings;
    SBFluidBehaviorSettings *_closeBoxAppearanceSettings;
    double _asynchronousRenderingLayoutSpringEstimatedFullscreenPercentage;
    double _homeScreenBlurInSwitcher;
    double _homeScreenBlurInApplication;
    double _homeScreenOpacityInSwitcher;
    double _homeScreenOpacityInApplication;
    double _homeScreenScaleInSwitcher;
    double _homeScreenScaleInApplication;
    double _wallpaperScaleInSwitcher;
    double _wallpaperScaleInApplication;
    double _dockHurdlingIconZoomInitialVelocity;
    double _dockHurdlingIconZoomDockToBackTiming;
    double _homeToSwitcherScaleRubberBandDimension;
}

+ (id)settingsControllerModule;
@property(nonatomic) double homeToSwitcherScaleRubberBandDimension; // @synthesize homeToSwitcherScaleRubberBandDimension=_homeToSwitcherScaleRubberBandDimension;
@property(nonatomic) double dockHurdlingIconZoomDockToBackTiming; // @synthesize dockHurdlingIconZoomDockToBackTiming=_dockHurdlingIconZoomDockToBackTiming;
@property(nonatomic) double dockHurdlingIconZoomInitialVelocity; // @synthesize dockHurdlingIconZoomInitialVelocity=_dockHurdlingIconZoomInitialVelocity;
@property(nonatomic) double wallpaperScaleInApplication; // @synthesize wallpaperScaleInApplication=_wallpaperScaleInApplication;
@property(nonatomic) double wallpaperScaleInSwitcher; // @synthesize wallpaperScaleInSwitcher=_wallpaperScaleInSwitcher;
@property(nonatomic) double homeScreenScaleInApplication; // @synthesize homeScreenScaleInApplication=_homeScreenScaleInApplication;
@property(nonatomic) double homeScreenScaleInSwitcher; // @synthesize homeScreenScaleInSwitcher=_homeScreenScaleInSwitcher;
@property(nonatomic) double homeScreenOpacityInApplication; // @synthesize homeScreenOpacityInApplication=_homeScreenOpacityInApplication;
@property(nonatomic) double homeScreenOpacityInSwitcher; // @synthesize homeScreenOpacityInSwitcher=_homeScreenOpacityInSwitcher;
@property(nonatomic) double homeScreenBlurInApplication; // @synthesize homeScreenBlurInApplication=_homeScreenBlurInApplication;
@property(nonatomic) double homeScreenBlurInSwitcher; // @synthesize homeScreenBlurInSwitcher=_homeScreenBlurInSwitcher;
@property(nonatomic) double asynchronousRenderingLayoutSpringEstimatedFullscreenPercentage; // @synthesize asynchronousRenderingLayoutSpringEstimatedFullscreenPercentage=_asynchronousRenderingLayoutSpringEstimatedFullscreenPercentage;
@property(retain, nonatomic) SBFluidBehaviorSettings *closeBoxAppearanceSettings; // @synthesize closeBoxAppearanceSettings=_closeBoxAppearanceSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *appSelectionDimSettings; // @synthesize appSelectionDimSettings=_appSelectionDimSettings;
@property(nonatomic) _Bool animateAppSelectionDimming; // @synthesize animateAppSelectionDimming=_animateAppSelectionDimming;
@property(retain, nonatomic) SBFluidBehaviorSettings *appSelectionSquishSettings; // @synthesize appSelectionSquishSettings=_appSelectionSquishSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *wallpaperScaleSettings; // @synthesize wallpaperScaleSettings=_wallpaperScaleSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *centerZoomOpacitySettings; // @synthesize centerZoomOpacitySettings=_centerZoomOpacitySettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *opacitySettings; // @synthesize opacitySettings=_opacitySettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *homeScreenScaleSettings; // @synthesize homeScreenScaleSettings=_homeScreenScaleSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *homeScreenOpacitySettings; // @synthesize homeScreenOpacitySettings=_homeScreenOpacitySettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *homeScreenBlurSettings; // @synthesize homeScreenBlurSettings=_homeScreenBlurSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *launchAppFromSwitcherSettings; // @synthesize launchAppFromSwitcherSettings=_launchAppFromSwitcherSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *toggleAppSwitcherSettings; // @synthesize toggleAppSwitcherSettings=_toggleAppSwitcherSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *arcSwipeSettings; // @synthesize arcSwipeSettings=_arcSwipeSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *dosidoSettings; // @synthesize dosidoSettings=_dosidoSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *slideOverSettings; // @synthesize slideOverSettings=_slideOverSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *centerZoomSettings; // @synthesize centerZoomSettings=_centerZoomSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *gestureInitiatedZoomDownSettings; // @synthesize gestureInitiatedZoomDownSettings=_gestureInitiatedZoomDownSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *iconZoomDownSettings; // @synthesize iconZoomDownSettings=_iconZoomDownSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *zoomUpSettings; // @synthesize zoomUpSettings=_zoomUpSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *layoutSettings; // @synthesize layoutSettings=_layoutSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (double)wallpaperScaleForMode:(long long)arg1;
- (double)homeScreenScaleForMode:(long long)arg1;
- (double)homeScreenAlphaForMode:(long long)arg1;
- (double)homeScreenBlurProgressForMode:(long long)arg1;

@end

