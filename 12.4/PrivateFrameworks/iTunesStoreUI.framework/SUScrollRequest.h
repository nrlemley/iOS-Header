//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;

@interface SUScrollRequest : NSObject
{
    _Bool _animated;
    CDUnknownBlockType _completionHandler;
    NSValue *_contentOffsetValue;
    NSValue *_frameValue;
}

@property(retain) NSValue *frameValue; // @synthesize frameValue=_frameValue;
@property(retain) NSValue *contentOffsetValue; // @synthesize contentOffsetValue=_contentOffsetValue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void)dealloc;

@end

