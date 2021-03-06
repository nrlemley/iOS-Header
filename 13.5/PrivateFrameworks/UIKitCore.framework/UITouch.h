//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIResponderForwardable-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, NSString, UIResponder, UIView, UIWindow, _UITouchPredictor;
@protocol _UITouchPhaseChangeDelegate;

@interface UITouch : NSObject <_UIResponderForwardable>
{
    double _movementMagnitudeSquared;
    long long _phase;
    unsigned long long _tapCount;
    long long _edgeType;
    unsigned long long _edgeAim;
    unsigned int _touchIdentifier;
    UIWindow *_window;
    UIView *_view;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint _locationInWindow;
    struct CGPoint _previousLocationInWindow;
    struct CGPoint _preciseLocationInWindow;
    struct CGPoint _precisePreviousLocationInWindow;
    double _previousPressure;
    long long _pathIndex;
    unsigned char _pathIdentity;
    double _pathMajorRadius;
    double _majorRadiusTolerance;
    double _pressure;
    double _maxObservedPressure;
    float _zGradient;
    struct {
        unsigned int _firstTouchForView:1;
        unsigned int _isTap:1;
        unsigned int _isDelayed:1;
        unsigned int _sentTouchesEnded:1;
        unsigned int _abandonForwardingRecord:1;
        unsigned int _deliversUpdatesInTouchesMovedIsValid:1;
        unsigned int _deliversUpdatesInTouchesMoved:1;
        unsigned int _isPredictedTouch:1;
        unsigned int _didDispatchAsEnded:1;
        unsigned int _isPointerTouch:1;
        unsigned int _isRestingTouch:1;
        unsigned int _isTapToClick:1;
    } _touchFlags;
    _UITouchPredictor *_touchPredictor;
    _Bool _eaten;
    _Bool _needsForceUpdate;
    _Bool _hasForceUpdate;
    unsigned char _forceStage;
    _Bool __expectedToBecomeDrag;
    double _timestamp;
    long long _forceCorrelationToken;
    double _maximumPossiblePressure;
    unsigned long long _senderID;
    struct __IOHIDEvent *_hidEvent;
    double _altitudeAngle;
    long long _type;
    id <_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    double _azimuthAngleInCADisplay;
    double _azimuthAngleInWindow;
    double _initialTouchTimestamp;
    struct CGSize _displacement;
}

