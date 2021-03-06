//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBHeaderView.h>

@interface OBSetupAssistantHeaderView : OBHeaderView
{
    _Bool _hasTitle;
    double _distanceFromTop;
}

@property(nonatomic) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(nonatomic) double distanceFromTop; // @synthesize distanceFromTop=_distanceFromTop;
- (double)bottomPadding;
- (double)detailLabelToAccessoryButtonPadding;
- (double)headerLabelToDetailLabelPadding;
- (double)iconToHeaderLabelPadding;
- (double)topPadding;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 distanceToTopInset:(double)arg3;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2 distanceToTopInset:(double)arg3;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;

@end

