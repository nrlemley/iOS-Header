//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification
{
    _Bool _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;
- (void)_calculateDiffs;
@property(readonly, retain, nonatomic) PLGenericAlbum *album;
- (id)name;
@property(readonly, nonatomic) _Bool invitationRecordsDidChange;
- (id)userInfo;

@end

