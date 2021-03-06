//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSMapTable, NSString;

@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver>
{
    NSMapTable *_locations;
    unsigned long long _dayValue;
    unsigned long long _hourValue;
}

+ (id)supportedFeatures;
+ (double)updateInterval;
- (void).cxx_destruct;
- (void)predictorDidUpdate:(id)arg1;
- (void)pause;
- (void)resume;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

