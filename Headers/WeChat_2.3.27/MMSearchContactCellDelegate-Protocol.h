//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSearchContactTableCellView, WCContactData;

@protocol MMSearchContactCellDelegate <NSObject>

@optional
- (BOOL)cellView:(MMSearchContactTableCellView *)arg1 isValidOperation:(id <NSDraggingInfo>)arg2 withContact:(WCContactData *)arg3;
- (void)cellView:(MMSearchContactTableCellView *)arg1 dragOperation:(id <NSDraggingInfo>)arg2 withContact:(WCContactData *)arg3;
@end

