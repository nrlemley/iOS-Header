//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface VVMSharedNetworkObserver : NSObject
{
    struct os_unfair_lock_s fLock;
    NSObject<OS_dispatch_queue> *fQueue;
    _Bool fIsObservingNetwork;
    NSMapTable *fDelegates;
    _Bool fIsNetworkReachable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isNetworkReachable;
- (void)networkReachabilityChanged:(id)arg1;
- (void)stopObservingNetworkSync;
- (void)startObservingNetworkSync;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

@end

