//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionMigrateRequest, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;
@property(readonly, nonatomic) _MRPlaybackSessionProtobuf *playbackSession;
- (id)initWithPlaybackSession:(struct _MRPlaybackSessionProtobuf *)arg1 request:(id)arg2 forPlayerPath:(struct _MRNowPlayingPlayerPathProtobuf *)arg3;

@end

