//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Dialog-Protocol.h"

@class NSString;

@interface IncompatibleDialog : NSObject <Dialog>
{
    NSString *_itemName;
}

+ (id)_titleForItemName:(id)arg1 andTotalCount:(long long)arg2;
+ (id)_messageForItemName:(id)arg1 andTotalCount:(long long)arg2;
+ (id)dialogWithItemName:(id)arg1;
- (void).cxx_destruct;
- (void)presentSystemDialogWithCount:(long long)arg1;
- (id)preferredDialog:(id)arg1;
@property(readonly) NSString *dialogType;
- (id)initWithItemName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

