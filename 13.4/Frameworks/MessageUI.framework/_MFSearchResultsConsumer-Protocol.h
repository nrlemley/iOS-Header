//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet;

@protocol _MFSearchResultsConsumer <NSObject>
- (void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(NSMutableSet *)arg2 toResults:(NSMutableArray *)arg3;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(void (^)(unsigned long long))arg1;
- (_Bool)_didFinishSearchForType:(unsigned long long)arg1;
- (_Bool)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;
- (void)_addResults:(NSArray *)arg1 ofType:(unsigned long long)arg2;
- (_Bool)_isResetting;
@end

