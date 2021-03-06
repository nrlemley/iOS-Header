//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface PurgeableApp : NSObject <NSCopying>
{
    _Bool _systemApp;
    NSString *_bundleID;
    NSNumber *_diskUsage;
    NSArray *_plugins;
    long long _order;
    NSString *_reason;
    NSNumber *_storeItemID;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(copy, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;
@property(copy, nonatomic) NSNumber *diskUsage; // @synthesize diskUsage=_diskUsage;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asdApp;
- (id)initWithBundleID:(id)arg1;

@end

