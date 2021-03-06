//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXYearsLayoutMetrics : PXLayoutMetrics
{
    long long _sizeClass;
    long long _orientation;
    double _interitemSpacing;
    double _defaultItemAspectRatio;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double defaultItemAspectRatio; // @synthesize defaultItemAspectRatio=_defaultItemAspectRatio;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

