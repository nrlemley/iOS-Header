//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject
{
    UIStatusBarStyleRequest *_startStyleRequest;
    long long _startOrientation;
    UIStatusBarStyleRequest *_endStyleRequest;
    long long _endOrientation;
    int _transition;
    _Bool _zoomOther;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool zoomOther; // @synthesize zoomOther=_zoomOther;
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(nonatomic) long long endOrientation; // @synthesize endOrientation=_endOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest *endStyleRequest; // @synthesize endStyleRequest=_endStyleRequest;
@property(nonatomic) long long startOrientation; // @synthesize startOrientation=_startOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest *startStyleRequest; // @synthesize startStyleRequest=_startStyleRequest;
- (id)description;

@end

