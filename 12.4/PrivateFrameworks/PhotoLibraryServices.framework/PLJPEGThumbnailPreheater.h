//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPreheatItemSource-Protocol.h>

@class NSString, PLThumbFileManager;

@interface PLJPEGThumbnailPreheater : NSObject <PLPreheatItemSource>
{
    PLThumbFileManager *_manager;
}

- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithThumbFileManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

