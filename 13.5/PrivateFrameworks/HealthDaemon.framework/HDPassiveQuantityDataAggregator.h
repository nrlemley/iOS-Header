//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDPassiveDataAggregator.h>

@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator
{
    HKQuantityType *_quantityType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (Class)sensorDatumClass;
- (id)objectType;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;

@end

