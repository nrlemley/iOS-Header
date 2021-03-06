//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOTransitRoutingIncidentMessage;

__attribute__((visibility("hidden")))
@interface RoutePlanningError : NSObject
{
    _Bool _errorViewShouldShowTransitRoutingApps;
    NSString *_errorTitle;
    NSString *_errorMessage;
    id <GEOTransitRoutingIncidentMessage> _incidentMessage;
}

@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage; // @synthesize incidentMessage=_incidentMessage;
@property(readonly, nonatomic) _Bool errorViewShouldShowTransitRoutingApps; // @synthesize errorViewShouldShowTransitRoutingApps=_errorViewShouldShowTransitRoutingApps;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, copy, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
- (void).cxx_destruct;
- (void)_updateRoutingAppsVisibilityWithError:(id)arg1 transportType:(unsigned long long)arg2;
- (void)_buildErrorStringsFromError:(id)arg1;
- (id)initWithError:(id)arg1 transportType:(unsigned long long)arg2;

@end

