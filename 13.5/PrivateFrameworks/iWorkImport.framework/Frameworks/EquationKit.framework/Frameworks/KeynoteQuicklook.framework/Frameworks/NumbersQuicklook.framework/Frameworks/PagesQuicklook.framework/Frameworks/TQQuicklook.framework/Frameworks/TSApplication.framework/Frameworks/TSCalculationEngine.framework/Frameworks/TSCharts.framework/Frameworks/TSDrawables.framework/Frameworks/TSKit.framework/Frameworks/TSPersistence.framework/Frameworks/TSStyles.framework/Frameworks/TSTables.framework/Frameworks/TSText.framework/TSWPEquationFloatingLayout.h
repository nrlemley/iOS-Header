//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPEquationLayout.h>

@class TSDInfoGeometry, TSDLayoutGeometry;

@interface TSWPEquationFloatingLayout : TSWPEquationLayout
{
    TSDInfoGeometry *_dynamicInfoGeometry;
    TSDLayoutGeometry *_baseEquationLayoutGeometry;
}

- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;

@end

