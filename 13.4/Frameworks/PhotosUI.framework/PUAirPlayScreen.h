//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>

@class NSString, UIScreen, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreen : NSObject <PXSettingsKeyObserver>
{
    UIScreen *_screen;
    NSString *_identifier;
    unsigned long long _type;
    UIViewController *_rootViewController;
    UIWindow *__window;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setWindow:) UIWindow *_window; // @synthesize _window=__window;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic, setter=_setSize:) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, setter=_setType:) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic, setter=_setIdentifier:) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, setter=_setScreen:) UIScreen *screen; // @synthesize screen=_screen;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateWindow;
@property(readonly, nonatomic) NSString *_typeName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long placeholderType;
- (_Bool)isEqualToAirPlayScreen:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

