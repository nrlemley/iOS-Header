//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification
{
    PLPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (id)userInfo;
- (id)object;
- (id)name;
- (id)initNotificationWithPhotoLibrary:(id)arg1;

@end

