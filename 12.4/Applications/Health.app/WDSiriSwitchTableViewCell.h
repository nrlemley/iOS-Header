//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKSwitchTableViewCell.h>

#import "HKSwitchTableViewCellDelegate-Protocol.h"

@interface WDSiriSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate>
{
}

+ (id)defaultReuseIdentifier;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
@property(nonatomic, getter=isPersonalizationAndSearchEnabled, setter=setPersonalizationAndSearchEnabled:) _Bool personalizationAndSearchEnabled;
- (void)updateSwitch;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

