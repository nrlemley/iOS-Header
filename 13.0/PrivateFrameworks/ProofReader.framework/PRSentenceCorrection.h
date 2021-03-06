//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PRSentenceCorrection : NSObject
{
    int _category;
    struct _NSRange _range;
    NSString *_word;
    NSArray *_corrections;
}

- (_Bool)presentAsGrammarError;
- (_Bool)presentAsAutocorrection;
- (_Bool)presentAsSpellingError;
- (id)corrections;
- (id)word;
- (struct _NSRange)range;
- (int)category;
- (id)description;
- (void)dealloc;
- (id)initWithCategory:(int)arg1 range:(struct _NSRange)arg2 word:(id)arg3 corrections:(id)arg4;

@end

