//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitImageHeightPolicy : IPAImageSizePolicy
{
    double _fitHeight;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;
- (id)initWithHeight:(double)arg1;

@end

