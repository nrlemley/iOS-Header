//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUAccountViewController.h>

#import "SUStorePageViewControllerResponder-Protocol.h"
#import "ServiceAccountPageEmbedded-Protocol.h"

@class NSString;
@protocol ServiceAccountPageEmbeddedParent;

@interface ServiceSUAccountViewController : SUAccountViewController <SUStorePageViewControllerResponder, ServiceAccountPageEmbedded>
{
    id <ServiceAccountPageEmbeddedParent> _embeddedParent;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ServiceAccountPageEmbeddedParent> embeddedParent; // @synthesize embeddedParent=_embeddedParent;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

