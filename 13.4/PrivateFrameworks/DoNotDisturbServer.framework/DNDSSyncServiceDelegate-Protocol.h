//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol DNDSSyncService;

@protocol DNDSSyncServiceDelegate <NSObject>
- (void)syncService:(id <DNDSSyncService>)arg1 didReceiveMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(NSString *)arg4;

@optional
- (_Bool)syncService:(id <DNDSSyncService>)arg1 shouldAcceptIncomingMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(NSString *)arg4;
@end

