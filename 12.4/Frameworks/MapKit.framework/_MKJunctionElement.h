//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MKJunctionElement : NSObject
{
    struct CGPoint _leftBasePoint;
    struct CGPoint _rightBasePoint;
    double _angle;
}

@property double angle; // @synthesize angle=_angle;
@property struct CGPoint rightBasePoint; // @synthesize rightBasePoint=_rightBasePoint;
@property struct CGPoint leftBasePoint; // @synthesize leftBasePoint=_leftBasePoint;
- (struct CGPoint)rightEdgePointAtDistanceFromBase:(double)arg1;
- (struct CGPoint)leftEdgePointAtDistanceFromBase:(double)arg1;

@end

