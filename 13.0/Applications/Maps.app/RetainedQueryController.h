//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORetainedSearchMetadata, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RetainedQueryController : NSObject
{
    NSString *_retainedSearchQueryString;
    NSDate *_retainedSearchQueryTimestamp;
    GEORetainedSearchMetadata *_retainedSearchQueryMetadata;
    double _timeToRetainSearchQuery;
    GEORetainedSearchMetadata *_restoredRetainedSearchQueryMetadata;
}

@property(retain, nonatomic) GEORetainedSearchMetadata *restoredRetainedSearchQueryMetadata; // @synthesize restoredRetainedSearchQueryMetadata=_restoredRetainedSearchQueryMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldRetainSearchQuery;
- (_Bool)hasRelevantRetainedSearchQuery;
- (double)retainedSearchQueryAge;
- (_Bool)hasRetainedSearchQuery;
- (void)clearRetainedSearchQuery;
- (void)retainSearchQuery:(id)arg1 metadata:(id)arg2 forTimeInterval:(double)arg3;
- (void)retainSearchQueryForSelectedSearchCompletion:(id)arg1 query:(id)arg2 forTimeInterval:(double)arg3;
- (void)retainSearchQueryForSelectedAutocompleteItem:(id)arg1 query:(id)arg2 forTimeInterval:(double)arg3;
- (void)retainSearchQueryWithRetainedSearchMetadata:(id)arg1 query:(id)arg2 forTimeInterval:(double)arg3;
- (void)retainSearchQueryForSelectedSearchResult:(id)arg1 query:(id)arg2 forTimeInterval:(double)arg3;
- (void)_sendAnalyticsRetainedQueryEvent;
- (void)restoreIfNeededWithBlock:(CDUnknownBlockType)arg1;

@end

