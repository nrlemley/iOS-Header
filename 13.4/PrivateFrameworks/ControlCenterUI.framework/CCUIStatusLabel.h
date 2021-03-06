//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class MTVisualStylingProvider;

@interface CCUIStatusLabel : UILabel
{
    MTVisualStylingProvider *_visualStylingProvider;
    unsigned long long _verticalAlignment;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)_updateVisualStyling;
- (void)_contentSizeCategoryDidChange;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)init;

@end

