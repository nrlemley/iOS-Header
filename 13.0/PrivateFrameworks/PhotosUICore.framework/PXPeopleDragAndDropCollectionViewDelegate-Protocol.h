//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleDragAndDropCollectionView;

@protocol PXPeopleDragAndDropCollectionViewDelegate <NSObject>

@optional
- (void)collectionViewDidLayout:(PXPeopleDragAndDropCollectionView *)arg1;
- (void)collectionViewDidEndInteractiveMode:(PXPeopleDragAndDropCollectionView *)arg1;
- (void)collectionViewDidEndDrag:(PXPeopleDragAndDropCollectionView *)arg1;
- (void)collectionViewDidCancelDrag:(PXPeopleDragAndDropCollectionView *)arg1;
@end

