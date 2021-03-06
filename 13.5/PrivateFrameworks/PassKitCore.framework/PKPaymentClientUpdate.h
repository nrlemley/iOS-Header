//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>
{
    NSArray *_paymentSummaryItems;
    NSArray *_shippingMethods;
    long long _status;
    NSString *_selectedAID;
}

+ (_Bool)supportsSecureCoding;
+ (id)paymentUpdateResponseWithProtobuf:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *selectedAID; // @synthesize selectedAID=_selectedAID;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(readonly, nonatomic) NSArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 status:(long long)arg3 selectedAID:(id)arg4;
- (id)protobuf;

@end

