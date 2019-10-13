//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSDictionary, NSString, NSTableView;

@interface MMCacheViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    NSTableView *_contentView;
    NSDictionary *_dataSource;
}

@property(retain, nonatomic) NSDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSTableView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)refreshDataSource;
- (void)setupTableView;
- (void)setupDataSource;
- (void)viewWillAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
