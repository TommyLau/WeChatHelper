//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMCGIDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface InitCGI : NSObject <MMCGIDelegate>
{
    BOOL m_isDoingInit;
    BOOL m_isStop;
    NSObject<OS_dispatch_queue> *m_worker;
    unsigned int m_sessionID;
    id <InitCGIDelegate> _delegate;
}

@property(nonatomic) id <InitCGIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callInitFinish;
- (void)callInitProcessed:(unsigned int)arg1;
- (void)callInitFail;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)handleInitResult:(id)arg1;
- (void)startInitWithCurSyncBuffer:(id)arg1 maxSyncBuffer:(id)arg2;
- (void)StartInitNoSyncBuffer;
- (void)StartInit;
- (void)StopInit;
- (void)Stop;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

