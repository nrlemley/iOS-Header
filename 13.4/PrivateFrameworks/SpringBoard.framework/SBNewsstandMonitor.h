//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBProcessManagerObserver-Protocol.h>
#import <SpringBoard/FBProcessObserver-Protocol.h>

@class NSArray, NSString;

@interface SBNewsstandMonitor : NSObject <FBProcessManagerObserver, FBProcessObserver>
{
    NSArray *_blacklistedBundleIdentifiers;
}

+ (id)_blacklistedBundleIdentifiers;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)_handleBackgroundUpdateBlacklistChange;
- (void)_addObserverForBackgroundUpdateBlacklistChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

