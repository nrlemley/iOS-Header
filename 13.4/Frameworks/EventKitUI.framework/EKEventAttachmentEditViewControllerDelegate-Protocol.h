//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEvent, EKEventAttachmentEditViewController;

@protocol EKEventAttachmentEditViewControllerDelegate <NSObject>

@optional
- (void)attachmentEditViewController:(EKEventAttachmentEditViewController *)arg1 attachmentDidChange:(long long)arg2;
- (EKEvent *)owningEventForAttachmentEditViewController:(EKEventAttachmentEditViewController *)arg1;
@end

