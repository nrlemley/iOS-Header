//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, PHCollection, PUPhotoDecoration, UICollectionViewTransitionLayout;
@protocol PLAssetContainer;

@interface PUAlbumListTransitionContext : NSObject
{
    _Bool _usesContentOffsetAutoAdjust;
    id <PLAssetContainer> _collection;
    PHCollection *_phCollection;
    NSIndexPath *_keyItemIndexPath;
    PUPhotoDecoration *_photoDecoration;
    UICollectionViewTransitionLayout *_transitionLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewTransitionLayout *transitionLayout; // @synthesize transitionLayout=_transitionLayout;
@property(nonatomic) _Bool usesContentOffsetAutoAdjust; // @synthesize usesContentOffsetAutoAdjust=_usesContentOffsetAutoAdjust;
@property(retain, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(retain, nonatomic) NSIndexPath *keyItemIndexPath; // @synthesize keyItemIndexPath=_keyItemIndexPath;
@property(retain, nonatomic) PHCollection *phCollection; // @synthesize phCollection=_phCollection;
@property(retain, nonatomic) id <PLAssetContainer> collection; // @synthesize collection=_collection;

@end

