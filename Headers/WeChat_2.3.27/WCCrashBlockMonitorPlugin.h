//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MatrixPlugin.h"

@class NSMutableArray, WCCrashBlockMonitor, WCCrashBlockMonitorConfig;

@interface WCCrashBlockMonitorPlugin : MatrixPlugin
{
    WCCrashBlockMonitorConfig *_cbConfig;
    WCCrashBlockMonitor *_cbMonitor;
    NSMutableArray *_uploadingFileIDArray;
}

+ (BOOL)hasCrashReport;
@property(retain, nonatomic) NSMutableArray *uploadingFileIDArray; // @synthesize uploadingFileIDArray=_uploadingFileIDArray;
@property(retain, nonatomic) WCCrashBlockMonitor *cbMonitor; // @synthesize cbMonitor=_cbMonitor;
@property(retain, nonatomic) WCCrashBlockMonitorConfig *cbConfig; // @synthesize cbConfig=_cbConfig;
- (void).cxx_destruct;
- (id)getMatrixIssueFromReportTaskData:(id)arg1 withReportCntLimit:(unsigned long long)arg2 withReportType:(int)arg3 quickUpload:(BOOL)arg4;
- (void)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(BOOL)arg3;
- (BOOL)isBackgroundCPUTooSmall;
- (void)stopTrackCPU;
- (void)startTrackCPU;
- (void)handleFrameDropTooMuch;
- (void)stopBlockMonitor;
- (void)startBlockMonitor;
- (void)handleOOMDumpFile:(id)arg1;
- (void)resetAppFullVersion:(id)arg1 shortVersion:(id)arg2;
- (BOOL)reportIssueCompleteWithIssue:(id)arg1 success:(BOOL)arg2;
- (id)getPluginConfig;
- (id)getTag;
- (void)reportIssue:(id)arg1;
- (void)destroy;
- (void)setupPluginListener:(id)arg1;
- (void)stop;
- (void)start;
- (id)reportTodayOneTypeLagWithlimitUploadConfig:(id)arg1 withLimitReportCountInOneIssue:(unsigned long long)arg2;
- (id)reportTodayOneTypeLagWithlimitUploadConfig:(id)arg1;
- (id)reportTodayOneTypeLag;
- (id)reportOneTypeLag:(unsigned long long)arg1 onDate:(id)arg2 withLimitReportCountInOneIssue:(unsigned long long)arg3;
- (id)reportOneTypeLag:(unsigned long long)arg1 onDate:(id)arg2;
- (id)reportAllLagFileOnDate:(id)arg1 withLimitReportCountInOneIssue:(unsigned long long)arg2;
- (id)reportAllLagFileOnDate:(id)arg1;
- (id)reportAllLagFileWithLimitReportCountInOneIssue:(unsigned long long)arg1;
- (id)reportAllLagFile;
- (id)reportCrash;
- (void)removeReportIDFromUploadingArray:(id)arg1;
- (void)addReportIDToUploadingArray:(id)arg1;
- (BOOL)isFileReportIDUploading:(id)arg1;
- (id)init;

@end

