//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOCompanionGenericStep : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEOJunctionElement *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    NSMutableArray *_maneuverNames;
    NSMutableArray *_signposts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _junctionType;
    int _maneuverType;
    int _transportType;
    struct {
        unsigned int has_junctionType:1;
        unsigned int has_maneuverType:1;
        unsigned int has_transportType:1;
        unsigned int read_junctionElements:1;
        unsigned int read_maneuverNames:1;
        unsigned int read_signposts:1;
        unsigned int wrote_junctionElements:1;
        unsigned int wrote_maneuverNames:1;
        unsigned int wrote_signposts:1;
        unsigned int wrote_junctionType:1;
        unsigned int wrote_maneuverType:1;
        unsigned int wrote_transportType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)signpostType;
+ (Class)maneuverNameType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsJunctionElement:(struct GEOJunctionElement)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;
- (void)clearJunctionElements;
@property(readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
- (void)_readJunctionElements;
- (int)StringAsJunctionType:(id)arg1;
- (id)junctionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasJunctionType;
@property(nonatomic) int junctionType;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)_addNoFlagsSignpost:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
@property(retain, nonatomic) NSMutableArray *signposts;
- (void)_readSignposts;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (void)_addNoFlagsManeuverName:(id)arg1;
- (void)addManeuverName:(id)arg1;
- (void)clearManeuverNames;
@property(retain, nonatomic) NSMutableArray *maneuverNames;
- (void)_readManeuverNames;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

