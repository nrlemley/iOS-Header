//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface TransitDirectionsColoredLine : UIView
{
    UIColor *_lineColor;
    unsigned long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)_setNeedsDisplay;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

@end

