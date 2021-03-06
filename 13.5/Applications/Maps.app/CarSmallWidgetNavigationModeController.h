//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarChromeModeController-Protocol.h"
#import "CarGuidanceCardDelegate-Protocol.h"
#import "MNNavigationServiceObserver-Protocol.h"

@class CarChromeViewController, CarGuidanceCardViewController, CarMapTrackingController, ChromeViewController, GuidanceObserver, NSArray, NSString;
@protocol MapSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CarSmallWidgetNavigationModeController : UIViewController <MNNavigationServiceObserver, CarGuidanceCardDelegate, CarChromeModeController>
{
    _Bool _hasArrived;
    CarChromeViewController *_chromeViewController;
    UIViewController *_content;
    CarGuidanceCardViewController *_guidanceCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CarGuidanceCardViewController *guidanceCard; // @synthesize guidanceCard=_guidanceCard;
@property(retain, nonatomic) UIViewController *content; // @synthesize content=_content;
@property(nonatomic) ChromeViewController *chromeViewController;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) unsigned long long maneuverViewLayoutType;
@property(readonly, nonatomic) struct CGSize availableSize;
- (void)navigationServiceDidArrive:(id)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
@property(readonly, nonatomic) __weak GuidanceObserver *guidanceObserver;
@property(readonly, nonatomic) _Bool showsMapView;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)_setupGuidanceCard;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) _Bool navigationTransitionShouldOccurImmediately;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldEmulateOverlayInset;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsCameraToggleButton;
@property(readonly, nonatomic) _Bool showsExplicitPanButton;
@property(readonly, nonatomic) _Bool showsFloatingControls;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsMapViewForTransitions;
@property(readonly, nonatomic) _Bool showsNavPanRecenterButton;
@property(readonly, nonatomic) _Bool showsNavigationBar;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsZoomControls;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) _Bool usesDefaultTransitions;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

