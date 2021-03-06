//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

@class NSString, _XCKVOExpectationImplementation;

@interface XCTKVOExpectation : XCTestExpectation
{
    _XCKVOExpectationImplementation *_internal;
}

@property(retain) _XCKVOExpectationImplementation *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (void)cleanup;
@property(copy) CDUnknownBlockType handler;
@property(readonly) unsigned long long options;
@property(readonly) id expectedValue;
@property(readonly) id observedObject;
@property(readonly, copy) NSString *keyPath;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3 options:(unsigned long long)arg4;
- (void)dealloc;

@end

