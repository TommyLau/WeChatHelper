//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCBlockMonitorDelegate.h"

@class NSString, WCBlockMonitorConfiguration, WCBlockMonitorMgr;

@interface WCCrashBlockMonitor : NSObject <WCBlockMonitorDelegate>
{
    BOOL _bInstallSuccess;
    NSString *_appVersion;
    NSString *_appShortVersion;
    CDUnknownFunctionPointerType _onHandleSingalCallBack;
    CDUnknownFunctionPointerType _onCrash;
    NSString *_currentFPSTraceScene;
    id <WCCrashBlockMonitorDelegate> _delegate;
    WCBlockMonitorConfiguration *_bmConfiguration;
    WCBlockMonitorMgr *_blockMonitor;
}

@property(retain, nonatomic) WCBlockMonitorMgr *blockMonitor; // @synthesize blockMonitor=_blockMonitor;
@property(nonatomic) BOOL bInstallSuccess; // @synthesize bInstallSuccess=_bInstallSuccess;
@property(retain, nonatomic) WCBlockMonitorConfiguration *bmConfiguration; // @synthesize bmConfiguration=_bmConfiguration;
@property(nonatomic) __weak id <WCCrashBlockMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentFPSTraceScene; // @synthesize currentFPSTraceScene=_currentFPSTraceScene;
@property(nonatomic) CDUnknownFunctionPointerType onCrash; // @synthesize onCrash=_onCrash;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSingalCallBack; // @synthesize onHandleSingalCallBack=_onHandleSingalCallBack;
@property(copy, nonatomic) NSString *appShortVersion; // @synthesize appShortVersion=_appShortVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;
- (id)onBlockMonitor:(id)arg1 getUserInfoForFPSDumpWithDumpType:(unsigned long long)arg2;
- (void)onBlockMonitor:(id)arg1 filter:(unsigned long long)arg2;
- (void)onBlockMonitor:(id)arg1 getDumpFile:(id)arg2 withDumpType:(unsigned long long)arg3;
- (void)onBlockMonitor:(id)arg1 enterNextCheckWithDumpType:(unsigned long long)arg2;
- (void)onBlockMonitor:(id)arg1 beginDump:(unsigned long long)arg2 blockTime:(unsigned long long)arg3;
- (void)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(BOOL)arg3;
- (BOOL)isBackgroundCPUTooSmall;
- (void)stopTrackCPU;
- (void)startTrackCPU;
- (void)handleFrameDropTooMuch;
- (void)resetAppFullVersion:(id)arg1 shortVersion:(id)arg2;
- (void)stopBlockMonitor;
- (void)startBlockMonitor;
- (void)enableBlockMonitor;
- (BOOL)installKSCrash:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
