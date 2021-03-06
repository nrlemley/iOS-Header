//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPFetcherResponse.h>

#import <LinkPresentation/LPFetcherURLResponse-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherJSONResponse : LPFetcherResponse <LPFetcherURLResponse>
{
    id _rootObject;
}

+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;
+ (_Bool)isValidMIMEType:(id)arg1;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
- (id)initWithRootObject:(id)arg1 fetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

