//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUEditPluginSession;

@protocol PUEditPluginSessionDelegate <NSObject>

@optional
- (void)editPluginSession:(PUEditPluginSession *)arg1 didEndWithCompletionType:(unsigned long long)arg2;
- (void)editPluginSessionWillBegin:(PUEditPluginSession *)arg1;
- (void)editPluginSessionAvailabilityDidChange:(PUEditPluginSession *)arg1;
@end

