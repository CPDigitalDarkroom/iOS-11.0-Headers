//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBAppSwitcherPageContentView.h"

@class NSString;

@interface SBAppSwitcherServicePageContentView : UIView <SBAppSwitcherPageContentView>
{
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) double cornerRadius;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

