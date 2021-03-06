//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject
{
    AVContentKeyResponseInternal *_keyResponse;
}

+ (id)contentKeyResponseWithAuthorizationTokenData:(id)arg1;
+ (id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1;
- (id)keySystem;
- (void)dealloc;
- (id)initWithKeySystem:(id)arg1;

@end

