//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRadioPlaybackHistory.h>

@class ICRadioPlaybackHistoryItem, NSArray;

@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory
{
}

- (void)_updateTracksUsingBlock:(CDUnknownBlockType)arg1;
- (void)_checkCurrentTrackIsPresent;
@property(copy, nonatomic) NSArray *tracks; // @dynamic tracks;
@property(nonatomic) long long numberOfSkips; // @dynamic numberOfSkips;
@property(copy, nonatomic) ICRadioPlaybackHistoryItem *currentTrack; // @dynamic currentTrack;
- (void)replaceTrackAtIndex:(long long)arg1 withTrack:(id)arg2;
- (void)removeTracksAtIndexes:(id)arg1;
- (void)removeExpiredTracks;
- (void)addTracks:(id)arg1;
- (void)addTrack:(id)arg1;

@end

