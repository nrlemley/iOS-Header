//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/NSObject-Protocol.h>

@class HMBLocalZone, HMBProcessingResult, NSSet, NSUUID;

@protocol HMBLocalZoneDelegate <NSObject>

@optional
- (void)localZone:(HMBLocalZone *)arg1 didCompleteProcessingWithResult:(HMBProcessingResult *)arg2;
- (NSUUID *)localZone:(HMBLocalZone *)arg1 didUpdateFromToken:(NSUUID *)arg2 delta:(NSSet *)arg3;
@end

