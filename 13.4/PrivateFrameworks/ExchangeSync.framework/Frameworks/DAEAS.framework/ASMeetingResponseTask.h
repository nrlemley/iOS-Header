//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASMeetingResponseTask : ASTask
{
    NSArray *_responseItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *responseItems; // @synthesize responseItems=_responseItems;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (int)commandCode;
- (id)initWithResponseItems:(id)arg1;

@end

