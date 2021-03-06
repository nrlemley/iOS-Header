//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppInstallsDatabaseTransaction.h"

@class NSMutableArray;

@interface AppSchedulerDatabaseTransaction : AppInstallsDatabaseTransaction
{
    NSMutableArray *_jettisonCandidates;
}

+ (id)_queryJettisonCandidatesOnConnection:(id)arg1;
+ (id)_queryActiveInstallationStatisticsOnConnection:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_verifyBootstrapCompleteOrNotRequired:(id)arg1;
- (_Bool)_verifyActiveInstallation:(id)arg1;
- (id)_findJettisonCandidateForPriority:(long long)arg1;
- (id)scheduleMaximumActiveCount:(unsigned long long)arg1 evaluateUsingBlock:(CDUnknownBlockType)arg2;
- (id)jettisonActiveInstallationsToReduceActiveCountTo:(unsigned long long)arg1 forReason:(long long)arg2;
- (void)bootstrapSourceType:(long long)arg1 enumerateUsingBlock:(CDUnknownBlockType)arg2;
- (void)bootstrapResetSourceType:(long long)arg1 withError:(id)arg2;

@end

