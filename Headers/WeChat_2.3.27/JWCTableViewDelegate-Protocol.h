//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSIndexPath, NSTableRowView, NSTableView;

@protocol JWCTableViewDelegate <NSObject>

@optional
- (NSTableRowView *)tableView:(NSTableView *)arg1 rowViewForRow:(long long)arg2;
- (void)tableView:(NSTableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2 withMouseEvent:(NSEvent *)arg3;
- (void)tableView:(NSTableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2 withKeyEvent:(NSEvent *)arg3;
- (BOOL)tableView:(NSTableView *)arg1 shouldSelectSection:(long long)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldSelectRowAtIndexPath:(NSIndexPath *)arg2;
@end
