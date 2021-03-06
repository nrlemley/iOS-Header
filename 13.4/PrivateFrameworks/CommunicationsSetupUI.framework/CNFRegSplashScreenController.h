//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSViewController.h>

#import <CommunicationsSetupUI/CNFRegFirstRunExperience-Protocol.h>

@class CNFRegController, NSString, UIBarButtonItem, UIButton;
@protocol CNFRegFirstRunDelegate;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience>
{
    UIButton *_learnMoreButton;
    id <CNFRegFirstRunDelegate> _delegate;
    CNFRegController *_regController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(nonatomic) id <CNFRegFirstRunDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIBarButtonItem *customRightButton; // @dynamic customRightButton;
@property(retain, nonatomic) UIBarButtonItem *customLeftButton; // @dynamic customLeftButton;
@property(readonly, nonatomic) long long currentAppearanceStyle; // @dynamic currentAppearanceStyle;
- (void)_getStartedPressed:(id)arg1;
- (void)_learnMorePressed:(id)arg1;
- (id)userInteractionColor;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willBecomeActive;
- (void)loadView;
- (void)dealloc;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

