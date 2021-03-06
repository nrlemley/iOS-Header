//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/MTLDevice-Protocol.h>

@class MTLCommandQueueDescriptor, MTLComputePipelineDescriptor, MTLIndirectCommandBufferDescriptor, MTLRasterizationRateMapDescriptor, MTLRenderPipelineDescriptor, MTLStructType, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSData, NSString, _MTLIndirectArgumentBufferLayout;
@protocol MTLArgumentEncoder, MTLBuffer, MTLCommandQueue, MTLComputeCommandEncoder, MTLComputePipelineState, MTLDeserializationContext, MTLDevice, MTLDeviceSPI, MTLFunction, MTLIndirectArgumentEncoder, MTLIndirectCommandBuffer, MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder, MTLLibrary, MTLPipelineLibrarySPI, MTLRasterizationRateMap, MTLRenderCommandEncoder, MTLRenderPipelineState, MTLResourceGroupSPI, MTLSamplerState, MTLSharedEvent, MTLTexture, MTLTextureLayout;

@protocol MTLDeviceSPI <MTLDevice>
+ (void)registerDevices;
@property(readonly, getter=isPlacementHeapSupported) _Bool placementHeapSupported;
@property(readonly) unsigned long long maxRasterizationRateLayerCount;
@property unsigned long long currentUtilityBufferIndex;
@property(retain, nonatomic) NSArray *utilityBuffers;
@property(readonly, getter=isUtilityBufferRequired) _Bool utilityBufferRequired;
@property(nonatomic, getter=isResourceIndirectionEnabled) _Bool resourceIndirectionEnabled;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) unsigned long long dedicatedMemorySize;
@property(readonly) unsigned long long sharedMemorySize;
@property(readonly) _Bool supportPriorityBand;
@property(readonly) unsigned long long minTilePixels;
@property(readonly) unsigned long long maxTileInlineDataSize;
@property(readonly) unsigned long long maxTileSamplers;
@property(readonly) unsigned long long maxTileTextures;
@property(readonly) unsigned long long maxTileBuffers;
@property(readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property(readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxVertexAmplificationCount;
@property(readonly) unsigned long long maxVertexAmplificationFactor;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) const CDStruct_a9d832e7 *limits;
@property(readonly) unsigned long long featureProfile;
@property(nonatomic) _Bool metalAssertionsEnabled;
@property(readonly) unsigned long long doubleFPConfig;
@property(readonly) unsigned long long singleFPConfig;
@property(readonly) unsigned long long halfFPConfig;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) _Bool gpuAssertionsEnabled;
@property(readonly, nonatomic) _Bool supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) _Bool supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) _Bool supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) _Bool supportsSIMDReduction;
@property(readonly, nonatomic) _Bool supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) _Bool supportsSparseTextures;
@property(readonly, nonatomic) _Bool supportsASTCHDRTextureCompression;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsXR;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsPQ;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats;
@property(readonly, nonatomic) _Bool supportsVariableRateRasterization;
@property(readonly, nonatomic) _Bool supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsShaderMinLODClamp;
@property(readonly, nonatomic) _Bool supportsSIMDGroup;
@property(readonly, nonatomic) _Bool supportsFP32TessFactors;
@property(readonly, nonatomic) _Bool supportsStencilFeedback;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) _Bool supportsIndirectTessellation;
@property(readonly, nonatomic) _Bool supportsViewportAndScissorArray;
@property(readonly, nonatomic) _Bool supportsLayeredRendering;
@property(readonly, nonatomic) _Bool supports2DLinearTexArraySPI;
@property(readonly, nonatomic) _Bool supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) _Bool supportsNonSquareTileShaders;
@property(readonly, nonatomic) _Bool supportsLinearTexture2DArray;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroups;
@property(readonly, nonatomic) _Bool supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) _Bool supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) _Bool supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsTextureCubeArray;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArguments;
@property(readonly, nonatomic) _Bool supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) _Bool supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) _Bool supportsPostDepthCoverage;
@property(readonly, nonatomic) _Bool supportsNativeHardwareFP16;
@property(readonly, nonatomic) _Bool supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) _Bool supportsTileShaders;
@property(readonly, nonatomic) _Bool supportsImageBlocks;
@property(readonly, nonatomic) _Bool supportsRenderTextureWrites;
@property(readonly, nonatomic) _Bool supportsQuadGroup;
@property(readonly, nonatomic) _Bool supportsMemoryOrderAtomics;
@property(readonly, nonatomic) _Bool supportsAlphaYUVFormats;
@property(readonly, nonatomic) _Bool supportsTextureSwizzle;
@property(readonly, nonatomic) _Bool supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) _Bool supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsIndirectTextures;
@property(readonly, nonatomic) _Bool supportsIndirectStageInRegion;
@property(readonly, nonatomic) _Bool supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolve;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolve;
@property(readonly, nonatomic) _Bool supportsSamplerCompareFunction;
@property(readonly, nonatomic) _Bool supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) _Bool supportsArrayOfSamplers;
@property(readonly, nonatomic) _Bool supportsArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsReadWriteBufferArguments;
@property(readonly, nonatomic) _Bool supportsTessellation;
@property(readonly, nonatomic) _Bool supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) _Bool supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) _Bool supportsCountingOcclusionQuery;
@property(readonly, nonatomic) _Bool supportsFragmentBufferWrites;
@property(readonly, nonatomic) _Bool supportsExtendedXR10Formats;
@property(readonly, nonatomic) _Bool supports3DASTCTextures;
@property(readonly, nonatomic) _Bool supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) _Bool supportsDepthClipMode;
@property(readonly, nonatomic) _Bool supportsSRGBwrites;
@property(readonly, nonatomic) _Bool supportsPublicXR10Formats;
@property(readonly, nonatomic) _Bool supportsExtendedYUVFormats;
@property(readonly, nonatomic) _Bool supportsASTCTextureCompression;
@property(readonly, nonatomic) _Bool supportsGPUStatistics;
@property(readonly, nonatomic) _Bool supportsSeparateDepthStencil;
@property(readonly, nonatomic) _Bool supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) _Bool supportsShaderLODAverage;
@property(readonly, nonatomic) _Bool supportsInvariantVertexPosition;
@property(readonly, nonatomic) _Bool supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) _Bool supportsMemorylessRenderTargets;
@property(readonly, nonatomic) _Bool supportsRenderToLinearTextures;
@property(readonly, nonatomic) _Bool supportsProgrammableBlending;
@property(readonly, nonatomic) _Bool supportsBufferWithIOSurface;
@property(readonly, nonatomic) _Bool supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) _Bool supportsPipelineLibraries;
@property(readonly, nonatomic) _Bool supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) _Bool supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) _Bool supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) _Bool supportsLimitedYUVFormats;
@property(readonly, nonatomic) _Bool supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) _Bool supportsPlacementHeaps;
@property(readonly, nonatomic) _Bool supportsVertexAmplification;
@property(readonly, nonatomic) _Bool supports32bpcMSAATextures;
@property(readonly, nonatomic) _Bool supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) _Bool supportsCustomBorderColor;
@property(readonly, nonatomic) _Bool supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) _Bool supports3DBCTextures;
@property(readonly, nonatomic) _Bool supportsBCTextureCompression;
@property(readonly, nonatomic) _Bool supportsProgrammableSamplePositions;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) _Bool supportsArgumentBuffersTier2;
@property(readonly, nonatomic) _Bool supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) _Bool supportsQuadReduction;
- (id <MTLRasterizationRateMap>)newRasterizationRateMapWithDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;
- (_Bool)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;
- (unsigned long long)offsetFromIndirectBufferAddress:(unsigned long long)arg1;
- (unsigned long long)resourceIndexFromIndirectBufferAddress:(unsigned long long)arg1;
- (unsigned long long)indirectBufferAddressForResourceIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)removeResourceFromGlobalResourceTable:(unsigned long long)arg1 resourceType:(unsigned long long)arg2;
- (void)addIndirectCommandBufferToGlobalResourceTable:(id <MTLIndirectCommandBuffer>)arg1;
- (void)addRenderPipelineStateToGlobalResourceTable:(id <MTLRenderPipelineState>)arg1;
- (void)addComputePipelineStateToGlobalResourceTable:(id <MTLComputePipelineState>)arg1;
- (void)addSamplerStateToGlobalResourceTable:(id <MTLSamplerState>)arg1;
- (void)addTextureToGlobalResourceTable:(id <MTLTexture>)arg1;
- (void)addBufferToGlobalResourceTable:(id <MTLBuffer>)arg1;
- (_Bool)requiresIndirectionForAllResourceTypes;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4 deallocator:(void (^)(void *, unsigned long long))arg5;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atResourceIndex:(unsigned long long)arg3;
- (_Bool)useDeviceResourceTableForType:(unsigned long long)arg1;
- (id <MTLBuffer>)utilityBufferForRenderCommandEncoder:(id <MTLRenderCommandEncoder>)arg1;
- (id <MTLBuffer>)utilityBufferForComputeCommandEncoder:(id <MTLComputeCommandEncoder>)arg1;
- (unsigned long long)createNewUtilityBuffer;
- (_Bool)setResourcesPurgeableState:(id *)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long *)arg3 count:(int)arg4;
- (id <MTLSharedEvent>)newSharedEventWithMachPort:(unsigned int)arg1;
- (id <MTLIndirectComputeCommandEncoder>)newIndirectComputeCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (id <MTLIndirectRenderCommandEncoder>)newIndirectRenderCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (id <MTLBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (_MTLIndirectArgumentBufferLayout *)newIndirectArgumentBufferLayoutWithStructType:(MTLStructType *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithDescriptor:(MTLCommandQueueDescriptor *)arg1;
- (_Bool)supportsSampleCount:(unsigned long long)arg1;
- (_Bool)copyShaderCacheToPath:(NSString *)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
- (id <MTLBuffer>)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (_Bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (id <MTLDevice>)_deviceWrapper;
- (void)_setDeviceWrapper:(id <MTLDeviceSPI>)arg1;
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;
- (NSString *)productName;
- (NSString *)familyName;
- (NSString *)vendorName;
- (void)allowLibrariesFromOtherPlatforms;
- (NSString *)reportLeaks;

@optional
@property(readonly) unsigned long long sparseTexturesSupport;
@property(readonly, getter=isQuadDataSharingSupported) _Bool quadDataSharingSupported;
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;
@property _Bool shaderDebugInfoCaching;
- (id <MTLResourceGroupSPI>)newResourceGroupFromResources:(const id *)arg1 count:(unsigned long long)arg2;
- (CDStruct_14f26992)tileSizeWithSparsePageSize:(unsigned long long)arg1 textureType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (id <MTLTextureLayout>)newTextureLayoutWithDescriptor:(MTLTextureDescriptor *)arg1 isHeapOrBufferBacked:(_Bool)arg2;
- (id <MTLTexture>)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(MTLTextureDescriptor *)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (struct dispatch_data_s *)serializeStructType:(MTLStructType *)arg1 version:(unsigned int)arg2;
- (struct dispatch_data_s *)serializeStructType:(MTLStructType *)arg1;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithSerializedData:(struct dispatch_data_s *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithSerializedData:(struct dispatch_data_s *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (struct dispatch_data_s *)serializeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (struct dispatch_data_s *)serializeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (NSData *)endCollectingPipelineDescriptors;
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(NSString *)arg1;
- (void)startCollectingPipelineDescriptors;
- (id <MTLPipelineLibrarySPI>)newPipelineLibraryWithFilePath:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithCIFiltersForComputePipeline:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithCIFilters:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithArguments:(NSArray *)arg1;
- (void *)getShaderCacheKeys;
- (id <MTLFunction>)newFunctionWithGLIR:(void *)arg1 inputsDescription:(struct dispatch_data_s *)arg2 functionType:(unsigned long long)arg3;
- (id <MTLFunction>)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (void)unmapShaderSampleBuffer;
- (_Bool)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a *)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long *)arg2 indexCount:(unsigned long long)arg3;
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable *)arg1;
- (void)setIndirectArgumentBufferDecodingData:(struct dispatch_data_s *)arg1;
- (struct dispatch_data_s *)indirectArgumentBufferDecodingData;
- (_Bool)supportsPrimitiveType:(unsigned long long)arg1;
@end

