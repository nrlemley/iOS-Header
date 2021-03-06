//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSBagProtocol-Protocol.h"
#import "AdoptionContract-Protocol.h"
#import "AppUsageBagContract-Protocol.h"
#import "AutoUpdateBagContract-Protocol.h"
#import "BuildToolsBagContract-Protocol.h"
#import "CrossfireBagContract-Protocol.h"
#import "DRMRecovery-Protocol.h"
#import "IAPInfoBagContract-Protocol.h"
#import "OnDemandResourcesBagContract-Protocol.h"
#import "OwnsCheckBagContract-Protocol.h"
#import "PersonalizationBagContract-Protocol.h"
#import "PlatformConextBagContract-Protocol.h"
#import "PurchaseHistoryBagContract-Protocol.h"
#import "PushNotificationBagcontract-Protocol.h"
#import "StoreKitBagContract-Protocol.h"
#import "StoreQueueBagContract-Protocol.h"
#import "SubscriptionEntitlementsBagContract-Protocol.h"
#import "SystemAppsBagContract-Protocol.h"
#import "TestFlightFeedbackBagContract-Protocol.h"
#import "UpdatesBagContract-Protocol.h"
#import "WelcomeToAppStoreNotificationBagContract-Protocol.h"

@class AMSBag, AMSBagValue, NSDate, NSString, URLBagMemoizedValue;

@interface URLBag : NSObject <AMSBagProtocol, AdoptionContract, AppUsageBagContract, AutoUpdateBagContract, BuildToolsBagContract, DRMRecovery, CrossfireBagContract, OnDemandResourcesBagContract, OwnsCheckBagContract, PlatformConextBagContract, PersonalizationBagContract, IAPInfoBagContract, PurchaseHistoryBagContract, SubscriptionEntitlementsBagContract, UpdatesBagContract, StoreKitBagContract, StoreQueueBagContract, PushNotificationBagcontract, SystemAppsBagContract, TestFlightFeedbackBagContract, WelcomeToAppStoreNotificationBagContract>
{
    AMSBag *_bag;
    _Bool expired;
    NSDate *expirationDate;
    NSString *profile;
    NSString *profileVersion;
}

