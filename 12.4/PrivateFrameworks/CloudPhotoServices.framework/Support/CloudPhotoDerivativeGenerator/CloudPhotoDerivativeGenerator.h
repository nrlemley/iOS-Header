//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CloudPhotoDerivativeGeneratorProtocol-Protocol.h"

@class NSMutableDictionary;

@interface CloudPhotoDerivativeGenerator : NSObject <CloudPhotoDerivativeGeneratorProtocol>
{
    NSMutableDictionary *_singlePassExportItemsInProgress;
}

+ (void)decrementPendingRequestCount;
+ (void)incrementPendingRequestCount;
+ (_Bool)_canAccelerateDecodeForImageSize:(struct CGSize)arg1;
+ (id)_metadataWithoutOrientation:(id)arg1;
+ (struct CGSize)_targetSizeFromInputSize:(struct CGSize)arg1 maximumPixelCount:(long long)arg2;
+ (_Bool)optionsRequireMetadataChanges:(id)arg1;
+ (_Bool)_resizeImageUsingHWForInputURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(long long)arg3 options:(id)arg4 error:(id *)arg5;
+ (void)_applyCommonMetadataFromOptions:(id)arg1 toImageProperties:(id)arg2;
+ (_Bool)_resizeImageUsingSWForInputImageSource:(struct CGImageSource *)arg1 destinationURL:(id)arg2 targetSize:(struct CGSize)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)shouldMaximizeVideoConversionPowerEfficiencyForOptions:(id)arg1 inputAssetDuration:(double)arg2;
+ (void)_applyCommonMetadataFromInputAsset:(id)arg1 options:(id)arg2 toExportSession:(id)arg3;
+ (id)signatureOptionToTypeMapping;
+ (_Bool)_performPassthroughConversionForInputImageSource:(struct CGImageSource *)arg1 inputURL:(id)arg2 containerType:(id)arg3 destinationURL:(id)arg4 options:(id)arg5 error:(id *)arg6;
@property(retain) NSMutableDictionary *singlePassExportItemsInProgress; // @synthesize singlePassExportItemsInProgress=_singlePassExportItemsInProgress;
- (void).cxx_destruct;
- (void)prepareAndStartExportSession:(id)arg1 inputAsset:(id)arg2 options:(id)arg3 parentProgress:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_applyAdditionalMetadataFromOptions:(id)arg1 toSinglePassExportItem:(id)arg2;
- (id)remoteGenerateGIFForVideoAtURL:(id)arg1 destinationURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)remoteSinglePassTranscodeVideoAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)remoteTranscodeVideoAtURL:(id)arg1 withAdjustmentsPropertyList:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)remoteGeneratePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(long long)arg2 destinationURL:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)remoteResizeImageAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)remoteTerminateWithReply:(CDUnknownBlockType)arg1;
- (void)remoteStatusWithReply:(CDUnknownBlockType)arg1;
- (id)init;

@end

