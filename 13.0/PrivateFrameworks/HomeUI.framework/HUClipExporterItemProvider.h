//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider
{
    NSURL *_clipURL;
}

@property(retain, nonatomic) NSURL *clipURL; // @synthesize clipURL=_clipURL;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)item;
- (id)initWithURL:(id)arg1;

@end

