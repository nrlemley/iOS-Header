//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUConfigurator.h>

#import "HSSetupStep-Protocol.h"
#import "HUConfiguratorDelegate-Protocol.h"

@class NAFuture, NSString;
@protocol HSSetupStepDelegate;

@interface HSSetupConfigurator : HUConfigurator <HUConfiguratorDelegate, HSSetupStep>
{
    id <HSSetupStepDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewControllerWillAppear:(id)arg1;
- (void)configuratorDidFinish:(id)arg1;
- (void)configuratorDidUpdateViewController:(id)arg1;
@property(readonly, nonatomic) long long setupState;
- (id)initWithSetupStepDelegate:(id)arg1 initialViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

