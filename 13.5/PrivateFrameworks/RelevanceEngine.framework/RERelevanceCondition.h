//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@interface RERelevanceCondition : NSObject <NSCopying>
{
    CDUnknownBlockType _condition;
}

+ (id)conditionWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (float)_evaluateRelevanceWithEnvironment:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCondtionBlock:(CDUnknownBlockType)arg1;

@end