+ (id)_createTouchesWithGSEvent:(struct __GSEvent *)arg1 phase:(long long)arg2 view:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic, getter=_expectedToBecomeDrag, setter=_setExpectedToBecomeDrag:) _Bool _expectedToBecomeDrag; // @synthesize _expectedToBecomeDrag=__expectedToBecomeDrag;
@property(nonatomic) double initialTouchTimestamp; // @synthesize initialTouchTimestamp=_initialTouchTimestamp;
@property(readonly, nonatomic) double azimuthAngleInWindow; // @synthesize azimuthAngleInWindow=_azimuthAngleInWindow;
@property(nonatomic, setter=_setAzimuthAngleInCADisplay:) double azimuthAngleInCADisplay; // @synthesize azimuthAngleInCADisplay=_azimuthAngleInCADisplay;
@property(retain, nonatomic, setter=_setWindowServerHitTestWindow:) UIWindow *_windowServerHitTestWindow; // @synthesize _windowServerHitTestWindow=__windowServerHitTestWindow;
@property(retain, nonatomic, setter=_setPhaseChangeDelegate:) id <_UITouchPhaseChangeDelegate> _phaseChangeDelegate; // @synthesize _phaseChangeDelegate=__phaseChangeDelegate;
@property(nonatomic, setter=_setType:) long long type; // @synthesize type=_type;
@property(nonatomic, setter=_setForceStage:) unsigned char _forceStage; // @synthesize _forceStage;
@property(nonatomic, setter=_setHidEvent:) struct __IOHIDEvent *_hidEvent; // @synthesize _hidEvent;
@property(nonatomic, setter=_setSenderID:) unsigned long long _senderID; // @synthesize _senderID;
@property(nonatomic, setter=_setMaximumPossiblePressure:) double _maximumPossiblePressure; // @synthesize _maximumPossiblePressure;
@property(nonatomic, setter=_setHasForceUpdate:) _Bool _hasForceUpdate; // @synthesize _hasForceUpdate;
@property(nonatomic, setter=_setNeedsForceUpdate:) _Bool _needsForceUpdate; // @synthesize _needsForceUpdate;
@property(nonatomic, setter=_setForceCorrelationToken:) long long _forceCorrelationToken; // @synthesize _forceCorrelationToken;
@property(nonatomic, setter=_setZGradient:) float _zGradient; // @synthesize _zGradient;
@property(nonatomic) double majorRadiusTolerance; // @synthesize majorRadiusTolerance=_majorRadiusTolerance;
@property(nonatomic) double majorRadius; // @synthesize majorRadius=_pathMajorRadius;
@property(nonatomic, getter=_isEaten, setter=_setEaten:) _Bool _eaten; // @synthesize _eaten;
@property(nonatomic, setter=_setEdgeAim:) unsigned long long _edgeAim; // @synthesize _edgeAim;
@property(nonatomic, setter=_setEdgeType:) long long _edgeType; // @synthesize _edgeType;
@property(nonatomic, setter=_setDisplacement:) struct CGSize _displacement; // @synthesize _displacement;
@property(readonly, nonatomic) double _pressure; // @synthesize _pressure;
@property(nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity; // @synthesize _pathIdentity;
@property(nonatomic, setter=_setPathIndex:) long long _pathIndex; // @synthesize _pathIndex;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, setter=_setIsTapToClick:) _Bool _isTapToClick;
@property(nonatomic, setter=_setIsRestingTouch:) _Bool _isRestingTouch;
@property(nonatomic, setter=_setIsPointerTouch:) _Bool _isPointerTouch;
- (void)_clearForReenteringHoverInWindow:(id)arg1;
- (id)_rehitTestWithEvent:(id)arg1 constrainingToCurrentWindow:(_Bool)arg2;
- (id)_rehitTest;
- (void)_willBeDispatchedAsEnded;
- (_Bool)_isStationaryRelativeToTouches:(id)arg1;
- (void)_updateMovementMagnitudeFromLocation:(struct CGPoint)arg1 toLocation:(struct CGPoint)arg2;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool _respectsCharge;
@property(retain, nonatomic) UIView *warpedIntoView;
@property(retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (id)_forwardingRecord;
- (void)_abandonForwardingRecord;
- (_Bool)_isAbandoningForwardingRecord;
- (id)_mutableForwardingRecord;
- (_Bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (long long)_compareIndex:(id)arg1;
- (void)_updateWithChildEvent:(struct __IOHIDEvent *)arg1;
- (struct CGPoint)_previousLocationInSceneReferenceSpace;
- (struct CGPoint)_locationInSceneReferenceSpace;
- (struct CGPoint)_previousLocationInWindow:(id)arg1;
- (struct CGPoint)_locationInWindow:(id)arg1;
- (void)_clearGestureRecognizers;
- (id)_gestureRecognizers;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_addGestureRecognizer:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_phaseDescription;
- (_Bool)_shouldDeliverTouchForTouchesMoved;
- (void)_setPressure:(double)arg1 resetPrevious:(_Bool)arg2;
- (void)_setLocation:(struct CGPoint)arg1 preciseLocation:(struct CGPoint)arg2 inWindowResetPreviousLocation:(_Bool)arg3;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(_Bool)arg2;
@property(retain, nonatomic) UIView *view;
@property(retain, nonatomic) UIWindow *window;
@property(nonatomic) _Bool isTap;
@property(nonatomic) unsigned long long tapCount;
@property(nonatomic) long long phase;
- (_Bool)_isFirstTouchForView;
- (void)_setIsFirstTouchForView:(_Bool)arg1;
- (void)_setTouchIdentifier:(unsigned int)arg1;
- (unsigned int)_touchIdentifier;
- (id)_touchPredictor;
- (id)_predictedTouchesWithEvent:(id)arg1;
- (void)_updatePredictionsWithCoalescedTouches:(id)arg1;
- (_Bool)_currentlyPredictingTouches;
- (_Bool)_mightBeConsideredForForceSystemGesture;
- (_Bool)_edgeForceActive;
- (_Bool)_edgeForcePending;
@property(readonly, nonatomic) long long estimatedPropertiesExpectingUpdates;
@property(readonly, nonatomic) long long estimatedProperties;
@property(readonly, nonatomic) NSNumber *estimationUpdateIndex;
@property(readonly, nonatomic) double _unclampedForce;
@property(readonly, nonatomic) double maximumPossibleForce;
@property(readonly, nonatomic) double force;
- (double)_standardForceAmount;
- (_Bool)_supportsForce;
- (float)_pathMajorRadius;
@property(nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
- (void)_loadStateFromTouch:(id)arg1;
@property(nonatomic, setter=_setAltitudeAngle:) double altitudeAngle; // @synthesize altitudeAngle=_altitudeAngle;
- (struct CGVector)azimuthUnitVectorInView:(id)arg1;
- (double)azimuthAngleInView:(id)arg1;
@property(readonly, nonatomic) double azimuthAngle;
@property(nonatomic, setter=_setIsPredictedTouch:) _Bool _isPredictedTouch;
- (void)_computeAzimuthAngleInWindow;
- (struct CGPoint)precisePreviousLocationInView:(id)arg1;
- (struct CGPoint)preciseLocationInView:(id)arg1;
- (struct CGPoint)previousLocationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic) _Bool sentTouchesEnded;
- (_Bool)isDelayed;
- (void)setIsDelayed:(_Bool)arg1;
- (long long)info;
- (void)_setPreviousTouch:(id)arg1;
- (void)_clonePropertiesToTouch:(id)arg1;
- (id)_clone;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

