//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBAnimationSettings, SBBounceSettings, SBCoverSheetTransitionsSettings, SBDashBoardScrollModifierSettings, SBHorizontalScrollFailureRecognizerSettings, SBLockScreenMesaSettings, SBLockScreenPasscodeSettings;

@interface SBLockScreenSettings : SBUISettings
{
    _Bool _showNowPlaying;
    _Bool _showUserPicture;
    _Bool _showLogoutButton;
    _Bool _showThermalTrap;
    _Bool _showBlockedUI;
    _Bool _showResetRestore;
    _Bool _showEmergencyDialer;
    _Bool _showRegionsDebugView;
    _Bool _alwaysPutPluginsBelowScrollView;
    _Bool _killsInsecureDrawingApps;
    SBBounceSettings *_verticalBounceSettings;
    SBBounceSettings *_horizontalBounceSettings;
    SBLockScreenPasscodeSettings *_passcodeSettings;
    SBLockScreenMesaSettings *_mesaSettings;
    SBCoverSheetTransitionsSettings *_coverSheetTransitionsSettings;
    SBHorizontalScrollFailureRecognizerSettings *_horizontalScrollFailureRecognizerSettings;
    SBDashBoardScrollModifierSettings *_dashBoardScrollModifierSettings;
    SBAnimationSettings *_unlockToPhoneWallpaperOutSettings;
    SBAnimationSettings *_unlockToPhoneWallpaperInSettings;
    SBAnimationSettings *_unlockWallpaperOutSettings;
    SBAnimationSettings *_unlockWallpaperInSettings;
    double _nowPlayingHeight;
    double _mainToCameraViewSlideCompletionPercentage;
    double _mainToTodayViewSlideCompletionPercentage;
    double _unlockSlideForIdleTimerDisabledPercentage;
    double _unlockSlideForIdleTimerDisabledPercentageIPad;
    double _notificationScrollForIdleTimerDisabledOffset;
    double _notificationScrollForIdleTimerDisabledOffsetIPad;
    double _appGrabberSlideUpVelocityThreshold;
    double _unlockPasscodeThreshold;
    double _unlockRubberBandThreshold;
    double _unlockRubberBandFeedbackInterval;
    long long _unlockRubberBandFeedbackIntensity;
    double _unlockSwipeWallpaperAlpha;
}

+ (id)settingsControllerModule;
@property _Bool killsInsecureDrawingApps; // @synthesize killsInsecureDrawingApps=_killsInsecureDrawingApps;
@property _Bool alwaysPutPluginsBelowScrollView; // @synthesize alwaysPutPluginsBelowScrollView=_alwaysPutPluginsBelowScrollView;
@property double unlockSwipeWallpaperAlpha; // @synthesize unlockSwipeWallpaperAlpha=_unlockSwipeWallpaperAlpha;
@property long long unlockRubberBandFeedbackIntensity; // @synthesize unlockRubberBandFeedbackIntensity=_unlockRubberBandFeedbackIntensity;
@property double unlockRubberBandFeedbackInterval; // @synthesize unlockRubberBandFeedbackInterval=_unlockRubberBandFeedbackInterval;
@property double unlockRubberBandThreshold; // @synthesize unlockRubberBandThreshold=_unlockRubberBandThreshold;
@property double unlockPasscodeThreshold; // @synthesize unlockPasscodeThreshold=_unlockPasscodeThreshold;
@property double appGrabberSlideUpVelocityThreshold; // @synthesize appGrabberSlideUpVelocityThreshold=_appGrabberSlideUpVelocityThreshold;
@property double notificationScrollForIdleTimerDisabledOffsetIPad; // @synthesize notificationScrollForIdleTimerDisabledOffsetIPad=_notificationScrollForIdleTimerDisabledOffsetIPad;
@property double notificationScrollForIdleTimerDisabledOffset; // @synthesize notificationScrollForIdleTimerDisabledOffset=_notificationScrollForIdleTimerDisabledOffset;
@property double unlockSlideForIdleTimerDisabledPercentageIPad; // @synthesize unlockSlideForIdleTimerDisabledPercentageIPad=_unlockSlideForIdleTimerDisabledPercentageIPad;
@property double unlockSlideForIdleTimerDisabledPercentage; // @synthesize unlockSlideForIdleTimerDisabledPercentage=_unlockSlideForIdleTimerDisabledPercentage;
@property double mainToTodayViewSlideCompletionPercentage; // @synthesize mainToTodayViewSlideCompletionPercentage=_mainToTodayViewSlideCompletionPercentage;
@property double mainToCameraViewSlideCompletionPercentage; // @synthesize mainToCameraViewSlideCompletionPercentage=_mainToCameraViewSlideCompletionPercentage;
@property double nowPlayingHeight; // @synthesize nowPlayingHeight=_nowPlayingHeight;
@property(retain) SBAnimationSettings *unlockWallpaperInSettings; // @synthesize unlockWallpaperInSettings=_unlockWallpaperInSettings;
@property(retain) SBAnimationSettings *unlockWallpaperOutSettings; // @synthesize unlockWallpaperOutSettings=_unlockWallpaperOutSettings;
@property(retain) SBAnimationSettings *unlockToPhoneWallpaperInSettings; // @synthesize unlockToPhoneWallpaperInSettings=_unlockToPhoneWallpaperInSettings;
@property(retain) SBAnimationSettings *unlockToPhoneWallpaperOutSettings; // @synthesize unlockToPhoneWallpaperOutSettings=_unlockToPhoneWallpaperOutSettings;
@property(retain) SBDashBoardScrollModifierSettings *dashBoardScrollModifierSettings; // @synthesize dashBoardScrollModifierSettings=_dashBoardScrollModifierSettings;
@property(retain) SBHorizontalScrollFailureRecognizerSettings *horizontalScrollFailureRecognizerSettings; // @synthesize horizontalScrollFailureRecognizerSettings=_horizontalScrollFailureRecognizerSettings;
@property(retain) SBCoverSheetTransitionsSettings *coverSheetTransitionsSettings; // @synthesize coverSheetTransitionsSettings=_coverSheetTransitionsSettings;
@property(retain) SBLockScreenMesaSettings *mesaSettings; // @synthesize mesaSettings=_mesaSettings;
@property(retain) SBLockScreenPasscodeSettings *passcodeSettings; // @synthesize passcodeSettings=_passcodeSettings;
@property(retain) SBBounceSettings *horizontalBounceSettings; // @synthesize horizontalBounceSettings=_horizontalBounceSettings;
@property(retain) SBBounceSettings *verticalBounceSettings; // @synthesize verticalBounceSettings=_verticalBounceSettings;
@property _Bool showRegionsDebugView; // @synthesize showRegionsDebugView=_showRegionsDebugView;
@property _Bool showEmergencyDialer; // @synthesize showEmergencyDialer=_showEmergencyDialer;
@property _Bool showResetRestore; // @synthesize showResetRestore=_showResetRestore;
@property _Bool showBlockedUI; // @synthesize showBlockedUI=_showBlockedUI;
@property _Bool showThermalTrap; // @synthesize showThermalTrap=_showThermalTrap;
@property _Bool showLogoutButton; // @synthesize showLogoutButton=_showLogoutButton;
@property _Bool showUserPicture; // @synthesize showUserPicture=_showUserPicture;
@property _Bool showNowPlaying; // @synthesize showNowPlaying=_showNowPlaying;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

