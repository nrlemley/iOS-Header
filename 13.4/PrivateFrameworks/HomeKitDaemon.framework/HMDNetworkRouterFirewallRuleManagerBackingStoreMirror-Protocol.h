//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CKRecordID, CKRecordZoneID, HMBProcessingOptions, NAFuture, NSDictionary, NSObject, NSSet, NSString;
@protocol OS_xpc_object;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreMirror <NSObject>
@property(retain, nonatomic) NSSet *watchedRecordIDs;
@property(readonly, nonatomic) NAFuture *shutdownFuture;
@property(readonly, nonatomic) NAFuture *startupFuture;
- (_Bool)removeOverridesForZoneName:(NSString *)arg1 recordName:(NSString *)arg2 options:(HMBProcessingOptions *)arg3 error:(id *)arg4;
- (_Bool)removeAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (_Bool)removeOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (_Bool)addOverrides:(NSDictionary *)arg1 replace:(_Bool)arg2 options:(HMBProcessingOptions *)arg3 error:(id *)arg4;
- (NSDictionary *)fetchOverridesForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (NSDictionary *)fetchAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (NSDictionary *)fetchOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (_Bool)removeAllLocalRulesWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (NSDictionary *)fetchNetworkDeclarationDataForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (NSDictionary *)fetchAllNetworkDeclarationDataWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (NSDictionary *)fetchNetworkDeclarationDataForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (void)fetchCloudRecordsForZoneID:(CKRecordZoneID *)arg1 recordID:(CKRecordID *)arg2 options:(HMBProcessingOptions *)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
- (void)fetchCloudRecordIDsForZoneID:(CKRecordZoneID *)arg1 options:(HMBProcessingOptions *)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)fetchCloudChangesWithOptions:(HMBProcessingOptions *)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 xpcActivity:(NSObject<OS_xpc_object> *)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
@end

