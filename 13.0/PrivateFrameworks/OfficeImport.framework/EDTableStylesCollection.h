//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDTableStylesCollection : EDCollection
{
    NSString *mDefaultTableStyleName;
    NSString *mDefaultPivotStyleName;
}

- (void).cxx_destruct;
- (void)setDefaultPivotStyleName:(id)arg1;
- (id)defaultPivotStyleName;
- (void)setDefaultTableStyleName:(id)arg1;
- (id)defaultTableStyleName;
- (id)objectWithName:(id)arg1;
- (id)defaultPivotStyle;
- (id)defaultTableStyle;

@end

