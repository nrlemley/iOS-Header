//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSString;

@interface IKPlayerTransportBarVisibilityDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    _Bool _hidden;
}

@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)initWithHidden:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

