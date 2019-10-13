//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccountServiceExt.h"

@class NSString, WCTDatabase;

@interface MMKeyValueDB : NSObject <AccountServiceExt>
{
    WCTDatabase *m_db;
}

+ (id)getSharedInstance;
- (void).cxx_destruct;
- (void)onUserLogout;
- (BOOL)removeForKey:(id)arg1;
- (BOOL)setValue:(id)arg1 forKey:(id)arg2;
- (id)getValueForKey:(id)arg1;
- (id)getAllKeyValues;
- (id)getKeyValueTable;
- (void)close;
- (void)closeDBBeforeInit;
- (BOOL)createNewDataBase;
- (BOOL)initDataBase;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

