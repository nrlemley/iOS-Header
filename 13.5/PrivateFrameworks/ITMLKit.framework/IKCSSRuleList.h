//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IKCSSRuleList : NSObject
{
    NSMutableArray *rules;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (id)lastRule;
- (id)firstRule;
- (void)addRule:(id)arg1;
- (id)init;

@end

