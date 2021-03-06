//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
}

+ (id)defaultConfiguration;
- (id)feedbackKeyPaths;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *draggedPattern;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *poppedPattern;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *previewedPattern;
- (long long)requiredSupportLevel;

@end

