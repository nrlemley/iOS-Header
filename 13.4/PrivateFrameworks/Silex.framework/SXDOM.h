//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>
#import <Silex/NSMutableCopying-Protocol.h>

@class NSDictionary, SXComponents;
@protocol SXAutoPlacement, SXDocumentStyle;

@interface SXDOM : NSObject <NSCopying, NSMutableCopying>
{
    SXComponents *_components;
    NSDictionary *_componentLayouts;
    NSDictionary *_componentStyles;
    NSDictionary *_componentTextStyles;
    NSDictionary *_textStyles;
    NSDictionary *_resources;
    id <SXAutoPlacement> _autoPlacement;
    id <SXDocumentStyle> _documentStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXDocumentStyle> documentStyle; // @synthesize documentStyle=_documentStyle;
@property(readonly, nonatomic) id <SXAutoPlacement> autoPlacement; // @synthesize autoPlacement=_autoPlacement;
@property(readonly, copy, nonatomic) NSDictionary *resources; // @synthesize resources=_resources;
@property(readonly, copy, nonatomic) NSDictionary *componentTextStyles; // @synthesize componentTextStyles=_componentTextStyles;
@property(readonly, copy, nonatomic) NSDictionary *componentLayouts; // @synthesize componentLayouts=_componentLayouts;
@property(readonly, copy, nonatomic) NSDictionary *componentStyles; // @synthesize componentStyles=_componentStyles;
@property(readonly, copy, nonatomic) NSDictionary *textStyles; // @synthesize textStyles=_textStyles;
@property(readonly, copy, nonatomic) SXComponents *components; // @synthesize components=_components;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8;
- (id)init;

@end

