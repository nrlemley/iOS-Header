//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HAPAccessory, HMDAccessory, NSArray, NSString, NSUUID;

@interface HMDCharacteristicReadWriteLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _isWriteOperation;
    _Bool _isTimedWrite;
    _Bool _isLocal;
    _Bool _isCached;
    _Bool _isResidentAvailable;
    _Bool _isRemoteAccessAllowed;
    _Bool _isRemotelyReachable;
    NSArray *_characteristicsToRead;
    HAPAccessory *_hapAccessory;
    HMDAccessory *_hmdAccessory;
    NSUUID *_transactionId;
    unsigned long long _triggerSource;
    NSString *_primaryServiceType;
    unsigned long long _consecutiveFailureCount;
    double _timeIntervalSinceFirstFailure;
}

+ (id)characteristicWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isTimedWrite:(_Bool)arg5 isLocal:(_Bool)arg6 transactionId:(id)arg7;
+ (id)characteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isLocal:(_Bool)arg5 transactionId:(id)arg6 isCached:(_Bool)arg7;
+ (id)uuid;
- (void).cxx_destruct;
@property(nonatomic) double timeIntervalSinceFirstFailure; // @synthesize timeIntervalSinceFirstFailure=_timeIntervalSinceFirstFailure;
@property(nonatomic) unsigned long long consecutiveFailureCount; // @synthesize consecutiveFailureCount=_consecutiveFailureCount;
@property(readonly, nonatomic) _Bool isRemotelyReachable; // @synthesize isRemotelyReachable=_isRemotelyReachable;
@property(readonly, nonatomic) _Bool isRemoteAccessAllowed; // @synthesize isRemoteAccessAllowed=_isRemoteAccessAllowed;
@property(readonly, nonatomic) _Bool isResidentAvailable; // @synthesize isResidentAvailable=_isResidentAvailable;
@property(readonly, nonatomic) NSString *primaryServiceType; // @synthesize primaryServiceType=_primaryServiceType;
@property(readonly, nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(readonly, nonatomic) unsigned long long triggerSource; // @synthesize triggerSource=_triggerSource;
@property(readonly, nonatomic) NSUUID *transactionId; // @synthesize transactionId=_transactionId;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) _Bool isTimedWrite; // @synthesize isTimedWrite=_isTimedWrite;
@property(readonly, nonatomic) _Bool isWriteOperation; // @synthesize isWriteOperation=_isWriteOperation;
@property(readonly, nonatomic) __weak HMDAccessory *hmdAccessory; // @synthesize hmdAccessory=_hmdAccessory;
@property(readonly, nonatomic) __weak HAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(readonly, nonatomic) NSArray *characteristicsToRead; // @synthesize characteristicsToRead=_characteristicsToRead;
- (void)submitAtDate:(id)arg1 error:(id)arg2;
- (void)setLocal:(_Bool)arg1;
- (id)initReadWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isWriteOperation:(_Bool)arg5 isTimedWrite:(_Bool)arg6 isLocal:(_Bool)arg7 transactionId:(id)arg8 isCached:(_Bool)arg9;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

