//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController
{
    id <PSSplitViewControllerNavigationDelegate> _navigationDelegate;
    PSRootController *_containerNavigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSRootController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
@property(nonatomic) __weak id <PSSplitViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (id)categoryController;
- (void)setViewControllers:(id)arg1;
- (void)setupControllerForToolbar:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (void)showInitialViewController:(id)arg1;
- (void)popRecursivelyToRootController;
- (unsigned long long)supportedInterfaceOrientations;

@end

