//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSArray, NSString, SBAlertItem;

@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe>
{
    SBAlertItem *_item;
    NSArray *_recipesToTest;
}

+ (id)nameForCase:(long long)arg1;
+ (id)testCasesGrouped;
+ (id)testCases;
+ (id)title;
@property(retain, nonatomic) NSArray *recipesToTest; // @synthesize recipesToTest=_recipesToTest;
- (void).cxx_destruct;
- (id)alertForIndex:(long long)arg1;
- (id)_nextAlertItemToTest;
- (id)dataPlanAlertItemForCase:(long long)arg1;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (id)_anyLeafIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anyAppIcon;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_dismissCurrentItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

