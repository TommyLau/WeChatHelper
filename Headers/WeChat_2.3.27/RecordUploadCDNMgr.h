//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "RecordUploadTaskDelegate.h"

@class MessageData, NSMutableArray, NSRecursiveLock, NSString, RecordUploadTask;

@interface RecordUploadCDNMgr : NSObject <RecordUploadTaskDelegate, ICdnComMgrExt>
{
    RecordUploadTask *m_curUploadTask;
    NSMutableArray *m_arrRecordData;
    NSMutableArray *m_arrCDNUploadInfo;
    NSRecursiveLock *m_oLockForDictDownloadTask;
    id <RecordUploadCDNMgrDelegate> m_delegate;
    MessageData *m_curMsgWrap;
    NSMutableArray *m_arrMsgWrap;
}

@property(retain, nonatomic) NSMutableArray *m_arrMsgWrap; // @synthesize m_arrMsgWrap;
@property(retain, nonatomic) MessageData *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <RecordUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnRecordUploadTaskFinish:(id)arg1;
- (id)findRecordDataInList:(id)arg1 WithLocalDataId:(id)arg2;
- (void)OnRecordUploadTaskFail;
- (void)OnSetCdnDnsInfo;
- (void)HandleSendMsgResp:(id)arg1;
- (void)HandleBatchTransCDNResp:(id)arg1;
- (void)TryNextMsgWrap;
- (void)SendMsgOK:(long long)arg1;
- (void)SendMsgFail;
- (BOOL)SendCurAppMsg;
- (void)RemoveMsgWrap:(id)arg1;
- (void)BatchTransCDNItemForFav;
- (void)BatchTransCDNItemForMsg:(BOOL)arg1;
- (void)AddUploadTaskForDataList:(id)arg1 isFromRecord:(BOOL)arg2;
- (void)UploadRecordData;
- (void)CheckCDNUploadMsgQueue;
- (void)StopCurUpload;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (BOOL)IsRecordMsgUploading:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

