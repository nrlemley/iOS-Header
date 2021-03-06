//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSMutableArray, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, SSURLRequestProperties;

@interface LoadDownloadQueueOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSNumber *_accountIdentifier;
    NSMutableOrderedSet *_downloads;
    _Bool _needsAuthentication;
    NSMutableArray *_rangesToLoad;
    long long _reason;
    NSString *_requestIdentifier;
    SSURLRequestProperties *_requestProperties;
    NSString *_mdSyncState;
}

+ (id)newLoadAutomaticDownloadQueueOperation;
- (void).cxx_destruct;
- (_Bool)_shouldSendKeyBagSync;
- (id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2;
- (_Bool)_runMachineDataOperationWithRequest:(id)arg1 syncState:(id *)arg2;
- (_Bool)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2;
- (void)_handleResponse:(id)arg1;
- (id)_account;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
@property(copy) NSString *requestIdentifier;
@property long long reason;
@property _Bool needsAuthentication;
@property(retain) NSNumber *accountIdentifier;
@property(readonly) SSURLRequestProperties *requestProperties;
@property(readonly) NSOrderedSet *downloads;
- (id)initWithRequestProperties:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

