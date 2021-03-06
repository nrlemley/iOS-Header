//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CalendarModel, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface ListViewSwitchButton : UIButton
{
    _Bool _state;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    SEL _tapSelector;
    id _tapSelectorTarget;
    CalendarModel *_model;
}

@property(readonly, nonatomic) CalendarModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)imageEdgeInsetsForSourceImage;
- (id)foregroundImage;
- (void)setActiveState:(_Bool)arg1;
- (void)_fadeToDiminishedAlphaWithFadeDuration:(double)arg1;
- (void)_fadeToFullAlphaWithFadeDuration:(double)arg1;
- (void)_fadeViewToAlpha:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_viewLongPressed:(id)arg1;
- (void)updateActiveState;
- (void)_viewTapped:(id)arg1;
- (id)modelNotificationName;
- (id)preferenceNotificationName;
- (void)dealloc;
- (id)initWithActiveState:(_Bool)arg1 model:(id)arg2 sendAction:(SEL)arg3 target:(id)arg4;

@end

