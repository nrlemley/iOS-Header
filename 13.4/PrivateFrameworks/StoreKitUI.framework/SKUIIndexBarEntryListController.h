//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIViewElement;
@protocol SKUIIndexBarEntryListControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryListController : NSObject
{
    _Bool _needsRootTargetViewElement;
    _Bool _hidesIndexBar;
    id <SKUIIndexBarEntryListControllerDelegate> _delegate;
    NSString *_rootTargetIndexBarEntryID;
    SKUIViewElement *_rootTargetViewElement;
    long long _numberOfEntryDescriptors;
}

+ (id)entryListControllerForEntryListViewElement:(id)arg1;
+ (id)entryListControllerForEntryViewElement:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfEntryDescriptors; // @synthesize numberOfEntryDescriptors=_numberOfEntryDescriptors;
@property(retain, nonatomic) SKUIViewElement *rootTargetViewElement; // @synthesize rootTargetViewElement=_rootTargetViewElement;
@property(readonly, nonatomic) NSString *rootTargetIndexBarEntryID; // @synthesize rootTargetIndexBarEntryID=_rootTargetIndexBarEntryID;
@property(readonly, nonatomic) _Bool hidesIndexBar; // @synthesize hidesIndexBar=_hidesIndexBar;
@property(readonly, nonatomic) _Bool needsRootTargetViewElement; // @synthesize needsRootTargetViewElement=_needsRootTargetViewElement;
@property(nonatomic) __weak id <SKUIIndexBarEntryListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didInvalidate;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (void)reloadViewElementData;
- (id)entryDescriptorAtIndex:(long long)arg1;

@end

