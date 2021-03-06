//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "ProductViewControllerActionDelegate-Protocol.h"
#import "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSString, RequestPayload, UIViewController;

@interface RemoteProductViewController : SBUIRemoteAlertServiceViewController <ProductViewControllerActionDelegate, UIAdaptivePresentationControllerDelegate>
{
    UIViewController *_childViewController;
    RequestPayload *_requestPayload;
}

@property(retain, nonatomic) RequestPayload *requestPayload; // @synthesize requestPayload=_requestPayload;
@property(nonatomic) __weak UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void).cxx_destruct;
- (void)productViewControllerDidFinishWithAction:(unsigned long long)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)_updateRequestWithAction:(long long)arg1;
- (void)_presentErrorAlert;
- (id)_viewControllerProxy;
- (void)_presentWebProductViewController;
- (void)_presentStoreProductViewController;
- (void)handleButtonActions:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

