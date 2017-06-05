//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSRecursiveLock, NSString, NWSystemPathMonitor;

@interface SBWiFiManager : NSObject
{
    NSRecursiveLock *_lock;
    struct __CFRunLoop *_callbackRunLoop;
    void *_manager;
    void *_device;
    NSString *_deviceInterfaceName;
    _Bool _mainThread_devicePresent;
    void *_currentNetwork;
    void *_previousNetwork;
    _Bool _currentNetworkHasBeenSet;
    _Bool _currentNetworkIsIOSHotspot;
    _Bool _currentNetworkIsIOSHotspotHasBeenSet;
    _Bool _powered;
    _Bool _poweredHasBeenSet;
    int _mainThread_signalStrengthBars;
    int _mainThread_signalStrengthRSSI;
    _Bool _mainThread_signalStrengthHasBeenSet;
    NWSystemPathMonitor *_systemPathMonitor;
    NSObject<OS_dispatch_source> *_primaryInterfaceUpdateTimeoutSource;
    void *_primaryInterface;
    _Bool _primaryInterfaceHasBeenSet;
    _Bool _isPrimaryInterface;
    _Bool _isPrimaryInterfaceChanging;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_primaryInterfaceChanged:(_Bool)arg1;
- (id)_wifiInterface;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (_Bool)isPrimaryInterface;
- (void)resetSettingsWithMode:(long long)arg1;
- (id)knownNetworks;
- (void)updateSignalStrength;
- (void)updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;
- (int)signalStrengthRSSI;
- (int)signalStrengthBars;
- (void)setWiFiEnabled:(_Bool)arg1;
- (_Bool)wiFiEnabled;
- (void)setPowered:(_Bool)arg1;
- (_Bool)isPowered;
- (id)currentNetworkName;
- (void)clearWiFiPickerPreferences;
- (_Bool)_cachedIsAssociated;
- (_Bool)isAssociatedToIOSHotspot;
- (_Bool)isAssociated;
- (void)_updateCurrentNetwork;
- (void)_linkDidChange;
- (void)_powerStateDidChange;
- (void)_updateWiFiState;
- (void)_runManagerCallbackThread;
- (void)_lock_spawnManagerCallbackThread;
- (void *)_lock_manager;
- (void)_lock_setWiFiDevice:(void *)arg1;
- (void)updateDevicePresence;
- (_Bool)devicePresent;
- (_Bool)wifiSupported;
- (id)init;

@end

