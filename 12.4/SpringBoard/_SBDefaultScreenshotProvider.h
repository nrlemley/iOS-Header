//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_SBScreenshotProvider-Protocol.h"

@class NSString, SBScreenFlash, UIScreen;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider>
{
    UIScreen *_screen;
    SBScreenFlash *_flasher;
}

@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) SBScreenFlash *flasher; // @synthesize flasher=_flasher;
- (void).cxx_destruct;
- (id)captureScreenshot;
- (id)initWithScreen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

