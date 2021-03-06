//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface UserNotification : NSObject
{
    CDUnknownBlockType _completionBlock;
    _Bool _isCanceled;
    NSDictionary *_notificationDictionary;
    unsigned long long _notificationOptions;
    struct __CFUserNotification *_userNotification;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled; // @synthesize canceled=_isCanceled;
- (unsigned long long)waitForResponse;
@property(readonly, nonatomic) struct __CFUserNotification *userNotification;
- (void)updateWithDictionary:(id)arg1 options:(unsigned long long)arg2;
- (void)show;
- (void)cancel;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithDialog:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

