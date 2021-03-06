//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface NCNotificationListSectionRevealHintView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _forceRevealed;
    double _revealPercentage;
    SBUILegibilityLabel *_revealHintTitle;
    double _hintingAlpha;
    _UILegibilitySettings *_legibilitySettings;
}

+ (double)minimumViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) double hintingAlpha; // @synthesize hintingAlpha=_hintingAlpha;
@property(retain, nonatomic) SBUILegibilityLabel *revealHintTitle; // @synthesize revealHintTitle=_revealHintTitle;
@property(nonatomic, getter=isForceRevealed) _Bool forceRevealed; // @synthesize forceRevealed=_forceRevealed;
@property(nonatomic) double revealPercentage; // @synthesize revealPercentage=_revealPercentage;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_updateAlpha;
- (double)_alphaValueBasedOnRevealPercentage;
- (id)_labelFont;
- (double)_hintTitleDisplacementForRevealPercentage:(double)arg1;
- (void)_layoutRevealHintTitle;
- (void)_configureRevealHintTitleIfNecessary;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

