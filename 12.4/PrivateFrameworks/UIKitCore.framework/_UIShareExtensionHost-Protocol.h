//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, NSUUID, UISUIActivityExtensionItemData, UISUIActivityExtensionItemDataRequest;

@protocol _UIShareExtensionHost <NSObject>
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
- (void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(NSString *)arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(NSUUID *)arg1;
- (void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(NSUUID *)arg1 responseData:(UISUIActivityExtensionItemData *)arg2;
- (void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(UISUIActivityExtensionItemDataRequest *)arg1 dismissPresentation:(_Bool)arg2 completion:(void (^)(UISUIActivityExtensionItemData *))arg3;
- (void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
- (void)shareExtensionServiceChangeSheetDismissButtonHidden:(_Bool)arg1;
- (void)shareExtensionServiceChangeSheetDismissButtonTitle:(NSString *)arg1;
@end

