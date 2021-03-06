//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableFitnessFriendActivitySnapshot : PBCodable <HDDecoding, NSCopying>
{
    double _activeHours;
    double _activeHoursGoal;
    double _briskMinutes;
    double _briskMinutesGoal;
    double _date;
    double _energyBurned;
    double _energyBurnedGoal;
    double _pushCount;
    long long _snapshotIndex;
    double _stepCount;
    long long _timeZoneOffsetFromUTCForNoon;
    double _uploadedDate;
    double _walkingAndRunningDistance;
    long long _wheelchairUse;
    NSData *_friendUUID;
    HDCodableSample *_sample;
    NSData *_sourceUUID;
    struct {
        unsigned int activeHours:1;
        unsigned int activeHoursGoal:1;
        unsigned int briskMinutes:1;
        unsigned int briskMinutesGoal:1;
        unsigned int date:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int pushCount:1;
        unsigned int snapshotIndex:1;
        unsigned int stepCount:1;
        unsigned int timeZoneOffsetFromUTCForNoon:1;
        unsigned int uploadedDate:1;
        unsigned int walkingAndRunningDistance:1;
        unsigned int wheelchairUse:1;
    } _has;
}

@property(nonatomic) double uploadedDate; // @synthesize uploadedDate=_uploadedDate;
@property(nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
@property(nonatomic) double pushCount; // @synthesize pushCount=_pushCount;
@property(nonatomic) double stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) double walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property(nonatomic) double activeHoursGoal; // @synthesize activeHoursGoal=_activeHoursGoal;
@property(nonatomic) double activeHours; // @synthesize activeHours=_activeHours;
@property(nonatomic) double briskMinutesGoal; // @synthesize briskMinutesGoal=_briskMinutesGoal;
@property(nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) double energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property(nonatomic) double energyBurned; // @synthesize energyBurned=_energyBurned;
@property(nonatomic) long long timeZoneOffsetFromUTCForNoon; // @synthesize timeZoneOffsetFromUTCForNoon=_timeZoneOffsetFromUTCForNoon;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long snapshotIndex; // @synthesize snapshotIndex=_snapshotIndex;
@property(retain, nonatomic) NSData *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
@property(retain, nonatomic) NSData *friendUUID; // @synthesize friendUUID=_friendUUID;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasUploadedDate;
@property(nonatomic) _Bool hasWheelchairUse;
@property(nonatomic) _Bool hasPushCount;
@property(nonatomic) _Bool hasStepCount;
@property(nonatomic) _Bool hasWalkingAndRunningDistance;
@property(nonatomic) _Bool hasActiveHoursGoal;
@property(nonatomic) _Bool hasActiveHours;
@property(nonatomic) _Bool hasBriskMinutesGoal;
@property(nonatomic) _Bool hasBriskMinutes;
@property(nonatomic) _Bool hasEnergyBurnedGoal;
@property(nonatomic) _Bool hasEnergyBurned;
@property(nonatomic) _Bool hasTimeZoneOffsetFromUTCForNoon;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasSnapshotIndex;
@property(readonly, nonatomic) _Bool hasSourceUUID;
@property(readonly, nonatomic) _Bool hasFriendUUID;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

