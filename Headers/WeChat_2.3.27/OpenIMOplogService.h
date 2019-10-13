//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMCGIDelegate.h"
#import "MMService.h"

@class NSLock, NSMutableArray, NSString, OpenIMOplogDB;

@interface OpenIMOplogService : MMService <MMCGIDelegate, MMService>
{
    BOOL _isDoingSync;
    OpenIMOplogDB *_oplogDb;
    NSLock *_lock;
    NSMutableArray *_oplogQueue;
}

@property(retain, nonatomic) NSMutableArray *oplogQueue; // @synthesize oplogQueue=_oplogQueue;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) OpenIMOplogDB *oplogDb; // @synthesize oplogDb=_oplogDb;
@property(nonatomic) BOOL isDoingSync; // @synthesize isDoingSync=_isDoingSync;
- (void).cxx_destruct;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)onGetOpenIMOplogResponse:(id)arg1;
- (unsigned int)sendOpenIMOplogType:(unsigned int)arg1 dtInput:(id)arg2;
- (BOOL)addOpenIMOplogType:(unsigned int)arg1 dtInput:(id)arg2 needSync:(BOOL)arg3;
- (void)startSync;
- (void)checkSyncQueue;
- (void)NeedToSyncOplog;
- (void)deleteOpenIMOplogDB;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

