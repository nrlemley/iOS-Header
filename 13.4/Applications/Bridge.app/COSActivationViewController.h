//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "COSBuddyController-Protocol.h"

@class NSString, UIActivityIndicatorView, UILabel;
@protocol COSBuddyControllerDelegate;

@interface COSActivationViewController : UIViewController <COSBuddyController>
{
    id <COSBuddyControllerDelegate> _delegate;
    UILabel *_infoLabel;
    UIActivityIndicatorView *_spinner;
}

+ (_Bool)controllerNeedsToRun;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)controllerAllowsNavigatingBackFrom;
- (void)back:(id)arg1;
- (void)enteredCompatibilityState:(id)arg1;
- (void)checkActivationState;
- (void)completedActivation:(id)arg1;
- (void)startActivating;
- (void)waitForCompatibilityUpdateState;
- (void)displayUpdateController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

