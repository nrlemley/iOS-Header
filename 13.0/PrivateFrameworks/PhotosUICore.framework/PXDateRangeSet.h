//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>

@class NSMutableArray;

@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableArray *__dateRanges;
}

+ (id)dateRangeSet;
+ (id)dateRangeSetWithDateRange:(id)arg1;
@property(retain, nonatomic) NSMutableArray *_dateRanges; // @synthesize _dateRanges=__dateRanges;
- (void).cxx_destruct;
- (id)description;
- (id)dateRanges;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDateRange:(id)arg1;
- (id)init;

@end

