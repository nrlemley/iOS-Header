//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachineEventHandler-Protocol.h>

@class NSDate;

@protocol MTBedtimeDNDStateMachineEventHandler <MTStateMachineEventHandler>
- (void)userWokeUp;
- (void)bedtimeDNDEnabled:(_Bool)arg1 userRequested:(_Bool)arg2 date:(NSDate *)arg3;
- (void)updateState:(_Bool)arg1;
@end

