//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTextInputParameter.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter
{
    _Bool _detectsAllDayDates;
    _Bool _forcesAllDayDates;
    NSDateFormatter *_hintDateFormatter;
    NSString *_reactiveParameterKey;
    NSString *_hintDateMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hintDateMode; // @synthesize hintDateMode=_hintDateMode;
@property(nonatomic) _Bool forcesAllDayDates; // @synthesize forcesAllDayDates=_forcesAllDayDates;
@property(readonly, nonatomic) _Bool detectsAllDayDates; // @synthesize detectsAllDayDates=_detectsAllDayDates;
@property(readonly, nonatomic) NSString *reactiveParameterKey; // @synthesize reactiveParameterKey=_reactiveParameterKey;
@property(readonly, nonatomic) NSString *localizedIncompleteHintString;
- (id)hintForState:(id)arg1;
@property(readonly, nonatomic) NSDateFormatter *hintDateFormatter; // @synthesize hintDateFormatter=_hintDateFormatter;
@property(readonly, nonatomic) _Bool dateOnlyMode;
@property(readonly, nonatomic) _Bool timeOnlyMode;
- (id)initWithDefinition:(id)arg1;

@end

