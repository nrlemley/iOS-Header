//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DASubCal/SubCalDATaskTrustDelegate-Protocol.h>

@class NSData, NSError, NSString, SubCalValidationTask;

@protocol SubCalValidationTaskDelegate <SubCalDATaskTrustDelegate>
- (void)subCalValidationTask:(SubCalValidationTask *)arg1 finishedWithError:(NSError *)arg2 calendarName:(NSString *)arg3 calendarData:(NSData *)arg4;
@end

