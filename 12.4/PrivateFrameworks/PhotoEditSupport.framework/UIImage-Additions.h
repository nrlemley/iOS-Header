//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (Additions)
+ (long long)bl_orientationForImageOrientation:(long long)arg1 rotatedBy90DegreeTurnsClockwise:(int)arg2;
+ (int)bl_inverseOrientationForImageOrientation:(long long)arg1;
+ (struct CGAffineTransform)bl_transformForImageOrientation:(long long)arg1 andSize:(struct CGSize)arg2;
+ (int)bl_rotationAngleForImageOrientation:(long long)arg1;
+ (_Bool)bl_isMirroredForImageOrientation:(long long)arg1;
+ (_Bool)bl_isSizeSwappedForImageOrientation:(long long)arg1;
+ (long long)bl_imageOrientationForExifOrientation:(int)arg1;
+ (int)bl_exifOrientationForImageOrientation:(long long)arg1;
+ (id)bl_stretchyImageNamed:(id)arg1;
+ (id)bl_stretchyImageNamed:(id)arg1 hStretch:(_Bool)arg2 vStretch:(_Bool)arg3;
+ (id)bl_stretchyVersionH:(_Bool)arg1 V:(_Bool)arg2 forImage:(id)arg3;
+ (void)bl_saveToStretchyCache:(id)arg1 forKey:(id)arg2;
+ (id)bl_printImageNamed:(id)arg1;
+ (id)bl_resizablePrintImageNamed:(id)arg1 resizableImageWithCapInsets:(struct UIEdgeInsets)arg2 resizingMode:(long long)arg3;
+ (void)bl_end2xImageCaching;
+ (void)bl_begin2xImageCaching;
+ (void)bl_2xCacheMemoryWarning:(id)arg1;
+ (void)bl_set2xImageCache:(id)arg1;
+ (id)bl_darkenImage:(id)arg1 blackAlpha:(double)arg2;
+ (id)bl_maskImageFromAlphaChannelOfImage:(id)arg1 drawnIntoRect:(struct CGRect)arg2;
+ (id)bl_flattenedPatternImage:(id)arg1 intoSize:(struct CGSize)arg2;
+ (id)bl_flattenedStretchableImage:(id)arg1 intoSize:(struct CGSize)arg2;
- (id)bl_transparentBorderImage:(unsigned long long)arg1;
- (void)bl_saveToDocumentsFolder:(id)arg1;
- (id)bl_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;
- (id)bl_stretchyImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (id)bl_stretchyVersion;
- (id)bl_stretchyVVersion;
- (id)bl_stretchyHVersion;
- (id)bl_stretchyVersionH:(_Bool)arg1 V:(_Bool)arg2;
- (void)bl_saveToStretchyCache:(id)arg1 forKey:(id)arg2;
- (id)bl_colorAtX:(int)arg1 y:(int)arg2;
- (float)bl_lumaAtX:(int)arg1 y:(int)arg2;
- (float)bl_lumaAtX:(int)arg1 y:(int)arg2 sampleSize:(float)arg3;
- (CDStruct_76a42933)bl_pixelAtX:(int)arg1 y:(int)arg2;
- (CDStruct_76a42933)bl_pixelAtX:(int)arg1 y:(int)arg2 sampleSize:(float)arg3;
- (id)bl_fixAspectedThumbnailWithMediaAspectRatio:(double)arg1;
- (id)bl_flattenedImageWithSize:(struct CGSize)arg1 frame:(struct CGRect)arg2 scale:(double)arg3;
- (id)bl_flattenedImageFromRect:(struct CGRect)arg1;
- (id)bl_flattenedImageFromRect:(struct CGRect)arg1 opaque:(_Bool)arg2;
- (id)bl_hFlippedImage;
- (id)bl_flattenedImageWithSquareOfSize:(int)arg1;
- (id)bl_flattenedImageWithSquareOfSize:(int)arg1 scale:(int)arg2;
- (id)bl_flattenedImageRotatedBy90DegreeTurnsClockwise:(long long)arg1;
- (id)bl_flattenedImageInBoundingSize:(struct CGSize)arg1 preserveOrientation:(_Bool)arg2 boundingScale:(double)arg3;
- (id)bl_flattenedImageInBoundingSize:(struct CGSize)arg1;
- (id)bl_flattenedImage;
- (id)bl_flattenedImageWithSize:(struct CGSize)arg1;
- (id)bl_flattenedImageWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2;
- (id)bl_flattenedImageWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(int)arg3;
- (void)bl_drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2;
- (struct CGRect)bl_rect;
- (id)description;
@end

