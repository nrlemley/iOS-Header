//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXGPPTSettings : PXSettings
{
    _Bool _useAssetBadgeDecoration;
    long long _numberOfItems;
    long long _numberOfSections;
    long long _numberOfColumns;
    long long _selectionDecorationStlye;
}

+ (id)scrollingPresetNames;
+ (id)allPresetNames;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) long long selectionDecorationStlye; // @synthesize selectionDecorationStlye=_selectionDecorationStlye;
@property(nonatomic) _Bool useAssetBadgeDecoration; // @synthesize useAssetBadgeDecoration=_useAssetBadgeDecoration;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (id)createLayout;
- (void)setDefaultValuesWithPresetName:(id)arg1;
- (void)setDefaultValues;
- (id)parentSettings;

@end

