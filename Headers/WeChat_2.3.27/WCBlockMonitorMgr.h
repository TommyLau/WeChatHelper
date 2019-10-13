//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSApplicationEvent, NSObject<OS_dispatch_queue>, NSString, NSThread, WCBlockMonitorConfigHandler, WCCPUHandler, WCMainThreadHandler;

@interface WCBlockMonitorMgr : NSObject
{
    NSThread *m_monitorThread;
    BOOL m_bStop;
    unsigned long long m_nIntervalTime;
    unsigned long long m_nLastTimeInterval;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> m_vecLastMainThreadCallStack;
    unsigned long long m_lastMainThreadStackCount;
    unsigned long long m_blockDiffTime;
    unsigned int m_firstSleepTime;
    NSString *m_potenHandledLagFile;
    WCMainThreadHandler *m_pointMainThreadHandler;
    BOOL m_bInSuspend;
    struct __CFRunLoopObserver *m_runLoopBeginObserver;
    struct __CFRunLoopObserver *m_runLoopEndObserver;
    struct __CFRunLoopObserver *m_initializationBeginRunloopObserver;
    struct __CFRunLoopObserver *m_initializationEndRunloopObserver;
    NSObject<OS_dispatch_queue> *m_fpsDumpQueue;
    WCCPUHandler *m_cpuHandler;
    BOOL m_trackCPU;
    id <WCBlockMonitorDelegate> _delegate;
    NSString *_currentFPSTraceScene;
    WCBlockMonitorConfigHandler *_monitorConfigHandler;
    NSApplicationEvent *_eventHandler;
}

+ (unsigned long long)diffTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
+ (void)signalEventEnd;
+ (void)signalEventStart;
+ (id)shareInstance;
@property(retain, nonatomic) NSApplicationEvent *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) WCBlockMonitorConfigHandler *monitorConfigHandler; // @synthesize monitorConfigHandler=_monitorConfigHandler;
@property(copy, nonatomic) NSString *currentFPSTraceScene; // @synthesize currentFPSTraceScene=_currentFPSTraceScene;
@property(nonatomic) __weak id <WCBlockMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleFrameDropTooMuch;
- (BOOL)isBackgroundCPUTooSmall;
- (void)stopTrackCPU;
- (void)startTrackCPU;
- (void)onFrameDroppedTooMuch;
- (void)clearDumpInBackgroundLaunch;
- (void)clearLaunchLagRecord;
- (id)dumpFileWithType:(unsigned long long)arg1;
- (void)removeRunLoopObserver;
- (void)addRunLoopObserver;
- (void)resetStatus;
- (BOOL)needFilter;
- (unsigned long long)check;
- (void)threadProc;
- (void)addMonitorThread;
- (void)setPerStackInterval:(unsigned int)arg1;
- (void)setCPUUsagePercent:(float)arg1;
- (void)setRunloopTimeOut:(unsigned int)arg1 andCheckPeriodTime:(unsigned int)arg2;
- (id)getUserInfoForCurrentDumpForDumpType:(unsigned long long)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;
- (void)resetConfiguration:(id)arg1;

@end
