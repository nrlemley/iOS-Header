//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerPrivateDelegate-Protocol.h"
#import "CBPairingAgentDelegate-Protocol.h"
#import "CBScalablePipeManagerDelegate-Protocol.h"
#import "NSStreamDelegate-Protocol.h"
#import "SZExtractorDelegate-Protocol.h"

@class CBCentralManager, CBPairingAgent, CBPeripheral, CBScalablePipe, CBScalablePipeManager, NSFileManager, NSInputStream, NSMutableDictionary, NSString, SZExtractor;
@protocol COSFileTransferControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface COSFileTransferController : NSObject <CBScalablePipeManagerDelegate, NSStreamDelegate, CBCentralManagerPrivateDelegate, CBPairingAgentDelegate, SZExtractorDelegate>
{
    _Bool _pairingCompleted;
    _Bool _didFinishTransfer;
    _Bool _acceptsFirstDiscoveredPeer;
    _Bool _pipeRegistered;
    _Bool _watchDidRequestPair;
    _Bool _didFailTransfer;
    _Bool _attemptingReconnect;
    NSString *_errorTitle;
    id <COSFileTransferControllerDelegate> _delegate;
    CDUnknownBlockType _fileCleanupHandler;
    NSString *_filePath;
    CBCentralManager *_centralManager;
    CBPairingAgent *_pairingAgent;
    CBPeripheral *_watchPeer;
    CBScalablePipeManager *_pipeManager;
    CBScalablePipe *_transportPipe;
    NSInputStream *_inputStream;
    NSMutableDictionary *_discoveredDevicesByIdentifier;
    NSFileManager *_fileManager;
    SZExtractor *_extractor;
    NSObject<OS_dispatch_source> *_timeoutSource;
    long long _failedAttempts;
    NSString *_serviceString;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *serviceString; // @synthesize serviceString=_serviceString;
@property(nonatomic) long long failedAttempts; // @synthesize failedAttempts=_failedAttempts;
@property(nonatomic) _Bool attemptingReconnect; // @synthesize attemptingReconnect=_attemptingReconnect;
@property(nonatomic) _Bool didFailTransfer; // @synthesize didFailTransfer=_didFailTransfer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(retain, nonatomic) SZExtractor *extractor; // @synthesize extractor=_extractor;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) _Bool watchDidRequestPair; // @synthesize watchDidRequestPair=_watchDidRequestPair;
@property(nonatomic) _Bool pipeRegistered; // @synthesize pipeRegistered=_pipeRegistered;
@property(retain, nonatomic) NSMutableDictionary *discoveredDevicesByIdentifier; // @synthesize discoveredDevicesByIdentifier=_discoveredDevicesByIdentifier;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) CBScalablePipe *transportPipe; // @synthesize transportPipe=_transportPipe;
@property(retain, nonatomic) CBScalablePipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
@property(retain, nonatomic) CBPeripheral *watchPeer; // @synthesize watchPeer=_watchPeer;
@property(retain, nonatomic) CBPairingAgent *pairingAgent; // @synthesize pairingAgent=_pairingAgent;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) CDUnknownBlockType fileCleanupHandler; // @synthesize fileCleanupHandler=_fileCleanupHandler;
@property(nonatomic) __weak id <COSFileTransferControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(readonly, nonatomic) _Bool acceptsFirstDiscoveredPeer; // @synthesize acceptsFirstDiscoveredPeer=_acceptsFirstDiscoveredPeer;
@property(readonly, nonatomic) _Bool didFinishTransfer; // @synthesize didFinishTransfer=_didFinishTransfer;
@property(readonly, nonatomic) _Bool pairingCompleted; // @synthesize pairingCompleted=_pairingCompleted;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)setExtractionProgress:(double)arg1;
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)setupExtractor;
- (void)cancelTimer;
- (void)cleanup;
- (void)transferFailed;
- (void)transferDone;
- (void)reportErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)attemptPairingWith:(id)arg1;
- (id)discoveredDevices;
- (void)cancel;
- (void)connectWithPasskey:(id)arg1;
- (void)attemptConnection;
- (void)beginAwaitingTransfer;
- (id)initWithServiceUUIDString:(id)arg1 andQueue:(id)arg2;
- (id)initWithServiceUUIDString:(id)arg1 andQueue:(id)arg2 acceptFirstDiscoveredPeer:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

