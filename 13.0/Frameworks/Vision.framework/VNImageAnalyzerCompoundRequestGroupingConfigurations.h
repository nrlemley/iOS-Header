//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject
{
    NSMutableDictionary *_groupingConfigurations;
}

- (void).cxx_destruct;
- (_Bool)preferBackgroundProcessing;
- (unsigned long long)groupingConfigurationsCount;
- (id)allGroupingConfigurations;
- (id)groupingConfigurationForRequest:(id)arg1 kind:(unsigned long long)arg2;
- (id)init;

@end

