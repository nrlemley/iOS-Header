//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/_MFOfflineCacheOperation.h>

@class NSArray, NSString;

@interface MFDADeferredMessageMoveOperation : _MFOfflineCacheOperation
{
    NSArray *_sourceRemoteIDs;
    NSArray *_originalFlags;
    NSArray *_temporaryRemoteIDs;
    NSString *_sourceMailboxID;
    NSString *_destinationMailboxID;
}

+ (_Bool)supportsSecureCoding;
+ (id)log;
- (void).cxx_destruct;
- (id)description;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

