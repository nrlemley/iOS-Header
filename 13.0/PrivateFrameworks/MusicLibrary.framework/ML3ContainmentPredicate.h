//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate
{
    NSSet *_values;
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)_orderedValues;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 values:(id)arg2;

@end

