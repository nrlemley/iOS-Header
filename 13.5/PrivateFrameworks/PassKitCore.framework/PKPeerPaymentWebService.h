//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKWebService.h>

#import <PassKitCore/NSURLSessionTaskDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, NSURL, PKPaymentDevice, PKPeerPaymentService, PKPeerPaymentWebServiceContext, PKSecureElement;
@protocol OS_dispatch_queue, PKPeerPaymentWebServiceArchiver, PKPeerPaymentWebServiceTargetDeviceProtocol;

@interface PKPeerPaymentWebService : PKWebService <NSURLSessionTaskDelegate>
{
    PKSecureElement *_secureElement;
    NSMutableDictionary *_prewarmedDeviceScorers;
    NSObject<OS_dispatch_queue> *_prewarmedDeviceScorersQueue;
    PKPaymentDevice *_paymentDevice;
    _Bool _sharedService;
    PKPeerPaymentWebServiceContext *_context;
    id <PKPeerPaymentWebServiceArchiver> _archiver;
    id <PKPeerPaymentWebServiceTargetDeviceProtocol> _targetDevice;
    PKPeerPaymentService *_peerPaymentService;
}

+ (id)sharedService;
- (void).cxx_destruct;
@property(nonatomic, getter=isSharedService) _Bool sharedService; // @synthesize sharedService=_sharedService;
@property(retain, nonatomic) PKPeerPaymentService *peerPaymentService; // @synthesize peerPaymentService=_peerPaymentService;
@property(readonly, nonatomic) id <PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
@property(readonly, nonatomic) id <PKPeerPaymentWebServiceArchiver> archiver; // @synthesize archiver=_archiver;
@property(retain, nonatomic) PKPeerPaymentWebServiceContext *context; // @synthesize context=_context;
- (void)_updateRequestWithCurrentTargetDevice:(id)arg1;
- (_Bool)_isValidResponse:(id)arg1 error:(id)arg2;
- (void)_archiveContext;
- (void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deviceScoreForEndpoint:(id)arg1 recipientAddress:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_deviceScoreForEndpoint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_createDeviceScorerForEndpoint:(id)arg1 recipientAddress:(id)arg2;
- (void)prewarmDeviceScoreForEndpoint:(id)arg1 recipientAddress:(id)arg2;
- (void)prewarmDeviceScoreForEndpoint:(id)arg1;
- (void)_renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_appleAccountInformation;
- (void)_peerPaymentDeviceMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deviceRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_deviceIdentifier;
- (unsigned long long)disbursementVoucherWithRequest:(id)arg1 certificates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)submitDeviceScoreIdentifiersWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentEmailTermsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentReOpenAccountWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentRequestStatementWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentBankLookupWithCountryCode:(id)arg1 query:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)peerPaymentUpdatePreferencesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentPerformAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)peerPaymentStatusWithPaymentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentPerformQuoteWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentDocumentSubmissionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentIdentityVerificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentQuoteCertificatesForDestination:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentQuoteWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentRequestTokenWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentRecipientForRecipientAddress:(id)arg1 senderAddress:(id)arg2 source:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)peerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentPassDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentAcceptTermsWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentUnregisterWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canBypassTrustExtendedValidation;
@property(readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property(readonly, nonatomic) _Bool needsRegistration;
- (void)sharedPeerPaymentServiceChanged:(id)arg1;
- (id)logFacility;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 originalRequest:(id)arg2 redirectHandler:(CDUnknownBlockType)arg3;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (id)badRequestErrorWithResponse:(id)arg1;
- (void)handleAuthenticationFailureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

