//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUTDSXPCDaemonInterface-Protocol.h>

@class CUTDSDaemon, CUTDSProvider, CUTDSSeeker, CUTDSSession, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUTDSXPCConnection : NSObject <CUTDSXPCDaemonInterface>
{
    CUTDSProvider *_activatedProvider;
    CUTDSSeeker *_activatedSeeker;
    CUTDSSession *_activatedSession;
    struct LogCategory *_ucat;
    _Bool _entitled;
    CUTDSDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) CUTDSDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (void)xpcTDSSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcTDSSeekerActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcTDSProviderActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_entitledAndReturnError:(id *)arg1;
- (void)connectionInvalidated;
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;

@end

