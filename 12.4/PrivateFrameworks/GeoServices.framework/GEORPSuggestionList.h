//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSMutableArray, NSString;

@interface GEORPSuggestionList : PBCodable <NSCopying>
{
    GEOPDPlaceRequest *_autocompleteRequest;
    GEOPDPlaceResponse *_autocompleteResponse;
    NSMutableArray *_entrys;
    NSString *_query;
}

+ (Class)entryType;
@property(retain, nonatomic) GEOPDPlaceResponse *autocompleteResponse; // @synthesize autocompleteResponse=_autocompleteResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *autocompleteRequest; // @synthesize autocompleteRequest=_autocompleteRequest;
@property(retain, nonatomic) NSMutableArray *entrys; // @synthesize entrys=_entrys;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAutocompleteResponse;
@property(readonly, nonatomic) _Bool hasAutocompleteRequest;
- (id)entryAtIndex:(unsigned long long)arg1;
- (unsigned long long)entrysCount;
- (void)addEntry:(id)arg1;
- (void)clearEntrys;
@property(readonly, nonatomic) _Bool hasQuery;

@end

