//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUReviewAssetCancelableMediaRequest-Protocol.h>

__attribute__((visibility("hidden")))
@interface PUReviewAssetLivePhotoMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>
{
    int __liveRequestID;
}

@property(readonly, nonatomic) int _liveRequestID; // @synthesize _liveRequestID=__liveRequestID;
- (void)cancelRequest;
- (id)initLivePhotoRequestID:(int)arg1;

@end

