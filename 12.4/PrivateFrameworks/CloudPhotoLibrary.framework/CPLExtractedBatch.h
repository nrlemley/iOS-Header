//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLChangeBatch, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CPLExtractedBatch : NSObject <NSSecureCoding>
{
    NSDictionary *_uploadIdentifiers;
    NSMutableDictionary *_mutableUploadIdentifiers;
    NSSet *_untrustableScopedIdentifiers;
    NSMutableSet *_mutableUntrustableScopedIndentifiers;
    _Bool _resourceSizeIsCalculated;
    _Bool _full;
    _Bool _batchCanLowerQuota;
    unsigned long long _resourceSize;
    CPLChangeBatch *_batch;
    NSString *_clientCacheIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *clientCacheIdentifier; // @synthesize clientCacheIdentifier=_clientCacheIdentifier;
@property(readonly, nonatomic) _Bool batchCanLowerQuota; // @synthesize batchCanLowerQuota=_batchCanLowerQuota;
@property(nonatomic, getter=isFull) _Bool full; // @synthesize full=_full;
@property(readonly, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (void).cxx_destruct;
- (void)forceScopeIndexOnAllRecordsTo:(long long)arg1;
@property(readonly, nonatomic) unsigned long long resourceSize; // @synthesize resourceSize=_resourceSize;
- (id)uploadIdentifiers;
- (void)addChange:(id)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

