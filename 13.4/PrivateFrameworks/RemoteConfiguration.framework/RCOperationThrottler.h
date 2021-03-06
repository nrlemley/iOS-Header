//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationThrottler-Protocol.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface RCOperationThrottler : NSObject <RCOperationThrottler>
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
    _Bool _suspended;
}

- (void).cxx_destruct;
@property _Bool suspended; // @synthesize suspended=_suspended;
- (void)tickle;
- (void)addCompletionForCurrentOperation:(CDUnknownBlockType)arg1;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 updateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

