//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RTManagedObjectLocationProperties : NSObject
{
    NSArray *_latitudePropertyPath;
    NSArray *_longitudePropertyPath;
    NSArray *_referenceFramePropertyPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *referenceFramePropertyPath; // @synthesize referenceFramePropertyPath=_referenceFramePropertyPath;
@property(retain, nonatomic) NSArray *longitudePropertyPath; // @synthesize longitudePropertyPath=_longitudePropertyPath;
@property(retain, nonatomic) NSArray *latitudePropertyPath; // @synthesize latitudePropertyPath=_latitudePropertyPath;
- (id)initWithLatitudePropertyPath:(id)arg1 longitudePropertyPath:(id)arg2 referenceFramePropertyPath:(id)arg3;

@end

