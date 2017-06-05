//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIInteractionProgress.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPinchGestureRecognizer;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate>
{
    CDStruct_3e878e9e _pinchInterval;
    UIPinchGestureRecognizer *_pinchGesture;
}

@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
- (void).cxx_destruct;
- (void)_updatePinchScale:(double)arg1;
- (void)_handlePinchGesture:(id)arg1;
@property(readonly, nonatomic) double minPinchScale;
- (id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

