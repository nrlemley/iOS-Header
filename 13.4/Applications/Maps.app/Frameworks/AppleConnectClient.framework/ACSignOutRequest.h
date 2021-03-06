//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleConnectClient/ACMessageConfiguration-Protocol.h>
#import <AppleConnectClient/ACMessageProtocol-Protocol.h>

@class NSString;

@interface ACSignOutRequest : NSObject <ACMessageProtocol, ACMessageConfiguration>
{
    _Bool _bypassAccessAuthorization;
    _Bool _extensionMode;
    _Bool _suppressProgressIndicator;
    _Bool _retail;
    long long _authenticationMethod;
    long long _environment;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool retail; // @synthesize retail=_retail;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool suppressProgressIndicator; // @synthesize suppressProgressIndicator=_suppressProgressIndicator;
@property(nonatomic) _Bool extensionMode; // @synthesize extensionMode=_extensionMode;
@property(nonatomic) long long authenticationMethod; // @synthesize authenticationMethod=_authenticationMethod;
@property(nonatomic) _Bool bypassAccessAuthorization; // @synthesize bypassAccessAuthorization=_bypassAccessAuthorization;
@property(readonly, nonatomic) _Bool cancelable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

