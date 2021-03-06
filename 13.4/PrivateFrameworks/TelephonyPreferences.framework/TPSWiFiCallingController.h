//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyPreferences/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString, TPSCarrierBundleController, TPSCloudCallingEmergencyAddressURLController, TPSCloudCallingThumperProvisioningURLController, TPSEncryptedIdentityClient, TUSenderIdentityCapabilities;

@interface TPSWiFiCallingController : NSObject <TUCallCapabilitiesDelegatePrivate>
{
    TPSCloudCallingEmergencyAddressURLController *_emergencyAddressURLController;
    TPSCloudCallingThumperProvisioningURLController *_thumperProvisioningURLController;
    TPSCarrierBundleController *_carrierBundleController;
    TPSEncryptedIdentityClient *_encryptedIdentityClient;
    NSDictionary *_encryptedIdentityInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    TUSenderIdentityCapabilities *_subscriptionCapabilities;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities; // @synthesize subscriptionCapabilities=_subscriptionCapabilities;
@property(readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property(copy, nonatomic) NSDictionary *encryptedIdentityInfo; // @synthesize encryptedIdentityInfo=_encryptedIdentityInfo;
@property(retain, nonatomic) TPSEncryptedIdentityClient *encryptedIdentityClient; // @synthesize encryptedIdentityClient=_encryptedIdentityClient;
@property(retain, nonatomic) TPSCarrierBundleController *carrierBundleController; // @synthesize carrierBundleController=_carrierBundleController;
@property(retain, nonatomic) TPSCloudCallingThumperProvisioningURLController *thumperProvisioningURLController; // @synthesize thumperProvisioningURLController=_thumperProvisioningURLController;
@property(retain, nonatomic) TPSCloudCallingEmergencyAddressURLController *emergencyAddressURLController; // @synthesize emergencyAddressURLController=_emergencyAddressURLController;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedCarrierName;
@property(readonly, nonatomic) _Bool supportsEncryptedIdentity;
@property(readonly, nonatomic) _Bool supportsWiFiEmergencyCalling;
@property(readonly, nonatomic) _Bool supportsWiFiCalling;
@property(readonly, nonatomic) _Bool supportsThumperCalling;
@property(nonatomic, getter=isWiFiCallingRoamingEnabled) _Bool wiFiCallingRoamingEnabled;
@property(nonatomic, getter=isWiFiCallingEnabled) _Bool wiFiCallingEnabled;
@property(nonatomic, getter=isThumperCallingEnabled) _Bool thumperCallingEnabled;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

