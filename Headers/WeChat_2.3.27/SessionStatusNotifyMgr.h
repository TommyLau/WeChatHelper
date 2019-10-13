//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMConfigMgrExt.h"
#import "MMService.h"

@class MMTimer, NSString;

@interface SessionStatusNotifyMgr : MMService <MMConfigMgrExt, MMService>
{
    unsigned long long _m_readNotifyInterval;
    MMTimer *_m_readNotifyTimer;
}

@property(retain, nonatomic) MMTimer *m_readNotifyTimer; // @synthesize m_readNotifyTimer=_m_readNotifyTimer;
@property(nonatomic) unsigned long long m_readNotifyInterval; // @synthesize m_readNotifyInterval=_m_readNotifyInterval;
- (void).cxx_destruct;
- (void)OnMMConfigUpdated;
- (void)LoadConfigData;
- (void)onNotifyReadSession:(id)arg1;
- (void)startReadNotifyTimer:(id)arg1;
- (void)stopReadNotifyTimer;
- (void)ReadSession:(id)arg1;
- (void)QuitSession:(id)arg1;
- (void)EnterSession:(id)arg1;
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

