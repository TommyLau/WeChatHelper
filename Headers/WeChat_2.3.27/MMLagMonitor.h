//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSRecursiveLock;

@interface MMLagMonitor : NSObject
{
    NSObject<OS_dispatch_semaphore> *m_semaphore;
    BOOL m_bMonitoring;
    BOOL m_bPhaseReceiving;
    BOOL m_bModeReceiving;
    unsigned long long m_uiDepth;
    unsigned long long m_uiFullDepth;
    unsigned long long m_uiRunLoopDepth;
    NSMutableDictionary *m_dictObervers;
    NSRecursiveLock *m_Lock;
    unsigned int m_uiShortLagTimecostMs;
    unsigned int m_uiLongLagTimecostMs;
    unsigned int m_uiSameLagDumpIntervalMs;
    unsigned int m_uiDifferentLagDumpIntervalMs;
    unsigned int m_uiOtherthreadsLagLogIntervalMs;
    unsigned int m_bMonitorShouldNotStart;
    unsigned int m_backtraceReportLimit;
    unsigned int m_uiLogBackStaceCount;
    long long m_uiLogBackStaceTime;
    unsigned int m_uiSignalTimeoutCnt;
    long long m_iLastSignalTime;
    long long m_iLastWaitTime;
    long long m_iLastDumpTimeMs;
    unsigned long long m_uiLastDumpHash;
    long long m_iLastLogTimeMs;
    unsigned short m_iDumpIntervalFactor;
    CDUnknownBlockType _dumpLagStackCallBack;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType dumpLagStackCallBack; // @synthesize dumpLagStackCallBack=_dumpLagStackCallBack;
- (void).cxx_destruct;
- (id)getBackStracesForHighCpuThreads;
- (void)checkCPUUsage;
- (void)checkIfNeedDumpStack:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
- (BOOL)isAccurateLagStack:(id)arg1;
- (void)LoadABTestParameters;
- (void)stop;
- (void)start;
- (id)init;

@end

