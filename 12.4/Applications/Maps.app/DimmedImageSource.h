//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKArtworkImageSource-Protocol.h"

@class NSString;
@protocol MKArtworkImageSource;

__attribute__((visibility("hidden")))
@interface DimmedImageSource : NSObject <MKArtworkImageSource>
{
    id <MKArtworkImageSource> _innerImageSource;
}

@property(readonly, nonatomic) id <MKArtworkImageSource> innerImageSource; // @synthesize innerImageSource=_innerImageSource;
- (void).cxx_destruct;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1;
- (id)imageToDisplayWithScreenScale:(double)arg1;
- (id)initWithImageSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

