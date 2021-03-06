//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLIndexMapperDataSource;

@interface PLIndexMapper : NSObject
{
    id <PLIndexMapperDataSource> _dataSource;
}

- (_Bool)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;
- (unsigned long long)backingIndexForIndex:(unsigned long long)arg1;
- (id)backingIndexesForIndexes:(id)arg1;
- (unsigned long long)indexForBackingIndex:(unsigned long long)arg1;
- (id)indexesForBackingIndexes:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

