//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrailleTranslation/NSCopying-Protocol.h>

@class NSString;

@interface BRLTBrailleChar : NSObject <NSCopying>
{
    unsigned char _bits;
}

+ (id)charWithBrf:(id)arg1;
+ (id)charWithUnichar:(unsigned short)arg1;
+ (id)charWithUnicode:(id)arg1;
+ (id)charWithBits:(unsigned char)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBrailleChar:(id)arg1;
- (_Bool)_dotUp:(int)arg1;
- (void)_setDot:(int)arg1 up:(_Bool)arg2;
@property _Bool dot8;
@property _Bool dot7;
@property _Bool dot6;
@property _Bool dot5;
@property _Bool dot4;
@property _Bool dot3;
@property _Bool dot2;
@property _Bool dot1;
@property(readonly) unsigned char bits;
@property(readonly) NSString *unicode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBrf:(id)arg1;
- (id)initWithUnichar:(unsigned short)arg1;
- (id)initWithUnicode:(id)arg1;
- (id)initWithBits:(unsigned char)arg1;

@end

