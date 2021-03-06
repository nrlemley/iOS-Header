//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface AppInstallsDatabaseChangeset : NSObject
{
    NSMutableDictionary *_appUpdatesToFinish;
    NSMutableSet *_cancelProgress;
    NSMutableSet *_coordinatorPause;
    NSMutableDictionary *_coordinatorReasons;
    NSMutableSet *_coordinatorResume;
    NSMutableSet *_failedTestFlightInstalls;
    NSMutableSet *_finishProgress;
    NSMutableSet *_legacyNotifications;
    NSMutableSet *_restoresToHydrate;
    NSMutableSet *_restoresToPrioritize;
    unsigned long long _schedulerPollReason;
    _Bool _restoresCompleted;
    _Bool _shouldPostAppsDone;
    _Bool _shouldPostUpdatesDone;
    _Bool _shouldRefreshApplicationBadge;
    _Bool _shouldPostProcessAutomaticUpdatesCompleted;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool restoresCompleted; // @synthesize restoresCompleted=_restoresCompleted;
- (void)unionChangeset:(id)arg1;
- (void)refreshApplicationBadge;
- (void)postRestoreCompleted;
- (void)postProcessAutomaticUpdatesCompleted;
- (void)postUpdatesDone;
- (void)postAppsDone;
- (void)finishProgressForBundleID:(id)arg1;
- (void)cancelProgressForBundleID:(id)arg1;
- (void)addSchedulerPollReason:(unsigned long long)arg1;
- (void)addRestoreToHydrate:(id)arg1;
- (void)addLegacyNotification:(id)arg1;
- (void)addFailedTestFlightInstallWithBundleID:(id)arg1 devicePairingID:(id)arg2 error:(id)arg3;
- (void)addAppUpdateToFinish:(id)arg1 withUpdateState:(long long)arg2;
@property(readonly, nonatomic) NSSet *restoresToHydrate;
- (_Bool)restoreCompleted;
@property(readonly, nonatomic) _Bool shouldRefreshApplicationBadge;
@property(readonly, nonatomic) _Bool shouldPostProcessAutomaticUpdatesCompleted;
@property(readonly, nonatomic) _Bool shouldPostUpdatesDone;
@property(readonly, nonatomic) _Bool shouldPostAppsDone;
@property(readonly, nonatomic) unsigned long long schedulerPollReason;
@property(readonly, nonatomic) NSSet *legacyNotifications;
@property(readonly, nonatomic) NSSet *finishProgress;
@property(readonly, nonatomic) NSSet *failedTestFlightInstalls;
@property(readonly, nonatomic) NSSet *coordinatorResume;
@property(readonly, nonatomic) NSDictionary *coordinatorReasons;
@property(readonly, nonatomic) NSSet *coordinatorPause;
@property(readonly, nonatomic) NSSet *cancelProgress;
@property(readonly, nonatomic) NSDictionary *appUpdatesToFinish;
- (id)init;

@end

