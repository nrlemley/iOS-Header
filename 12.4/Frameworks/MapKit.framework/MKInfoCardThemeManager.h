//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKInfoCardTheme-Protocol.h>

@class NSDictionary, NSPointerArray, NSString, UIColor, UIFont;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme>
{
    _Bool _themeWasExplicitySet;
    NSDictionary *_colors;
    NSPointerArray *_viewListeners;
    NSPointerArray *_viewControllerListeners;
    NSPointerArray *_otherListeners;
    CDUnknownBlockType _tintColorProvider;
    UIColor *_currentTintColor;
    _Bool _useSmallFont;
    unsigned long long _themeType;
}

+ (void)addThemeChangedListener:(id)arg1;
+ (void)setUseSmallFont:(_Bool)arg1;
+ (void)setTintColorProvider:(CDUnknownBlockType)arg1;
+ (void)setTheme:(unsigned long long)arg1;
+ (id)themeWithThemeType:(unsigned long long)arg1;
+ (id)_currentTheme:(unsigned long long)arg1;
+ (id)currentTheme;
@property(nonatomic) _Bool useSmallFont; // @synthesize useSmallFont=_useSmallFont;
@property(readonly, nonatomic) unsigned long long themeType; // @synthesize themeType=_themeType;
- (void).cxx_destruct;
- (id)iconFontToMatch:(id)arg1;
@property(readonly, nonatomic) UIFont *rowGlyphButtonFont;
@property(readonly, nonatomic) UIFont *rowButtonFont;
@property(readonly, nonatomic) UIFont *smallAttributionFont;
@property(readonly, nonatomic) UIFont *attributionFont;
@property(readonly, nonatomic) UIFont *sectionHeaderButtonFont;
@property(readonly, nonatomic) UIFont *sectionHeaderFont;
@property(readonly, nonatomic) UIFont *mediumBodyFont;
@property(readonly, nonatomic) UIFont *boldBodyFont;
@property(readonly, nonatomic) UIFont *bodyFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) UIFont *brandTitleFont;
@property(readonly, nonatomic) UIFont *largeTitleFont;
@property(readonly, nonatomic) UIFont *largeTitleFontStatic;
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) UIColor *headerSecondaryButtonHighlightedColor;
@property(readonly, nonatomic) UIColor *headerSecondaryButtonNormalColor;
@property(readonly, nonatomic) UIColor *headerPrimaryButtonHighlightedColor;
@property(readonly, nonatomic) UIColor *headerPrimaryButtonNormalColor;
@property(readonly, nonatomic) UIColor *normalActionRowBackgroundPressedColor;
@property(readonly, nonatomic) UIColor *disabledActionRowBackgroundColor;
@property(readonly, nonatomic) UIColor *normalActionRowBackgroundColor;
@property(readonly, nonatomic) UIColor *disabledActionRowTextColor;
@property(readonly, nonatomic) UIColor *highlightedActionRowTextColor;
@property(readonly, nonatomic) UIColor *selectedRowColor;
@property(readonly, nonatomic) UIColor *rowColor;
@property(readonly, nonatomic) UIColor *separatorLineColor;
@property(readonly, nonatomic) UIColor *highlightedTintColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *lightTextColor;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) _Bool isVibrantTheme;
@property(readonly, nonatomic) _Bool isDarkTheme;
- (void)_addThemeChangedListener:(id)arg1;
- (void)_notifyAllListenersOfThemeChange:(id)arg1 visitedSet:(id)arg2 subListenerMethod:(CDUnknownFunctionPointerType)arg3 subListenerSelector:(SEL)arg4;
- (void)_setTintColorProvider:(CDUnknownBlockType)arg1;
- (void)_notifyAllListenersOfTintChange:(id)arg1 visitedSet:(id)arg2;
- (void)_tintColorDidChange;
- (void)_setTheme:(unsigned long long)arg1;
- (unsigned long long)_currentSystemTheme;
- (id)_initWithThemeType:(unsigned long long)arg1;
- (id)init;
- (_Bool)_isInSpotlightContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

