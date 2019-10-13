//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMTimer, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMCacheManagerService : MMService <MMService>
{
    NSMutableDictionary *_memoryCacheQueue;
    NSMutableDictionary *_diskCacheQueue;
    NSRecursiveLock *_lock;
    MMTimer *_LogCurrentSysMemoryTimer;
}

@property(retain, nonatomic) MMTimer *LogCurrentSysMemoryTimer; // @synthesize LogCurrentSysMemoryTimer=_LogCurrentSysMemoryTimer;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *diskCacheQueue; // @synthesize diskCacheQueue=_diskCacheQueue;
@property(retain, nonatomic) NSMutableDictionary *memoryCacheQueue; // @synthesize memoryCacheQueue=_memoryCacheQueue;
- (void).cxx_destruct;
- (void)uploadCacheLog;
- (id)detailInfo;
- (void)removeObject:(id)arg1;
- (void)clearAllCache;
- (id)getCurrentSysMemory;
- (void)startLogCurrentSysMemory;
- (void)dealloc;
- (id)createWithName:(id)arg1 path:(id)arg2;
- (id)createWithPath:(id)arg1;
- (id)createWithName:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
