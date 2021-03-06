//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, UIViewController;
@protocol EnqueueableDismissOperationProtocol, OS_dispatch_queue;

@interface DismissPresentedViewControllerOperation : NSOperation
{
    UIViewController<EnqueueableDismissOperationProtocol> *_presentingViewController;
    int _transition;
    CDUnknownBlockType _completion;
    _Bool _isFinished;
    _Bool _isExecuting;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)blacklistedDismissalClasses;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)main;
- (void)finish;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)cancel;
- (_Bool)isConcurrent;
- (void)start;
- (id)description;
- (id)initWithPresentingViewController:(id)arg1 transition:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end

