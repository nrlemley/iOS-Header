//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FitnessUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIFont, UIImageView, UIScrollView;
@protocol FUScrollWheelDataSource, FUScrollWheelDelegate;

@interface FUScrollWheel : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_reusableLabelsQueue;
    NSMutableDictionary *_usedLabels;
    struct _NSRange _previousRange;
    unsigned long long _numberOfRows;
    double _scrollWheelLabelHeight;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    UIImageView *_maskLayer;
    _Bool _shouldRegenerateOpacityMask;
    _Bool _loaded;
    id <FUScrollWheelDataSource> _dataSource;
    id <FUScrollWheelDelegate> _delegate;
    long long _itemTitleAligmnent;
    unsigned long long _currentIndex;
    UIFont *_font;
    UIScrollView *_scrollView;
    double _scrollWheelLabelPageSize;
}

- (void).cxx_destruct;
@property(nonatomic) double scrollWheelLabelPageSize; // @synthesize scrollWheelLabelPageSize=_scrollWheelLabelPageSize;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long itemTitleAligmnent; // @synthesize itemTitleAligmnent=_itemTitleAligmnent;
@property(nonatomic) __weak id <FUScrollWheelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FUScrollWheelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_alertDidChangeToCurrentIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfRows;
- (id)_titleForItemAtIndex:(unsigned long long)arg1;
- (double)_yPositionForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect)_frameForLabelAtIndex:(unsigned long long)arg1;
- (id)_dequeueLabel;
- (void)_recycleAllLabels;
- (void)_recycleLabel:(id)arg1 forKey:(id)arg2;
- (id)_textForLabelAtIndex:(unsigned long long)arg1;
- (void)_reuseLabelsWithRange:(struct _NSRange)arg1 contentOffset:(struct CGPoint)arg2;
- (double)_startingLocation;
- (void)_layoutScrollView;
- (void)_generateOpacityMask;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setActiveScrollWheel;
- (void)reloadData;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
- (void)_setActiveScrollwheelIfNotActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

