//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HAMenstrualAlgorithmsStats : NSObject
{
    NSNumber *_medianCycleLength;
    NSNumber *_medianMenstruationLength;
    NSNumber *_lowerCycleLengthPercentile;
    NSNumber *_lowerMenstruationLengthPercentile;
    NSNumber *_upperCycleLengthPercentile;
    NSNumber *_upperMenstruationLengthPercentile;
    NSNumber *_numberOfCyclesFound;
    NSNumber *_julianDayOfFirstCycleStart;
    NSNumber *_julianDayOfLastCycleStart;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *julianDayOfLastCycleStart; // @synthesize julianDayOfLastCycleStart=_julianDayOfLastCycleStart;
@property(retain, nonatomic) NSNumber *julianDayOfFirstCycleStart; // @synthesize julianDayOfFirstCycleStart=_julianDayOfFirstCycleStart;
@property(retain, nonatomic) NSNumber *numberOfCyclesFound; // @synthesize numberOfCyclesFound=_numberOfCyclesFound;
@property(retain, nonatomic) NSNumber *upperMenstruationLengthPercentile; // @synthesize upperMenstruationLengthPercentile=_upperMenstruationLengthPercentile;
@property(retain, nonatomic) NSNumber *upperCycleLengthPercentile; // @synthesize upperCycleLengthPercentile=_upperCycleLengthPercentile;
@property(retain, nonatomic) NSNumber *lowerMenstruationLengthPercentile; // @synthesize lowerMenstruationLengthPercentile=_lowerMenstruationLengthPercentile;
@property(retain, nonatomic) NSNumber *lowerCycleLengthPercentile; // @synthesize lowerCycleLengthPercentile=_lowerCycleLengthPercentile;
@property(retain, nonatomic) NSNumber *medianMenstruationLength; // @synthesize medianMenstruationLength=_medianMenstruationLength;
@property(retain, nonatomic) NSNumber *medianCycleLength; // @synthesize medianCycleLength=_medianCycleLength;

@end

