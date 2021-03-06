//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLPostVertexDumpOutput : NSObject
{
    NSString *_airMDType;
    unsigned long long _dataType;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
    NSString *_name;
    unsigned long long _offset;
}

@property(readonly) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long aluType; // @synthesize aluType=_aluType;
@property(readonly) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) NSString *airMDType; // @synthesize airMDType=_airMDType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 aluType:(unsigned long long)arg4 name:(id)arg5 offset:(unsigned long long)arg6;

@end