+ (id)_keySet;
+ (id)sandboxBag;
+ (id)defaultBag;
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
- (void).cxx_destruct;
@property(readonly) AMSBagValue *welcomeToAppStoreActionURL;
@property(readonly) AMSBagValue *welcomeToAppStoreActionButton;
@property(readonly) AMSBagValue *welcomeToAppStoreDontRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreLaterButton;
@property(readonly) AMSBagValue *welcomeToAppStoreMessage;
@property(readonly) AMSBagValue *welcomeToAppStoreTitle;
@property(readonly) AMSBagValue *welcomeToAppStoreSample;
@property(readonly) AMSBagValue *welcomeToAppStoreDelay;
- (id)updatesReloadIntervalCellular;
- (id)updatesReloadInterval;
- (id)v2UpdateSchedulingEnabled;
- (id)viewUpdatesRequestURL;
- (id)updateUsingOptimizedRequest;
- (id)doNotUpdateList;
- (id)availableUpdatesRequestURL;
@property(readonly) AMSBagValue *uploadFeedbackURL;
@property(readonly) AMSBagValue *getImageUploadURLsURL;
@property(readonly) AMSBagValue *backoffRandomRange;
@property(readonly) AMSBagValue *backoffDelays;
@property(readonly) AMSBagValue *hideableSystemApps;
@property(readonly) AMSBagValue *pendingAppsURL;
@property(readonly) AMSBagValue *completeStoreDownloadURL;
@property(readonly) AMSBagValue *automaticDownloadsURL;
@property(readonly, nonatomic) AMSBagValue *renewVPPReceiptURL;
@property(readonly, nonatomic) AMSBagValue *productOffersBatchSize;
@property(readonly, nonatomic) AMSBagValue *productOffersURL;
@property(readonly, nonatomic) AMSBagValue *createAppReceiptURL;
@property(readonly, nonatomic) AMSBagValue *countryCode;
@property(readonly, nonatomic) AMSBagValue *appleIDLookupURL;
@property(readonly) AMSBagValue *subscriptionEntitlementsRefreshIntervalInSeconds;
@property(readonly) AMSBagValue *subscriptionEntitlementsTimeout;
@property(readonly) AMSBagValue *subscriptionEntitlementsURL;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly) AMSBagValue *pushNotificationEnvironment;
@property(readonly) AMSBagValue *PurchaseHistoryUpdatePollingFrequencySeconds;
@property(readonly) AMSBagValue *PurchaseHistoryForcedRefreshMinutes;
@property(readonly) AMSBagValue *PurchaseHistoryDatabaseID;
@property(readonly) AMSBagValue *PurchaseHistoryBaseURL;
@property(readonly, nonatomic) AMSBagValue *manageSubsOnAppDeleteBlacklist;
@property(readonly) AMSBagValue *IAPInfoUpdatePollingFrequencySeconds;
@property(readonly) AMSBagValue *IAPInfoForcedRefreshMinutes;
@property(readonly) AMSBagValue *IAPInfoDatabaseID;
@property(readonly) AMSBagValue *IAPInfoBaseURL;
@property(readonly) AMSBagValue *clusterMappingRefreshFrequencySeconds;
@property(readonly) AMSBagValue *clusterMappingURL;
@property(readonly) URLBagMemoizedValue *appUsageSamplingPercentage;
@property(readonly) AMSBagValue *appUsageResetActorIDFrequencySeconds;
@property(readonly) AMSBagValue *appUsagePostsPerDay;
@property(readonly) AMSBagValue *appUsagePostGracePeriodSeconds;
@property(readonly) AMSBagValue *ownsCheckURL;
@property(readonly) AMSBagValue *odrURL;
@property(readonly) URLBagMemoizedValue *crossfireIncludeLaunches;
@property(readonly) URLBagMemoizedValue *crossfireSamplingPercentage;
@property(readonly) URLBagMemoizedValue *crossfirePostIntervalSeconds;
@property(readonly) AMSBagValue *drmRecovery;
@property(readonly) AMSBagValue *invalidBuildToolVersions;
@property(readonly) AMSBagValue *deltaIncompatibleBuildToolVersions;
@property(readonly) AMSBagValue *autoUpdateReloadIntervalCellular;
@property(readonly) AMSBagValue *autoUpdateReloadIntervalSeconds;
@property(readonly) AMSBagValue *appUsageFlushIntervalSeconds;
@property(readonly) AMSBagValue *adoptionEligibilityURL;
@property(readonly) AMSBagValue *adoptProductsURL;
@property(readonly, nonatomic) AMSBagValue *sbsyncRefreshIntervalSeconds;
@property(readonly, nonatomic) AMSBagValue *sbsyncSandboxURL;
@property(readonly, nonatomic) AMSBagValue *sbsyncProductionURL;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotPostPayoutIntervalSeconds;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotPostIntervalSeconds;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotPayoutQualifyingDurationSeconds;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotDeviceIDDaysValid;
@property(readonly, nonatomic) AMSBagValue *lowDataPromptThreshold;
@property(readonly, nonatomic) AMSBagValue *contentRestoreURL;
@property(readonly, nonatomic) AMSBagValue *contentRestoreMaxItemCount;
@property(readonly, nonatomic) AMSBagValue *upToDateClaimURL;
@property(readonly, nonatomic) AMSBagValue *authorizeURL;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile;
@property(readonly) AMSBagValue *unpersonalizedLookupURL;
@property(readonly) AMSBagValue *personalizedLookupURL;
@property(readonly) AMSBagValue *mescalSignedActions;
- (id)initWithSandbox:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

