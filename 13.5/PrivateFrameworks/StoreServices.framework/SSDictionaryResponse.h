//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_dictionary;
- (id)_valueForProtocolKey:(id)arg1;
- (id)_copyAccount;
@property(readonly, nonatomic) NSURL *versionMismatchURL;
@property(readonly, nonatomic) NSArray *pingURLs;
@property(readonly, nonatomic, getter=isSupportedProtocolVersion) _Bool supportedProtocolVersion;
@property(readonly, nonatomic) NSNumber *failureType;
- (id)actionsWithActionType:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)init;

@end

