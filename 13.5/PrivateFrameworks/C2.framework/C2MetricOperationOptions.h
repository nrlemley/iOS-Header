//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <C2/NSSecureCoding-Protocol.h>

@class C2MetricOperationGroupOptions, NSString;

@interface C2MetricOperationOptions : NSObject <NSSecureCoding>
{
    C2MetricOperationGroupOptions *_operationGroup;
    NSString *_operationId;
    NSString *_operationType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(copy, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
@property(copy, nonatomic) C2MetricOperationGroupOptions *operationGroup; // @synthesize operationGroup=_operationGroup;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

