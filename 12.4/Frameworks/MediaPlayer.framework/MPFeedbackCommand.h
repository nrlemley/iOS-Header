//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand
{
    long long _presentationStyle;
    _Bool _active;
    NSString *_localizedTitle;
    NSString *_localizedShortTitle;
}

@property(copy, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (id)newCommandEventWithState:(long long)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setPresentationStyle:(long long)arg1;
- (long long)presentationStyle;

@end

