//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMCGIDelegate.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface OpenIMContactVerifyMgr : NSObject <MMCGIDelegate>
{
    BOOL _isStop;
    unsigned int _opCode;
    unsigned int _mySessionId;
    id <OpenIMContactVerifyMgrDelegate> _delegate;
    CDUnknownBlockType _myVerifyBlock;
    NSMutableDictionary *_tmpWaitingCgiReq;
    NSString *_myKeyName;
    NSRecursiveLock *_myLock;
}

@property(nonatomic) BOOL isStop; // @synthesize isStop=_isStop;
@property(retain, nonatomic) NSRecursiveLock *myLock; // @synthesize myLock=_myLock;
@property(copy, nonatomic) NSString *myKeyName; // @synthesize myKeyName=_myKeyName;
@property(nonatomic) unsigned int mySessionId; // @synthesize mySessionId=_mySessionId;
@property(copy, nonatomic) NSMutableDictionary *tmpWaitingCgiReq; // @synthesize tmpWaitingCgiReq=_tmpWaitingCgiReq;
@property(nonatomic) unsigned int opCode; // @synthesize opCode=_opCode;
@property(copy, nonatomic) CDUnknownBlockType myVerifyBlock; // @synthesize myVerifyBlock=_myVerifyBlock;
@property(nonatomic) __weak id <OpenIMContactVerifyMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)onGetOpenIMContactSuccess:(id)arg1;
- (void)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)stop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

