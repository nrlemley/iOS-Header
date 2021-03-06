//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CKDClientContext, CKDClientProxy;

__attribute__((visibility("hidden")))
@interface CKDProxySetupOperation : NSOperation
{
    _Bool _isFinished;
    _Bool _isExecuting;
    CKDClientProxy *_proxy;
    CKDClientContext *_context;
}

+ (id)operationWithProxy:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(nonatomic) __weak CKDClientProxy *proxy; // @synthesize proxy=_proxy;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (void)_markFinished;
- (void)_setIsFinished:(_Bool)arg1;
- (void)_setIsExecuting:(_Bool)arg1;
- (_Bool)isAsynchronous;
- (void)start;
- (id)initWithProxy:(id)arg1 context:(id)arg2;

@end

