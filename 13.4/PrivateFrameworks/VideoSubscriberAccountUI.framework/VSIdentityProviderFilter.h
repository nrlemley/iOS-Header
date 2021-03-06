//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VSIdentityProviderFilter : NSObject
{
    NSArray *_allIdentityProviders;
    NSArray *_supportedAccountProviderIDs;
    NSString *_searchQuery;
}

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(copy, nonatomic) NSArray *supportedAccountProviderIDs; // @synthesize supportedAccountProviderIDs=_supportedAccountProviderIDs;
@property(copy, nonatomic) NSArray *allIdentityProviders; // @synthesize allIdentityProviders=_allIdentityProviders;
@property(readonly, copy, nonatomic) NSArray *filteredIdentityProviders;
- (id)init;

@end

