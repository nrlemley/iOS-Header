//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AudioSettingTableRow.h"

@class MNAudioOutputSetting;

__attribute__((visibility("hidden")))
@interface AudioOutputSettingRouteNameTableRow : AudioSettingTableRow
{
    MNAudioOutputSetting *_outputSetting;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MNAudioOutputSetting *outputSetting; // @synthesize outputSetting=_outputSetting;
- (void)selectOutput;
- (void)configureCurrentCellWithConfiguration:(id)arg1;
- (id)reuseIdentifierForCell;
- (id)initWithAudioOutputSetting:(id)arg1;

@end

