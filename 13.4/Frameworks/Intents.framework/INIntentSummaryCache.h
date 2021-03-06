//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface INIntentSummaryCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    int _systemLanguageChangeNotificationToken;
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;
    NSMutableDictionary *_allBundlesCache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) int systemLanguageChangeNotificationToken; // @synthesize systemLanguageChangeNotificationToken=_systemLanguageChangeNotificationToken;
@property(readonly, nonatomic) NSMutableDictionary *allBundlesCache; // @synthesize allBundlesCache=_allBundlesCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue; // @synthesize resourceAccessQueue=_resourceAccessQueue;
- (void)applicationsDidInstall:(id)arg1;
- (void)invalidateCacheForBundleId:(id)arg1;
- (void)invalidateCache;
- (void)stopObservingSystemLanguageChanges;
- (void)startObservingSystemLanguageChanges;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)startObservingApplicationWorkspaceChanges;
- (void)stopAutomaticInvalidation;
- (void)startAutomaticInvalidation;
- (void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (_Bool)getSubtitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (_Bool)getTitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(_Bool)arg3;
- (void)setBundleCache:(id)arg1 forBundleId:(id)arg2;
- (id)bundleCacheForBundleId:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

