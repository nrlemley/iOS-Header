//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface CCUIStatusLabel : UILabel
{
    unsigned long long _verticalAlignment;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)_contentSizeCategoryDidChange;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)init;

@end

