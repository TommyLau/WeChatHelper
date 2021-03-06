//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt.h"
#import "BakChatMsgDownloadTaskDelegate.h"
#import "IMessageExt.h"
#import "MMService.h"
#import "SyncExt.h"

@class FIFOQueue, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface MMChatSyncMgr : MMService <IMessageExt, BakChatMsgDownloadTaskDelegate, SyncExt, AccountServiceExt, MMService>
{
    FIFOQueue *m_downloadQueue;
    NSMutableDictionary *m_dictDownloadTask;
    NSRecursiveLock *m_oLockForDictDownloadTask;
    NSMutableArray *m_validSessions;
    NSRecursiveLock *m_lockForValidSession;
    NSObject<OS_dispatch_queue> *m_serialQueue;
    BOOL isSerialQueueSuspended;
    NSRecursiveLock *m_oLockForSerialQueue;
    BOOL isNeedCloseSync;
    BOOL m_bDidSyncSessionOrder;
    unsigned int m_ulChatSyncStarttime;
    unsigned int m_uChatSyncTimeCost;
    BOOL m_bDidGetNewXml;
    BOOL m_bDidReceiveData;
    BOOL m_bDidSyncFinish;
    int m_syncFailReason;
    BOOL m_bDidReport;
    BOOL isSendingNewXml;
    NSMutableArray *msgGapList;
    NSObject<OS_dispatch_queue> *m_newXmlQueue;
    BOOL hasRecvAfterLogin;
    unsigned int getmoreOnceLimit;
    long long retryCount;
    BOOL _supportAfterSleep;
    BOOL _supportGetMore;
}

@property BOOL supportGetMore; // @synthesize supportGetMore=_supportGetMore;
@property BOOL supportAfterSleep; // @synthesize supportAfterSleep=_supportAfterSleep;
- (void).cxx_destruct;
- (BOOL)shouldOpenGetMore;
- (unsigned int)getMoreOnceLimit;
- (unsigned int)chatSyncMsgValidTime;
- (unsigned int)chatsSyncTimeout;
- (unsigned int)syncMsgTimeMaxDiff;
- (BOOL)shouldOpenChatsSync;
- (int)authorDeviceType;
- (void)doReport;
- (void)addValidSession:(id)arg1;
- (BOOL)isMsgGapInQueue:(id)arg1;
- (void)checkNewXmlQueue;
- (void)getMoreMsgFromPhoneWith:(id)arg1;
- (void)afterSleepGetMsgFromPhone;
- (void)resumeSerialQueue;
- (void)onSyncFail;
- (void)onSyncSuccess;
- (void)onInitFinish;
- (id)_parseChatSyncMsg:(id)arg1;
- (BOOL)isInDownloadingQueue:(id)arg1;
- (void)checkDownloadQueue;
- (void)onBakChatMsgDownloadFinishWithMsgData:(id)arg1 msgGap:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onChatSyncMsgSendFail:(id)arg1;
- (void)onGetSessionListFromSyncCGI:(id)arg1;
- (void)onRecvChatSyncMsg:(id)arg1;
- (void)FFAddRecvFavZZ:(BOOL)arg1;
- (void)onServiceDidWake;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

