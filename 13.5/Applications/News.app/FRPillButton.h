//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer, UIColor;

@interface FRPillButton : UIButton
{
    UIColor *_foregroundColor;
    double _titleXOffset;
    double _titleYOffset;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) double titleYOffset; // @synthesize titleYOffset=_titleYOffset;
@property(nonatomic) double titleXOffset; // @synthesize titleXOffset=_titleXOffset;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (unsigned long long)accessibilityTraits;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end

