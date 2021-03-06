//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, NSURL;

@interface ODRManifestManagedObject : NSManagedObject
{
}

+ (id)manifestForApplicationBundleID:(id)arg1;
+ (id)manifestForApplication:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)manifestForAdamID:(id)arg1;
+ (_Bool)deleteManifestForBundleID:(id)arg1;
+ (id)createManifestForApplication:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)urlDataDetector;
+ (_Bool)haveExistingRecordForManifestWithBundleID:(id)arg1;
+ (id)fetchRequest;
- (id)localStorageID;
- (void)purgeAllAssetPacksForReason:(unsigned long long)arg1;
- (void)refreshFromStore:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSURL *localURL;
- (id)_localAssetPackManifestURL;
- (id)_localAssetPackManifestLastModificationDate;
- (_Bool)validateForInsert:(id *)arg1;
- (id)copyApplication:(_Bool)arg1;
@property(readonly, nonatomic) NSString *softwareVersionExternalID;

// Remaining properties
@property(copy, nonatomic) NSString *adamID; // @dynamic adamID;
@property(copy, nonatomic) NSString *applicationBundleID; // @dynamic applicationBundleID;
@property(retain, nonatomic) NSSet *assetPacks; // @dynamic assetPacks;
@property(copy, nonatomic) NSNumber *cachingAllowed; // @dynamic cachingAllowed;
@property(copy, nonatomic) NSNumber *isBeta; // @dynamic isBeta;
@property(copy, nonatomic) NSNumber *isStoreBased; // @dynamic isStoreBased;
@property(copy, nonatomic) NSDate *lastModificationDate; // @dynamic lastModificationDate;
@property(copy, nonatomic) NSString *localURLString; // @dynamic localURLString;
@property(copy, nonatomic) NSString *storageID; // @dynamic storageID;
@property(copy, nonatomic) NSString *thinningVariant; // @dynamic thinningVariant;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

