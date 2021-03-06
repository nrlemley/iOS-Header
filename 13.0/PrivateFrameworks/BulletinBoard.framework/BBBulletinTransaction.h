//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BBBulletinTransaction : NSObject
{
    NSString *_bulletinID;
    unsigned long long _transactionID;
}

+ (id)transactionWithBulletinID:(id)arg1;
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (void).cxx_destruct;
- (unsigned long long)incrementTransactionID;
- (id)description;
- (id)initWithBulletinID:(id)arg1;

@end

