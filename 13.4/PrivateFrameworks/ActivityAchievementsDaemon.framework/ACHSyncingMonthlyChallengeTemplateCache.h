//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDKeyValueDomain, HDProfile, NSCalendar;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject
{
    struct os_unfair_lock_s _lock;
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    NSCalendar *_gregorianCalendar;
    HDKeyValueDomain *_keyValueDomain;
}

- (void).cxx_destruct;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HDKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(copy, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
- (id)templateForDateComponents:(id)arg1 error:(id *)arg2;
- (id)allCachedTemplatesWithError:(id *)arg1;
- (_Bool)cacheTemplate:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;

@end

