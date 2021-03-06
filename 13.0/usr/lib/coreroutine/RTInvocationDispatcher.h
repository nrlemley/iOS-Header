//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject
{
    _Bool _valid;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingInvocations;
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSMutableArray *pendingInvocations; // @synthesize pendingInvocations=_pendingInvocations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)invocationsPending;
- (unsigned long long)countOfPendingInvocations;
- (void)removeAllPendingInvocations;
- (_Bool)dispatchPendingInvocations;
- (void)_enqueueBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 description:(id)arg3;
- (void)enqueueBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 description:(id)arg3;
- (void)enqueueBlock:(CDUnknownBlockType)arg1 description:(id)arg2;
- (void)shutdown;
- (id)initWithQueue:(id)arg1;

@end

