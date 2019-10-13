//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCTDatabase, WCTTable;

@interface OpenIMOplogDB : NSObject
{
    WCTDatabase *opDB;
    WCTTable *opTable;
}

+ (void)deleteDB;
- (void).cxx_destruct;
- (BOOL)deleteOpenIMOplogs:(id)arg1;
- (id)getOpenIMOplog:(unsigned int)arg1;
- (id)getOpenIMOplogNeedSync:(BOOL)arg1;
- (BOOL)insertOpenIMOplog:(id)arg1;
- (void)dealloc;
- (void)close;
- (void)closeDBBeforeInit;
- (id)init;

@end

