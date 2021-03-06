//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBRemoteDataProvider-Protocol.h"
#import "SBSRemoteAlertHandleObserver-Protocol.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableArray, NSString, SBSRemoteAlertHandle;

@interface CARDNDAlerts : NSObject <SBSRemoteAlertHandleObserver, BBRemoteDataProvider>
{
    _Bool _isFirstBuddyPresentation;
    SBSRemoteAlertHandle *_buddyAlertHandle;
    BBDataProviderConnection *_connection;
    BBDataProviderProxy *_providerProxy;
    NSMutableArray *_presentedBulletins;
}

@property(nonatomic) _Bool isFirstBuddyPresentation; // @synthesize isFirstBuddyPresentation=_isFirstBuddyPresentation;
@property(retain, nonatomic) NSMutableArray *presentedBulletins; // @synthesize presentedBulletins=_presentedBulletins;
@property(retain, nonatomic) BBDataProviderProxy *providerProxy; // @synthesize providerProxy=_providerProxy;
@property(retain, nonatomic) BBDataProviderConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) SBSRemoteAlertHandle *buddyAlertHandle; // @synthesize buddyAlertHandle=_buddyAlertHandle;
- (void).cxx_destruct;
- (void)_tearDownAlertHandle;
- (void)_injectAlert:(id)arg1;
- (id)_alertsOfClass:(Class)arg1;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dataProviderDidLoad;
- (id)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (_Bool)syncsBulletinDismissal;
- (id)sortDescriptors;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)showDNDMiniBuddyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showDNDNotDrivingAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDNDEndNotificationWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showDNDUnlockOptInAlert;
- (void)showDNDExitGeofenceWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDNDEnterGeofenceWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissAlertsOfClass:(Class)arg1;
- (void)dismissAlert:(id)arg1;
- (void)_showBulletin:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

