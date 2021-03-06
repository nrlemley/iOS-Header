//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@class NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface TitleRowBrowseView : MKViewWithHairline
{
    UILabel *_titleLabel;
    NSLayoutConstraint *_topConstraint;
}

+ (double)rowHeight;
+ (id)_labelFont;
- (void).cxx_destruct;
- (void)_updateConstraintsValue;
- (void)_contentSizeCategoryDidChange;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)customInit;
- (void)willMoveToWindow:(id)arg1;
- (void)updateTheme;

@end

