//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AXUIService, NSObject><NSCopying;

@interface AXUIServiceContext : NSObject
{
    id <AXUIService> _service;
    id <NSObject><NSCopying> _serviceIdentifier;
    NSMutableArray *_clientMessengers;
}

@property(retain, nonatomic) NSMutableArray *clientMessengers; // @synthesize clientMessengers=_clientMessengers;
@property(copy, nonatomic) id <NSObject><NSCopying> serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) id <AXUIService> service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;
- (id)clientMessengerWithIdentifier:(id)arg1;
- (_Bool)hasClientWithIdentifier:(id)arg1;
- (void)removeClientWithIdentifier:(id)arg1;
- (unsigned long long)_indexOfClientWithIdentifier:(id)arg1;
- (void)addClientWithIdentifier:(id)arg1 connection:(id)arg2;
@property(readonly, nonatomic) unsigned long long clientsCount;
- (id)initWithService:(id)arg1 serviceIdentifier:(id)arg2;

@end

