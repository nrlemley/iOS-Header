//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;

@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator
{
    id <PGEventEnrichment> _collection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
- (_Bool)_useSplitTimeTitlesIfNeeded;
- (id)_locationTitleUsingKeyAssetAddressNode:(id)arg1 curationAddressNodes:(id)arg2;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3;

@end

