//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIWebHighlightLongPressGestureRecognizer.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface WKHighlightLongPressGestureRecognizer : _UIWebHighlightLongPressGestureRecognizer
{
    struct WeakObjCPtr<UIScrollView> _lastTouchedScrollView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIScrollView *lastTouchedScrollView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end

