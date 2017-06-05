//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString, UIColor, UIView, _UILegibilitySettings;

@interface SBDashBoardComponent : NSObject <NSCopying>
{
    _Bool _hidden;
    long long _type;
    unsigned long long _properties;
    NSString *_identifier;
    long long _priority;
    long long _flag;
    NSString *_string;
    UIColor *_color;
    NSNumber *_value;
    UIView *_view;
    _UILegibilitySettings *_legibilitySettings;
    double _alpha;
    struct CGPoint _offset;
}

+ (id)statusBarBackground;
+ (id)tinting;
+ (id)wallpaper;
+ (id)slideableContent;
+ (id)pageContent;
+ (id)pageControl;
+ (id)statusBar;
+ (id)dateView;
+ (id)componentWithType:(long long)arg1;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)resetProperties:(unsigned long long)arg1;
- (void)resetAllProperties;
- (_Bool)hasValueForProperty:(unsigned long long)arg1;
- (id)offset:(struct CGPoint)arg1;
- (id)legibilitySettings:(id)arg1;
- (id)view:(id)arg1;
- (id)value:(id)arg1;
- (id)string:(id)arg1;
- (id)flag:(long long)arg1;
- (id)hidden:(_Bool)arg1;
- (id)identifier:(id)arg1;
- (id)priority:(long long)arg1;
- (id)init;

@end

