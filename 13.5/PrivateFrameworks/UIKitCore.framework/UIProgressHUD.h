//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel, UIWindow;

@interface UIProgressHUD : UIView
{
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_progressMessage;
    UIImageView *_doneView;
    UIWindow *_parentWindow;
    struct {
        unsigned int isShowing:1;
        unsigned int isShowingText:1;
        unsigned int fixedFrame:1;
        unsigned int reserved:30;
    } _progressHUDFlags;
}

- (void)dealloc;
- (void)done;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFontSize:(int)arg1;
- (void)setShowsText:(_Bool)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)show:(_Bool)arg1;
- (id)initWithWindow:(id)arg1;

@end

