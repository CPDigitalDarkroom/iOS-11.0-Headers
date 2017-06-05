//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCCoalescedNotification, NCNotificationRequest, NCNotificationSectionSettings, NSString;

@protocol NCNotificationDestination <NSObject>
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (_Bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1;
- (_Bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
@end

