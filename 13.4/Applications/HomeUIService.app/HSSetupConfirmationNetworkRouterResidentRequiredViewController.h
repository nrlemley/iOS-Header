//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import "HFSetupPairingPopup-Protocol.h"
#import "HSSetupStep-Protocol.h"

@class HMSetupAccessoryDescription, NAFuture, NSString;
@protocol HFSetupPairingPopupDelegate, HSSetupStepDelegate;

@interface HSSetupConfirmationNetworkRouterResidentRequiredViewController : HUImageOBWelcomeController <HSSetupStep, HFSetupPairingPopup>
{
    id <HSSetupStepDelegate> _delegate;
    id <HFSetupPairingPopupDelegate> _popupDelegate;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
@property(readonly, nonatomic) __weak id <HFSetupPairingPopupDelegate> popupDelegate; // @synthesize popupDelegate=_popupDelegate;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_learnMorePressed:(id)arg1;
- (void)_continuePressed:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) unsigned long long popupType;
@property(readonly, nonatomic) long long setupState;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)initWithSetupAccessoryDescription:(id)arg1;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

