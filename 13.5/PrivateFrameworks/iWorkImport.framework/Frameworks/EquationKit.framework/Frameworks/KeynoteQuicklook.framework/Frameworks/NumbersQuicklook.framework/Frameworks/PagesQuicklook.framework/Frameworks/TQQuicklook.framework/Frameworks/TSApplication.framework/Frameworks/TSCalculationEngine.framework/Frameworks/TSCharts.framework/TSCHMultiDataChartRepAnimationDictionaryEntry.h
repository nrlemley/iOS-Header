//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject
{
    TSCHMultiDataLayerAnimationInfo *mAnimationInfo;
    NSMutableArray *mAnimations;
}

+ (id)entry;
- (void).cxx_destruct;
- (id)animation;
- (void)addAnimation:(id)arg1 animationInfo:(id)arg2;
- (id)init;

@end

