//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSSet, NSString;

@interface ForcedUpdatesTask : Task
{
    NSString *_logKey;
    NSSet *_pendingUpdates;
    NSArray *_updates;
}

+ (id)taskWithPendingUpdates:(id)arg1 andLogKey:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (id)_appsByAccountMappingForCandidates:(id)arg1;
- (id)_forcedUpdates;
- (id)_enforcedDRMVersionToCheck;
- (id)_invalidBuildToolVersionsToCheck;
- (void)main;

@end

