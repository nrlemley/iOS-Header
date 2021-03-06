//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL, NTKPhotoAnalysis;

@interface NTKPhoto : NSObject <NSCopying>
{
    NTKPhotoAnalysis *_analyses[4];
    _Bool _isIris;
    NSString *_localIdentifier;
    NSDate *_modificationDate;
    NSURL *_imageURL;
    NSURL *_irisVideoURL;
    double _irisDuration;
    double _irisStillDisplayTime;
    struct CGRect _originalCrop;
    struct CGRect _crop;
}

+ (id)decodeFromDictionary:(id)arg1 forResourceDirectory:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double irisStillDisplayTime; // @synthesize irisStillDisplayTime=_irisStillDisplayTime;
@property(nonatomic) double irisDuration; // @synthesize irisDuration=_irisDuration;
@property(copy, nonatomic) NSURL *irisVideoURL; // @synthesize irisVideoURL=_irisVideoURL;
@property(nonatomic) _Bool isIris; // @synthesize isIris=_isIris;
@property(nonatomic) struct CGRect crop; // @synthesize crop=_crop;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) struct CGRect originalCrop; // @synthesize originalCrop=_originalCrop;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (void)setAnalysis:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3;
- (id)analysisForAlignment:(unsigned long long)arg1 deviceSizeClass:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool isMissingAnalysis;
@property(readonly, nonatomic) NSString *uuidFromLocalIdentifierAndModificationDate;
- (_Bool)isEqualToAsset:(id)arg1;
- (_Bool)isEqualToPhoto:(id)arg1;
- (id)encodeAsDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLegacySidecar:(id)arg1;

@end

