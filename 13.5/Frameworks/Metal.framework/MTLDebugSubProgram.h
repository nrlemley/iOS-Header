//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLDebugInstrumentationData, NSString;

__attribute__((visibility("hidden")))
@interface MTLDebugSubProgram : NSObject
{
    MTLDebugInstrumentationData *_data;
    struct DebugSubProgram *_debugSubProgram;
}

- (oneway void)releaseInternal;
- (oneway void)release;
- (id)retain;
@property(readonly, nonatomic) unsigned int line;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *filename;

@end

