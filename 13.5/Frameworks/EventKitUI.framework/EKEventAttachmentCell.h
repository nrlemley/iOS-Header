//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentCell : UITableViewCell
{
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)showSpinner:(_Bool)arg1;
- (void)setAttachment:(id)arg1;
- (id)_iconForDocumentProxy:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

