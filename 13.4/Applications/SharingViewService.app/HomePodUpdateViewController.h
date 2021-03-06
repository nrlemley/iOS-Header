//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HomePodUpdateBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface HomePodUpdateViewController : HomePodUpdateBaseViewController <UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleCheckForUpdateButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

