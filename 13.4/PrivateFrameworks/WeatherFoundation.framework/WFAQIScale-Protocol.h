//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSString, WFAQIScaleCategory;

@protocol WFAQIScale <NSObject>
@property(readonly, nonatomic) NSString *name;
- (WFAQIScaleCategory *)scaleCategoryForCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(NSString *)arg2;
@end

