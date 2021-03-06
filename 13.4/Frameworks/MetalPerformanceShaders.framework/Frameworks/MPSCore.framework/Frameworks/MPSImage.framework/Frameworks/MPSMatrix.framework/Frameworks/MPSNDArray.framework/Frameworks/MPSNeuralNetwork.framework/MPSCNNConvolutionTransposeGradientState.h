//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNConvolutionGradientState.h>

@class MPSCNNConvolutionTranspose;

@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState
{
    MPSCNNConvolutionTranspose *_convolutionTranspose;
    MPSCNNConvolutionGradientState *_convolutionGradientState;
    long long _kernelOffsetX;
    long long _kernelOffsetY;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned int)arg5;
@property(readonly, nonatomic) MPSCNNConvolutionGradientState *convolutionGradientState; // @synthesize convolutionGradientState=_convolutionGradientState;
@property(readonly, retain, nonatomic) MPSCNNConvolutionTranspose *convolutionTranspose; // @synthesize convolutionTranspose=_convolutionTranspose;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned int)arg5;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned int)arg4;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3;
- (id)initWithResource:(id)arg1 weightsLayout:(unsigned int)arg2;
- (id)initWithResource:(id)arg1;
- (id)convolution;
- (unsigned long long)sourceHeight;
- (unsigned long long)sourceWidth;

@end

