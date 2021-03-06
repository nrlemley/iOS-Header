//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NTKBlackcombDialColorPalette : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_hourMarkerColor;
    UIColor *_smallTickColor;
    UIColor *_largeTickColor;
    UIColor *_largeHandsColor;
    UIColor *_secondHandColor;
    unsigned long long _color;
}

+ (id)paletteForColor:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long color; // @synthesize color=_color;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *platterTextColor;
@property(readonly, nonatomic) long long richComplicationViewTheme;
@property(readonly, nonatomic) UIColor *largeTickColor;
@property(readonly, nonatomic) UIColor *smallTickColor;
@property(readonly, nonatomic) UIColor *hourMarkerColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (id)initWithColor:(unsigned long long)arg1;

@end

