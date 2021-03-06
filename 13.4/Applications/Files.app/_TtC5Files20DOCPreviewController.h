//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLPreviewController.h>

#import "QLPreviewControllerDataSource-Protocol.h"

@class NSArray;
@protocol QLPreviewControllerDelegate;

@interface _TtC5Files20DOCPreviewController : QLPreviewController <QLPreviewControllerDataSource>
{
    // Error parsing type: , name: editingDelegate
    // Error parsing type: , name: source
    // Error parsing type: , name: transitioningProvider
    // Error parsing type: , name: observation
    // Error parsing type: , name: domainDisplayNameProvider
    // Error parsing type: , name: publishesUserActivity
    // Error parsing type: , name: currentUserActivity
}

+ (void)clearSharedControllerFor:(id)arg1;
+ (id)sharedControllerFor:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPreviewItems:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (void)previewController:(id)arg1 willSaveEditedItem:(id)arg2;
- (_Bool)previewController:(id)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)reallyBecomeCurrent:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
@property(nonatomic) long long modalPresentationStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismissViaKeyCommand;
- (void)registerDomainDisplayNameProvider:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, retain) id <QLPreviewControllerDelegate> delegate;

@end

