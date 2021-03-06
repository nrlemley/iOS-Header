//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSData;

@interface ASCodableCloudKitNotificationEvent : PBCodable <NSCopying>
{
    double _date;
    long long _triggerSnapshotIndex;
    long long _type;
    NSData *_triggerUUID;
    struct {
        unsigned int date:1;
        unsigned int triggerSnapshotIndex:1;
        unsigned int type:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long triggerSnapshotIndex; // @synthesize triggerSnapshotIndex=_triggerSnapshotIndex;
@property(retain, nonatomic) NSData *triggerUUID; // @synthesize triggerUUID=_triggerUUID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double date; // @synthesize date=_date;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTriggerSnapshotIndex;
@property(readonly, nonatomic) _Bool hasTriggerUUID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasDate;

@end

