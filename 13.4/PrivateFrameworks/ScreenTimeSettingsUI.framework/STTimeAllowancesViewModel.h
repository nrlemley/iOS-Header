//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, STAlwaysAllowList, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STTimeAllowancesViewModel : NSObject
{
    _Bool _allAllowancesEnabled;
    STDeviceBedtime *_bedtime;
    NSDictionary *_allowancesByIdentifier;
    STAlwaysAllowList *_alwaysAllowList;
    NSDictionary *_pendingAskForTimeByIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *pendingAskForTimeByIdentifier; // @synthesize pendingAskForTimeByIdentifier=_pendingAskForTimeByIdentifier;
@property(copy, nonatomic) STAlwaysAllowList *alwaysAllowList; // @synthesize alwaysAllowList=_alwaysAllowList;
@property(copy, nonatomic) NSDictionary *allowancesByIdentifier; // @synthesize allowancesByIdentifier=_allowancesByIdentifier;
@property(copy, nonatomic) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
@property(nonatomic) _Bool allAllowancesEnabled; // @synthesize allAllowancesEnabled=_allAllowancesEnabled;
- (id)init;

@end

