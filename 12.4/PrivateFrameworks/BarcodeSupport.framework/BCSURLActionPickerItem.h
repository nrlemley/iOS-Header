//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/BCSActionPickerItem.h>

@class LSAppLink, LSApplicationProxy, NSURL;
@protocol BCSCodePayload;

__attribute__((visibility("hidden")))
@interface BCSURLActionPickerItem : BCSActionPickerItem
{
    NSURL *_url;
    LSApplicationProxy *_applicationProxy;
    LSAppLink *_appLink;
    id <BCSCodePayload> _codePayload;
}

@property(readonly, nonatomic) id <BCSCodePayload> codePayload; // @synthesize codePayload=_codePayload;
@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (void).cxx_destruct;
- (id)actionURL;
- (id)targetApplicationBundleIdentifier;
- (void)performAction;
- (void)performActionWithFBOptions:(id)arg1;
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4;
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationProxy:(id)arg4;

@end

