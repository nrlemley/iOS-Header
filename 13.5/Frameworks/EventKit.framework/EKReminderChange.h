//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKCalendarItemChange.h>

@interface EKReminderChange : EKCalendarItemChange
{
}

+ (void)fetchReminderChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchReminderChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchReminderChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (int)entityType;

@end

