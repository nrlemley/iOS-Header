//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoControlVisibilityItem-Protocol.h>
#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSLayoutConstraint, NSMutableArray, NSString, SVAdPrivacyButton, SVLearnMoreButton, SVVideoAdSkipButton;
@protocol SVCustomControlsViewProviding, SVVideoAdActionAvailabilityObserver, SVVideoAdActionAvailabilityObserverFactory, SVVideoLoadingStateObserverFactory, SVVideoLoadingStateObserving, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoViewControllerSizeObserving;

@interface SVVideoAdButtonManager : NSObject <SVVideoTransitionObserver, SVVideoControlVisibilityItem>
{
    _Bool _transportControlsHidden;
    id <SVCustomControlsViewProviding> _customControlsViewProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    id <SVVideoAdActionAvailabilityObserverFactory> _adActionAvailabilityObserverFactory;
    id <SVVideoAdActionAvailabilityObserver> _adActionAvailabilityObserver;
    id <SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id <SVVideoSkipLockObserving> _skipLockObserver;
    SVAdPrivacyButton *_privacyButton;
    SVLearnMoreButton *_learnMoreButton;
    SVVideoAdSkipButton *_skipButton;
    long long _constraintsMode;
    NSLayoutConstraint *_learnMorePrimaryTopConstraint;
    NSLayoutConstraint *_learnMorePrimaryLeadingConstraint;
    NSLayoutConstraint *_learnMoreSecondaryTopConstraint;
    NSLayoutConstraint *_learnMoreSecondaryLeadingConstraint;
    NSLayoutConstraint *_privacyAboveTransportControlsConstraint;
    NSLayoutConstraint *_privacyAboveAccessoryBarConstraint;
    NSMutableArray *_alwaysActiveConstraints;
    id <SVVideoViewControllerSizeObserving> _sizeObserver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVVideoViewControllerSizeObserving> sizeObserver; // @synthesize sizeObserver=_sizeObserver;
@property(retain, nonatomic) NSMutableArray *alwaysActiveConstraints; // @synthesize alwaysActiveConstraints=_alwaysActiveConstraints;
@property(retain, nonatomic) NSLayoutConstraint *privacyAboveAccessoryBarConstraint; // @synthesize privacyAboveAccessoryBarConstraint=_privacyAboveAccessoryBarConstraint;
@property(retain, nonatomic) NSLayoutConstraint *privacyAboveTransportControlsConstraint; // @synthesize privacyAboveTransportControlsConstraint=_privacyAboveTransportControlsConstraint;
@property(retain, nonatomic) NSLayoutConstraint *learnMoreSecondaryLeadingConstraint; // @synthesize learnMoreSecondaryLeadingConstraint=_learnMoreSecondaryLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *learnMoreSecondaryTopConstraint; // @synthesize learnMoreSecondaryTopConstraint=_learnMoreSecondaryTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *learnMorePrimaryLeadingConstraint; // @synthesize learnMorePrimaryLeadingConstraint=_learnMorePrimaryLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *learnMorePrimaryTopConstraint; // @synthesize learnMorePrimaryTopConstraint=_learnMorePrimaryTopConstraint;
@property(nonatomic) long long constraintsMode; // @synthesize constraintsMode=_constraintsMode;
@property(readonly, nonatomic) SVVideoAdSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property(readonly, nonatomic) SVLearnMoreButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) SVAdPrivacyButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(retain, nonatomic) id <SVVideoSkipLockObserving> skipLockObserver; // @synthesize skipLockObserver=_skipLockObserver;
@property(readonly, nonatomic) id <SVVideoSkipLockObserverFactory> skipLockObserverFactory; // @synthesize skipLockObserverFactory=_skipLockObserverFactory;
@property(retain, nonatomic) id <SVVideoAdActionAvailabilityObserver> adActionAvailabilityObserver; // @synthesize adActionAvailabilityObserver=_adActionAvailabilityObserver;
@property(readonly, nonatomic) id <SVVideoAdActionAvailabilityObserverFactory> adActionAvailabilityObserverFactory; // @synthesize adActionAvailabilityObserverFactory=_adActionAvailabilityObserverFactory;
@property(retain, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(nonatomic, getter=areTransportControlsHidden) _Bool transportControlsHidden; // @synthesize transportControlsHidden=_transportControlsHidden;
@property(readonly, nonatomic) id <SVCustomControlsViewProviding> customControlsViewProvider; // @synthesize customControlsViewProvider=_customControlsViewProvider;
- (void)videoPlayerSizeDidChange;
- (void)contentSizeCategoryDidChange;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)isVisible;
- (_Bool)supportsAutoAppearance;
@property(readonly, nonatomic) _Bool hideable;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)removeObservers;
- (void)setupObserversForVideo:(id)arg1;
- (void)activateConstraintsMode:(long long)arg1;
- (void)updateConstraints:(id)arg1;
- (double)verticalOffsetForFloatAboveAccessoryBar;
- (struct CGSize)accessoryBarSize;
- (_Bool)isAccessoryBarAboveControlsView:(id)arg1;
- (void)installConstraintsForButtonsInControlsView:(id)arg1 withLayoutGuides:(id)arg2;
- (void)removeButtonsFromViewController;
- (void)addButtonsToCustomControlsView:(id)arg1 withAdActionAvailable:(_Bool)arg2;
- (void)embedButtonsInViewControllerWithAdActionAvailable:(_Bool)arg1;
- (id)initWithCustomControlsViewProvider:(id)arg1 loadingStateObserverFactory:(id)arg2 adActionAvailabilityObserverFactory:(id)arg3 skipLockObserverFactory:(id)arg4 adPrivacyButton:(id)arg5 learnMoreButton:(id)arg6 skipButton:(id)arg7 sizeObserver:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

