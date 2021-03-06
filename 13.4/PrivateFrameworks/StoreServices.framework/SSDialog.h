//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SSDialogButton;

@interface SSDialog : NSObject
{
    NSArray *_buttons;
    NSMutableDictionary *_dialogDictionary;
}

- (void)_setValue:(id)arg1 forProperty:(id)arg2;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSArray *buttons;
@property(readonly, nonatomic) NSString *dialogKind;
@property(readonly, nonatomic) NSDictionary *dialogDictionary;
- (id)valueForProperty:(id)arg1;
@property(retain, nonatomic) SSDialogButton *defaultButton;
- (void)dealloc;
- (id)initWithDialogDictionary:(id)arg1;
- (id)init;

@end

