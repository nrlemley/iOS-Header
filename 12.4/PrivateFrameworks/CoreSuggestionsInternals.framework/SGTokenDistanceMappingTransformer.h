//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGTokenDistanceMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_targetString;
    unsigned long long _maxDistance;
}

+ (_Bool)debugAppendText:(id)arg1;
+ (void)debugStoreContext;
+ (void)debugSetContext:(id)arg1;
+ (id)transformArray:(id)arg1 withTargetIndex:(unsigned long long)arg2 maximumDistance:(unsigned long long)arg3;
+ (id)withTarget:(id)arg1 maxDistance:(unsigned long long)arg2;
@property(nonatomic) unsigned long long maxDistance; // @synthesize maxDistance=_maxDistance;
@property(retain, nonatomic) NSString *targetString; // @synthesize targetString=_targetString;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithTarget:(id)arg1 maxDistance:(unsigned long long)arg2;

@end

