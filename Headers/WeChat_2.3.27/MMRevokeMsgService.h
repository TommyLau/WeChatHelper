//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMRevokeMsgDB, NSString;

@interface MMRevokeMsgService : MMService <MMService>
{
    MMRevokeMsgDB *_db;
}

@property(retain, nonatomic) MMRevokeMsgDB *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (BOOL)isMsgOutOfDate:(id)arg1;
- (BOOL)isRevokeMsgEditable:(id)arg1;
- (void)reEditRevokeMessageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRevokeMsgNode:(id)arg1;
- (void)reloadRevokeMsgNode:(id)arg1;
- (void)addRevokeMessageData:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

