//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ShortcutsRowCellModel.h"

@class MapsSuggestionsEntry, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SuggestionShortcutsRowCellModel : ShortcutsRowCellModel
{
    UIImage *_image;
    unsigned long long _imageCount;
    NSString *_title;
    NSString *_subtitle;
    MapsSuggestionsEntry *_entry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MapsSuggestionsEntry *entry; // @synthesize entry=_entry;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateTitlesFromEntry;
- (void)setFetchedImage:(id)arg1;
- (void)fetchImage;
- (_Bool)vibrantBackground;
- (id)image;
- (id)subtitle;
- (id)title;
- (id)_maps_diffableDataSourceIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithMapsSuggestionsEntry:(id)arg1;

@end

