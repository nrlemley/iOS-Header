//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;

@protocol _UIViewSubtreeMonitor <NSObject>
- (void)_monitoredView:(UIView *)arg1 didMoveFromSuperview:(UIView *)arg2 toSuperview:(UIView *)arg3;
- (void)_monitoredView:(UIView *)arg1 willMoveFromSuperview:(UIView *)arg2 toSuperview:(UIView *)arg3;
- (_Bool)_monitorsView:(UIView *)arg1;
@end

