//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SearchResultTableViewCell.h"

@protocol VenueSearchResultTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VenueSearchResultTableViewCell : SearchResultTableViewCell
{
    id <VenueSearchResultTableViewCellDelegate> _venuesDelegate;
}

@property(nonatomic) __weak id <VenueSearchResultTableViewCellDelegate> venuesDelegate; // @synthesize venuesDelegate=_venuesDelegate;
- (void).cxx_destruct;
- (void)setTrailingMarginDelta:(double)arg1;
- (double)trailingMargin;
- (void)getDefaultImage:(CDUnknownBlockType)arg1;
- (id)attributedFirstPartDetailString;
- (_Bool)shouldShowFallbackToAddressAndDistance;
- (void)prepareForReuse;

@end

