//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PIPipelineFilters : NSObject
{
}

+ (id)applyOrientationFilter;
+ (id)stopAtTagIncludeOrientationFilter:(id)arg1;
+ (id)stopAtTagIncludeGeometryFilter:(id)arg1;
+ (id)postGeometryFilter;
+ (id)preGeometryFilter;
+ (id)noGeometryFilter;
+ (id)noCropFilter;
+ (id)noMuteFilter;
+ (id)noTrimFilter;
+ (id)noRedEyeFilter;
+ (id)sushiLevel1Filter;
+ (id)sourceFilterIncludingOrientation:(_Bool)arg1;
+ (id)rawFaceBalanceFilter;
+ (id)autoCropFilter;

@end

