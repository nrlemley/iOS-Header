//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureDataOutputSynchronizerInternal : NSObject
{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *dataOutputs;
    struct OpaqueFigSimpleMutex *dataOutputsStorageMutex;
    NSArray *dataOutputsStorage;
    int masterSynchronizedDataQueueMaxDepth;
    _Bool synchronizingVideoAndDepth;
    _Bool synchronizingVideoAndVisionData;
}

@end

