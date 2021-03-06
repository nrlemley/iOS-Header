//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode
{
    unsigned long long _kernelSizeInFeatureChannels;
}

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
@property(nonatomic) unsigned long long kernelSizeInFeatureChannels; // @synthesize kernelSizeInFeatureChannels=_kernelSizeInFeatureChannels;
- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1;

@end

