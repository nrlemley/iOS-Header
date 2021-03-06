//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class AVPlayerItem, ISLivePhotoUIView, NSString;

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver>
{
    ISLivePhotoUIView *_livePhotoView;
    long long _requestID;
    AVPlayerItem *_videoPlayerItem;
}

@property(retain, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
- (void).cxx_destruct;
- (void)_updateLivePhotoPlayerItem;
- (_Bool)isDisplayingFullQualityContent;
- (void)contentsRectDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)imageDidChange;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)updateContent;
- (id)contentView;
- (long long)playbackStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

