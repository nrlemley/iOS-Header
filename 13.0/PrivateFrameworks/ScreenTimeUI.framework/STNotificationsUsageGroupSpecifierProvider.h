//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STShowMoreUsageGroupSpecifierProvider.h>

@class BBSettingsGateway, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface STNotificationsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider
{
    NSMutableDictionary *_notificationSectionByBundleID;
    BBSettingsGateway *_notificationSettingsGateway;
    NSObject<OS_dispatch_queue> *_notificationSettingsGatewayQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue; // @synthesize notificationSettingsGatewayQueue=_notificationSettingsGatewayQueue;
@property(readonly, nonatomic) BBSettingsGateway *notificationSettingsGateway; // @synthesize notificationSettingsGateway=_notificationSettingsGateway;
@property(readonly, nonatomic) NSMutableDictionary *notificationSectionByBundleID; // @synthesize notificationSectionByBundleID=_notificationSectionByBundleID;
- (void).cxx_destruct;
- (void)_specifierIdentifierDidChange:(id)arg1;
- (id)getNotificationsInfo:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end

