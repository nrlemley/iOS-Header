//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString;
@protocol SiriUITemplateModel, SiriUITemplatedView;

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView>
{
    id <SiriUITemplatedView> _templatedSuperview;
    id <SiriUITemplateModel> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUITemplateModel> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SiriUITemplatedView> templatedSuperview; // @synthesize templatedSuperview=_templatedSuperview;
- (void)removeFromTemplatedSuperview;
- (double)desiredHeight;
- (void)reloadData;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

