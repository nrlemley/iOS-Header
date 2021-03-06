//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject
{
    _Bool _cancelled;
    NSArray *_scopeIdentifiers;
    NSString *_taskIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, copy, nonatomic) NSArray *scopeIdentifiers; // @synthesize scopeIdentifiers=_scopeIdentifiers;
- (id)description;
- (void)cancelTask;
- (void)launch;
- (id)initWithScopeIdentifiers:(id)arg1;

@end

