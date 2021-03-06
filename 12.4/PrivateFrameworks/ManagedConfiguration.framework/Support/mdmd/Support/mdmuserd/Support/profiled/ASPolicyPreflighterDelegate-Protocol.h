//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASPolicyPreflighter, NSDictionary, NSError, NSString;

@protocol ASPolicyPreflighterDelegate
- (void)preflighter:(ASPolicyPreflighter *)arg1 error:(NSError *)arg2;
- (void)preflighterAccountOnlyRemoteWipeRequestResponseAcknowledged:(ASPolicyPreflighter *)arg1;
- (void)preflighterRemoteWipeRequestResponseAcknowledged:(ASPolicyPreflighter *)arg1;
- (void)preflighterAccountOnlyRemoteWipeRequested:(ASPolicyPreflighter *)arg1;
- (void)preflighterRemoteWipeRequested:(ASPolicyPreflighter *)arg1;
- (void)preflighter:(ASPolicyPreflighter *)arg1 successWithMCFeatures:(NSDictionary *)arg2 perAccountPolicies:(NSDictionary *)arg3 policyKey:(NSString *)arg4;
- (void)preflighter:(ASPolicyPreflighter *)arg1 needsComplianceWithMCFeatures:(NSDictionary *)arg2 perAccountPolicies:(NSDictionary *)arg3;
@end

