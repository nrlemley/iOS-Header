//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentScript-Protocol.h>

@class NSString, WKUserScript;

@interface SXWebContentRefreshScript : NSObject <SXWebContentScript>
{
    WKUserScript *userScript;
}

@property(readonly, nonatomic) WKUserScript *userScript; // @synthesize userScript;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) _Bool queueable;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

