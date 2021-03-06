//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFComponentNavigationContext-Protocol.h>

@class NSHashTable, NSString, UIViewController;

@interface WFComponentNavigationContextImpl : NSObject <WFComponentNavigationContext>
{
    UIViewController *_componentHostingViewController;
    NSHashTable *_componentEditingSessions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *componentEditingSessions; // @synthesize componentEditingSessions=_componentEditingSessions;
@property(readonly, nonatomic) __weak UIViewController *componentHostingViewController; // @synthesize componentHostingViewController=_componentHostingViewController;
- (void)cancelEditingSessionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)componentDidEndEditingSession:(id)arg1;
- (void)componentWillBeginEditingSession:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

