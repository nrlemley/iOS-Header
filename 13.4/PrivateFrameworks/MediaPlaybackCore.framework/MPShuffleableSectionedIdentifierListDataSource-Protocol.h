//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPSectionedIdentifierListDataSource-Protocol.h>

@class NSString;

@protocol MPShuffleableSectionedIdentifierListDataSource <MPSectionedIdentifierListDataSource>
- (_Bool)section:(NSString *)arg1 supportsShuffleType:(long long)arg2;

@optional
- (_Bool)section:(NSString *)arg1 shouldShuffleExcludeItem:(NSString *)arg2;
@end

