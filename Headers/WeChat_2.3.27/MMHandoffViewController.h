//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "JWCTableViewDataSource.h"
#import "JWCTableViewDelegate.h"
#import "MMHandoffServiceExt.h"
#import "NSTabViewDelegate.h"
#import "NSTableViewDataSource.h"

@class JWCTableView, NSString, NSView, NSVisualEffectView, RBLPopover, RBLPopoverBackgroundView, RFOverlayScrollView;

@interface MMHandoffViewController : NSViewController <NSTabViewDelegate, NSTableViewDataSource, JWCTableViewDataSource, JWCTableViewDelegate, MMHandoffServiceExt>
{
    RBLPopover *_rblPopover;
    RBLPopoverBackgroundView *_rblBackgroundView;
    NSVisualEffectView *_visualEffectView;
    RFOverlayScrollView *_scrollView;
    JWCTableView *_tableView;
    long long _count0;
    long long _count1;
    NSView *_parentView;
}

@property(nonatomic) __weak NSView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) long long count1; // @synthesize count1=_count1;
@property(nonatomic) long long count0; // @synthesize count0=_count0;
@property(retain, nonatomic) JWCTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) RBLPopoverBackgroundView *rblBackgroundView; // @synthesize rblBackgroundView=_rblBackgroundView;
@property(retain, nonatomic) RBLPopover *rblPopover; // @synthesize rblPopover=_rblPopover;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 withMouseEvent:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderViewForSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 hasHeaderViewForSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)isShown;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)setupEffectView;
- (void)setupTableView;
- (void)setupPopoverView;
- (void)dealloc;
- (void)didHandoffRefreshItem:(int)arg1 withIndexSet:(id)arg2;
- (void)doReloadContentView;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

