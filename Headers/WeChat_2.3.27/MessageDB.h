//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, TSDictionary, WCTDatabase;

@interface MessageDB : NSObject
{
    WCTDatabase *m_db;
    NSString *m_nsIdentifier;
    NSRecursiveLock *m_oLock;
    NSMutableDictionary *m_dictCreateTable;
    NSMutableDictionary *m_dictMsgDeletionTable;
    TSDictionary *m_dictUnreadcount;
}

+ (void)RemoveMsgDBFile:(id)arg1;
@property(retain, nonatomic) NSString *dbIdentifier; // @synthesize dbIdentifier=m_nsIdentifier;
- (void).cxx_destruct;
- (id)currentDB;
- (id)getMsgDeletion:(id)arg1 mesSvrId:(long long)arg2;
- (id)getLastMsgDeletion:(id)arg1;
- (BOOL)deleteAllMMsgDeletion:(id)arg1;
- (unsigned int)addNewMsgDeletionToDB:(id)arg1 chatName:(id)arg2;
- (BOOL)createMsgDeletionTable:(id)arg1;
- (id)getMsgDeletionTableName:(id)arg1;
- (id)GetMsgList:(id)arg1 mesLocalIDs:(id)arg2;
- (id)getMaxLocalIdMsg:(id)arg1;
- (id)searchWithKeyword:(id)arg1 chatName:(id)arg2 minMesLocalID:(unsigned int)arg3 limitCount:(unsigned int)arg4;
- (void)handleLoadedMsg:(id)arg1 chatName:(id)arg2;
- (void)handleMsgListFromDB:(id)arg1 chatName:(id)arg2;
- (BOOL)createMsgTable:(id)arg1;
- (id)getMsgTableName:(id)arg1;
- (void)close;
- (void)closeDBBeforeInit;
- (void)backupDB;
- (unsigned char)initMsgDB:(BOOL)arg1;
- (id)getUnReadInChat:(id)arg1 Limit:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4;
- (BOOL)clearUnRead:(unsigned int)arg1 ToCreateTime:(unsigned int)arg2 chatName:(id)arg3;
- (BOOL)clearUnReadForSync:(unsigned int)arg1 chatName:(id)arg2;
- (unsigned int)getUnReadCount:(id)arg1;
- (BOOL)deleteAllMsgInChat:(id)arg1;
- (BOOL)deleteRowInChatWithLocalId:(unsigned int)arg1 svrId:(unsigned long long)arg2 chatName:(id)arg3;
- (BOOL)updateCreateTimeWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateImageSizeWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateUploadAndDownloadStatusInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateTranslateStatusInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateVoiceTextInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateVideoInformationInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)updateFileInformationInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (BOOL)modifyMsgInDB:(id)arg1 chatName:(id)arg2;
- (BOOL)modifyMsgFieldInDB:(id)arg1 chatName:(id)arg2 bitSet:(unsigned int)arg3;
- (unsigned int)innerAddNewMsgToDB:(id)arg1 chatName:(id)arg2 isAutoIncrement:(BOOL)arg3;
- (unsigned int)addNewMsgToDB:(id)arg1 chatName:(id)arg2 shouldAutoIncreaseLocalID:(BOOL)arg3;
- (unsigned int)addNewMsgToDB:(id)arg1 chatName:(id)arg2;
- (id)getAllMessageWithChatName:(id)arg1 messageType:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)GetMsgListWithChatName:(id)arg1 minCreateTime:(unsigned int)arg2 limitCnt:(unsigned int)arg3;
- (id)getMsgListStartWithLocalId:(unsigned int)arg1 limitCnt:(unsigned int)arg2 chatName:(id)arg3;
- (id)GetMsgList:(id)arg1 minCreateTime:(unsigned int)arg2 svrId:(unsigned long long)arg3 limitCnt:(unsigned int)arg4;
- (id)getMsgList:(unsigned int)arg1 limitCnt:(unsigned int)arg2 chatName:(id)arg3 messageTypes:(id)arg4;
- (id)getLastReadMsg:(id)arg1;
- (id)getFirstUnreadMsg:(id)arg1;
- (id)getLastMsg:(id)arg1;
- (BOOL)isSvrIdExists:(unsigned long long)arg1 chatName:(id)arg2;
- (id)getMsgDataFromDB:(unsigned int)arg1 svrId:(unsigned long long)arg2 chatName:(id)arg3;
- (unsigned int)convertToLocalCreateTime:(id)arg1 createTime:(unsigned int)arg2;
- (BOOL)hasMsgWithChat:(id)arg1;
- (BOOL)RollBackTransaction;
- (BOOL)CommitTransaction;
- (BOOL)BeginTransaction;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 saveToDisk:(BOOL)arg2;
- (id)GetImgOrVideoLastMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgOrVideoNextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (const list_02de7622 *)orderOfDescCreateTimeAndMsgLocalId;
- (const list_02de7622 *)orderOfAscCreateTimeAndMsgLocalId;

@end

