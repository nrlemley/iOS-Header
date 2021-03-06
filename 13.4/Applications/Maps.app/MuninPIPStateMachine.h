//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MuninPIPStateMachine : NSObject
{
    _Bool _showStateChanges;
    unsigned long long _state;
}

@property(nonatomic) _Bool showStateChanges; // @synthesize showStateChanges=_showStateChanges;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)setStateTo:(unsigned long long)arg1;
- (_Bool)canSetStateTo:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isPanning;
@property(readonly, nonatomic) _Bool isMoving;
@property(readonly, nonatomic) _Bool isCancellingPendingMove;
@property(readonly, nonatomic) _Bool isActive;

@end

