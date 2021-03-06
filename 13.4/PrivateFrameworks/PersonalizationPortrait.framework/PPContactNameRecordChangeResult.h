//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _changesTruncated;
    NSArray *_changes;
}

+ (_Bool)supportsSecureCoding;
+ (id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool changesTruncated; // @synthesize changesTruncated=_changesTruncated;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
- (_Bool)isEqualToContactNameRecordChangeResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithChanges:(id)arg1 changesTruncated:(_Bool)arg2;

@end

