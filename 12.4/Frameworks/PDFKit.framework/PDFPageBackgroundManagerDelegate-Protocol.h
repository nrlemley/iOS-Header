//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PDFDocument, PDFPage, UIImage;

@protocol PDFPageBackgroundManagerDelegate
- (void)recieveBackgroundImage:(UIImage *)arg1 atBackgroundQuality:(int)arg2 forPage:(PDFPage *)arg3;
- (UIImage *)backgroundImageForPage:(PDFPage *)arg1 withQuality:(int *)arg2;
- (PDFDocument *)document;
@end

