//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookLegacy/ABPredicate.h>

@class NSArray, NSObject;
@protocol NSObject;

@interface ABValuePredicate : ABPredicate
{
    int _property;
    long long _comparison;
    id <NSObject> _value;
    NSArray *_orderedKeys;
    _Bool _dictionaryValue;
}

+ (id)stringForComparison:(id)arg1 withComparision:(long long)arg2;
@property(copy, nonatomic) NSObject *value; // @synthesize value=_value;
@property(nonatomic) long long comparison; // @synthesize comparison=_comparison;
@property(nonatomic) int property; // @synthesize property=_property;
- (id)predicateFormat;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)_ftsAllQueryStrings;
- (id)_ftsTokenizedTermStringForString:(id)arg1;
- (id)_ftsTermStringForString:(id)arg1;
- (id)stringForComparison:(id)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (_Bool)_allowsLaxCheckingForFTS;
- (_Bool)_supportsFTSSearch;
- (_Bool)_shouldConsultIndexForKey:(id)arg1;
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (_Bool)isValid;
- (void)dealloc;
- (id)init;

@end

