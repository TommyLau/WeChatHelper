//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSData, NSRecursiveLock, NSString;

@interface SyncStorage : MMService <MMService>
{
    NSData *m_syncBuffer;
    NSString *m_syncBufferPath;
    NSRecursiveLock *m_lock;
    BOOL _m_hasClearData;
}

+ (void)DeleteSyncBufferFile;
+ (id)mergeSyncBuffer:(id)arg1 withSvrBuffer:(id)arg2;
+ (id)SyncBufferToString:(id)arg1;
+ (id)syncKeyToString:(id)arg1;
+ (id)mergeLocalKey:(id)arg1 withSvrKey:(id)arg2;
@property BOOL m_hasClearData; // @synthesize m_hasClearData=_m_hasClearData;
- (void).cxx_destruct;
- (id)GetSyncBuffer;
- (void)MergeSyncBuffer:(id)arg1;
- (void)saveSyncBuffer;
- (void)loadSyncBuffer;
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
