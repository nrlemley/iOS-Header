//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSConfirmationSpecifier.h>

@class PSListController;

__attribute__((visibility("hidden")))
@interface PSUICellularRATWarningSpecifier : PSConfirmationSpecifier
{
    PSListController *_RATModeDrillDownController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSListController *RATModeDrillDownController; // @synthesize RATModeDrillDownController=_RATModeDrillDownController;
- (void)canceledRATSwitch;
- (void)acceptedRATSwitch;
- (id)initWithDrillDownController:(id)arg1;

@end

