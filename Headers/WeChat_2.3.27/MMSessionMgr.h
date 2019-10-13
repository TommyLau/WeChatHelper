//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IChatSyncMgrExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "IMessageExt.h"
#import "MMService.h"
#import "SyncExt.h"

@class MMSessionSortLogic, MMSessionStorage, MMTimer, NSMutableArray, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface MMSessionMgr : MMService <IGroupMgrExt, SyncExt, IMessageExt, IContactMgrExt, IChatSyncMgrExt, MMService>
{
    BOOL _m_hasClearData;
    unsigned int _m_totalUnReadCount;
    unsigned int _m_maxMsgCreateTime;
    NSString *_m_currentSessionName;
    NSMutableArray *_m_arrSession;
    MMSessionStorage *_m_storage;
    MMSessionSortLogic *_m_sortLogic;
    NSRecursiveLock *_m_arrSessionLock;
    MMTimer *_updateTimer;
    NSObject<OS_dispatch_queue> *_updateQueue;
}

+ (void)deleteSessionDatabase;
+ (BOOL)savesSessionsToDisk;
+ (void)setSavesSessionsToDisk:(BOOL)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain, nonatomic) MMTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSRecursiveLock *m_arrSessionLock; // @synthesize m_arrSessionLock=_m_arrSessionLock;
@property BOOL m_hasClearData; // @synthesize m_hasClearData=_m_hasClearData;
@property(retain, nonatomic) MMSessionSortLogic *m_sortLogic; // @synthesize m_sortLogic=_m_sortLogic;
@property(retain, nonatomic) MMSessionStorage *m_storage; // @synthesize m_storage=_m_storage;
@property(retain, nonatomic) NSMutableArray *m_arrSession; // @synthesize m_arrSession=_m_arrSession;
@property unsigned int m_maxMsgCreateTime; // @synthesize m_maxMsgCreateTime=_m_maxMsgCreateTime;
@property unsigned int m_totalUnReadCount; // @synthesize m_totalUnReadCount=_m_totalUnReadCount;
@property(retain) NSString *m_currentSessionName; // @synthesize m_currentSessionName=_m_currentSessionName;
- (void).cxx_destruct;
- (void)onInitFinish;
- (void)chatDelete;
- (void)chatMuteOrUnmute;
- (void)chatStickyOrUnsticky;
- (void)onDeleteContacts:(id)arg1;
- (unsigned int)GenSendMsgTime;
- (void)processSessionWithUserName:(id)arg1 isMuted:(BOOL)arg2 syncToServer:(BOOL)arg3;
- (void)unmuteSessionByUserName:(id)arg1 syncToServer:(BOOL)arg2;
- (void)unmuteSessionByUserName:(id)arg1;
- (void)muteSessionByUserName:(id)arg1 syncToServer:(BOOL)arg2;
- (void)muteSessionByUserName:(id)arg1;
- (void)processSessionWithUserName:(id)arg1 isTop:(BOOL)arg2 syncToServer:(BOOL)arg3;
- (void)topDraftSessionTemporarilyByUserName:(id)arg1;
- (BOOL)isTopSessionCountExceed;
- (void)untopSessionByUserName:(id)arg1 syncToServer:(BOOL)arg2;
- (void)untopSessionByUserName:(id)arg1;
- (void)topSessionByUserName:(id)arg1 syncToServer:(BOOL)arg2;
- (void)topSessionByUserName:(id)arg1;
- (void)handleChatList:(id)arg1 source:(int)arg2;
- (void)receiveChatListFromServer:(id)arg1;
- (void)receiveChatListFromPhone:(id)arg1;
- (void)createNewSessionWithUserName:(id)arg1;
- (unsigned int)getTotalUnreadCount;
- (void)markSessionAsReadWithUserName:(id)arg1;
- (void)addOrModifySessionArray:(id)arg1;
- (void)processAddOrModifySessionArray:(id)arg1;
- (void)addOrModifySession:(id)arg1;
- (void)processAddOrModifySession:(id)arg1;
- (id)getTopNSession:(unsigned long long)arg1;
- (id)getAllGroupSessionContact;
- (id)getNextUnreadSessionWithCurIndex:(unsigned long long)arg1;
- (id)getFirstUnreadSession;
- (long long)getFirstUntopSessionIndex;
- (BOOL)ignoreMutedChatsWhileAutoScroll;
- (id)getSessionByUserName:(id)arg1;
- (id)getSessionAtIndex:(unsigned long long)arg1;
- (long long)getSessionIndexByUserName:(id)arg1;
- (unsigned long long)getSessionCount;
- (id)getAllSessions;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)onModifyContacts:(id)arg1;
- (void)onUnReadCountChange:(id)arg1;
- (void)onGetSessionListFromStatusNotify:(id)arg1;
- (void)onEnterSession:(id)arg1;
- (void)onMsgDeletedForSession:(id)arg1;
- (void)onModMsg:(id)arg1 msgData:(id)arg2;
- (void)onChatSyncMsgs:(id)arg1 msgList:(id)arg2;
- (void)onAddMsgListForSession:(id)arg1;
- (void)processOnModifyContact:(id)arg1;
- (void)processOnSyncSessionList:(id)arg1 source:(int)arg2;
- (void)processOnEnterSession:(id)arg1 isFromLocal:(BOOL)arg2;
- (void)processOnMsgDeleted:(id)arg1;
- (BOOL)isVoiceMessagePlayed:(id)arg1;
- (void)processOnChatSyncMsgs:(id)arg1 msgList:(id)arg2;
- (void)processOnModMsg:(id)arg1 msgData:(id)arg2;
- (BOOL)isNeedCallNewMsgArrival:(id)arg1;
- (void)onChatSyncNeedAddSession:(id)arg1;
- (void)onModMsgNeedAddSession:(id)arg1;
- (void)processOnAddMsgListForSession:(id)arg1;
- (void)checkUpdate;
- (void)stopUpdateTimer;
- (void)updateGroupChatSessionIfNeeded;
- (void)doRecoverSessionList;
- (void)recoverSessionListFromLocalMsg;
- (id)genInfo:(id)arg1 withLastMsg:(id)arg2;
- (unsigned int)getMaxEnterTime;
- (void)updateMaxMsgCreateTime;
- (unsigned int)sumUnreadCount;
- (void)pushFrontSessionInfo:(id)arg1;
- (void)FFDataSvrMgrSvrFavZZ;
- (void)syncSessionOrder:(id)arg1;
- (void)removeSessionInfo:(id)arg1;
- (void)updateSessionInfo:(id)arg1;
- (void)addOrUpdateSessionInfo:(id)arg1 isNew:(char *)arg2;
- (long long)indexInSessionArrayWithUserName:(id)arg1;
- (id)sessionInfoByUserName:(id)arg1;
- (id)sessionInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)sessionArraryCount;
- (void)resetSessionArray;
- (void)storageDeleteBrandSessionInfo:(id)arg1;
- (void)storageSaveBrandSessionInfos:(id)arg1;
- (void)storageDeleteSessionInfo:(id)arg1;
- (void)storageSaveSessionInfos:(id)arg1;
- (void)storageUninit;
- (void)storageInit;
- (void)notifyUnreadCount;
- (void)notifyIfUnreadCountChange;
- (void)countUnreadCount;
- (id)getSessionContact:(id)arg1;
- (void)removeSessionOfUser:(id)arg1 isDelMsg:(BOOL)arg2;
- (void)deleteMessage:(id)arg1;
- (void)changeSessionUnreadCountWithUserName:(id)arg1 to:(unsigned int)arg2;
- (BOOL)isSessionHandled:(id)arg1;
- (id)filterValidSyncGroupChat:(id)arg1;
- (BOOL)isValidSyncSession:(id)arg1;
- (id)genInfoOnEnter:(id)arg1 enterTime:(unsigned int)arg2;
- (id)genInfoOnSyncList:(id)arg1;
- (id)genInfoFromOld:(id)arg1;
- (id)genInfo:(id)arg1 withAddMsg:(id)arg2;
- (id)genSessionInfoByContact:(id)arg1;
- (void)loadExtendedMsgData;
- (void)loadBrandSessionData;
- (void)loadSessionData;
- (void)loadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

