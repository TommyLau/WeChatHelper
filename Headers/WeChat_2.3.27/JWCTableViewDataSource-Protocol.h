//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSTableView, NSView;

@protocol JWCTableViewDataSource <NSObject>
- (long long)numberOfSectionsInTableView:(NSTableView *)arg1;
- (long long)tableView:(NSTableView *)arg1 numberOfRowsInSection:(long long)arg2;

@optional
- (NSView *)tableView:(NSTableView *)arg1 viewForIndexPath:(NSIndexPath *)arg2;
- (NSView *)tableView:(NSTableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(NSTableView *)arg1 heightForHeaderViewForSection:(long long)arg2;
- (double)tableView:(NSTableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 hasHeaderViewForSection:(long long)arg2;
@end

