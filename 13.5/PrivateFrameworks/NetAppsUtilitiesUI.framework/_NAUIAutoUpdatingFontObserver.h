//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NAUIAutoUpdatingFontObserver : NSObject
{
    id _notificationObserver;
    id _target;
}

+ (_Bool)canObserveFontsForTarget:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void)dealloc;
- (void)updateDyamicFontForCurrentContentSize;
- (id)initWithTarget:(id)arg1;

@end

