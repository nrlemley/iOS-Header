//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSNumber, NSString, SAUIImageResource;

@interface SAUIImageView : SAAceView
{
}

+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)imageView;
@property(copy, nonatomic) NSNumber *tintColor;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

