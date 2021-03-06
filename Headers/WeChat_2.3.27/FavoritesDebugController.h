//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSWindowDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface FavoritesDebugController : NSWindowController <NSWindowDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    NSMutableArray *m_dataList;
    MMTableView *_m_tableView;
}

@property(nonatomic) __weak MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
- (void).cxx_destruct;
- (void)reloadData;
- (void)onLoadData;
- (void)asyncLoadData;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)scrollView:(id)arg1 startRefreshSide:(unsigned long long)arg2;
- (void)DeleteRedundantFiles:(id)arg1;
- (void)deleteAllFavItems:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

