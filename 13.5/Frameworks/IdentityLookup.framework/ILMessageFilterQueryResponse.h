//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSString;

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>
{
    long long _action;
    NSString *_version;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToQueryResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

