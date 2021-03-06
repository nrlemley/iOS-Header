//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNClassificationCustomHierarchy;

__attribute__((visibility("hidden")))
@interface VNClassifyImageRequestConfiguration : VNImageBasedRequestConfiguration
{
    VNClassificationCustomHierarchy *_customHierarchy;
    unsigned long long _maximumLeafObservations;
    unsigned long long _maximumHierarchicalObservations;
    unsigned long long _imageCropAndScaleOption;
}

@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
@property(nonatomic) unsigned long long maximumHierarchicalObservations; // @synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations; // @synthesize maximumLeafObservations=_maximumLeafObservations;
@property(retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy; // @synthesize customHierarchy=_customHierarchy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

