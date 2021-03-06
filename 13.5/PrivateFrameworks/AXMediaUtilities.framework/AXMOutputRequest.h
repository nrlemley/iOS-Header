//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMOutputRequestHandle, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXMOutputRequest : NSObject
{
    AXMOutputRequestHandle *_handle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_actions;
    _Bool _interruptsAndClearsQueue;
    CDUnknownBlockType _completionBlock;
}

+ (id)speechItemSeparator;
- (void).cxx_destruct;
@property(readonly, nonatomic) AXMOutputRequestHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) _Bool interruptsAndClearsQueue; // @synthesize interruptsAndClearsQueue=_interruptsAndClearsQueue;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)addActiveSoundItemWithURL:(id)arg1;
- (void)addActiveSoundItemWithID:(id)arg1;
- (void)addSoundItemWithURL:(id)arg1;
- (void)addSoundItemWithID:(id)arg1;
- (void)addSpeechItem:(id)arg1;
- (void)_addAction:(id)arg1;
@property(readonly, nonatomic) NSArray *activeSoundActions;
@property(readonly, nonatomic) NSArray *oneShotSoundActions;
@property(readonly, nonatomic) NSArray *speechActions;
@property(readonly, nonatomic) NSArray *actions;
- (id)init;

@end

